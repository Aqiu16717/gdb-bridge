/*
 * gen_elf_test.c — Generate a minimal but valid ELF64 executable for testing
 *
 * Creates an ELF with:
 *   - .text section (with dummy code)
 *   - .data section
 *   - .symtab with a few symbols (main, foo, bar, _start)
 *   - .strtab
 *   - .shstrtab
 *   - .note.gnu.build-id
 *   - .gnu_debuglink
 *
 * Usage: ./gen_elf_test [output_file]
 * Default output: test_elf.bin
 */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

/* Reuse ELF definitions */
typedef uint64_t Elf64_Addr;
typedef uint64_t Elf64_Off;
typedef uint16_t Elf64_Half;
typedef uint32_t Elf64_Word;
typedef int32_t  Elf64_Sword;
typedef uint64_t Elf64_Xword;

#define EI_NIDENT    16
#define EI_MAG0      0
#define EI_MAG1      1
#define EI_MAG2      2
#define EI_MAG3      3
#define EI_CLASS     4
#define EI_DATA      5
#define EI_VERSION   6
#define EI_OSABI     7
#define ELFCLASS64   2
#define ELFDATA2LSB  1
#define EV_CURRENT   1
#define ELFOSABI_SYSV 0
#define ET_EXEC      2
#define EM_X86_64    62
#define SHT_NULL     0
#define SHT_PROGBITS 1
#define SHT_SYMTAB   2
#define SHT_STRTAB   3
#define SHT_NOTE     7
#define SHT_NOBITS   8
#define SHF_ALLOC    2
#define SHF_EXECINSTR 4
#define SHF_WRITE    1
#define STB_GLOBAL   1
#define STB_LOCAL    0
#define STT_FUNC     2
#define STT_OBJECT   1
#define STT_FILE     4
#define NT_GNU_BUILD_ID 3

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
} Elf64_Nhdr;

/* Dummy x86_64 code: just exits with 0 */
static const unsigned char dummy_code[] = {
    0x48, 0xc7, 0xc0, 0x3c, 0x00, 0x00, 0x00,  /* mov $60, %rax (exit syscall) */
    0x48, 0xc7, 0xc7, 0x00, 0x00, 0x00, 0x00,  /* mov $0, %rdi  (exit code 0) */
    0x0f, 0x05                                     /* syscall */
};

/* Section indices */
enum {
    SEC_NULL = 0,
    SEC_TEXT,
    SEC_DATA,
    SEC_SYMTAB,
    SEC_STRTAB,
    SEC_SHSTRTAB,
    SEC_NOTE_BUILDID,
    SEC_DEBUGLINK,
    SEC_COUNT
};

/* Symbol indices (local first, then global) */
enum {
    SYM_UNDEF = 0,
    SYM_FILE,
    SYM_START,
    SYM_MAIN,
    SYM_FOO,
    SYM_BAR,
    SYM_DATA_VAR,
    SYM_COUNT
};

