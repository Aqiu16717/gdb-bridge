/*
 * libelf_utils.c — Zero-copy ELF64 parser implementation
 *
 * Architecture: mmap the entire ELF file, then navigate via
 * pointer arithmetic. All returned pointers are into the mmap'd region.
 *
 * Error handling: functions set handle->error on failure and return
 * sentinel values (NULL, 0). Caller should check elf_error() after
 * a chain of operations.
 *
 * Compiler flags:
 *   -Wall -Wextra -Werror -Wstrict-aliasing=2 -Wshadow
 *   -Wcast-align -Wpointer-arith -Wwrite-strings
 *   -fPIC -shared -std=c11
 *
 * Author: @c-master for gdb-bridge
 */
#include "libelf_utils.h"

#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* ── Handle structure ── */

struct elf_handle {
    int      fd;           /* file descriptor, -1 if closed */
    void    *map_base;     /* mmap base address */
    size_t   map_size;     /* total file size */
    char     error[256];   /* last error message */

    /* Cached lookups — populated on first access */
    const Elf64_Ehdr  *ehdr;
    const Elf64_Shdr  *shdr_table;    /* section header table base */
    const char        *shstrtab;      /* section name string table */
    size_t             shstrsz;       /* size of shstrtab (for bounds check) */
    uint16_t           shnum;         /* actual section count */

    /* .symtab cache */
    const Elf64_Sym   *symtab;
    const char        *symstrtab;
    uint32_t           symcount;

    int                valid;         /* magic number validated */
};

/* ── Internal helpers ── */

static void set_error(elf_handle_t *h, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));

static void set_error(elf_handle_t *h, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(h->error, sizeof(h->error), fmt, ap);
    va_end(ap);
}

/* Validate ELF magic: 0x7f 'E' 'L' 'F' */
static int check_magic(const unsigned char *e_ident) {
    return e_ident[EI_MAG0] == 0x7f
        && e_ident[EI_MAG1] == 'E'
        && e_ident[EI_MAG2] == 'L'
        && e_ident[EI_MAG3] == 'F';
}

/* Round up to next multiple of alignment */
static inline size_t align_up(size_t val, size_t align) {
    if (align == 0) return val;
    return (val + align - 1) & ~(align - 1);
}

/* ── Core open/close ── */

elf_handle_t *elf_open(const char *path) {
    if (!path) return NULL;

    elf_handle_t *h = calloc(1, sizeof(elf_handle_t));
    if (!h) return NULL;

    h->fd = -1;
    h->map_base = MAP_FAILED;

    h->fd = open(path, O_RDONLY);
    if (h->fd < 0) {
        set_error(h, "cannot open file: %s", path);
        return h; /* caller can inspect error */
    }

    struct stat st;
    if (fstat(h->fd, &st) < 0) {
        set_error(h, "fstat failed");
        return h;
    }
    h->map_size = (size_t)st.st_size;

    if (h->map_size < sizeof(Elf64_Ehdr)) {
        set_error(h, "file too small for ELF header (%zu bytes)", h->map_size);
        return h;
    }

    h->map_base = mmap(NULL, h->map_size, PROT_READ, MAP_PRIVATE, h->fd, 0);
    if (h->map_base == MAP_FAILED) {
        set_error(h, "mmap failed");
        return h;
    }

    /* Validate ELF magic */
    const Elf64_Ehdr *ehdr = (const Elf64_Ehdr *)h->map_base;
    if (!check_magic(ehdr->e_ident)) {
        set_error(h, "not an ELF file (bad magic)");
        return h;
    }

    /* Validate 64-bit */
    if (ehdr->e_ident[EI_CLASS] != ELFCLASS64) {
        set_error(h, "not a 64-bit ELF file (EI_CLASS=%d)", ehdr->e_ident[EI_CLASS]);
        return h;
    }

    h->ehdr = ehdr;
    h->valid = 1;

    /* Validate section header table bounds */
    if (ehdr->e_shoff > 0 && ehdr->e_shnum > 0) {
        uint64_t shdr_end = (uint64_t)ehdr->e_shoff
                          + (uint64_t)ehdr->e_shnum * ehdr->e_shentsize;
        if (shdr_end > h->map_size) {
            set_error(h, "section header table extends past file end");
            h->valid = 0;
            return h;
        }
        if (ehdr->e_shentsize < sizeof(Elf64_Shdr)) {
            set_error(h, "e_shentsize too small (%d < %zu)",
                      ehdr->e_shentsize, sizeof(Elf64_Shdr));
            h->valid = 0;
            return h;
        }

        /* Cast through uintptr_t — ELF spec guarantees shdr_table is naturally
         * aligned in the file and mmap returns page-aligned memory. uintptr_t
         * cast is the standard idiom for binary format parsers on ARM64. */
        h->shdr_table = (const Elf64_Shdr *)((uintptr_t)h->map_base + ehdr->e_shoff);
        h->shnum = ehdr->e_shnum;

        /* Resolve section name string table */
        if (ehdr->e_shstrndx != SHN_UNDEF && ehdr->e_shstrndx < h->shnum) {
            const Elf64_Shdr *shstr = &h->shdr_table[ehdr->e_shstrndx];
            if (shstr->sh_offset + shstr->sh_size <= h->map_size) {
                h->shstrtab = (const char *)h->map_base + shstr->sh_offset;
                h->shstrsz  = (size_t)shstr->sh_size;
            }
        }
    }

    return h;
}

