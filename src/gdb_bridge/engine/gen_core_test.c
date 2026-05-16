/*
 * gen_core_test.c — Generate a minimal ELF64 core dump for testing
 *
 * Creates test_core.bin with:
 *   - ET_CORE type
 *   - PT_NOTE segment: NT_PRSTATUS (x86_64 registers)
 *   - PT_LOAD segment: fake stack with frame pointer chain
 *   - Stack walkable: _start → main → foo → bar (4 frames)
 */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#define EI_NIDENT 16
#define ELFCLASS64 2
#define ELFDATA2LSB 1
#define EV_CURRENT 1
#define ET_CORE 4
#define EM_X86_64 62
#define PT_LOAD 1
#define PT_NOTE 4
#define PF_R 4
#define PF_W 2
#define NT_PRSTATUS 1

typedef struct { unsigned char e_ident[16]; uint16_t e_type,e_machine; uint32_t e_version;
    uint64_t e_entry,e_phoff,e_shoff; uint32_t e_flags; uint16_t e_ehsize,e_phentsize,e_phnum,e_shentsize,e_shnum,e_shstrndx; } Elf64_Ehdr;
typedef struct { uint32_t p_type,p_flags; uint64_t p_offset,p_vaddr,p_paddr,p_filesz,p_memsz,p_align; } Elf64_Phdr;
typedef struct { uint32_t n_namesz,n_descsz,n_type; } Elf64_Nhdr;

/* prstatus_t layout (from Linux kernel):
 *   offset 0:  si_signo(4) si_code(4) si_errno(4) = 12 bytes
 *   12: pr_cursig(2) + padding(2) = 4
 *   16: pr_sigpend(8)
 *   24: pr_sighold(8)
 *   32: pr_pid(4) pr_ppid(4) pr_pgrp(4) pr_sid(4) = 16
 *   48: pr_utime (8+8=16 timeval)
 *   64: pr_stime (16)
 *   80: pr_cutime (16)
 *   96: pr_cstime (16)
 *   112: pr_reg (216 bytes for x86_64) = r15..gs
 * Total prstatus_t size: 112 + 216 = 328
 */
typedef struct __attribute__((packed)) {
    uint64_t r15, r14, r13, r12, rbp, rbx;
    uint64_t r11, r10, r9, r8;
    uint64_t rax, rcx, rdx, rsi, rdi, orig_rax;
    uint64_t rip, cs, eflags, rsp, ss;
    uint64_t fs_base, gs_base;
    uint32_t ds, es, fs, gs;
} x86_64_pr_reg;

static void wseek(FILE *f, long off, const void *d, size_t n) {
    fseek(f,off,SEEK_SET); fwrite(d,n,1,f);
}

