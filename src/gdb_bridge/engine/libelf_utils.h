/*
 * libelf_utils.h — Zero-copy ELF parser for gdb-bridge
 *
 * Parses ELF64 files (ET_EXEC, ET_DYN, ET_CORE) via mmap.
 * Provides symbol table lookup, section traversal, build-id extraction,
 * and .gnu_debuglink resolution.
 *
 * All returned pointers reference mmap'd memory — no copies.
 * Thread safety: read-only access to mmap'd data is inherently safe
 * across threads; elf_handle_t allocation/free is caller's responsibility.
 */
#ifndef LIBELF_UTILS_H
#define LIBELF_UTILS_H

#include <stdint.h>
#include <stddef.h>

/* ── ELF64 type definitions (self-contained, no system elf.h dependency) ── */

typedef uint64_t Elf64_Addr;
typedef uint64_t Elf64_Off;
typedef uint16_t Elf64_Half;
typedef uint32_t Elf64_Word;
typedef int32_t  Elf64_Sword;
typedef uint64_t Elf64_Xword;
typedef int64_t  Elf64_Sxword;

/* e_ident indices */
enum {
    EI_MAG0       = 0,
    EI_MAG1       = 1,
    EI_MAG2       = 2,
    EI_MAG3       = 3,
    EI_CLASS      = 4,
    EI_DATA       = 5,
    EI_VERSION    = 6,
    EI_OSABI      = 7,
    EI_ABIVERSION = 8,
    EI_NIDENT     = 16
};

/* ELF class */
#define ELFCLASS64 2

/* ELF data encoding */
#define ELFDATA2LSB 1  /* little-endian */
#define ELFDATA2MSB 2  /* big-endian */

/* ELF OS/ABI */
#define ELFOSABI_SYSV    0
#define ELFOSABI_LINUX   3

/* Object file types */
#define ET_NONE   0
#define ET_REL    1
#define ET_EXEC   2
#define ET_DYN    3
#define ET_CORE   4

/* Machine architectures */
#define EM_X86_64  62
#define EM_AARCH64 183
#define EM_RISCV   243

/* Section types */
#define SHT_NULL          0
#define SHT_PROGBITS      1
#define SHT_SYMTAB        2
#define SHT_STRTAB        3
#define SHT_RELA          4
#define SHT_HASH          5
#define SHT_DYNAMIC       6
#define SHT_NOTE          7
#define SHT_NOBITS        8
#define SHT_REL           9
#define SHT_DYNSYM        11

/* Section flags */
#define SHF_WRITE     0x1
#define SHF_ALLOC     0x2
#define SHF_EXECINSTR 0x4

/* Symbol binding */
#define STB_LOCAL  0
#define STB_GLOBAL 1
#define STB_WEAK   2
#define ELF64_ST_BIND(i) ((i) >> 4)

/* Symbol type */
#define STT_NOTYPE  0
#define STT_OBJECT  1
#define STT_FUNC    2
#define STT_SECTION 3
#define STT_FILE    4
#define ELF64_ST_TYPE(i) ((i) & 0xf)

/* Special section indices */
#define SHN_UNDEF     0
#define SHN_ABS       0xfff1

/* Note types */
#define NT_GNU_BUILD_ID 3

/* ── ELF64 structures ── */

typedef struct {
    unsigned char e_ident[EI_NIDENT];
    Elf64_Half    e_type;
    Elf64_Half    e_machine;
    Elf64_Word    e_version;
    Elf64_Addr    e_entry;
    Elf64_Off     e_phoff;
    Elf64_Off     e_shoff;
    Elf64_Word    e_flags;
    Elf64_Half    e_ehsize;
    Elf64_Half    e_phentsize;
    Elf64_Half    e_phnum;
    Elf64_Half    e_shentsize;
    Elf64_Half    e_shnum;
    Elf64_Half    e_shstrndx;
} Elf64_Ehdr;

