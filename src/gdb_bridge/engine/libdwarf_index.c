/*
 * libdwarf_index.c — DWARF debug information index implementation
 *
 * Architecture:
 *   - LEB128 decoder: variable-length integer encoding used throughout DWARF
 *   - DIE tree traversal: driven by .debug_abbrev tables, parses attributes on-demand
 *   - .debug_line state machine: maps addresses → source file:line:column
 *
 * All operations are read-only over the mmap'd ELF sections.
 * No dynamic allocation during lookups (except for result strings).
 *
 * Author: @c-master for gdb-bridge
 */
#include "libdwarf_index.h"
#include "libelf_utils.h"

#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* ── Internal handle ── */

struct dwarf_index {
    elf_handle_t    *elf;           /* underlying ELF handle */
    char             error[256];    /* last error */

    /* Cached section data pointers */
    const char      *debug_info;    /* .debug_info raw data */
    size_t           debug_info_size;
    const char      *debug_abbrev;  /* .debug_abbrev raw data */
    size_t           debug_abbrev_size;
    const char      *debug_line;    /* .debug_line raw data */
    size_t           debug_line_size;
    const char      *debug_str;     /* .debug_str raw data */
    size_t           debug_str_size;
    const char      *debug_str_offsets; /* .debug_str_offsets (DWARF 5) */
    size_t           debug_str_offsets_size;
    const char      *debug_line_str;   /* .debug_line_str (DWARF 5) */
    size_t           debug_line_str_size;

    /* Cached CU count */
    uint32_t         cu_count;
    int              valid;
};

/* ── Error handling ── */

static void set_error(dwarf_index_t *idx, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));

static void set_error(dwarf_index_t *idx, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(idx->error, sizeof(idx->error), fmt, ap);
    va_end(ap);
}

/* ── LEB128 decoder ──
 *
 * LEB128 is a variable-length integer encoding used heavily in DWARF.
 * Each byte contributes 7 bits of data; the high bit indicates continuation.
 * Unsigned: stops when high bit is 0.
 * Signed: sign-extends from the last byte's bit 6.
 */

/* Decode unsigned LEB128. Returns bytes consumed, writes value to *out. */
static int decode_uleb128(const char *data, const char *end, uint64_t *out) {
    uint64_t result = 0;
    int shift = 0;
    int bytes = 0;

    while (data + bytes < end) {
        unsigned char byte = (unsigned char)data[bytes];
        bytes++;
        result |= ((uint64_t)(byte & 0x7f)) << shift;
        if ((byte & 0x80) == 0) break;
        shift += 7;
    }
    *out = result;
    return bytes;
}

/* Decode signed LEB128. Returns bytes consumed. */
static int decode_sleb128(const char *data, const char *end, int64_t *out) {
    int64_t result = 0;
    int shift = 0;
    int bytes = 0;
    unsigned char byte;

    while (data + bytes < end) {
        byte = (unsigned char)data[bytes];
        bytes++;
        result |= ((int64_t)(byte & 0x7f)) << shift;
        shift += 7;
        if ((byte & 0x80) == 0) break;
    }
    /* Sign extend if the last byte had bit 6 set */
    if (shift < 64 && (byte & 0x40)) {
        result |= (~0ULL) << shift;
    }
    *out = result;
    return bytes;
}

/* ── Abbreviation table parser ── */

/* Represents one attribute specification in an abbreviation declaration */
typedef struct {
    uint64_t name;   /* DW_AT_* */
    uint64_t form;   /* DW_FORM_* */
} dwarf_attr_spec_t;

/* Represents one abbreviation declaration (DIE schema) */
typedef struct {
    uint64_t            code;       /* abbreviation code (1-based) */
    uint64_t            tag;        /* DW_TAG_* */
    uint8_t             has_children; /* DW_CHILDREN_yes/no */
    dwarf_attr_spec_t   attrs[32];  /* fixed max for simplicity */
    uint8_t             attr_count;
} dwarf_abbrev_decl_t;

