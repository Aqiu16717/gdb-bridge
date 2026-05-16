"""
elf_bridge.py — Python ctypes wrapper for libdwarf-bridge

Zero-copy ELF parser. All ELF handle operations are read-only
and thread-safe (mmap-backed).

Usage:
    from gdb_bridge.engine.elf_bridge import ElfFile

    elf = ElfFile("path/to/binary")
    print(f"Sections: {elf.section_count}")
    main_sym = elf.find_symbol("main")
    if main_sym:
        print(f"main @ 0x{main_sym.st_value:x}")
    bid = elf.get_build_id()
    debuglink = elf.get_debuglink()
    elf.close()
"""
import ctypes
import ctypes.util
import os
import platform
from typing import Optional

# ── ELF64 C types (must match libelf_utils.h) ──

class Elf64_Ehdr(ctypes.Structure):
    _fields_ = [
        ("e_ident",      ctypes.c_ubyte * 16),
        ("e_type",       ctypes.c_uint16),
        ("e_machine",    ctypes.c_uint16),
        ("e_version",    ctypes.c_uint32),
        ("e_entry",      ctypes.c_uint64),
        ("e_phoff",      ctypes.c_uint64),
        ("e_shoff",      ctypes.c_uint64),
        ("e_flags",      ctypes.c_uint32),
        ("e_ehsize",     ctypes.c_uint16),
        ("e_phentsize",  ctypes.c_uint16),
        ("e_phnum",      ctypes.c_uint16),
        ("e_shentsize",  ctypes.c_uint16),
        ("e_shnum",      ctypes.c_uint16),
        ("e_shstrndx",   ctypes.c_uint16),
    ]

class Elf64_Shdr(ctypes.Structure):
    _fields_ = [
        ("sh_name",      ctypes.c_uint32),
        ("sh_type",      ctypes.c_uint32),
        ("sh_flags",     ctypes.c_uint64),
        ("sh_addr",      ctypes.c_uint64),
        ("sh_offset",    ctypes.c_uint64),
        ("sh_size",      ctypes.c_uint64),
        ("sh_link",      ctypes.c_uint32),
        ("sh_info",      ctypes.c_uint32),
        ("sh_addralign", ctypes.c_uint64),
        ("sh_entsize",   ctypes.c_uint64),
    ]

class Elf64_Sym(ctypes.Structure):
    _fields_ = [
        ("st_name",  ctypes.c_uint32),
        ("st_info",  ctypes.c_ubyte),
        ("st_other", ctypes.c_ubyte),
        ("st_shndx", ctypes.c_uint16),
        ("st_value", ctypes.c_uint64),
        ("st_size",  ctypes.c_uint64),
    ]

# ── Library loading ──

def _find_library() -> str:
    """Find libdwarf-bridge.{dylib,so} relative to this file or via env."""
    env_path = os.environ.get("DWARF_BRIDGE_LIB")
    if env_path and os.path.exists(env_path):
        return env_path

    # Look relative to this file: engine/build/
    engine_dir = os.path.dirname(os.path.abspath(__file__))
    build_dir = os.path.join(engine_dir, "build")

    if platform.system() == "Darwin":
        libname = "libdwarf-bridge.dylib"
    else:
        libname = "libdwarf-bridge.so"

    libpath = os.path.join(build_dir, libname)
    if os.path.exists(libpath):
        return libpath

    raise FileNotFoundError(
        f"Cannot find {libname}. Build with: make -C {engine_dir}"
    )

_lib = ctypes.CDLL(_find_library())

# ── Function signatures ──

# elf_handle_t *elf_open(const char *path)
_lib.elf_open.argtypes = [ctypes.c_char_p]
_lib.elf_open.restype = ctypes.c_void_p

# void elf_close(elf_handle_t *handle)
_lib.elf_close.argtypes = [ctypes.c_void_p]
_lib.elf_close.restype = None