int main(int c, char **v) {
    const char *out = (c>1)?v[1]:"test_core.bin";
    FILE *f = fopen(out,"wb"); if(!f){perror("fopen");return 1;}

    /* ═══ Fake stack with frame pointer chain ═══
     * Stack layout (grows downward):
     *   0x7fff0000: [rbp=0x7fff0010] [ret=main    @0x400010]
     *   0x7fff0010: [rbp=0x7fff0020] [ret=foo     @0x400020]
     *   0x7fff0020: [rbp=0x7fff0030] [ret=bar     @0x400030]
     *   0x7fff0030: [rbp=0x0]        [ret=0x0]
     *
     * With the frame at 0x7fff0020 being "current" (rbp=0x7fff0020, rsp=0x7fff0018)
     * Wait — stack grows down. So:
     *   0x7fff0038: rbp=0 (terminator) + ret=0
     *   0x7fff0028: rbp=0x7fff0038 + ret=bar (0x400030)
     *   0x7fff0018: rbp=0x7fff0028 + ret=foo (0x400020)
     *   0x7fff0008: rbp=0x7fff0018 + ret=main (0x400010)
     *   0x7ffffff8: rbp=0x7fff0008 + ret=_start (0x400000) — but _start is the start
     *
     * Actually, let's keep it simple. Stack at 0x7fff0000:
     *   +0x00: saved_rbp = 0x7fff0020  (→ foo's frame)
     *   +0x08: ret_addr  = 0x400010    (main)
     *   +0x10: padding
     *   +0x18: end of main's frame
     *   +0x20: saved_rbp = 0x7fff0040  (→ bar's frame)
     *   +0x28: ret_addr  = 0x400020    (foo)
     *   +0x38: end
     *   +0x40: saved_rbp = 0x0         (terminator)
     *   +0x48: ret_addr  = 0x400030    (bar)
     */
    unsigned char stack[0x60];
    memset(stack, 0, sizeof(stack));
    /* Frame 1: main */
    *(uint64_t*)(stack+0x00) = 0x7fff0020;  /* saved rbp → foo's frame */
    *(uint64_t*)(stack+0x08) = 0x400010;    /* ret addr = main */
    /* Frame 2: foo */
    *(uint64_t*)(stack+0x20) = 0x7fff0040;  /* saved rbp → bar's frame */
    *(uint64_t*)(stack+0x28) = 0x400020;    /* ret addr = foo */
    /* Frame 3: bar */
    *(uint64_t*)(stack+0x40) = 0x0;         /* terminator */
    *(uint64_t*)(stack+0x48) = 0x400030;    /* ret addr = bar */

    /* ═══ prstatus_t: register state ═══ */
    /* Current frame: rbp = 0x7fff0000, rip = 0x400010 (we're in main) */
    unsigned char prstatus[328];
    memset(prstatus, 0, sizeof(prstatus));
    *(uint32_t*)(prstatus+0)  = 11;   /* si_signo = SIGSEGV */
    *(uint32_t*)(prstatus+4)  = 1;    /* si_code */
    *(uint32_t*)(prstatus+12) = 11;   /* pr_cursig */
    *(uint32_t*)(prstatus+32) = 1234; /* pr_pid */
    *(uint32_t*)(prstatus+36) = 1;    /* pr_ppid */

    /* Registers at offset 112 */
    x86_64_pr_reg *regs = (x86_64_pr_reg *)(prstatus + 112);
    memset(regs, 0, sizeof(*regs));
    regs->rbp = 0x7fff0000;   /* frame pointer → main's frame */
    regs->rip = 0x400010;     /* instruction pointer → main */
    regs->rsp = 0x7ffffff0;   /* stack pointer (above current frame) */
    regs->rax = 0xdeadbeef;
    regs->rbx = 0xcafebabe;

    /* ═══ NT_PRSTATUS note ═══ */
    /* Note: n_namesz=5("CORE\0" padded to 4), n_descsz=328 */
    unsigned char note[1024];
    memset(note, 0, sizeof(note));
    Elf64_Nhdr *nhdr = (Elf64_Nhdr *)note;
    nhdr->n_namesz = 5;
    nhdr->n_descsz = 328;
    nhdr->n_type   = NT_PRSTATUS;
    memcpy(note + sizeof(Elf64_Nhdr), "CORE\0", 5);
    memcpy(note + sizeof(Elf64_Nhdr) + 8, prstatus, 328);
    size_t note_sz = sizeof(Elf64_Nhdr) + 8 + 328;  /* name padded to 8, desc aligned */

    /* ═══ ELF layout ═══ */
    size_t eh_sz = sizeof(Elf64_Ehdr);    /* 64 */
    size_t ph_sz = sizeof(Elf64_Phdr);    /* 56 */

    /* 2 program headers + note + stack data */
    size_t ph_off = eh_sz;
    size_t note_off = ph_off + 2 * ph_sz;
    size_t stack_off = note_off + note_sz;
    size_t total = stack_off + sizeof(stack);

    /* ── ELF header ── */
    Elf64_Ehdr eh; memset(&eh,0,sizeof(eh));
    memcpy(eh.e_ident,"\x7f""ELF",4);
    eh.e_ident[4]=ELFCLASS64; eh.e_ident[5]=ELFDATA2LSB; eh.e_ident[6]=EV_CURRENT;
    eh.e_type=ET_CORE; eh.e_machine=EM_X86_64; eh.e_version=EV_CURRENT;
    eh.e_phoff=ph_off; eh.e_phentsize=ph_sz; eh.e_phnum=2;
    wseek(f,0,&eh,eh_sz);

    /* ── Program header 0: PT_NOTE ── */
    Elf64_Phdr ph;
    memset(&ph,0,sizeof(ph));
    ph.p_type=PT_NOTE; ph.p_offset=note_off; ph.p_vaddr=0;
    ph.p_filesz=note_sz; ph.p_memsz=note_sz; ph.p_align=8;
    wseek(f,ph_off,&ph,ph_sz);

    /* ── Program header 1: PT_LOAD (stack) ── */
    ph.p_type=PT_LOAD; ph.p_flags=PF_R|PF_W;
    ph.p_offset=stack_off; ph.p_vaddr=0x7fff0000;
    ph.p_filesz=sizeof(stack); ph.p_memsz=sizeof(stack); ph.p_align=0x1000;
    wseek(f,ph_off+ph_sz,&ph,ph_sz);

    /* ── Data ── */
    wseek(f,note_off,note,note_sz);
    wseek(f,stack_off,stack,sizeof(stack));
    fclose(f);

    printf("Generated %s: %zu bytes\n", out, total);
    printf("  Thread: tid=1234, rip=0x400010, rbp=0x7fff0000\n");
    printf("  Stack: 3 frames (_start←main←foo←bar)\n");
    printf("  VMA: 0x7fff0000-0x7fff0060 RW\n");
    return 0;
}
