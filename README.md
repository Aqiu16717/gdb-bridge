# gdb-bridge

Make GDB agent-friendly.

An Agent-friendly GDB debugging middleware that lets AI Agents control GDB through structured JSON interfaces.

## Status

**Phase 2 P1** — REST + MCP dual protocol, 97 tests, 3 backends (GDB/LLDB/Mock)


**MVP delivered** — 10 REST endpoints, 80+ tests passing, merged to main.

**LLDB PoC verified** — macOS native debugger, zero config, 4/4 acceptance criteria passed.

**Phase 2 started** — DebuggerAdapter abstraction, LLDB integration, production-grade C++ test fixtures.

## Quick Start

### Install

```bash
cd /path/to/gdb-bridge
python3 -m venv .venv && source .venv/bin/activate
pip install -e '.[dev]'
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
```

## Architecture

```
Agent (Claude/Copilot) → HTTP REST → gdb-bridge → GDB/MI → Target
```

| Layer | Module | Description |
|-------|--------|-------------|
| API | `src/gdb_bridge/api/` | FastAPI REST endpoints |
| Services | `src/gdb_bridge/services/` | GDB/MI + LLDB protocol wrappers |
| Core | `src/gdb_bridge/core/` | Session manager (TTL), exceptions |
| Models | `src/gdb_bridge/models/` | Pydantic data models |

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

## Docs

- [Architecture](docs/ARCHITECTURE.md) — System design, API contracts, tech decisions
- [GDB/MI Mapping](docs/GDB_MI_MAPPING.md) — API ↔ GDB/MI command reference
- [PoC Plan](docs/POC_PLAN.md) — PoC scope and acceptance criteria
- [API Spec](api/openapi.yaml) — OpenAPI 3.0 definition

## Project Structure

```
gdb-bridge/
├── src/gdb_bridge/       # Python package
│   ├── models/           # Pydantic data models
│   ├── core/             # Session manager, exceptions
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
├── docker-compose.yml    # Local dev environment
├── pyproject.toml        # Package metadata + tool config
└── pytest.ini            # Pytest configuration
```

## Roadmap

### P0 (MVP) — Complete ✅
- [x] Session management (create, query, terminate)
- [x] Breakpoint CRUD
- [x] Execution control (continue, step-in/over/out)
- [x] Variable inspection
- [x] Call stack + expression evaluation

### P1 (Phase 2) — Planned
- [ ] `DebuggerAdapter` abstract interface (unified GDB + LLDB)
- [ ] LLDB backend integration (macOS native, zero config)
- [ ] MCP Server protocol support (dual REST + MCP)
- [ ] Multi-thread debugging
- [ ] Conditional breakpoints + watchpoints

### P2 — Future
- [ ] Remote debugging (gdbserver)
- [ ] Core dump analysis
- [ ] Go rewrite (high-concurrency production)

## macOS Note

GDB on macOS requires code signing to run programs (ptrace restriction). Use one of:

- **LLDB PoC (macOS native)**: `/usr/bin/python3 poc/lldb_agent.py` — LLDB bundled with Xcode, zero config
- **Mock mode**: `python3 poc/debug_agent_mock.py` (full flow, no GDB needed)
- **Docker**: `docker-compose up --build && docker exec -it gdb-bridge bash`
- **Linux**: Works out of the box

## Tech Stack

- **Language**: Python 3.11+ with full type hints
- **Framework**: FastAPI + Uvicorn
- **Debug Backends**: GDB (GDB/MI via pexpect) + LLDB (SB API, macOS native)
- **Protocols**: REST API (current) + MCP Server (Phase 2)
- **Data Validation**: Pydantic v2
- **Testing**: pytest + pytest-asyncio + httpx
- **CI/CD**: GitHub Actions with Docker

## Contributing

- All cross-service interfaces must be reviewed by @architect
- Code must pass @qa-master test suite (≥80% coverage)
- DevOps config must follow @devps-master standards

## License

MIT