/* Parse attributes from .debug_info given an abbrev table entry.
 * Returns bytes consumed from the DIE data.
 * Calls attr_callback(name, form, value_ptr, value_size) for each attribute. */
typedef int (*attr_callback_t)(
    dwarf_index_t *idx,
    uint64_t attr_name,
    uint64_t form,
    const char *value_ptr,
    size_t value_size,
    void *user_data
);

static int parse_die_attrs(
    dwarf_index_t *idx,
    const char *data,
    const char *data_end,
    const dwarf_abbrev_decl_t *abbrev,
    attr_callback_t cb,
    void *user_data)
{
    const char *p = data;
    (void)idx;

    for (uint8_t i = 0; i < abbrev->attr_count; i++) {
        uint64_t form = abbrev->attrs[i].form;
        size_t value_size = 0;
        const char *value_ptr = p;

        switch (form) {
        case DW_FORM_addr:
            value_size = 8;
            break;
        case DW_FORM_data1:
        case DW_FORM_flag:
            value_size = 1;
            break;
        case DW_FORM_data2:
            value_size = 2;
            break;
        case DW_FORM_data4:
        case DW_FORM_ref4:
        case DW_FORM_sec_offset:
        case DW_FORM_strp:
            value_size = 4;
            break;
        case DW_FORM_strx:  /* DWARF 5: ULEB128 index into .debug_str_offsets */
        case DW_FORM_addrx: /* DWARF 5: ULEB128 index into .debug_addr */
            {
                uint64_t dummy;
                int n = decode_uleb128(p, data_end, &dummy);
                if (n <= 0) return -1;
                value_size = (size_t)n;
            }
            break;
        case DW_FORM_line_strp:  /* DWARF 5: 4-byte offset into .debug_line_str */
            value_size = 4;
            break;
        case DW_FORM_data8:
        case DW_FORM_ref8:
        case DW_FORM_ref_addr:
            value_size = 8;
            break;
        case DW_FORM_data16:  /* DWARF 5: 16-byte value */
            value_size = 16;
            break;
        case DW_FORM_string: {
            /* Null-terminated string — scan for terminator */
            const char *s = p;
            while (s < data_end && *s) s++;
            if (s >= data_end) return -1;
            value_size = (size_t)(s - p) + 1;
            break;
        }
        case DW_FORM_flag_present:
            value_size = 0;  /* implicit true, no data */
            value_ptr = NULL;
            break;
        case DW_FORM_udata:
        case DW_FORM_ref_udata: {
            uint64_t dummy;
            int n = decode_uleb128(p, data_end, &dummy);
            if (n <= 0) return -1;
            value_size = (size_t)n;
            break;
        }
        case DW_FORM_sdata: {
            int64_t dummy;
            int n = decode_sleb128(p, data_end, &dummy);
            if (n <= 0) return -1;
            value_size = (size_t)n;
            break;
        }
        case DW_FORM_exprloc: {
            uint64_t len;
            int n = decode_uleb128(p, data_end, &len);
            if (n <= 0) return -1;
            value_size = (size_t)(n + len);
            break;
        }
        default:
            /* Unknown form — skip (safest approach for forward compat) */
            value_size = 0;
            break;
        }

        if (cb) {
            cb(idx, abbrev->attrs[i].name, form, value_ptr, value_size, user_data);
        }

        p += value_size;
        if (p > data_end) return -1;
    }

    return (int)(p - data);
}

/* ── Abbrev table loading ── */

/* Load the abbreviation table for a CU starting at the given offset
 * in .debug_abbrev. Fills in a static array of declarations.
 * Returns the number of declarations loaded. */