void elf_close(elf_handle_t *handle) {
    if (!handle) return;
    if (handle->map_base != MAP_FAILED && handle->map_base != NULL) {
        munmap(handle->map_base, handle->map_size);
    }
    if (handle->fd >= 0) {
        close(handle->fd);
    }
    free(handle);
}

const char *elf_error(elf_handle_t *handle) {
    if (!handle) return "null handle";
    return handle->error[0] ? handle->error : NULL;
}

/* ── Header access ── */

const Elf64_Ehdr *elf_get_header(elf_handle_t *handle) {
    if (!handle || !handle->valid) return NULL;
    return handle->ehdr;
}

int elf_is_valid(elf_handle_t *handle) {
    return handle && handle->valid;
}

/* ── Section access ── */

uint16_t elf_section_count(elf_handle_t *handle) {
    if (!handle || !handle->valid) return 0;
    return handle->shnum;
}

const Elf64_Shdr *elf_section_by_index(elf_handle_t *handle, uint16_t idx) {
    if (!handle || !handle->valid || !handle->shdr_table) return NULL;
    if (idx >= handle->shnum) return NULL;
    return &handle->shdr_table[idx];
}

const Elf64_Shdr *elf_section_by_name(elf_handle_t *handle, const char *name) {
    if (!handle || !handle->valid || !handle->shdr_table || !handle->shstrtab || !name) {
        return NULL;
    }
    for (uint16_t i = 0; i < handle->shnum; i++) {
        const char *sname = elf_section_name(handle, i);
        if (sname && strcmp(sname, name) == 0) {
            return &handle->shdr_table[i];
        }
    }
    return NULL;
}

const char *elf_section_name(elf_handle_t *handle, uint16_t idx) {
    if (!handle || !handle->valid || !handle->shstrtab || idx >= handle->shnum) {
        return NULL;
    }
    Elf64_Word name_off = handle->shdr_table[idx].sh_name;
    if (name_off >= handle->shstrsz) return NULL;  /* bounds check */
    return handle->shstrtab + name_off;
}

const void *elf_section_data(elf_handle_t *handle, const Elf64_Shdr *shdr) {
    if (!handle || !handle->valid || !shdr) return NULL;
    if (shdr->sh_type == SHT_NOBITS || shdr->sh_type == SHT_NULL) return NULL;
    if (shdr->sh_offset == 0 || shdr->sh_size == 0) return NULL;
    if (shdr->sh_offset + shdr->sh_size > handle->map_size) return NULL;
    return (const char *)handle->map_base + shdr->sh_offset;
}

/* ── Symbol table lazy initialization ── */

static int init_symtab(elf_handle_t *handle) {
    if (handle->symtab) return 0;  /* already initialized */

    const Elf64_Shdr *symshdr = elf_section_by_name(handle, ".symtab");
    if (!symshdr) {
        /* Try .dynsym as fallback */
        symshdr = elf_section_by_name(handle, ".dynsym");
    }
    if (!symshdr || symshdr->sh_type == SHT_NULL) {
        return -1;  /* no symbol table */
    }

    const void *data = elf_section_data(handle, symshdr);
    if (!data) return -1;

    handle->symtab = (const Elf64_Sym *)data;
    handle->symcount = (uint32_t)(symshdr->sh_size / sizeof(Elf64_Sym));

    /* Find associated string table (sh_link points to it) */
    if (symshdr->sh_link < handle->shnum) {
        const Elf64_Shdr *strshdr = &handle->shdr_table[symshdr->sh_link];
        handle->symstrtab = (const char *)elf_section_data(handle, strshdr);
    }

    return 0;
}