# const char *elf_error(elf_handle_t *handle)
_lib.elf_error.argtypes = [ctypes.c_void_p]
_lib.elf_error.restype = ctypes.c_char_p

# const Elf64_Ehdr *elf_get_header(elf_handle_t *handle)
_lib.elf_get_header.argtypes = [ctypes.c_void_p]
_lib.elf_get_header.restype = ctypes.POINTER(Elf64_Ehdr)

# int elf_is_valid(elf_handle_t *handle)
_lib.elf_is_valid.argtypes = [ctypes.c_void_p]
_lib.elf_is_valid.restype = ctypes.c_int

# uint16_t elf_section_count(elf_handle_t *handle)
_lib.elf_section_count.argtypes = [ctypes.c_void_p]
_lib.elf_section_count.restype = ctypes.c_uint16

# const Elf64_Shdr *elf_section_by_name(elf_handle_t *handle, const char *name)
_lib.elf_section_by_name.argtypes = [ctypes.c_void_p, ctypes.c_char_p]
_lib.elf_section_by_name.restype = ctypes.POINTER(Elf64_Shdr)

# const char *elf_section_name(elf_handle_t *handle, uint16_t idx)
_lib.elf_section_name.argtypes = [ctypes.c_void_p, ctypes.c_uint16]
_lib.elf_section_name.restype = ctypes.c_char_p

# const void *elf_section_data(elf_handle_t *handle, const Elf64_Shdr *shdr)
_lib.elf_section_data.argtypes = [ctypes.c_void_p, ctypes.POINTER(Elf64_Shdr)]
_lib.elf_section_data.restype = ctypes.c_void_p

# uint32_t elf_symbol_count(elf_handle_t *handle)
_lib.elf_symbol_count.argtypes = [ctypes.c_void_p]
_lib.elf_symbol_count.restype = ctypes.c_uint32

# const Elf64_Sym *elf_symbol_by_name(elf_handle_t *handle, const char *name)
_lib.elf_symbol_by_name.argtypes = [ctypes.c_void_p, ctypes.c_char_p]
_lib.elf_symbol_by_name.restype = ctypes.POINTER(Elf64_Sym)

# const char *elf_symbol_name(elf_handle_t *handle, uint32_t idx)
_lib.elf_symbol_name.argtypes = [ctypes.c_void_p, ctypes.c_uint32]
_lib.elf_symbol_name.restype = ctypes.c_char_p

# Elf64_Addr elf_symbol_value(elf_handle_t *handle, const char *name)
_lib.elf_symbol_value.argtypes = [ctypes.c_void_p, ctypes.c_char_p]
_lib.elf_symbol_value.restype = ctypes.c_uint64

# char *elf_get_build_id(elf_handle_t *handle)
_lib.elf_get_build_id.argtypes = [ctypes.c_void_p]
_lib.elf_get_build_id.restype = ctypes.c_void_p  # caller must free

# const char *elf_get_debuglink(elf_handle_t *handle)
_lib.elf_get_debuglink.argtypes = [ctypes.c_void_p]
_lib.elf_get_debuglink.restype = ctypes.c_char_p

# ── Memory management ──

# We need libc's free() to release build_id strings
_libc = ctypes.CDLL(ctypes.util.find_library("c"))
_libc.free.argtypes = [ctypes.c_void_p]
_libc.free.restype = None

# ── Constants ──

# Section types
SHT_NULL      = 0
SHT_PROGBITS  = 1
SHT_SYMTAB    = 2
SHT_STRTAB    = 3
SHT_NOTE      = 7
SHT_NOBITS    = 8
SHT_DYNSYM    = 11

# Symbol bindings
STB_LOCAL  = 0
STB_GLOBAL = 1
STB_WEAK   = 2

def ELF64_ST_BIND(info: int) -> int:
    return info >> 4

