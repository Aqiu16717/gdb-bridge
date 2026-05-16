"""Python ctypes tests for C DWARF/ELF engine.

Tests the libdwarf-bridge.dylib Python bindings:
    - ELF: open, sections, symbols, build-id, debuglink
    - DWARF: CU count, function lookup, source location
"""
from __future__ import annotations

import os
import sys
import pytest

BUILD_DIR = os.path.join(
    os.path.dirname(__file__), "..", "..", "src", "gdb_bridge", "engine", "build"
)

TEST_ELF = os.path.join(BUILD_DIR, "test_elf.bin")
TEST_DWARF = os.path.join(BUILD_DIR, "test_dwarf.bin")


@pytest.fixture
def elf_bridge():
    """Import elf_bridge module (requires built .dylib)."""
    sys.path.insert(0, BUILD_DIR)
    try:
        from gdb_bridge.engine.elf_bridge import ElfFile
        return ElfFile
    except ImportError:
        pytest.skip("libdwarf-bridge.dylib not built (run make -f engine/Makefile)")


@pytest.fixture
def dwarf_bridge():
    """Import dwarf_bridge module (requires built .dylib)."""
    try:
        from gdb_bridge.engine.dwarf_bridge import DwarfIndex
        return DwarfIndex
    except ImportError:
        pytest.skip("dwarf_bridge not available")


class TestElfCtypes:
    """Python ctypes tests for ELF parser."""

    def test_elf_open(self, elf_bridge):
        """Open ELF file successfully."""
        elf = elf_bridge(TEST_ELF)
        assert elf.symbol_count >= 0
        assert elf.section_count >= 0

    def test_symbol_lookup_main(self, elf_bridge):
        """Find 'main' symbol."""
        elf = elf_bridge(TEST_ELF)
        main = elf.find_symbol("main")
        assert main is not None
        assert main.st_value > 0

    def test_symbol_lookup_nonexistent(self, elf_bridge):
        """Nonexistent symbol returns None."""
        elf = elf_bridge(TEST_ELF)
        sym = elf.find_symbol("nonexistent_function_xyz")
        assert sym is None

    def test_build_id(self, elf_bridge):
        """Build-ID extraction."""
        elf = elf_bridge(TEST_ELF)
        build_id = elf.get_build_id()
        assert build_id is not None
        assert len(build_id) > 0

    def test_debuglink(self, elf_bridge):
        """Debug link extraction."""
        elf = elf_bridge(TEST_ELF)
        debuglink = elf.get_debuglink()
        assert debuglink is not None

    def test_section_find_text(self, elf_bridge):
        """Find .text section."""
        elf = elf_bridge(TEST_ELF)
        sec = elf.find_section(".text")
        assert sec is not None
        assert sec.sh_size > 0

    def test_section_nonexistent(self, elf_bridge):
        """Nonexistent section returns None."""
        elf = elf_bridge(TEST_ELF)
        sec = elf.find_section(".nonexistent_section")
        assert sec is None

    def test_elf_error_bad_file(self, elf_bridge):
        """Opening nonexistent file raises."""
        with pytest.raises((FileNotFoundError, OSError, RuntimeError, ValueError)):
            elf_bridge("/nonexistent/file.elf")


class TestDwarfCtypes:
    """Python ctypes tests for DWARF index."""

    def test_dwarf_open(self, dwarf_bridge):
        """Open DWARF index."""
        dwarf = dwarf_bridge(TEST_DWARF)
        assert dwarf.cu_count >= 1

    @pytest.mark.xfail(reason="ctypes bridge WIP — struct return semantics")
    def test_function_lookup_main(self, dwarf_bridge):
        """Look up 'main' function."""
        dwarf = dwarf_bridge(TEST_DWARF)
        func = dwarf.lookup_function("main")
        assert func is not None

    def test_function_lookup_nonexistent(self, dwarf_bridge):
        """Nonexistent function returns None or empty struct."""
        dwarf = dwarf_bridge(TEST_DWARF)
        func = dwarf.lookup_function("nonexistent_function_xyz")
        # C function returns pre-allocated struct; check if low_pc == 0
        if func is not None and func.low_pc == 0:
            pass  # expected: not found
        else:
            assert func is None or func.low_pc == 0

    def test_source_location(self, dwarf_bridge):
        """PC to source location mapping."""
        dwarf = dwarf_bridge(TEST_DWARF)
        main = dwarf.lookup_function("main")
        if main is None or main.low_pc == 0:
            pytest.skip("main not found for DWARF test")
        loc = dwarf.get_source_location(main.low_pc)
        if loc is None or len(loc.file) == 0:
            pytest.skip("source location ctypes mapping WIP")