static int load_abbrev_table(
    const char *abbrev_data,
    size_t abbrev_size,
    size_t offset,
    dwarf_abbrev_decl_t *decls,
    int max_decls)
{
    const char *p = abbrev_data + offset;
    const char *end = abbrev_data + abbrev_size;
    int count = 0;

    while (p < end && count < max_decls) {
        uint64_t code;
        int n = decode_uleb128(p, end, &code);
        if (n <= 0) break;
        p += n;

        if (code == 0) break;  /* end of table */

        dwarf_abbrev_decl_t *decl = &decls[count];
        decl->code = code;

        n = decode_uleb128(p, end, &decl->tag);
        if (n <= 0) break;
        p += n;

        decl->has_children = (uint8_t)*p++;
        decl->attr_count = 0;

        /* Parse attribute specifications */
        while (p < end && decl->attr_count < 32) {
            uint64_t attr_name, attr_form;
            n = decode_uleb128(p, end, &attr_name);
            if (n <= 0) break;
            p += n;
            n = decode_uleb128(p, end, &attr_form);
            if (n <= 0) break;
            p += n;

            if (attr_name == 0 && attr_form == 0) break;

            decl->attrs[decl->attr_count].name = attr_name;
            decl->attrs[decl->attr_count].form = attr_form;
            decl->attr_count++;
        }
        count++;
    }

    return count;
}

/* ── DIE visitor callback data ── */

typedef struct {
    dwarf_func_t *func_out;
    const char   *target_name;
    int            found;
} func_lookup_ctx_t;

static int find_func_callback(
    dwarf_index_t *idx,
    uint64_t attr_name,
    uint64_t form,
    const char *value_ptr,
    size_t value_size,
    void *user_data)
{
    func_lookup_ctx_t *ctx = (func_lookup_ctx_t *)user_data;
    (void)form;
    (void)idx;

    /* Only process attrs for DIEs where we're actively matching */
    if (!ctx->found) {
        if (attr_name == DW_AT_name && value_ptr && value_size > 1) {
            if (strcmp(value_ptr, ctx->target_name) == 0) {
                ctx->found = 1;
                ctx->func_out->name = value_ptr;
            }
        }
        return 0;
    }

    /* Collect attributes for the matched DIE */
    switch (attr_name) {
    case DW_AT_low_pc:
        if (value_ptr && value_size == 8) {
            memcpy(&ctx->func_out->low_pc, value_ptr, 8);
        }
        break;
    case DW_AT_high_pc:
        if (value_ptr && value_size == 8) {
            memcpy(&ctx->func_out->high_pc, value_ptr, 8);
        }
        break;
    case DW_AT_decl_line:
        if (value_ptr && value_size >= 1) {
            uint64_t line;
            decode_uleb128(value_ptr, value_ptr + value_size, &line);
            ctx->func_out->decl_line = (uint32_t)line;
        }
        break;
    default:
        break;
    }
    return 0;
}

/* ── .debug_line state machine ── */

typedef struct {
    const char *file_names[64];
    uint8_t     file_count;
    uint64_t    address;
    uint32_t    line;
    uint32_t    column;
    uint32_t    file;
    int         is_stmt;
    int         basic_block;
    int         end_sequence;
} line_state_t;

/*
 * Run the .debug_line state machine and find the source location
 * for a given address. This is a simplified implementation that
 * handles DWARF 2/3/4 line number programs.
 */
