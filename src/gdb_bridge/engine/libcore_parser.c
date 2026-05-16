/*
 * libcore_parser.c — ELF Core dump parser implementation
 *
 * Parses NT_PRSTATUS notes for register state, PT_LOAD segments for
 * VMA mappings, and performs stack walking via frame pointer chain.
 *
 * Author: @c-master for gdb-bridge
 */
#include "libcore_parser.h"
#include "libelf_utils.h"

#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* ── ELF program header (minimal) ── */
typedef struct {
    uint32_t p_type;
    uint32_t p_flags;
    uint64_t p_offset;
    uint64_t p_vaddr;
    uint64_t p_paddr;
    uint64_t p_filesz;
    uint64_t p_memsz;
    uint64_t p_align;
} Elf64_Phdr;

#define PT_NULL  0
#define PT_LOAD  1
#define PT_NOTE  4

#define PF_X 1
#define PF_W 2
#define PF_R 4

/* ── ELF note header ── */
typedef struct {
    uint32_t n_namesz;
    uint32_t n_descsz;
    uint32_t n_type;
} Elf64_Nhdr_core;

/* ── Handle ── */
struct core_handle {
    elf_handle_t   *elf;
    char            error[256];

    core_thread_t  *threads;
    uint32_t        thread_count;
    core_vma_t     *vmas;
    uint32_t        vma_count;

    const char     *file_base;  /* mmap base for reading stack data */
    size_t          file_size;
    uint16_t        machine;    /* EM_X86_64 or EM_AARCH64 */
};

/* ── Helpers ── */
static void set_error(core_handle_t *c, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));

static void set_error(core_handle_t *c, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(c->error, sizeof(c->error), fmt, ap);
    va_end(ap);
}

static inline size_t align4(size_t v) { return (v + 3) & ~(size_t)3; }

