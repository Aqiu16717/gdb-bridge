# gdb-bridge

<<<<<<< HEAD
Make GDB agent-friendly.

An Agent-friendly GDB debugging middleware that lets AI Agents control GDB through structured JSON interfaces.

## Status

**MVP delivered** — 10 REST endpoints, 80+ tests passing, merged to main.
=======
Make GDB/LLDB agent-friendly.

A production-grade Agent-friendly C/C++ debugging middleware with dual protocol (REST + MCP), triple backend (GDB + LLDB + Mock), and self-built C engine (ELF/DWARF/Core/Demangle).

**181 tests, all phases complete.**
>>>>>>> origin/main

## Quick Start

### Install

```bash
cd /path/to/gdb-bridge
python3 -m venv .venv && source .venv/bin/activate
pip install -e '.[dev]'
<<<<<<< HEAD
```

### Run PoC (Mock Mode)

```bash
python3 poc/debug_agent_mock.py
```

### Run HTTP API

```bash
uvicorn gdb_bridge.main:app --reload
# Open http://localhost:8080/docs for Swagger UI
```

### Run Tests

```bash
pytest -m "not gdb" -v    # Skip GDB integration tests (macOS)
pytest -m gdb -v           # GDB tests (Docker / Linux)
=======
make -f src/gdb_bridge/engine/Makefile   # Build C engine
```

### Run

```bash
# macOS LLDB PoC (zero config)
/usr/bin/python3 poc/lldb_agent.py

# Mock PoC (no debugger needed)
python3 poc/debug_agent_mock.py

# HTTP API + Swagger UI
uvicorn gdb_bridge.main:app --reload
# → http://localhost:8080/docs

# MCP Server (Claude/Copilot)
python3 -m gdb_bridge.mcp.server
```

### Test

```bash
pytest -m "not gdb" -v                    # 115 Python tests
make -C src/gdb_bridge/engine test        # 56 C tests
>>>>>>> origin/main
```

## Architecture

```
<<<<<<< HEAD
Agent (Claude/Copilot) → HTTP REST → gdb-bridge → GDB/MI → Target
```

| Layer | Module | Description |
|-------|--------|-------------|
| API | `src/gdb_bridge/api/` | FastAPI REST endpoints |
| Services | `src/gdb_bridge/services/` | GDB/MI protocol wrapper |
| Core | `src/gdb_bridge/core/` | Session manager (TTL), exceptions |
| Models | `src/gdb_bridge/models/` | Pydantic data models |

=======
Agent (REST :8080) ──┐
                       ├─ DebuggerAdapter (18 methods) ─┬─ GDBService (GDB/MI)
Agent (MCP stdio)  ──┘                                 ├─ LLDBService (LLDB pipe)
                                                        └─ MockAdapter (test)
                       ├─ C Engine (ctypes)
                       │   └─ libdwarf-bridge.dylib
                       │       ├─ ELF parser     (21 tests) — symbol lookup, build-id
                       │       ├─ DWARF index    (13 tests) — DIE tree, .debug_line
                       │       ├─ Core dump      (14 tests) — NT_PRSTATUS, stack walk
                       │       └─ Demangle       ( 8 tests) — _Z3fooi → foo(int)