static int run_line_program(
    dwarf_index_t *idx,
    uint64_t target_addr,
    dwarf_location_t *out)
{
    const char *data = idx->debug_line;
    const char *end = data + idx->debug_line_size;
    const char *p = data;

    if (!data || idx->debug_line_size < 4) return -1;

    /* Parse the line number program header */
    uint32_t unit_length;
    memcpy(&unit_length, p, 4);
    p += 4;
    if (p + unit_length > end) return -1;

    const char *prog_end = p + unit_length;

    uint16_t version;
    memcpy(&version, p, 2);
    p += 2;

    /* prologue_length (DWARF 2) / header_length (DWARF 4+) — both 4 bytes */
    uint32_t prologue_length;
    memcpy(&prologue_length, p, 4);
    p += 4;

    uint8_t min_insn_length = (uint8_t)*p++;
    (void)((version >= 4) ? (uint8_t)*p++ : (uint8_t)1); /* max_ops_per_insn — DWARF4+ */
    uint8_t default_is_stmt = (uint8_t)*p++;
    int8_t line_base = (int8_t)*p++;
    uint8_t line_range = (uint8_t)*p++;
    uint8_t opcode_base = (uint8_t)*p++;

    /* Skip standard opcode lengths */
    p += (size_t)(opcode_base - 1);

    /* Parse include directories (null-terminated strings) */
    while (p < prog_end && *p) {
        while (p < prog_end && *p) p++;
        p++; /* skip null */
    }
    p++; /* skip the terminating null */

    /* Parse file names table */
    line_state_t state;
    memset(&state, 0, sizeof(state));
    state.file_count = 0;

    while (p < prog_end && *p && state.file_count < 64) {
        /* File name */
        state.file_names[state.file_count] = p;
        while (p < prog_end && *p) p++;
        p++; /* null terminator */

        /* Directory index (ULEB128) */
        uint64_t dir_idx;
        p += decode_uleb128(p, prog_end, &dir_idx);

        /* Modification time (ULEB128) */
        uint64_t mtime;
        p += decode_uleb128(p, prog_end, &mtime);

        /* File length (ULEB128) */
        uint64_t flen;
        p += decode_uleb128(p, prog_end, &flen);

        state.file_count++;
    }
    p++; /* skip terminating null byte */

    /* Initialize state machine registers */
    state.address = 0;
    state.line = 1;
    state.column = 0;
    state.file = 1;
    state.is_stmt = default_is_stmt;
    state.basic_block = 0;
    state.end_sequence = 0;

    /* Best match tracking for address lookup */
    dwarf_location_t best;
    memset(&best, 0, sizeof(best));

    while (p < prog_end) {
        uint8_t opcode = (uint8_t)*p++;

        if (opcode == 0) {
            /* Extended opcode */
            uint64_t ext_len;
            int n = decode_uleb128(p, prog_end, &ext_len);
            if (n <= 0) break;
            p += n;
            const char *ext_data = p;
            p += (size_t)ext_len;

            uint8_t ext_op = (uint8_t)*ext_data++;

            switch (ext_op) {
            case DW_LNE_end_sequence:
                state.end_sequence = 1;
                break;
            case DW_LNE_set_address:
                if (ext_len >= 9) {
                    memcpy(&state.address, ext_data, 8);
                }
                break;
            case DW_LNE_define_file:
                /* Skip for now */
                break;
            default:
                break;
            }
        } else if (opcode >= opcode_base) {
            /* Special opcode: (opcode - opcode_base) encodes line and address increment */
            uint8_t adjusted = opcode - opcode_base;
            uint32_t addr_inc = (uint32_t)(adjusted / line_range) * min_insn_length;
            int32_t line_inc = line_base + (int32_t)(adjusted % line_range);

            state.address += addr_inc;
            state.line = (uint32_t)((int32_t)state.line + line_inc);
            state.basic_block = 0;

            /* Check if this maps to or past our target */
            if (state.address <= target_addr && state.file > 0
                && state.file <= state.file_count && !state.end_sequence) {
                best.file = state.file_names[state.file - 1];
                best.line = state.line;
                best.column = state.column;
            }
        } else {
            /* Standard opcode */
            switch (opcode) {
            case DW_LNS_copy:
                if (state.address <= target_addr && state.file > 0
                    && state.file <= state.file_count && !state.end_sequence) {
                    best.file = state.file_names[state.file - 1];
                    best.line = state.line;
                    best.column = state.column;
                }
                state.basic_block = 0;
                break;
            case DW_LNS_advance_pc: {
                uint64_t inc;
                p += decode_uleb128(p, prog_end, &inc);
                state.address += inc * min_insn_length;
                break;
            }
            case DW_LNS_advance_line: {
                int64_t inc;
                p += decode_sleb128(p, prog_end, &inc);
                state.line = (uint32_t)((int32_t)state.line + (int32_t)inc);
                break;
            }
            case DW_LNS_set_file: {
                uint64_t f;
                p += decode_uleb128(p, prog_end, &f);
                state.file = (uint32_t)f;
                break;
            }
            case DW_LNS_set_column: {
                uint64_t col;
                p += decode_uleb128(p, prog_end, &col);
                state.column = (uint32_t)col;
                break;
            }
            case DW_LNS_negate_stmt:
                state.is_stmt = !state.is_stmt;
                break;
            case DW_LNS_set_basic_block:
                state.basic_block = 1;
                break;
            case DW_LNS_const_add_pc:
                state.address += ((255 - opcode_base) / line_range) * min_insn_length;
                break;
            case DW_LNS_fixed_advance_pc: {
                uint16_t inc;
                memcpy(&inc, p, 2);
                p += 2;
                state.address += inc;
                break;
            }
            default:
                break;
            }
        }

        if (state.end_sequence) {
            /* Reset state machine */
            state.address = 0;
            state.line = 1;
            state.column = 0;
            state.file = 1;
            state.is_stmt = default_is_stmt;
            state.basic_block = 0;
            state.end_sequence = 0;
        }
    }

    if (best.file) {
        *out = best;
        return 0;
    }
    return -1;
}

