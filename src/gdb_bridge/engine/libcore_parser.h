/*
 * libcore_parser.h — ELF Core dump parser for gdb-bridge
 *
 * Parses ELF core files (ET_CORE). Provides:
 *   - Per-thread register state (NT_PRSTATUS)
 *   - Virtual memory area (VMA) mappings (from program headers)
 *   - Basic stack walk using frame pointer chain
 *
 * Author: @c-master for gdb-bridge
 */
#ifndef LIBCORE_PARSER_H
#define LIBCORE_PARSER_H

#include "libelf_utils.h"
#include <stdint.h>

/* ── Note types ── */
#define NT_PRSTATUS  1   /* prstatus_t — register state */
#define NT_PRPSINFO  3   /* prpsinfo_t — process info */
#define NT_AUXV      6   /* auxiliary vector */
#define NT_FPREGSET  2   /* FPU register state */

/* ── x86_64 register context (from sys/user.h, prstatus_t) ── */
typedef struct {
    uint64_t r15, r14, r13, r12, rbp, rbx, r11, r10;
    uint64_t r9, r8, rax, rcx, rdx, rsi, rdi, orig_rax;
    uint64_t rip, cs, eflags, rsp, ss;
    uint64_t fs_base, gs_base, ds, es, fs, gs;
} core_x86_64_regs_t;

/* ── ARM64 register context ── */
typedef struct {
    uint64_t regs[31];  /* x0-x30 */
    uint64_t sp, pc, pstate;
} core_arm64_regs_t;

/* ── Thread info ── */
typedef struct {
    uint32_t tid;
    /* Register state — architecture-specific */
    union {
        core_x86_64_regs_t x86_64;
        core_arm64_regs_t  arm64;
    } regs;
    uint16_t arch;  /* EM_X86_64 or EM_AARCH64 */
} core_thread_t;

/* ── Memory region ── */
typedef struct {
    uint64_t vaddr;       /* virtual address start */
    uint64_t memsz;       /* size in memory */
    uint64_t offset;      /* offset in core file */
    uint64_t filesz;      /* size in file (may be < memsz for sparse) */
    uint32_t flags;       /* PF_R=4, PF_W=2, PF_X=1 */
} core_vma_t;

/* ── Opaque handle ── */
typedef struct core_handle core_handle_t;

/* ── API ── */

core_handle_t *core_open(elf_handle_t *elf);
void core_close(core_handle_t *core);
const char *core_error(core_handle_t *core);

/* Thread state */
uint32_t core_thread_count(core_handle_t *core);
const core_thread_t *core_get_thread(core_handle_t *core, uint32_t idx);

/* Memory regions (from LOAD program headers) */
uint32_t core_vma_count(core_handle_t *core);
const core_vma_t *core_get_vma(core_handle_t *core, uint32_t idx);

/* Stack walk: given a thread and VMA list, produce a call chain.
 * Returns number of frames, max 128. Fills `frames` with return addresses. */
uint32_t core_stack_walk(core_handle_t *core, const core_thread_t *thread,
                         uint64_t *frames, uint32_t max_frames);

/* Convenience: get the stack pointer for a thread */
uint64_t core_get_sp(core_handle_t *core, const core_thread_t *thread);

/* Convenience: get the instruction pointer for a thread */
uint64_t core_get_ip(core_handle_t *core, const core_thread_t *thread);

#endif /* LIBCORE_PARSER_H */
