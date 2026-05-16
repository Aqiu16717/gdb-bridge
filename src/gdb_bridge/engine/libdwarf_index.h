/*
 * libdwarf_index.h — DWARF debug information index for gdb-bridge
 *
 * Provides lazy (on-demand) indexing of DWARF .debug_info DIEs via mmap.
 * The index is built over an already-opened elf_handle_t — no extra copies.
 *
 * Key capabilities:
 *   - LEB128 decoding (unsigned/signed variable-length integers)
 *   - DIE tree traversal (abbreviation-driven attribute parsing)
 *   - .debug_line state machine (address → source location mapping)
 *   - Function lookup by name → (low_pc, high_pc, source file, line)
 *
 * Thread safety: read-only access to mmap'd data is safe across threads.
 *
 * Author: @c-master for gdb-bridge
 */
#ifndef LIBDWARF_INDEX_H
#define LIBDWARF_INDEX_H

#include "libelf_utils.h"
#include <stdint.h>
#include <stddef.h>

/* ── DWARF constants ── */

/* DIE tags (subset) */
#define DW_TAG_compile_unit    0x11
#define DW_TAG_subprogram      0x2e
#define DW_TAG_variable        0x34
#define DW_TAG_formal_parameter 0x05
#define DW_TAG_inlined_subroutine 0x1d

/* Attribute names (subset) */
#define DW_AT_name             0x03
#define DW_AT_low_pc           0x11
#define DW_AT_high_pc          0x12
#define DW_AT_stmt_list        0x10
#define DW_AT_comp_dir         0x1b
#define DW_AT_producer         0x25
#define DW_AT_language         0x13
#define DW_AT_call_file        0x58
#define DW_AT_call_line        0x59
#define DW_AT_call_column      0x5a
#define DW_AT_decl_file        0x3a
#define DW_AT_decl_line        0x3b
#define DW_AT_decl_column      0x39
#define DW_AT_type             0x31
#define DW_AT_external         0x3f

/* Attribute form encodings (subset) */
#define DW_FORM_addr           0x01
#define DW_FORM_data1          0x0b
#define DW_FORM_data2          0x05
#define DW_FORM_data4          0x06
#define DW_FORM_data8          0x07
#define DW_FORM_string         0x08
#define DW_FORM_flag           0x0c
#define DW_FORM_strp           0x0e
#define DW_FORM_ref_addr       0x10
#define DW_FORM_ref4           0x13
#define DW_FORM_ref8           0x14
#define DW_FORM_flag_present   0x19
#define DW_FORM_sec_offset     0x17
#define DW_FORM_exprloc        0x18
#define DW_FORM_udata          0x0f  /* DWARF 3: unsigned LEB128 */
#define DW_FORM_sdata          0x0d  /* DWARF 3: signed LEB128 */

/* DWARF 4 additions */
#define DW_FORM_ref_udata      0x15
#define DW_FORM_indirect       0x16

/* DWARF 5 additions */
#define DW_FORM_strx           0x1a  /* index into .debug_str_offsets */
#define DW_FORM_addrx          0x1b  /* index into .debug_addr */
#define DW_FORM_ref_sup4       0x1c
#define DW_FORM_ref_sup8       0x1d
#define DW_FORM_data16         0x1e
#define DW_FORM_line_strp      0x1f  /* offset into .debug_line_str */

/* .debug_line constants */
#define DW_LNS_copy            0x01
#define DW_LNS_advance_pc      0x02
#define DW_LNS_advance_line    0x03
#define DW_LNS_set_file        0x04
#define DW_LNS_set_column      0x05
#define DW_LNS_negate_stmt     0x06
#define DW_LNS_set_basic_block 0x07
#define DW_LNS_const_add_pc    0x08
#define DW_LNS_fixed_advance_pc 0x09

#define DW_LNE_end_sequence    0x01
#define DW_LNE_set_address     0x02
#define DW_LNE_define_file     0x03

/* ── Opaque types ── */

typedef struct dwarf_index dwarf_index_t;

/* ── Result types ── */

typedef struct {
    const char *file;       /* source file name (from .debug_line file table) */
    uint32_t    line;
    uint32_t    column;
} dwarf_location_t;

typedef struct {
    const char *name;       /* function name (DW_AT_name) */
    uint64_t    low_pc;     /* start address */
    uint64_t    high_pc;    /* end address (exclusive) */
    const char *decl_file;  /* source file where declared */
    uint32_t    decl_line;  /* line number where declared */
} dwarf_func_t;

/* ── API ── */

/*
 * Open a DWARF index over an already-opened ELF handle.
 * The ELF handle must remain open for the lifetime of the DWARF index.
 * Returns NULL on failure; call dwarf_error() for details.
 */
dwarf_index_t *dwarf_index_open(elf_handle_t *elf);

/*
 * Release the DWARF index. Does NOT close the underlying ELF handle.
 */
void dwarf_index_close(dwarf_index_t *idx);

/* Return last error string, or NULL. */
const char *dwarf_error(dwarf_index_t *idx);

/*
 * Look up a function by name across all compilation units.
 * Writes result to *out on success, returns 0.
 * Returns -1 if not found, -2 on error.
 */
int dwarf_lookup_function(dwarf_index_t *idx, const char *name, dwarf_func_t *out);

/*
 * Given a PC address, return the source location (file, line, column).
 * Uses the .debug_line section state machine.
 * Returns 0 on success, -1 if not found.
 */
int dwarf_get_source_location(dwarf_index_t *idx, uint64_t addr, dwarf_location_t *out);

/*
 * Get the number of compilation units in the debug info.
 */
uint32_t dwarf_cu_count(dwarf_index_t *idx);

#endif /* LIBDWARF_INDEX_H */