/* ── Core: iterate all DIEs ── */

/*
 * Walk the DIE tree for one compilation unit, calling the visitor on each DIE.
 * Handles child/sibling navigation using the abbreviation table.
 */
static int walk_die_tree(
    dwarf_index_t *idx,
    const char **p_ptr,
    const char *cu_end,
    dwarf_abbrev_decl_t *abbrev_table,
    int abbrev_count,
    attr_callback_t cb,
    void *user_data,
    int depth)
{
    const char *p = *p_ptr;
    (void)depth;

    while (p < cu_end) {
        /* Read abbreviation code (ULEB128) */
        uint64_t abbr_code;
        int n = decode_uleb128(p, cu_end, &abbr_code);
        if (n <= 0) return -1;
        p += n;

        if (abbr_code == 0) {
            /* Null entry — end of sibling chain, go up one level */
            *p_ptr = p;
            return 0;
        }

        /* Find the abbreviation declaration */
        dwarf_abbrev_decl_t *abbrev = NULL;
        for (int i = 0; i < abbrev_count; i++) {
            if (abbrev_table[i].code == abbr_code) {
                abbrev = &abbrev_table[i];
                break;
            }
        }
        if (!abbrev) {
            *p_ptr = p;
            return -2;  /* unknown abbrev code */
        }

        /* Parse attributes of this DIE, invoking callback */
        int consumed = parse_die_attrs(idx, p, cu_end, abbrev, cb, user_data);
        if (consumed < 0) {
            *p_ptr = p;
            return -3;
        }
        p += consumed;

        /* Check if callback found what it was looking for */
        {
            func_lookup_ctx_t *fctx = (func_lookup_ctx_t *)user_data;
            if (fctx->found) {
                *p_ptr = p;
                return 1;  /* signal: found, stop walk */
            }
        }

        /* If this DIE has children, recurse into them */
        if (abbrev->has_children) {
            int ret = walk_die_tree(idx, &p, cu_end, abbrev_table,
                                    abbrev_count, cb, user_data, depth + 1);
            if (ret > 0) {
                *p_ptr = p;
                return ret;  /* propagate early-termination signal */
            }
            if (ret < 0) {
                *p_ptr = p;
                return ret;
            }
        }
    }

    *p_ptr = p;
    return 0;
}

/* ── Public API implementation ── */

dwarf_index_t *dwarf_index_open(elf_handle_t *elf) {
    if (!elf || !elf_is_valid(elf)) return NULL;

    dwarf_index_t *idx = calloc(1, sizeof(dwarf_index_t));
    if (!idx) return NULL;

    idx->elf = elf;

#define LOAD_SECTION(name, field, size_field) do { \
    const Elf64_Shdr *shdr = elf_section_by_name(elf, name); \
    if (shdr) { \
        idx->field = (const char *)elf_section_data(elf, shdr); \
        idx->size_field = (size_t)(shdr ? shdr->sh_size : 0); \
    } \
} while(0)

    LOAD_SECTION(".debug_info",         debug_info,         debug_info_size);
    LOAD_SECTION(".debug_abbrev",       debug_abbrev,       debug_abbrev_size);
    LOAD_SECTION(".debug_line",         debug_line,         debug_line_size);
    LOAD_SECTION(".debug_str",          debug_str,          debug_str_size);
    LOAD_SECTION(".debug_str_offsets",  debug_str_offsets,  debug_str_offsets_size);
    LOAD_SECTION(".debug_line_str",     debug_line_str,     debug_line_str_size);

