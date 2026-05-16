/*
 * gen_dwarf_elf.c — Generate a minimal ELF64 with DWARF4 debug sections
 */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#define EI_NIDENT 16
#define ELFCLASS64 2
#define ELFDATA2LSB 1
#define EV_CURRENT 1
#define ET_EXEC 2
#define EM_X86_64 62
#define SHT_NULL 0
#define SHT_PROGBITS 1
#define SHT_SYMTAB 2
#define SHT_STRTAB 3
#define SHT_NOTE 7
#define SHF_ALLOC 2
#define SHF_EXECINSTR 4

typedef struct { unsigned char e_ident[16]; uint16_t e_type,e_machine; uint32_t e_version;
    uint64_t e_entry,e_phoff,e_shoff; uint32_t e_flags; uint16_t e_ehsize,e_phentsize,e_phnum,e_shentsize,e_shnum,e_shstrndx; } Elf64_Ehdr;
typedef struct { uint32_t sh_name,sh_type; uint64_t sh_flags,sh_addr,sh_offset,sh_size; uint32_t sh_link,sh_info; uint64_t sh_addralign,sh_entsize; } Elf64_Shdr;

static void wseek(FILE *f, long off, const void *d, size_t n) { fseek(f,off,SEEK_SET); fwrite(d,n,1,f); }

