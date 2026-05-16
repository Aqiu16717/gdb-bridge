/*
 * test_dwarf_runner.c — Validate libdwarf_index against test_dwarf.bin
 */
#include "libdwarf_index.h"
#include "libelf_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int run = 0, pass = 0;
#define T(n) do { run++; printf("  [%d] %s ... ", run, n); } while(0)
#define P()  do { pass++; printf("PASS\n"); } while(0)
#define F(m,...) do { printf("FAIL: " m "\n", ##__VA_ARGS__); } while(0)

int main(int c, char **v) {
    if (c<2) { fprintf(stderr,"Usage: %s <test_dwarf.bin>\n",v[0]); return 1; }
    const char *path = v[1];

    printf("=== libdwarf_index Test Suite ===\n\n");

    /* Open ELF */
    T("Open ELF with DWARF sections");
    elf_handle_t *elf = elf_open(path);
    if (!elf || !elf_is_valid(elf)) { F("ELF open failed"); return 1; }
    P();

    /* Verify DWARF sections exist */
    T(".debug_info section exists");
    if (!elf_section_by_name(elf, ".debug_info")) F("not found"); else P();

    T(".debug_abbrev section exists");
    if (!elf_section_by_name(elf, ".debug_abbrev")) F("not found"); else P();

    T(".debug_line section exists");
    if (!elf_section_by_name(elf, ".debug_line")) F("not found"); else P();

    T(".debug_str section exists");
    if (!elf_section_by_name(elf, ".debug_str")) F("not found"); else P();

    /* Open DWARF index */
    T("dwarf_index_open");
    dwarf_index_t *idx = dwarf_index_open(elf);
    if (!idx) { F("NULL"); elf_close(elf); return 1; }
    const char *err = dwarf_error(idx);
    if (err) { F("%s", err); dwarf_index_close(idx); elf_close(elf); return 1; }
    P();

    /* CU count */
    T("CU count >= 1");
    uint32_t ncu = dwarf_cu_count(idx);
    if (ncu < 1) F("count=%u", ncu); else P();

    /* Lookup main */
    T("Lookup function 'main'");
    dwarf_func_t func;
    memset(&func, 0, sizeof(func));
    int ret = dwarf_lookup_function(idx, "main", &func);
    if (ret != 0) F("not found (ret=%d)", ret);
    else if (!func.name) F("name is NULL");
    else {
        printf("(low_pc=0x%llx, high_pc=0x%llx, decl_line=%u) ",
               (unsigned long long)func.low_pc,
               (unsigned long long)func.high_pc, func.decl_line);
        if (func.low_pc != 0x400008) F("low_pc mismatch: 0x%llx", (unsigned long long)func.low_pc);
        else if (strcmp(func.name, "main") != 0) F("name mismatch: %s", func.name);
        else if (func.decl_line != 5) F("decl_line mismatch: %u", func.decl_line);
        else P();
    }

    /* Lookup foo */
    T("Lookup function 'foo'");
    memset(&func, 0, sizeof(func));
    ret = dwarf_lookup_function(idx, "foo", &func);
    if (ret != 0) F("not found (ret=%d)", ret);
    else if (func.low_pc != 0x400010) F("low_pc mismatch: 0x%llx", (unsigned long long)func.low_pc);
    else if (func.decl_line != 10) F("decl_line mismatch: %u", func.decl_line);
    else P();

    /* Lookup nonexistent */
    T("Lookup nonexistent function");
    ret = dwarf_lookup_function(idx, "nonexistent", &func);
    if (ret != -1) F("should return -1, got %d", ret); else P();

    /* Source location for main's PC */
    T("Source location for 0x400008 (main)");
    dwarf_location_t loc;
    ret = dwarf_get_source_location(idx, 0x400008, &loc);
    if (ret != 0) F("not found (ret=%d)", ret);
    else if (!loc.file) F("file is NULL");
    else {
        printf("(%s:%u) ", loc.file, loc.line);
        if (strcmp(loc.file, "test.c") != 0) F("file mismatch: %s", loc.file);
        else if (loc.line != 5) F("line mismatch: %u", loc.line);
        else P();
    }

    /* Source location for foo's PC */
    T("Source location for 0x400010 (foo)");
    ret = dwarf_get_source_location(idx, 0x400010, &loc);
    if (ret != 0) F("not found (ret=%d)", ret);
    else if (loc.line != 10) F("line mismatch: %u", loc.line);
    else P();

    /* Source location for unknown PC */
    T("Source location for unknown address");
    ret = dwarf_get_source_location(idx, 0xdeadbeef, &loc);
    /* May or may not find — just ensure no crash */
    P();

    /* Cleanup */
    dwarf_index_close(idx);
    elf_close(elf);

    printf("\n=== Results: %d/%d tests passed ===\n", pass, run);
    return (pass == run) ? 0 : 1;
}