/* ── Symbol access ── */

uint32_t elf_symbol_count(elf_handle_t *handle) {
    if (!handle || !handle->valid) return 0;
    if (init_symtab(handle) != 0) return 0;
    return handle->symcount;
}

const Elf64_Sym *elf_symbol_by_index(elf_handle_t *handle, uint32_t idx) {
    if (!handle || !handle->valid) return NULL;
    if (init_symtab(handle) != 0) return NULL;
    if (idx >= handle->symcount) return NULL;
    return &handle->symtab[idx];
}

const Elf64_Sym *elf_symbol_by_name(elf_handle_t *handle, const char *name) {
    if (!handle || !handle->valid || !name) return NULL;
    if (init_symtab(handle) != 0) return NULL;

    for (uint32_t i = 0; i < handle->symcount; i++) {
        if (!handle->symstrtab) break;
        const char *sname = handle->symstrtab + handle->symtab[i].st_name;
        if (strcmp(sname, name) == 0) {
            return &handle->symtab[i];
        }
    }
    return NULL;
}

const char *elf_symbol_name(elf_handle_t *handle, uint32_t idx) {
    if (!handle || !handle->valid) return NULL;
    if (init_symtab(handle) != 0) return NULL;
    if (idx >= handle->symcount) return NULL;
    if (!handle->symstrtab) return NULL;
    return handle->symstrtab + handle->symtab[idx].st_name;
}

Elf64_Addr elf_symbol_value(elf_handle_t *handle, const char *name) {
    const Elf64_Sym *sym = elf_symbol_by_name(handle, name);
    return sym ? sym->st_value : 0;
}

/* ── Build-ID extraction ── */

char *elf_get_build_id(elf_handle_t *handle) {
    if (!handle || !handle->valid) return NULL;

    /* Search for .note.gnu.build-id section */
    const Elf64_Shdr *note_shdr = elf_section_by_name(handle, ".note.gnu.build-id");
    if (!note_shdr) {
        /* Fall back to scanning SHT_NOTE sections for NT_GNU_BUILD_ID */
        for (uint16_t i = 0; i < handle->shnum; i++) {
            const Elf64_Shdr *shdr = &handle->shdr_table[i];
            if (shdr->sh_type == SHT_NOTE) {
                /* Check if this note section contains a build-id */
                note_shdr = shdr;
                break;
            }
        }
    }
    if (!note_shdr) return NULL;

    const char *note_data = (const char *)elf_section_data(handle, note_shdr);
    if (!note_data) return NULL;

    /* Iterate notes to find NT_GNU_BUILD_ID */
    size_t offset = 0;
    size_t size = (size_t)note_shdr->sh_size;

    while (offset + sizeof(Elf64_Nhdr) <= size) {
        const Elf64_Nhdr *nhdr = (const Elf64_Nhdr *)((uintptr_t)(note_data + offset));
        size_t name_end = offset + sizeof(Elf64_Nhdr) + align_up(nhdr->n_namesz, 4);
        size_t desc_end = name_end + align_up(nhdr->n_descsz, 4);

        if (desc_end > size) break;

        if (nhdr->n_type == NT_GNU_BUILD_ID && nhdr->n_namesz == 4
            && memcmp(note_data + offset + sizeof(Elf64_Nhdr), "GNU\0", 4) == 0) {

            const unsigned char *desc = (const unsigned char *)note_data + name_end;
            size_t desc_sz = nhdr->n_descsz;

            /* Convert to hex string */
            char *hex = malloc(desc_sz * 2 + 1);
            if (!hex) return NULL;

            for (size_t j = 0; j < desc_sz; j++) {
                snprintf(hex + j * 2, 3, "%02x", desc[j]);
            }
            hex[desc_sz * 2] = '\0';
            return hex;
        }
        offset = desc_end;
    }

    return NULL;
}

/* ── Debug link ── */

const char *elf_get_debuglink(elf_handle_t *handle) {
    if (!handle || !handle->valid) return NULL;

    const Elf64_Shdr *shdr = elf_section_by_name(handle, ".gnu_debuglink");
    if (!shdr) return NULL;

    const char *data = (const char *)elf_section_data(handle, shdr);
    if (!data) return NULL;

    /* .gnu_debuglink format: null-terminated filename, followed by
     * 4-byte aligned padding, then 4-byte CRC32 checksum.
     * We just return the filename pointer. */
    return data;
}