int main(int c, char **v) {
    const char *out = (c>1)?v[1]:"test_dwarf.bin";
    FILE *f = fopen(out,"wb"); if(!f){perror("fopen");return 1;}

    /* ═══ DWARF .debug_abbrev ═══ */
    unsigned char dab[] = {
        1, 0x11, 1,           /* code=1, DW_TAG_compile_unit, children=yes */
        0x25, 0x08,            /* DW_AT_producer, DW_FORM_string */
        0x13, 0x0b,            /* DW_AT_language, DW_FORM_data1 */
        0x03, 0x08,            /* DW_AT_name, DW_FORM_string */
        0x10, 0x17,            /* DW_AT_stmt_list, DW_FORM_sec_offset */
        0,0,                   /* end attrs */
        2, 0x2e, 0,            /* code=2, DW_TAG_subprogram, children=no */
        0x03, 0x08,            /* DW_AT_name, DW_FORM_string */
        0x11, 0x01,            /* DW_AT_low_pc, DW_FORM_addr */
        0x12, 0x01,            /* DW_AT_high_pc, DW_FORM_addr */
        0x3a, 0x0b,            /* DW_AT_decl_file, DW_FORM_data1 */
        0x3b, 0x0b,            /* DW_AT_decl_line, DW_FORM_data1 */
        0,0,                   /* end attrs */
        0                      /* end abbrev table */
    };

    /* ═══ DWARF .debug_str ═══ */
    /* offsets: 0="", 1="test.c", 8="main", 13="foo", 17="gdb-bridge DWARF test generator" */
    char dst[] = "\0test.c\0main\0foo\0gdb-bridge DWARF test generator\0";
    /* End padding */

    /* ═══ DWARF .debug_info ═══
     * CU header: length(4) + version=4(2) + abbrev_off=0(4) + addr_size=8(1) = 11
     * DIE1: abbrev=1 + "gdb-bridge DWARF test generator\0"(35) + lang=4(1) + "test.c\0"(7) + stmt_list=0(4) = 1+35+1+7+4 = 48
     * DIE2: abbrev=2 + "main\0"(5) + low_pc(8) + high_pc(8) + decl_file=1(1) + decl_line=5(1) = 2+5+8+8+1+1 = 25
     * DIE3: abbrev=2 + "foo\0"(4) + low_pc(8) + high_pc(8) + decl_file=1(1) + decl_line=10(1) = 2+4+8+8+1+1 = 24
     * DIE4: null=0(1)
     * Total after CU header: 48+25+24+1 = 98
     */
    unsigned char dinfo[] = {
        98,0,0,0,             /* unit_length = 98 */
        4,0,                   /* version = 4 */
        0,0,0,0,               /* debug_abbrev_offset = 0 */
        8,                      /* address_size = 8 */
        /* DIE 1 */
        1,                      /* abbrev code 1 */
        'g','d','b','-','b','r','i','d','g','e',' ','D','W','A','R','F',' ','t','e','s','t',' ','g','e','n','e','r','a','t','o','r',0,
        4,                      /* DW_AT_language: C89 */
        't','e','s','t','.','c',0,
        0,0,0,0,               /* DW_AT_stmt_list: 0 */
        /* DIE 2: main */
        2,
        'm','a','i','n',0,
        8,0,0x40,0,0,0,0,0,    /* low_pc = 0x400008 */
        0x10,0,0x40,0,0,0,0,0,  /* high_pc = 0x400010 */
        1,                      /* decl_file = 1 */
        5,                      /* decl_line = 5 */
        /* DIE 3: foo */
        2,
        'f','o','o',0,
        0x10,0,0x40,0,0,0,0,0,  /* low_pc = 0x400010 */
        0x20,0,0x40,0,0,0,0,0,  /* high_pc = 0x400020 */
        1,                      /* decl_file = 1 */
        10,                     /* decl_line = 10 */
        /* DIE 4: null terminator */
        0
    };

    /* ═══ DWARF .debug_line (DWARF 2) ═══
     * Maps 0x400008→test.c:5, 0x400010→test.c:10
     *
     * Header: unit_length(4) + version=2(2) + prologue_length(4) + min_insn_len(1)
     *   + default_is_stmt(1) + line_base(1) + line_range(1) + opcode_base(1)
     *   + std_opcode_lengths(8) + include_dirs(null) + file_table + null
     *
     * File table: "test.c\0"(7) + dir(0 ULEB128) + mtime(0 ULEB128) + size(0 ULEB128)
     *   = 7 + 1 + 1 + 1 = 10 bytes. Then null terminator = 1 byte.
     *
     * Prologue length = 1+1+1+1+1+8+1+10+1 = 25
     *
     * Line program:
     *   DW_LNE_set_address(0x400008): 0 9 2 <8 bytes addr>
     *   Special opcode: line_base=-5, line_range=14. line=1 initially.
     *     Target: line=5, addr stays 0x400008.
     *     line_inc = 5-1 = 4. op_advance = (4 - line_base) % line_range = (4 - (-5)) % 14 = 9 % 14 = 9
     *     addr_inc = (4 - line_base) / line_range = 9 / 14 = 0. So op_advance = 9, addr_inc = 0.
     *     Wait, this is wrong. Let me use the standard formula:
     *     op_advance = min(opcode_base + (line_inc - line_base) / line_range, 255)
     *     Actually: special_op = opcode_base + (line_inc - line_base) + line_range * addr_inc_div
     *     For line_inc=4, addr_inc=0: special_op = 9 + (4-(-5)) + 0 = 9+9 = 18 = 0x12
     *
     *   DW_LNE_set_address(0x400010): 0 9 2 <8 bytes addr>
     *   line is now 5. Target line 10. line_inc = 5.
     *   special_op = 9 + (5-(-5)) + 0 = 9+10 = 19 = 0x13
     *
     *   DW_LNE_end_sequence: 0 1 1
     *
     * Total program bytes: 3+8+1 + 3+8+1 + 3 = 27
     * Total unit: header(4+2+4+25=35) + program(27) = 62 bytes
     */
    unsigned char dline[] = {
        58,0,0,0,              /* unit_length = 58 (62 total - 4 length field) */
        2,0,                    /* version = 2 */
        25,0,0,0,               /* prologue_length = 25 */
        1,                      /* minimum_instruction_length */
        1,                      /* default_is_stmt */
        (unsigned char)251,     /* line_base = -5 (251 as unsigned = -5 as signed) */
        14,                     /* line_range */
        9,                      /* opcode_base = 9 */
        0,1,1,1,1,0,0,0,       /* standard opcode lengths */
        0,                      /* include directories: null */
        't','e','s','t','.','c',0,  /* file[1]: "test.c" */
        0,0,0,                  /* dir=0, mtime=0, size=0 (all ULEB128) */
        0,                      /* end of file table */
        /* --- Program --- */
        0,9,2,                  /* DW_LNE_set_address */
        8,0,0x40,0,0,0,0,0,     /* addr = 0x400008 */
        0x12,                    /* special opcode: line 5 */
        0,9,2,                  /* DW_LNE_set_address */
        0x10,0,0x40,0,0,0,0,0,  /* addr = 0x400010 */
        0x13,                    /* special opcode: line 10 */
        0,1,1                   /* DW_LNE_end_sequence */
    };

    /* ═══ ELF layout ═══ */
    enum { S_NULL, S_TEXT, S_SYMTAB, S_STRTAB, S_SHSTRTAB,
           S_DI, S_DA, S_DL, S_DS, S_NOTE, S_COUNT };

    /* Verified offsets: .debug_info=11chars(12bytes), .debug_abbrev=13(14),
       .debug_line=11(12), .debug_str=10(11), .note.gnu.build-id=18(19)
       Offsets: 0,1,7,15,23,33,45,59,71,82. Total=101 */
    const char *sst = "\0.text\0.symtab\0.strtab\0.shstrtab\0"
        ".debug_info\0.debug_abbrev\0.debug_line\0.debug_str\0.note.gnu.build-id\0";
    /* Name offsets: 0,1,7,15,23,33,46,60,72,83 */

    size_t eh = sizeof(Elf64_Ehdr);  /* 64 */
    size_t sh = sizeof(Elf64_Shdr);  /* 64 */

    /* fake code */
    unsigned char code[] = {0x48,0xc7,0xc0,0x3c,0,0,0,0x48,0xc7,0xc7,0,0,0,0,0x0f,0x05};
    size_t t_off = eh, t_sz = sizeof(code);

    /* symbols: 0=undef, 1=_start(0x400000), 2=main(0x400008), 3=foo(0x400010) */
    size_t sy_off = t_off + t_sz, sy_sz = 4*24;
    unsigned char sym[4*24]; memset(sym,0,sizeof(sym));
    /* _start */
    *(uint32_t*)(sym+24)=7; sym[28]=0x12; *(uint16_t*)(sym+30)=S_TEXT; *(uint64_t*)(sym+32)=0x400000; *(uint64_t*)(sym+40)=t_sz;
    /* main */
    *(uint32_t*)(sym+48)=13; sym[52]=0x12; *(uint16_t*)(sym+54)=S_TEXT; *(uint64_t*)(sym+56)=0x400008; *(uint64_t*)(sym+64)=8;
    /* foo */
    *(uint32_t*)(sym+72)=18; sym[76]=0x12; *(uint16_t*)(sym+78)=S_TEXT; *(uint64_t*)(sym+80)=0x400010; *(uint64_t*)(sym+88)=16;

    const char *systr = "\0_start\0main\0foo\0";
    size_t sso = sy_off + sy_sz, sss = 17;

    size_t doo = sso + sss,  /* .debug_info */
           aoo = doo + sizeof(dinfo),
           loo = aoo + sizeof(dab),
           soo = loo + sizeof(dline),
           noo = soo + sizeof(dst);

    /* build-id note: nhdr(12) + "GNU\0"(4) + hash(20) = 36, aligned to 4 */
    size_t nsz = 36;
    unsigned char note[36]; memset(note,0,36);
    *(uint32_t*)(note)=4; *(uint32_t*)(note+4)=20; *(uint32_t*)(note+8)=3;
    memcpy(note+12,"GNU\0",4);
    for(int i=0;i<20;i++) note[16+i]=(unsigned char)(i*17+0x42);

    size_t sho = noo + nsz;
    size_t shstr_sz = 101;  /* 1+6+8+8+10+12+14+12+11+19 = 101 */
    size_t shdo = sho + shstr_sz;
    size_t total = shdo + S_COUNT * sh;

    /* -- Write -- */
    Elf64_Ehdr e; memset(&e,0,sizeof(e));
    memcpy(e.e_ident,"\x7f""ELF",4); e.e_ident[4]=ELFCLASS64; e.e_ident[5]=ELFDATA2LSB; e.e_ident[6]=EV_CURRENT;
    e.e_type=ET_EXEC; e.e_machine=EM_X86_64; e.e_version=EV_CURRENT;
    e.e_entry=0x400000; e.e_shoff=shdo; e.e_ehsize=eh; e.e_shentsize=sh; e.e_shnum=S_COUNT; e.e_shstrndx=S_SHSTRTAB;
    wseek(f,0,&e,eh);

    wseek(f,t_off,code,t_sz);
    wseek(f,sy_off,sym,sy_sz);
    wseek(f,sso,systr,sss);
    wseek(f,doo,dinfo,sizeof(dinfo));
    wseek(f,aoo,dab,sizeof(dab));
    wseek(f,loo,dline,sizeof(dline));
    wseek(f,soo,dst,sizeof(dst));
    wseek(f,noo,note,nsz);
    wseek(f,sho,sst,shstr_sz);

    Elf64_Shdr sd[S_COUNT]; memset(sd,0,sizeof(sd));
    sd[S_TEXT]=(Elf64_Shdr){1,SHT_PROGBITS,SHF_ALLOC|SHF_EXECINSTR,0x400000,t_off,t_sz,0,0,16,0};
    sd[S_SYMTAB]=(Elf64_Shdr){7,SHT_SYMTAB,0,0,sy_off,sy_sz,S_STRTAB,2,8,24};
    sd[S_STRTAB]=(Elf64_Shdr){15,SHT_STRTAB,0,0,sso,sss,0,0,1,0};
    sd[S_SHSTRTAB]=(Elf64_Shdr){23,SHT_STRTAB,0,0,sho,shstr_sz,0,0,1,0};
    sd[S_DI]=(Elf64_Shdr){33,SHT_PROGBITS,0,0,doo,sizeof(dinfo),0,0,1,0};
    sd[S_DA]=(Elf64_Shdr){45,SHT_PROGBITS,0,0,aoo,sizeof(dab),0,0,1,0};
    sd[S_DL]=(Elf64_Shdr){59,SHT_PROGBITS,0,0,loo,sizeof(dline),0,0,1,0};
    sd[S_DS]=(Elf64_Shdr){71,SHT_PROGBITS,0,0,soo,sizeof(dst),0,0,1,0};
    sd[S_NOTE]=(Elf64_Shdr){82,SHT_NOTE,SHF_ALLOC,0,noo,nsz,0,0,4,0};
    wseek(f,shdo,sd,sizeof(sd));
    fclose(f);

    printf("Generated %s: %zu bytes, %d sections\n", out, total, S_COUNT);
    printf("  .debug_info:   %zu bytes (1 CU, main+foo)\n", sizeof(dinfo));
    printf("  .debug_abbrev: %zu bytes\n", sizeof(dab));
    printf("  .debug_line:   %zu bytes\n", sizeof(dline));
    printf("  .debug_str:    %zu bytes\n", sizeof(dst));
    printf("  main @0x400008, foo @0x400010\n");
    return 0;
}
