# AGENTS.md — Multi-Agent Collaboration Guide for gdb-bridge

## Agent Team

| Agent | Role | Domain |
|-------|------|--------|
| @py-arch | Python Architect | REST API, MCP, DebuggerAdapter, GDB/LLDB services |
| @c-master | C Systems Engineer | ELF parser, DWARF index, core dump, demangle engine |
| @qa-master | QA Engineer | Test strategy, fixtures, coverage, bug verification |
| @devps-master | DevOps Engineer | Docker, CI/CD, deployment, infrastructure |
| @architect | Technical Architect | API contracts, module boundaries, tech decisions |
| @pm-lead | Product Manager | PRD, acceptance criteria, priorities |
| @frontend | Frontend Engineer | Web UI (future), README |
| @golang | Go Engineer | Concurrency/performance (future, on-call) |

## Collaboration Rules

1. **Respect domains** — Each agent owns their layer. @py-arch doesn't touch C engine. @c-master doesn't touch HTTP API.
2. **DebuggerAdapter is the contract** — All 3 backends (GDB/LLDB/Mock) must implement all 18 abstract methods.
3. **Tests gate merges** — @qa-master must sign off before merge. 125 Python + 56 C tests must pass.
4. **CI runs on PR** — @devps-master manages 13-job pipeline (lint → test → docker → deploy).
5. **API changes need @architect review** — OpenAPI spec is the source of truth.
6. **Atomic commits** — One module per commit, clear messages, feature branches.
7. **Update README after major changes** — @pm-lead enforces this.
8. **No premature optimization** — Profile before optimizing, C engine is on-demand.

## Project Files Agent Should Know

| File | Purpose |
|------|---------|
| `api/openapi.yaml` | REST API contract (source of truth) |
| `src/gdb_bridge/services/debug_adapter.py` | Abstract interface (18 methods) |
| `src/gdb_bridge/models/errors.py` | Error codes E001-E010 |
| `src/gdb_bridge/core/session_manager.py` | Session lifecycle with TTL |
| `src/gdb_bridge/engine/Makefile` | C engine build + test |
| `poc/lldb_agent.py` | macOS LLDB PoC (zero config) |
| `tests/integration/test_adapter_interface.py` | Parameterized adapter tests |
| `pyproject.toml` | Python project config + pytest settings |
| `.github/workflows/ci.yml` | CI pipeline (13 jobs) |

## Commit Conventions

```
<type>: <description>
# e.g.
feat: Add watchpoint support to DebuggerAdapter
fix: Remove os.chdir() concurrency bug
test: Add parameterized thread tests
docs: Update README with MCP dual-protocol
```

Types: `feat`, `fix`, `test`, `docs`, `refactor`, `chore`

## Quick Reference

```bash
# Python tests
pytest -m "not gdb" -v --ignore=tests/fixtures

# C engine tests
make -C src/gdb_bridge/engine test

# All tests
pytest -m "not gdb" -v --ignore=tests/fixtures && make -C src/gdb_bridge/engine test
```