```

>>>>>>> origin/main
## API Endpoints

| Method | Path | Description |
|--------|------|-------------|
| GET | `/health` | Health check |
| POST | `/sessions` | Create debug session |
| GET | `/sessions/{id}` | Get session status |
| DELETE | `/sessions/{id}` | Terminate session |
| POST | `/sessions/{id}/continue` | Continue execution |
| POST | `/sessions/{id}/step` | Step (in/over/out) |
| GET/POST/DELETE | `/sessions/{id}/breakpoints` | Breakpoint CRUD |
| GET | `/sessions/{id}/variables/{name}` | Get variable |
| GET | `/sessions/{id}/frames` | Call stack |
| POST | `/sessions/{id}/evaluate` | Evaluate expression |
<<<<<<< HEAD

## Docs

- [Architecture](docs/ARCHITECTURE.md) — System design, API contracts, tech decisions
- [GDB/MI Mapping](docs/GDB_MI_MAPPING.md) — API ↔ GDB/MI command reference
- [PoC Plan](docs/POC_PLAN.md) — PoC scope and acceptance criteria
- [API Spec](api/openapi.yaml) — OpenAPI 3.0 definition
=======
| GET | `/sessions/{id}/threads` | List threads |
| POST | `/sessions/{id}/threads/{id}/select` | Select thread |
| POST | `/sessions/{id}/watchpoints` | Set data watchpoint |
| GET | `/sessions/{id}/registers` | Get CPU registers |
| POST | `/sessions/{id}/remote-attach` | Attach to gdbserver/lldb-server |
| POST | `/sessions/{id}/load-core` | Load core dump |

## MCP Tools (15)

For Claude Desktop / Copilot: `debug_start`, `debug_set_breakpoint`, `debug_run`, `debug_step`, `debug_continue`, `debug_get_variables`, `debug_get_location`, `debug_evaluate`, `debug_get_frames`, `debug_get_threads`, `debug_select_thread`, `debug_set_watchpoint`, `debug_get_registers`, `debug_load_core`, `debug_stop`
>>>>>>> origin/main

## Project Structure

```
gdb-bridge/
├── src/gdb_bridge/       # Python package
│   ├── models/           # Pydantic data models
│   ├── core/             # Session manager, exceptions
<<<<<<< HEAD
│   ├── services/         # GDB service layer
│   └── api/              # FastAPI app + handlers
├── poc/                  # PoC validation code
├── tests/
│   ├── unit/             # Unit tests (56)
│   ├── integration/      # Integration tests (21)
│   └── fixtures/         # C test programs
├── docs/                 # Documentation
├── api/                  # OpenAPI spec
├── Dockerfile            # Multi-stage build (Python 3.11 + GDB)
=======
│   ├── services/         # DebuggerAdapter + GDB/LLDB/Mock backends
│   ├── api/              # FastAPI REST handlers
│   ├── mcp/              # MCP JSON-RPC server
│   └── engine/           # C engine (elf_utils, dwarf_index, core_parser, demangle)
├── poc/                  # PoC validation code
├── tests/
│   ├── unit/             # Unit tests (56)
│   ├── integration/      # Integration tests (adapter, API flows, MCP)
│   └── fixtures/         # 14 C/C++ test programs
├── docs/                 # Architecture docs
├── Dockerfile            # Multi-stage build (GDB + LLDB + C engine)
>>>>>>> origin/main
├── docker-compose.yml    # Local dev environment
├── pyproject.toml        # Package metadata + tool config
└── pytest.ini            # Pytest configuration
```

<<<<<<< HEAD
## macOS Note

GDB on macOS requires code signing to run programs (ptrace restriction). Use one of:

- **Mock mode**: `python3 poc/debug_agent_mock.py` (full flow, no GDB needed)
- **Docker**: `docker-compose up --build && docker exec -it gdb-bridge bash`
- **Linux**: Works out of the box

## Tech Stack

- **Language**: Python 3.11+ with full type hints
- **Framework**: FastAPI + Uvicorn
- **GDB Interface**: GDB/MI via pexpect
- **Data Validation**: Pydantic v2
- **Testing**: pytest + pytest-asyncio + httpx
- **CI/CD**: GitHub Actions with Docker

## Contributing

- All cross-service interfaces must be reviewed by @architect
- Code must pass @qa-master test suite (≥80% coverage)
- DevOps config must follow @devps-master standards
=======
## Tests: 181 Total

| Layer | Count |
|-------|-------|
| Python unit (models/exceptions/session/api) | 56 |
| REST API flows | 21 |
| Adapter interface (GDB/LLDB/Mock) | 22 |
| MCP protocol | 14 |
| DWARF ctypes | 8 |
| C ELF engine | 21 |
| C DWARF engine | 13 |
| C Core dump | 14 |
| C Demangle | 8 |
| Real GDB (Docker) | 5 |
| **Total** | **181** |

## macOS Note

GDB on macOS requires code signing (ptrace restriction). Use:

- **LLDB PoC (macOS native)**: `/usr/bin/python3 poc/lldb_agent.py` — LLDB bundled with Xcode, zero config
- **Mock mode**: `python3 poc/debug_agent_mock.py` (full flow, no debugger needed)
- **Docker**: `docker-compose up --build && docker exec -it gdb-bridge bash`
- **Linux**: GDB works out of the box

## Tech Stack

- **Language**: Python 3.11+ (full type hints) + C11 (engine)
- **Protocol**: REST (FastAPI) + MCP (JSON-RPC stdio)
- **Backends**: GDB/MI (pexpect) + LLDB (SB API via subprocess)
- **C Engine**: libdwarf-bridge.dylib (ELF + DWARF + Core dump + Demangle)
- **Data Validation**: Pydantic v2
- **Testing**: pytest + pytest-asyncio + httpx + C unit tests
- **CI/CD**: GitHub Actions (13 jobs, Linux + macOS)
>>>>>>> origin/main

## License

MIT