typedef struct {
    Elf64_Word    sh_name;
    Elf64_Word    sh_type;
    Elf64_Xword   sh_flags;
    Elf64_Addr    sh_addr;
    Elf64_Off     sh_offset;
    Elf64_Xword   sh_size;
    Elf64_Word    sh_link;
    Elf64_Word    sh_info;
    Elf64_Xword   sh_addralign;
    Elf64_Xword   sh_entsize;
} Elf64_Shdr;

typedef struct {
    Elf64_Word    st_name;
    unsigned char st_info;
    unsigned char st_other;
    Elf64_Half    st_shndx;
    Elf64_Addr    st_value;
    Elf64_Xword   st_size;
} Elf64_Sym;

typedef struct {
    Elf64_Word    n_namesz;
    Elf64_Word    n_descsz;
    Elf64_Word    n_type;
    /* Followed by name (n_namesz bytes, padded to 4) + desc (n_descsz bytes, padded to 4) */
} Elf64_Nhdr;

/* ── Opaque handle ── */

typedef struct elf_handle elf_handle_t;

/* ── API ── */

/*
 * Open an ELF file via mmap. Returns NULL on failure; call elf_error() for details.
 * The caller must eventually call elf_close().
 */
elf_handle_t *elf_open(const char *path);

/*
 * Release all resources. Safe to call with NULL.
 */
void elf_close(elf_handle_t *handle);

/*
 * Return a human-readable error string for the last operation on this handle.
 * Returns NULL if no error occurred.
 */
const char *elf_error(elf_handle_t *handle);

/* ── Header access ── */

const Elf64_Ehdr *elf_get_header(elf_handle_t *handle);

/* Convenience: was the ELF magic validated? */
int elf_is_valid(elf_handle_t *handle);

/* ── Section access ── */

/* Number of sections (from e_shnum). */
uint16_t elf_section_count(elf_handle_t *handle);

/* Get section header by index. Returns NULL if idx >= count. */
const Elf64_Shdr *elf_section_by_index(elf_handle_t *handle, uint16_t idx);

/*
 * Find a section by name. Returns NULL if not found.
 * Searches the section name string table (e_shstrndx).
 */
const Elf64_Shdr *elf_section_by_name(elf_handle_t *handle, const char *name);

/*
 * Get the name of a section given its index.
 * Returns a pointer into the section name string table, or NULL on error.
 */
const char *elf_section_name(elf_handle_t *handle, uint16_t idx);

/* Get a pointer to the raw section data. Returns NULL if section has no data. */
const void *elf_section_data(elf_handle_t *handle, const Elf64_Shdr *shdr);

/* ── Symbol access ── */

/* Number of symbols in .symtab. Returns 0 if no symtab exists. */
uint32_t elf_symbol_count(elf_handle_t *handle);

/* Get symbol by index. Returns NULL if idx >= count. */
const Elf64_Sym *elf_symbol_by_index(elf_handle_t *handle, uint32_t idx);

/*
 * Find a symbol by name in .symtab.
 * Returns NULL if not found.
 */
const Elf64_Sym *elf_symbol_by_name(elf_handle_t *handle, const char *name);

/*
 * Get the name of a symbol given its index in .symtab.
 * Returns a pointer into the symbol string table, or NULL on error.
 */
const char *elf_symbol_name(elf_handle_t *handle, uint32_t idx);

/*
 * Resolve a symbol's name to its value. Equivalent to:
 *   sym = elf_symbol_by_name(h, name);
 *   return sym ? sym->st_value : 0;
 */
Elf64_Addr elf_symbol_value(elf_handle_t *handle, const char *name);

/* ── Debug information ── */

/*
 * Extract the GNU build-id from .note.gnu.build-id as a hex string.
 * The returned buffer (caller must free) contains NUL-terminated hex,
 * e.g. "a1b2c3d4e5f6...".
 * Returns NULL if no build-id note exists.
 */
char *elf_get_build_id(elf_handle_t *handle);

/*
 * Extract the debug link filename from .gnu_debuglink section.
 * Returns a pointer to the filename within the section data (no copy).
 * Returns NULL if no .gnu_debuglink section exists.
 */
const char *elf_get_debuglink(elf_handle_t *handle);

#endif /* LIBELF_UTILS_H */