/* ── Parse PT_NOTE segments for NT_PRSTATUS ── */
static int parse_notes(core_handle_t *c) {
    const Elf64_Ehdr *ehdr = elf_get_header(c->elf);
    if (!ehdr) return -1;

    /* Read program headers */
    if (ehdr->e_phoff == 0 || ehdr->e_phnum == 0) {
        set_error(c, "no program headers");
        return -1;
    }

    /* Count threads first */
    uint32_t max_threads = 0;
    const char *base = c->file_base;

    for (uint16_t i = 0; i < ehdr->e_phnum; i++) {
        const Elf64_Phdr *phdr = (const Elf64_Phdr *)((uintptr_t)base + ehdr->e_phoff + i * ehdr->e_phentsize);
        if (phdr->p_type != PT_NOTE) continue;

        const char *note_data = base + phdr->p_offset;
        const char *note_end = note_data + phdr->p_filesz;
        const char *p = note_data;

        while (p + sizeof(Elf64_Nhdr_core) <= note_end) {
            const Elf64_Nhdr_core *nhdr = (const Elf64_Nhdr_core *)((uintptr_t)p);
            if (nhdr->n_type == NT_PRSTATUS) max_threads++;
            size_t step = sizeof(Elf64_Nhdr_core) + align4(nhdr->n_namesz) + align4(nhdr->n_descsz);
            p += step;
        }
    }

    if (max_threads == 0) {
        set_error(c, "no NT_PRSTATUS notes found");
        return -1;
    }

    c->threads = calloc(max_threads, sizeof(core_thread_t));
    if (!c->threads) return -1;

    /* Now parse threads */
    for (uint16_t i = 0; i < ehdr->e_phnum; i++) {
        const Elf64_Phdr *phdr = (const Elf64_Phdr *)((uintptr_t)base + ehdr->e_phoff + i * ehdr->e_phentsize);
        if (phdr->p_type != PT_NOTE) continue;

        const char *note_data = base + phdr->p_offset;
        const char *note_end = note_data + phdr->p_filesz;
        const char *p = note_data;

        while (p + sizeof(Elf64_Nhdr_core) <= note_end) {
            const Elf64_Nhdr_core *nhdr = (const Elf64_Nhdr_core *)((uintptr_t)p);
            const char *name = p + sizeof(Elf64_Nhdr_core);
            const char *desc = name + align4(nhdr->n_namesz);

            if (nhdr->n_type == NT_PRSTATUS && nhdr->n_namesz >= 5
                && memcmp(name, "CORE", 4) == 0) {

                core_thread_t *t = &c->threads[c->thread_count];

                /* prstatus_t starts with: si_signo(4) si_code(4) si_errno(4)
                 * then pr_cursig(2) pr_sigpend(8) pr_sighold(8)
                 * then pr_pid(4) pr_ppid(4) pr_pgrp(4) pr_sid(4)
                 * then pr_utime(16) pr_stime(16) pr_cutime(16) pr_cstime(16)
                 * then pr_reg (register struct)
                 *
                 * On x86_64: offset to pr_reg = 112 bytes
                 * On ARM64: offset to pr_reg = 112 bytes (similar layout)
                 */
                const char *regs = desc + 112;  /* offset to pr_reg in prstatus_t */

                if (c->machine == EM_X86_64 && nhdr->n_descsz >= 112 + sizeof(core_x86_64_regs_t)) {
                    t->arch = EM_X86_64;
                    memcpy(&t->regs.x86_64, regs, sizeof(core_x86_64_regs_t));
                    memcpy(&t->tid, desc + 32, 4);  /* pr_pid at offset 32 */
                } else if (c->machine == EM_AARCH64 && nhdr->n_descsz >= 112 + sizeof(core_arm64_regs_t)) {
                    t->arch = EM_AARCH64;
                    memcpy(&t->regs.arm64, regs, sizeof(core_arm64_regs_t));
                    memcpy(&t->tid, desc + 32, 4);  /* pr_pid at offset 32 */
                } else {
                    /* unknown arch or too small — skip */
                    p += sizeof(Elf64_Nhdr_core) + align4(nhdr->n_namesz) + align4(nhdr->n_descsz);
                    continue;
                }
                c->thread_count++;
            }

            size_t step = sizeof(Elf64_Nhdr_core) + align4(nhdr->n_namesz) + align4(nhdr->n_descsz);
            p += step;
        }
    }

    return 0;
}

/* ── Parse PT_LOAD segments for VMA mappings ── */
static int parse_vmas(core_handle_t *c) {
    const Elf64_Ehdr *ehdr = elf_get_header(c->elf);
    if (!ehdr) return -1;

    uint32_t max_vmas = ehdr->e_phnum;
    c->vmas = calloc(max_vmas, sizeof(core_vma_t));
    if (!c->vmas) return -1;

    const char *base = c->file_base;

    for (uint16_t i = 0; i < ehdr->e_phnum; i++) {
        const Elf64_Phdr *phdr = (const Elf64_Phdr *)((uintptr_t)base + ehdr->e_phoff + i * ehdr->e_phentsize);
        if (phdr->p_type != PT_LOAD) continue;

        core_vma_t *v = &c->vmas[c->vma_count++];
        v->vaddr  = phdr->p_vaddr;
        v->memsz  = phdr->p_memsz;
        v->offset = phdr->p_offset;
        v->filesz = phdr->p_filesz;
        v->flags  = phdr->p_flags;
    }

    return 0;
}

/* ── Public API ── */

core_handle_t *core_open(elf_handle_t *elf) {
    if (!elf || !elf_is_valid(elf)) return NULL;

    core_handle_t *c = calloc(1, sizeof(core_handle_t));
    if (!c) return NULL;

    c->elf = elf;

    const Elf64_Ehdr *ehdr = elf_get_header(elf);
    if (!ehdr || ehdr->e_type != ET_CORE) {
        set_error(c, "not an ELF core file");
        return c;
    }

    c->machine = ehdr->e_machine;

    /* ehdr is at the start of the mmap'd file — use it as file base */
    c->file_base = (const char *)ehdr;
    c->file_size = 0;  /* not tracked separately */

    if (parse_notes(c) != 0 || parse_vmas(c) != 0) {
        return c;  /* partial success, caller checks error */
    }

    return c;
}