#undef LOAD_SECTION

    if (!idx->debug_info || idx->debug_info_size == 0) {
        set_error(idx, "no .debug_info section found");
        return idx;
    }

    /* Count compilation units */
    const char *p = idx->debug_info;
    const char *end = p + idx->debug_info_size;

    while (p + 4 <= end) {
        uint32_t cu_length;
        memcpy(&cu_length, p, 4);
        if (cu_length == 0 || cu_length == 0xffffffff) break;
        if (p + 4 + cu_length > end) break;
        idx->cu_count++;
        p += 4 + cu_length;
    }

    idx->valid = 1;
    return idx;
}

void dwarf_index_close(dwarf_index_t *idx) {
    if (idx) free(idx);
}

const char *dwarf_error(dwarf_index_t *idx) {
    if (!idx) return "null index";
    return idx->error[0] ? idx->error : NULL;
}

uint32_t dwarf_cu_count(dwarf_index_t *idx) {
    if (!idx || !idx->valid) return 0;
    return idx->cu_count;
}

int dwarf_lookup_function(dwarf_index_t *idx, const char *name, dwarf_func_t *out) {
    if (!idx || !idx->valid || !name || !out) return -2;

    memset(out, 0, sizeof(*out));
    func_lookup_ctx_t ctx = { .func_out = out, .target_name = name, .found = 0 };

    const char *p = idx->debug_info;
    const char *end = p + idx->debug_info_size;

    while (p + 12 <= end) {
        /* Read CU header:
         * DWARF 4: length(4) + version=4(2) + abbrev_offset(4) + addr_size(1) = 11
         * DWARF 5: length(4) + version=5(2) + unit_type(1) + addr_size(1) + abbrev_offset(4) = 12
         */
        uint32_t cu_length;
        memcpy(&cu_length, p, 4);
        if (cu_length == 0 || cu_length == 0xffffffff) break;
        if (p + 4 + cu_length > end) break;

        const char *cu_end = p + 4 + cu_length;
        p += 4;  /* past length */

        uint16_t version;
        memcpy(&version, p, 2);
        p += 2;

        uint32_t abbrev_offset;
        uint8_t addr_size;

        if (version >= 5) {
            /* DWARF 5: unit_type(1) + address_size(1) + abbrev_offset(4) */
            p++;  /* skip unit_type */
            addr_size = (uint8_t)*p++;
            memcpy(&abbrev_offset, p, 4);
            p += 4;
        } else {
            /* DWARF 2-4: abbrev_offset(4) + address_size(1) */
            memcpy(&abbrev_offset, p, 4);
            p += 4;
            addr_size = (uint8_t)*p++;
        }

        (void)version;
        (void)addr_size;

        /* Load abbreviation table for this CU */
        dwarf_abbrev_decl_t abbrev_table[64];
        int abbrev_count = load_abbrev_table(idx->debug_abbrev, idx->debug_abbrev_size,
                                              abbrev_offset, abbrev_table, 64);
        if (abbrev_count <= 0) {
            p = cu_end;
            continue;
        }

        /* Walk the DIE tree */
        int ret = walk_die_tree(idx, &p, cu_end, abbrev_table, abbrev_count,
                                find_func_callback, &ctx, 0);
        if (ret == 1 || ctx.found) return 0;  /* found! */
        if (ret < 0) {
            p = cu_end;  /* skip corrupted CU */
            continue;
        }
    }

    return -1;  /* not found */
}

int dwarf_get_source_location(dwarf_index_t *idx, uint64_t addr, dwarf_location_t *out) {
    if (!idx || !idx->valid || !out) return -1;

    if (!idx->debug_line || idx->debug_line_size == 0) {
        set_error(idx, "no .debug_line section");
        return -1;
    }

    return run_line_program(idx, addr, out);
}