int main(int argc, char **argv) {
    const char *outpath = (argc > 1) ? argv[1] : "test_elf.bin";
    FILE *f = fopen(outpath, "wb");
    if (!f) { perror("fopen"); return 1; }

    /* ── Build string tables ── */
    const char *shstrtab =
        "\0"                  /* index 0 */
        ".text\0"
        ".data\0"
        ".symtab\0"
        ".strtab\0"
        ".shstrtab\0"
        ".note.gnu.build-id\0"
        ".gnu_debuglink\0";

    uint32_t sh_name_offsets[SEC_COUNT];
    const char *p = shstrtab;
    int sec = 0;
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 1;  /* "" */
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 6;  /* ".text" */
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 6;  /* ".data" */
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 8;  /* ".symtab" */
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 8;  /* ".strtab" */
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 10; /* ".shstrtab" */
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 19; /* ".note.gnu.build-id" (18 chars + null) */
    sh_name_offsets[sec++] = (uint32_t)(p - shstrtab); p += 15; /* ".gnu_debuglink" (14 chars + null) */
    size_t shstrtab_size = (size_t)(p - shstrtab) + 1;

    /* Symbol string table */
    const char *symstr =
        "\0"                /* index 0 */
        "gen_elf_test.c\0"  /* file symbol */
        "_start\0"
        "main\0"
        "foo\0"
        "bar\0"
        "data_var\0";
    uint32_t sym_name_offsets[SYM_COUNT];
    p = symstr;
    int sym_idx = 0;
    sym_name_offsets[sym_idx++] = (uint32_t)(p - symstr); p += 1;
    sym_name_offsets[sym_idx++] = (uint32_t)(p - symstr); p += 15;
    sym_name_offsets[sym_idx++] = (uint32_t)(p - symstr); p += 7;
    sym_name_offsets[sym_idx++] = (uint32_t)(p - symstr); p += 5;
    sym_name_offsets[sym_idx++] = (uint32_t)(p - symstr); p += 4;
    sym_name_offsets[sym_idx++] = (uint32_t)(p - symstr); p += 4;
    sym_name_offsets[sym_idx++] = (uint32_t)(p - symstr); p += 9;
    size_t symstr_size = (size_t)(p - symstr) + 1;

    /* Build-id data (20 random-ish bytes) */
    unsigned char build_id_desc[] = {
        0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0,
        0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88,
        0x99, 0xaa, 0xbb, 0xcc
    };

    /* Debug link filename */
    const char debuglink_name[] = "test_elf.debug\0";
    /* Pad to 4-byte alignment, then CRC32 placeholder */
    size_t debuglink_padded = ((sizeof(debuglink_name) + 3) / 4) * 4;
    unsigned char debuglink_crc[] = { 0x00, 0x00, 0x00, 0x00 };

    /* Debug link section contents */
    size_t debuglink_size = debuglink_padded + sizeof(debuglink_crc);

    /* ── Calculate layout ── */

    /* ELF header */
    size_t ehdr_off = 0;
    size_t ehdr_size = sizeof(Elf64_Ehdr);
    size_t shdr_size = sizeof(Elf64_Shdr);

    /* Section header table — after all data */
    size_t shdr_off = ehdr_size;  /* tentative, will update */

    /* .text */
    size_t text_off = ehdr_size;
    size_t text_size = sizeof(dummy_code);

    /* .data */
    size_t data_off = text_off + text_size;
    uint64_t data_val = 0xdeadbeefcafebabeULL;
    size_t data_size = sizeof(data_val);

    /* .symtab */
    size_t symtab_off = data_off + data_size;
    size_t symtab_entsize = sizeof(Elf64_Sym);
    size_t symtab_size = SYM_COUNT * symtab_entsize;

    /* .strtab */
    size_t strtab_off = symtab_off + symtab_size;
    size_t strtab_size = symstr_size;

    /* Build-id note — needs alignment to 4 */
    size_t note_off = strtab_off + strtab_size;
    /* Note structure: Elf64_Nhdr + "GNU\0" (4 bytes) + 20 bytes desc */
    size_t note_hdr_size = sizeof(Elf64_Nhdr);
    size_t note_name_size = 4;  /* "GNU\0" */
    size_t note_desc_size = sizeof(build_id_desc);
    size_t note_size = note_hdr_size + note_name_size + note_desc_size;
    note_size = ((note_size + 3) / 4) * 4;  /* align to 4 */

    /* .gnu_debuglink */
    size_t debuglink_off = note_off + note_size;
    size_t debuglink_section_size = debuglink_size;

    /* .shstrtab */
    size_t shstrtab_off = debuglink_off + debuglink_section_size;
    size_t shstrtab_section_size = shstrtab_size;

    /* Section header table */
    shdr_off = shstrtab_off + shstrtab_section_size;
    size_t total_size = shdr_off + SEC_COUNT * shdr_size;

    /* ── Write ELF header ── */
    Elf64_Ehdr ehdr;
    memset(&ehdr, 0, sizeof(ehdr));
    memcpy(ehdr.e_ident, "\x7f" "ELF", 4);
    ehdr.e_ident[EI_CLASS]   = ELFCLASS64;
    ehdr.e_ident[EI_DATA]    = ELFDATA2LSB;
    ehdr.e_ident[EI_VERSION] = EV_CURRENT;
    ehdr.e_ident[EI_OSABI]   = ELFOSABI_SYSV;
    ehdr.e_type      = ET_EXEC;
    ehdr.e_machine   = EM_X86_64;
    ehdr.e_version   = EV_CURRENT;
    ehdr.e_entry     = 0x400000 + 0;  /* entry at start of .text */
    ehdr.e_phoff     = 0;  /* no program headers */
    ehdr.e_phnum     = 0;
    ehdr.e_phentsize = 0;
    ehdr.e_shoff     = (Elf64_Off)shdr_off;
    ehdr.e_ehsize    = (Elf64_Half)ehdr_size;
    ehdr.e_shentsize = (Elf64_Half)shdr_size;
    ehdr.e_shnum     = SEC_COUNT;
    ehdr.e_shstrndx  = SEC_SHSTRTAB;

    fseek(f, (long)ehdr_off, SEEK_SET);
    fwrite(&ehdr, sizeof(ehdr), 1, f);

    /* ── Write .text ── */
    fseek(f, (long)text_off, SEEK_SET);
    fwrite(dummy_code, text_size, 1, f);

    /* ── Write .data ── */
    fseek(f, (long)data_off, SEEK_SET);
    fwrite(&data_val, data_size, 1, f);

    /* ── Write .symtab ── */
    Elf64_Sym symbols[SYM_COUNT];
    memset(symbols, 0, sizeof(symbols));

    /* SYM_UNDEF (0) — all zeros */
    /* SYM_FILE */
    symbols[SYM_FILE].st_name  = sym_name_offsets[SYM_FILE];
    symbols[SYM_FILE].st_info  = (STB_LOCAL << 4) | STT_FILE;
    symbols[SYM_FILE].st_shndx = 0xfff1;  /* SHN_ABS */

    /* SYM_START */
    symbols[SYM_START].st_name  = sym_name_offsets[SYM_START];
    symbols[SYM_START].st_info  = (STB_GLOBAL << 4) | STT_FUNC;
    symbols[SYM_START].st_value = 0x400000;
    symbols[SYM_START].st_shndx = SEC_TEXT;
    symbols[SYM_START].st_size  = text_size;

    /* SYM_MAIN */
    symbols[SYM_MAIN].st_name  = sym_name_offsets[SYM_MAIN];
    symbols[SYM_MAIN].st_info  = (STB_GLOBAL << 4) | STT_FUNC;
    symbols[SYM_MAIN].st_value = 0x400000 + text_size / 2;
    symbols[SYM_MAIN].st_shndx = SEC_TEXT;
    symbols[SYM_MAIN].st_size  = text_size / 2;

    /* SYM_FOO */
    symbols[SYM_FOO].st_name  = sym_name_offsets[SYM_FOO];
    symbols[SYM_FOO].st_info  = (STB_GLOBAL << 4) | STT_FUNC;
    symbols[SYM_FOO].st_value = 0x400010;
    symbols[SYM_FOO].st_shndx = SEC_TEXT;
    symbols[SYM_FOO].st_size  = 16;

    /* SYM_BAR */
    symbols[SYM_BAR].st_name  = sym_name_offsets[SYM_BAR];
    symbols[SYM_BAR].st_info  = (STB_GLOBAL << 4) | STT_FUNC;
    symbols[SYM_BAR].st_value = 0x400020;
    symbols[SYM_BAR].st_shndx = SEC_TEXT;
    symbols[SYM_BAR].st_size  = 8;

    /* SYM_DATA_VAR */
    symbols[SYM_DATA_VAR].st_name  = sym_name_offsets[SYM_DATA_VAR];
    symbols[SYM_DATA_VAR].st_info  = (STB_GLOBAL << 4) | STT_OBJECT;
    symbols[SYM_DATA_VAR].st_value = 0x600000;
    symbols[SYM_DATA_VAR].st_shndx = SEC_DATA;
    symbols[SYM_DATA_VAR].st_size  = 8;

    fseek(f, (long)symtab_off, SEEK_SET);
    fwrite(symbols, sizeof(symbols), 1, f);

    /* ── Write .strtab ── */
    fseek(f, (long)strtab_off, SEEK_SET);
    fwrite(symstr, symstr_size, 1, f);

    /* ── Write .note.gnu.build-id ── */
    fseek(f, (long)note_off, SEEK_SET);
    Elf64_Nhdr nhdr;
    nhdr.n_namesz = note_name_size;
    nhdr.n_descsz = note_desc_size;
    nhdr.n_type   = NT_GNU_BUILD_ID;
    fwrite(&nhdr, sizeof(nhdr), 1, f);
    fwrite("GNU\0", 4, 1, f);
    fwrite(build_id_desc, note_desc_size, 1, f);

    /* ── Write .gnu_debuglink ── */
    fseek(f, (long)debuglink_off, SEEK_SET);
    fwrite(debuglink_name, sizeof(debuglink_name), 1, f);
    /* pad to 4-byte alignment */
    for (size_t i = sizeof(debuglink_name); i < debuglink_padded; i++) {
        fputc(0, f);
    }
    fwrite(debuglink_crc, sizeof(debuglink_crc), 1, f);

    /* ── Write .shstrtab ── */
    fseek(f, (long)shstrtab_off, SEEK_SET);
    fwrite(shstrtab, shstrtab_size, 1, f);

    /* ── Write section header table ── */
    fseek(f, (long)shdr_off, SEEK_SET);

    Elf64_Shdr shdrs[SEC_COUNT];
    memset(shdrs, 0, sizeof(shdrs));

    /* SHT_NULL */
    shdrs[SEC_NULL].sh_name = sh_name_offsets[SEC_NULL];

    /* .text */
    shdrs[SEC_TEXT].sh_name      = sh_name_offsets[SEC_TEXT];
    shdrs[SEC_TEXT].sh_type      = SHT_PROGBITS;
    shdrs[SEC_TEXT].sh_flags     = SHF_ALLOC | SHF_EXECINSTR;
    shdrs[SEC_TEXT].sh_addr      = 0x400000;
    shdrs[SEC_TEXT].sh_offset    = (Elf64_Off)text_off;
    shdrs[SEC_TEXT].sh_size      = text_size;
    shdrs[SEC_TEXT].sh_addralign = 16;

    /* .data */
    shdrs[SEC_DATA].sh_name      = sh_name_offsets[SEC_DATA];
    shdrs[SEC_DATA].sh_type      = SHT_PROGBITS;
    shdrs[SEC_DATA].sh_flags     = SHF_ALLOC | SHF_WRITE;
    shdrs[SEC_DATA].sh_addr      = 0x600000;
    shdrs[SEC_DATA].sh_offset    = (Elf64_Off)data_off;
    shdrs[SEC_DATA].sh_size      = data_size;
    shdrs[SEC_DATA].sh_addralign = 8;

    /* .symtab */
    shdrs[SEC_SYMTAB].sh_name      = sh_name_offsets[SEC_SYMTAB];
    shdrs[SEC_SYMTAB].sh_type      = SHT_SYMTAB;
    shdrs[SEC_SYMTAB].sh_offset    = (Elf64_Off)symtab_off;
    shdrs[SEC_SYMTAB].sh_size      = symtab_size;
    shdrs[SEC_SYMTAB].sh_link      = SEC_STRTAB;  /* associated string table */
    shdrs[SEC_SYMTAB].sh_info      = SYM_START;   /* first non-local symbol index */
    shdrs[SEC_SYMTAB].sh_entsize   = symtab_entsize;
    shdrs[SEC_SYMTAB].sh_addralign = 8;

    /* .strtab */
    shdrs[SEC_STRTAB].sh_name      = sh_name_offsets[SEC_STRTAB];
    shdrs[SEC_STRTAB].sh_type      = SHT_STRTAB;
    shdrs[SEC_STRTAB].sh_offset    = (Elf64_Off)strtab_off;
    shdrs[SEC_STRTAB].sh_size      = strtab_size;
    shdrs[SEC_STRTAB].sh_addralign = 1;

    /* .shstrtab */
    shdrs[SEC_SHSTRTAB].sh_name      = sh_name_offsets[SEC_SHSTRTAB];
    shdrs[SEC_SHSTRTAB].sh_type      = SHT_STRTAB;
    shdrs[SEC_SHSTRTAB].sh_offset    = (Elf64_Off)shstrtab_off;
    shdrs[SEC_SHSTRTAB].sh_size      = shstrtab_section_size;
    shdrs[SEC_SHSTRTAB].sh_addralign = 1;

    /* .note.gnu.build-id */
    shdrs[SEC_NOTE_BUILDID].sh_name      = sh_name_offsets[SEC_NOTE_BUILDID];
    shdrs[SEC_NOTE_BUILDID].sh_type      = SHT_NOTE;
    shdrs[SEC_NOTE_BUILDID].sh_flags     = SHF_ALLOC;
    shdrs[SEC_NOTE_BUILDID].sh_offset    = (Elf64_Off)note_off;
    shdrs[SEC_NOTE_BUILDID].sh_size      = note_size;
    shdrs[SEC_NOTE_BUILDID].sh_addralign = 4;

    /* .gnu_debuglink */
    shdrs[SEC_DEBUGLINK].sh_name      = sh_name_offsets[SEC_DEBUGLINK];
    shdrs[SEC_DEBUGLINK].sh_type      = SHT_PROGBITS;
    shdrs[SEC_DEBUGLINK].sh_offset    = (Elf64_Off)debuglink_off;
    shdrs[SEC_DEBUGLINK].sh_size      = debuglink_section_size;
    shdrs[SEC_DEBUGLINK].sh_addralign = 4;

    fwrite(shdrs, sizeof(shdrs), 1, f);

    fclose(f);

    printf("Generated %s: %zu bytes, %d sections, %d symbols\n",
           outpath, total_size, SEC_COUNT, SYM_COUNT);
    printf("  .text @ 0x%zx (code)\n", text_off);
    printf("  .symtab @ 0x%zx (%d entries)\n", symtab_off, SYM_COUNT);
    printf("  .note.gnu.build-id @ 0x%zx\n", note_off);
    printf("  .gnu_debuglink @ 0x%zx (→ %s)\n", debuglink_off, debuglink_name);
    return 0;
}
