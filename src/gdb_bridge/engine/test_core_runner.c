/*
 * test_core_runner.c — Validate libcore_parser against test_core.bin
 */
#include "libcore_parser.h"
#include "libelf_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int run = 0, pass = 0;
#define T(n) do { run++; printf("  [%d] %s ... ", run, n); } while(0)
#define P()  do { pass++; printf("PASS\n"); } while(0)
#define F(m,...) do { printf("FAIL: " m "\n", ##__VA_ARGS__); } while(0)

int main(int c, char **v) {
    if (c<2) { fprintf(stderr,"Usage: %s <test_core.bin>\n",v[0]); return 1; }
    const char *path = v[1];

    printf("=== libcore_parser Test Suite ===\n\n");

    T("Open ELF core file");
    elf_handle_t *elf = elf_open(path);
    if (!elf || !elf_is_valid(elf)) { F("open failed"); return 1; }
    P();

    T("Verify ET_CORE type");
    const Elf64_Ehdr *ehdr = elf_get_header(elf);
    if (ehdr->e_type != ET_CORE) F("not ET_CORE (type=%u)", ehdr->e_type);
    else P();

    T("core_open");
    core_handle_t *core = core_open(elf);
    if (!core) { F("NULL"); elf_close(elf); return 1; }
    const char *err = core_error(core);
    if (err) { F("%s", err); core_close(core); elf_close(elf); return 1; }
    P();

    T("Thread count");
    uint32_t nt = core_thread_count(core);
    if (nt < 1) F("no threads"); else P();

    T("Get thread 0");
    const core_thread_t *t = core_get_thread(core, 0);
    if (!t) F("NULL"); else P();

    T("Thread arch");
    if (t->arch != EM_X86_64) F("not x86_64: %u", t->arch); else P();

    T("Thread tid");
    if (t->tid != 1234) F("tid mismatch: %u", t->tid); else P();

    T("Register: rip = 0x400010");
    uint64_t ip = core_get_ip(core, t);
    if (ip != 0x400010) F("rip=0x%llx", (unsigned long long)ip); else P();

    T("Register: rsp = 0x7ffffff0");
    if (t->regs.x86_64.rsp != 0x7ffffff0) F("rsp mismatch: 0x%llx", (unsigned long long)t->regs.x86_64.rsp); else P();

    T("VMA count >= 1");
    uint32_t nv = core_vma_count(core);
    if (nv < 1) F("no VMAs"); else P();

    T("VMA[0] covers stack");
    int found_stack = 0;
    for (uint32_t i = 0; i < nv; i++) {
        const core_vma_t *v = core_get_vma(core, i);
        if (v->vaddr == 0x7fff0000) { found_stack = 1; break; }
    }
    if (!found_stack) F("stack VMA not found"); else P();

    T("Stack walk");
    uint64_t frames[128];
    uint32_t nframes = core_stack_walk(core, t, frames, 128);
    printf("(%u frames) ", nframes);
    if (nframes < 3) F("too few frames: %u", nframes);
    else if (frames[0] != 0x400010) F("frame[0] mismatch: 0x%llx", (unsigned long long)frames[0]);
    else {
        /* Verify ret addresses: should see 0x400020 (foo) and 0x400030 (bar) */
        int saw_foo = 0, saw_bar = 0;
        for (uint32_t i = 0; i < nframes; i++) {
            if (frames[i] == 0x400020) saw_foo = 1;
            if (frames[i] == 0x400030) saw_bar = 1;
        }
        if (!saw_foo) F("foo (0x400020) not in call chain");
        else if (!saw_bar) F("bar (0x400030) not in call chain");
        else P();
    }

    T("core_get_thread OOB → NULL");
    if (core_get_thread(core, 999) != NULL) F("should be NULL"); else P();

    T("core_close");
    core_close(core);
    elf_close(elf);
    P();

    printf("\n=== Results: %d/%d tests passed ===\n", pass, run);
    return (pass == run) ? 0 : 1;
}