# Symbol types
STT_NOTYPE  = 0
STT_OBJECT  = 1
STT_FUNC    = 2
STT_SECTION = 3
STT_FILE    = 4

def ELF64_ST_TYPE(info: int) -> int:
    return info & 0xf

# ── Pythonic wrapper ──

class ElfFile:
    """Pythonic wrapper around libdwarf-bridge ELF handle."""

    def __init__(self, path: str):
        self._handle = _lib.elf_open(path.encode("utf-8"))
        if not self._handle:
            raise OSError(f"elf_open failed for {path}")
        if not _lib.elf_is_valid(self._handle):
            err = self.error()
            self.close()
            raise ValueError(f"Invalid ELF file: {err or 'unknown error'}")

    @property
    def _h(self) -> int:
        """Raw handle pointer."""
        return self._handle

    def close(self) -> None:
        """Release all resources. Safe to call multiple times."""
        if self._handle:
            _lib.elf_close(self._handle)
            self._handle = None

    def error(self) -> Optional[str]:
        """Return last error string, or None."""
        if not self._handle:
            return "handle closed"
        err = _lib.elf_error(self._handle)
        return err.decode("utf-8") if err else None

    @property
    def header(self) -> Elf64_Ehdr:
        """Return the ELF64 header."""
        ptr = _lib.elf_get_header(self._handle)
        if not ptr:
            raise RuntimeError(self.error() or "header access failed")
        return ptr.contents

    @property
    def is_valid(self) -> bool:
        return bool(_lib.elf_is_valid(self._handle))

    @property
    def section_count(self) -> int:
        return _lib.elf_section_count(self._handle)

    def find_section(self, name: str) -> Optional[Elf64_Shdr]:
        """Find a section by name. Returns None if not found."""
        ptr = _lib.elf_section_by_name(self._handle, name.encode("utf-8"))
        return ptr.contents if ptr else None

    def section_name(self, idx: int) -> Optional[str]:
        """Get section name by index. Returns empty string for SHT_NULL."""
        name = _lib.elf_section_name(self._handle, idx)
        if name is None:
            return None
        return name.decode("utf-8")

    @property
    def symbol_count(self) -> int:
        return _lib.elf_symbol_count(self._handle)

    def find_symbol(self, name: str) -> Optional[Elf64_Sym]:
        """Find a symbol by name. Returns None if not found."""
        ptr = _lib.elf_symbol_by_name(self._handle, name.encode("utf-8"))
        return ptr.contents if ptr else None

    def symbol_name(self, idx: int) -> Optional[str]:
        """Get symbol name by index. Returns empty string for STN_UNDEF."""
        name = _lib.elf_symbol_name(self._handle, idx)
        if name is None:
            return None
        return name.decode("utf-8")

    def symbol_value(self, name: str) -> int:
        """Get symbol value (address) by name. Returns 0 if not found."""
        return _lib.elf_symbol_value(self._handle, name.encode("utf-8"))

    def get_build_id(self) -> Optional[str]:
        """Return GNU build-id as hex string, or None."""
        ptr = _lib.elf_get_build_id(self._handle)
        if not ptr:
            return None
        result = ctypes.cast(ptr, ctypes.c_char_p).value.decode("utf-8")
        _libc.free(ptr)
        return result

    def get_debuglink(self) -> Optional[str]:
        """Return .gnu_debuglink filename, or None."""
        name = _lib.elf_get_debuglink(self._handle)
        return name.decode("utf-8") if name else None

    def __enter__(self):
        return self

    def __exit__(self, *args):
        self.close()

    def __repr__(self) -> str:
        if not self._handle:
            return "ElfFile(closed)"
        hdr = self.header
        machine_names = {62: "x86_64", 183: "aarch64", 243: "riscv"}
        mach = machine_names.get(hdr.e_machine, f"0x{hdr.e_machine:x}")
        return (f"ElfFile({mach}, {self.section_count} sections, "
                f"{self.symbol_count} symbols)")
