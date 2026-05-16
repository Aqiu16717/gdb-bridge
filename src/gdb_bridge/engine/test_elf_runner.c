/*
 * test_elf_runner.c — Validate libelf_utils against generated ELF test binary
 *
 * Usage: ./test_elf_runner <test_elf.bin>
 */
#include "libelf_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int tests_run = 0;
static int tests_passed = 0;

#define TEST(name) do { \
    tests_run++; \
    printf("  [%d] %s ... ", tests_run, name); \
} while(0)

#define PASS() do { tests_passed++; printf("PASS\n"); } while(0)
#define FAIL(fmt, ...) do { \
    printf("FAIL: " fmt "\n", ##__VA_ARGS__); \
} while(0)

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <test_elf.bin>\n", argv[0]);
        return 1;
    }
    const char *path = argv[1];

    printf("=== libelf_utils Test Suite ===\n");
    printf("Test file: %s\n\n", path);

    /* ── Test: open valid ELF ── */
    TEST("elf_open (valid ELF)");
    elf_handle_t *h = elf_open(path);
    if (!h) {
        FAIL("handle is NULL");
        return 1;
    }
    if (!elf_is_valid(h)) {
        FAIL("not valid: %s", elf_error(h) ? elf_error(h) : "unknown");
        elf_close(h);
        return 1;
    }
    PASS();

    /* ── Test: header fields ── */
    TEST("ELF header — magic check");
    const Elf64_Ehdr *ehdr = elf_get_header(h);
    if (!ehdr) { FAIL("ehdr NULL"); elf_close(h); return 1; }
    if (ehdr->e_ident[EI_MAG0] != 0x7f || ehdr->e_ident[EI_MAG1] != 'E') {
        FAIL("bad magic");
        elf_close(h); return 1;
    }
    PASS();

    TEST("ELF header — class/type/machine");
    if (ehdr->e_ident[EI_CLASS] != ELFCLASS64) FAIL("not 64-bit");
    else if (ehdr->e_type != ET_EXEC) FAIL("not ET_EXEC");
    else if (ehdr->e_machine != EM_X86_64) FAIL("not EM_X86_64");
    else PASS();

    /* ── Test: section count ── */
    TEST("Section count");
    uint16_t shnum = elf_section_count(h);
    if (shnum < 7) FAIL("too few sections: %u", shnum);
    else PASS();

    /* ── Test: find sections by name ── */
    TEST("Find section .text by name");
    const Elf64_Shdr *text = elf_section_by_name(h, ".text");
    if (!text) FAIL("not found");
    else if (text->sh_type != SHT_PROGBITS) FAIL("wrong type");
    else PASS();

    TEST("Find section .data by name");
    const Elf64_Shdr *data = elf_section_by_name(h, ".data");
    if (!data) FAIL("not found");
    else PASS();

    TEST("Find section .symtab by name");
    const Elf64_Shdr *symtab_shdr = elf_section_by_name(h, ".symtab");
    if (!symtab_shdr) FAIL("not found");
    else if (symtab_shdr->sh_type != SHT_SYMTAB) FAIL("wrong type");
    else PASS();

    TEST("Find nonexistent section");
    if (elf_section_by_name(h, ".nonexistent") != NULL) FAIL("should return NULL");
    else PASS();

    /* ── Test: section names ── */
    TEST("Section name lookup");
    int name_ok = 0;
    for (uint16_t i = 0; i < shnum; i++) {
        const char *name = elf_section_name(h, i);
        if (name && strcmp(name, ".text") == 0) name_ok = 1;
    }
    if (!name_ok) FAIL("could not find .text via name lookup");
    else PASS();

    /* ── Test: section data ── */
    TEST("Section data access (.text)");
    const void *text_data = elf_section_data(h, text);
    if (!text_data) FAIL("NULL data");
    else PASS();

    /* ── Test: symbol count ── */
    TEST("Symbol count");
    uint32_t symcount = elf_symbol_count(h);
    if (symcount < 5) FAIL("too few symbols: %u", symcount);
    else PASS();

    /* ── Test: find symbols by name ── */
    TEST("Find symbol 'main' by name");
    const Elf64_Sym *main_sym = elf_symbol_by_name(h, "main");
    if (!main_sym) FAIL("not found");
    else if (ELF64_ST_TYPE(main_sym->st_info) != STT_FUNC) FAIL("not a function");
    else PASS();

    TEST("Find symbol 'foo' by name");
    const Elf64_Sym *foo_sym = elf_symbol_by_name(h, "foo");
    if (!foo_sym) FAIL("not found");
    else if (foo_sym->st_value == 0) FAIL("zero value");
    else PASS();

    TEST("Find symbol 'data_var' by name");
    const Elf64_Sym *dvar_sym = elf_symbol_by_name(h, "data_var");
    if (!dvar_sym) FAIL("not found");
    else if (ELF64_ST_TYPE(dvar_sym->st_info) != STT_OBJECT) FAIL("not an object");
    else PASS();

    TEST("Find nonexistent symbol");
    if (elf_symbol_by_name(h, "nonexistent_func") != NULL) FAIL("should return NULL");
    else PASS();

    /* ── Test: symbol names ── */
    TEST("Symbol name lookup");
    int found = 0;
    for (uint32_t i = 0; i < symcount; i++) {
        const char *sname = elf_symbol_name(h, i);
        if (sname && strcmp(sname, "_start") == 0) found = 1;
    }
    if (!found) FAIL("could not find _start via name lookup");
    else PASS();

    /* ── Test: symbol value ── */
    TEST("Symbol value convenience (foo)");
    Elf64_Addr foo_val = elf_symbol_value(h, "foo");
    if (foo_val == 0) FAIL("returned 0");
    else if (foo_val != foo_sym->st_value) FAIL("mismatch");
    else PASS();

    /* ── Test: build-id ── */
    TEST("Build-ID extraction");
    char *build_id = elf_get_build_id(h);
    if (!build_id) FAIL("not found");
    else {
        printf("(%s) ", build_id);
        if (strlen(build_id) < 6) FAIL("too short: %zu chars", strlen(build_id));
        else PASS();
        free(build_id);
    }

    /* ── Test: debug link ── */
    TEST("Debug link extraction");
    const char *debuglink = elf_get_debuglink(h);
    if (!debuglink) FAIL("not found");
    else if (strcmp(debuglink, "test_elf.debug") != 0) FAIL("wrong filename: %s", debuglink);
    else PASS();

    /* ── Test: open nonexistent file ── */
    TEST("elf_open (nonexistent file)");
    elf_handle_t *bad = elf_open("/nonexistent/path/elf.bin");
    if (!bad) FAIL("NULL handle");
    else if (elf_is_valid(bad)) FAIL("should be invalid");
    else {
        const char *err = elf_error(bad);
        if (!err) FAIL("no error message");
        else PASS();
        elf_close(bad);
    }

    /* ── Test: elf_close(NULL) ── */
    TEST("elf_close(NULL) — no crash");
    elf_close(NULL);
    PASS();

    /* ── Cleanup ── */
    elf_close(h);

    printf("\n=== Results: %d/%d tests passed ===\n", tests_passed, tests_run);
    return (tests_passed == tests_run) ? 0 : 1;
}
