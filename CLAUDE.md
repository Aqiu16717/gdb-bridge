# CLAUDE.md

Instructions for Claude Code when working with the gdb-bridge project.

## Project

gdb-bridge is an agent-first production-grade C/C++ debugging platform.
Dual protocol (REST + MCP), triple backend (GDB + LLDB + Mock),
self-built C engine (ELF/DWARF/Core dump/C++ demangle).

- **181 tests** (125 Python + 56 C)
- **13 CI jobs** (Linux + macOS)
- https://github.com/Aqiu16717/gdb-bridge

## Setup

```bash
python3 -m venv .venv && source .venv/bin/activate
pip install -e '.[dev]'
make -C src/gdb_bridge/engine  # Build C engine
```

## Testing

```bash
# Full Python suite
PYTHONPATH=src:poc pytest tests/ -q -m "not gdb"

# C engine
make -C src/gdb_bridge/engine test
```

## Architecture

```
Agent (REST :8080) ──┐
                       ├─ DebuggerAdapter (18 methods)
Agent (MCP stdio)  ──┘   ├─ GDBService
                           ├─ LLDBService
                           └─ MockAdapter
                       ├─ C Engine (ctypes)
                           └─ libdwarf-bridge.dylib
                               ├── libelf_utils   (21 C tests)
                               ├── libdwarf_index (13 C tests)
                               ├── libcore_parser (14 C tests)
                               └── libdemangle    (8 C tests)
```

## Key conventions

- All APIs return JSON — no text parsing by agents
- Error codes: E001-E010, mapped to HTTP 400-503
- `DebuggerAdapter` (18 abstract methods) is the single source of truth
- All 3 backends implement full adapter interface — validated by parameterized tests
- C engine accessed via ctypes, zero-copy mmap
- Test before commit: add fixture → add test → verify against all backends

## Agent roles

See [AGENTS.md](AGENTS.md) for full collaboration guide.
Key contacts per domain:
- **Architecture**: @architect
- **Python**: @py_arc
- **QA**: @qa-master
- **C engine**: @c-master
- **CI/CD**: @devps-master
- **Product**: @pm-lead

## macOS

LLDB works out of the box (system Python + Xcode CLI tools):
```bash
/usr/bin/python3 poc/lldb_agent.py
```

GDB requires Docker/Linux. Use mock for local testing:
```bash
python3 poc/debug_agent_mock.py
```

## File map

```
src/gdb_bridge/
  api/        FastAPI REST (16 endpoints)
  mcp/        MCP JSON-RPC server (15 tools)
  core/       SessionManager (TTL), exceptions (E001-E010)
  services/   GDBService, LLDBService, MockAdapter, DebuggerAdapter
  models/     Pydantic v2 data models
  engine/     C shared library (elf_utils, dwarf_index, core_parser, demangle)

tests/
  unit/       56 Python unit tests
  integration/  REST + adapter + MCP tests
  fixtures/   14 C/C++ test programs

poc/          Proof-of-concept demos (mock, lldb, gdb)
docs/         Architecture + GDB/MI mapping
api/          OpenAPI 3.0 spec
```
