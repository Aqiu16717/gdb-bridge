"""Python ctypes wrapper for libdwarf-bridge DWARF index.
"""
from __future__ import annotations

import ctypes
import os
from pathlib import Path

# Find the library
_BUILD_DIR = Path(__file__).parent / "build"
_LIB_NAME = "libdwarf-bridge.dylib" if os.uname().sysname == "Darwin" else "libdwarf-bridge.so"
_LIB_PATH = str(_BUILD_DIR / _LIB_NAME)

_lib = ctypes.CDLL(_LIB_PATH)

# Types
_lib.dwarf_index_open.argtypes = [ctypes.c_void_p]
_lib.dwarf_index_open.restype = ctypes.c_void_p

_lib.dwarf_index_close.argtypes = [ctypes.c_void_p]
_lib.dwarf_index_close.restype = None

_lib.dwarf_cu_count.argtypes = [ctypes.c_void_p]
_lib.dwarf_cu_count.restype = ctypes.c_int

_lib.dwarf_lookup_function.argtypes = [ctypes.c_void_p, ctypes.c_char_p, ctypes.c_void_p]
_lib.dwarf_lookup_function.restype = ctypes.c_int

_lib.dwarf_get_source_location.argtypes = [ctypes.c_void_p, ctypes.c_uint64, ctypes.c_void_p]
_lib.dwarf_get_source_location.restype = ctypes.c_int


class FunctionInfo(ctypes.Structure):
    _fields_ = [
        ("name", ctypes.c_char * 256),
        ("low_pc", ctypes.c_uint64),
        ("high_pc", ctypes.c_uint64),
        ("decl_file", ctypes.c_char * 256),
        ("decl_line", ctypes.c_uint32),
    ]


class SourceLocation(ctypes.Structure):
    _fields_ = [
        ("file", ctypes.c_char * 256),
        ("line", ctypes.c_uint32),
        ("column", ctypes.c_uint32),
    ]


class DwarfIndex:
    """DWARF debug info index via ctypes."""

    def __init__(self, path: str) -> None:
        from .elf_bridge import ElfFile
        self._elf = ElfFile(path)
        self._handle = _lib.dwarf_index_open(self._elf._handle)  # type: ignore[arg-type]
        if not self._handle:
            raise ValueError(f"Failed to open DWARF index for {path}")

    @property
    def cu_count(self) -> int:
        return _lib.dwarf_cu_count(self._handle)

    def lookup_function(self, name: str) -> FunctionInfo | None:
        """Look up a function by name. Returns None if not found."""
        func = FunctionInfo()
        if _lib.dwarf_lookup_function(self._handle, name.encode(), ctypes.byref(func)):
            return func
        return None

    def get_source_location(self, addr: int) -> SourceLocation | None:
        """Get source file/line for a PC address. Returns None if not found."""
        loc = SourceLocation()
        if _lib.dwarf_get_source_location(self._handle, addr, ctypes.byref(loc)):
            return loc
        return None

    def close(self) -> None:
        if self._handle:
            _lib.dwarf_index_close(self._handle)
            self._handle = None