void core_close(core_handle_t *c) {
    if (!c) return;
    free(c->threads);
    free(c->vmas);
    free(c);
}

const char *core_error(core_handle_t *c) {
    if (!c) return "null handle";
    return c->error[0] ? c->error : NULL;
}

uint32_t core_thread_count(core_handle_t *c) {
    return c ? c->thread_count : 0;
}

const core_thread_t *core_get_thread(core_handle_t *c, uint32_t idx) {
    if (!c || idx >= c->thread_count) return NULL;
    return &c->threads[idx];
}

uint32_t core_vma_count(core_handle_t *c) {
    return c ? c->vma_count : 0;
}

const core_vma_t *core_get_vma(core_handle_t *c, uint32_t idx) {
    if (!c || idx >= c->vma_count) return NULL;
    return &c->vmas[idx];
}

uint64_t core_get_sp(core_handle_t *c, const core_thread_t *t) {
    if (!c || !t) return 0;
    if (t->arch == EM_X86_64) return t->regs.x86_64.rsp;
    if (t->arch == EM_AARCH64) return t->regs.arm64.sp;
    return 0;
}

uint64_t core_get_ip(core_handle_t *c, const core_thread_t *t) {
    (void)c;
    if (!t) return 0;
    if (t->arch == EM_X86_64) return t->regs.x86_64.rip;
    if (t->arch == EM_AARCH64) return t->regs.arm64.pc;
    return 0;
}

/* ── VMA lookup helper ── */
static const core_vma_t *find_vma(core_handle_t *c, uint64_t addr) {
    for (uint32_t i = 0; i < c->vma_count; i++) {
        const core_vma_t *v = &c->vmas[i];
        if (addr >= v->vaddr && addr < v->vaddr + v->memsz) return v;
    }
    return NULL;
}

/* Read a uint64_t from the core file at the given virtual address.
 * Returns 0 on success, -1 if address not mapped. */
static int core_read64(core_handle_t *c, uint64_t vaddr, uint64_t *out) {
    const core_vma_t *v = find_vma(c, vaddr);
    if (!v) return -1;

    uint64_t file_offset = v->offset + (vaddr - v->vaddr);
    if (file_offset + 8 > v->offset + v->filesz) return -1;

    memcpy(out, c->file_base + file_offset, 8);
    return 0;
}

/* ── Stack walk (frame pointer chain) ──
 *
 * x86_64 frame layout (typical -fno-omit-frame-pointer):
 *   [rbp]  → previous rbp
 *   [rbp+8] → return address
 *
 * ARM64 frame layout (typical):
 *   [fp]   → previous fp  (x29)
 *   [fp+8] → return address (x30 saved)
 */
uint32_t core_stack_walk(core_handle_t *c, const core_thread_t *thread,
                         uint64_t *frames, uint32_t max_frames) {
    if (!c || !thread || !frames || max_frames == 0) return 0;

    uint64_t fp, ip;
    if (thread->arch == EM_X86_64) {
        fp = thread->regs.x86_64.rbp;
        ip = thread->regs.x86_64.rip;
    } else if (thread->arch == EM_AARCH64) {
        fp = thread->regs.arm64.regs[29];  /* x29 = frame pointer */
        ip = thread->regs.arm64.pc;
    } else {
        return 0;
    }

    uint32_t count = 0;
    frames[count++] = ip;

    while (count < max_frames && fp != 0) {
        /* Read return address at fp + 8 */
        uint64_t ret_addr;
        if (core_read64(c, fp + 8, &ret_addr) != 0) break;
        if (ret_addr == 0) break;

        frames[count++] = ret_addr;

        /* Read previous frame pointer at fp */
        uint64_t prev_fp;
        if (core_read64(c, fp, &prev_fp) != 0) break;
        if (prev_fp <= fp) break;  /* stack grows down, fp must increase */
        fp = prev_fp;
    }

    return count;
}
