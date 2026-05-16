# gdb-bridge

让 GDB/LLDB 对 AI Agent 友好。

一个生产级的、Agent 友好的 C/C++ 调试中间件。双协议（REST + MCP）、三后端（GDB + LLDB + Mock）、自研 C 引擎（ELF/DWARF/Core/Demangle），让 AI Agent 能像资深工程师一样通过结构化 JSON 调试编译程序。

**181 个测试，所有阶段完成。**

## 快速开始

### 安装

```bash
cd /path/to/gdb-bridge
python3 -m venv .venv && source .venv/bin/activate
pip install -e '.[dev]'
make -f src/gdb_bridge/engine/Makefile   # 编译 C 引擎
```

### 运行

```bash
# macOS LLDB 演示（零配置，开箱即用）
/usr/bin/python3 poc/lldb_agent.py

# Mock 演示（不需要任何调试器）
python3 poc/debug_agent_mock.py

# 启动 HTTP API + Swagger UI
uvicorn gdb_bridge.main:app --reload
# → 浏览器打开 http://localhost:8080/docs

# 启动 MCP 服务（供 Claude/Copilot 调用）
python3 -m gdb_bridge.mcp.server
```

### 测试

```bash
pytest -m "not gdb" -v                    # 115 个 Python 测试
make -C src/gdb_bridge/engine test        # 56 个 C 测试
```

## 架构

```
AI Agent (REST :8080) ──┐
                          ├─ DebuggerAdapter (18 方法) ─┬─ GDBService  (GDB/MI)
AI Agent (MCP stdio)  ──┘                               ├─ LLDBService (LLDB 管道)
                                                         └─ MockAdapter (测试用)
                          ├─ C 引擎 (ctypes 调用)
                          │   └─ libdwarf-bridge.dylib
                          │       ├─ ELF 解析器   (21 测试) — 符号查找、build-id
                          │       ├─ DWARF 索引   (13 测试) — DIE 树、源码位置
                          │       ├─ Core dump    (14 测试) — 寄存器、栈回溯
                          │       └─ C++ 解名     (8 测试) — _Z3fooi → foo(int)
```

## 为什么做这个项目？

传统的 GDB/LLDB 输出是给人类看的文本，AI Agent 难以解析。gdb-bridge 做了一层翻译：

- **对 Agent**：调用 `debug_step`，收到 `{"reason": "breakpoint-hit", "location": {"file": "main.c", "line": 22}}`
- **对人类**：`curl POST /sessions` 就能开始调试，浏览器打开 Swagger UI 直接调

Agent 不需要知道 GDB/MI 协议、LLDB SB API、DWARF 格式——只需要会调 HTTP 或 MCP。

## 和竞品有什么区别？

| 能力 | 竞品 | gdb-bridge |
|------|------|------------|
| 协议 | 单一（REST 或 MCP） | **REST + MCP 双协议** |
| 调试器 | 仅 GDB | **GDB + LLDB**，macOS 零配置 |
| C 引擎 | 无 | **自研 ELF/DWARF/Core/Demangle** |
| 测试 | 很少 | **181 个测试** |
| CI | 简单 | **13 个 job**（Linux + macOS） |

## API 端点一览

| 方法 | 路径 | 说明 |
|------|------|------|
| GET | `/health` | 健康检查 |
| POST | `/sessions` | 创建调试会话 |
| GET/DELETE | `/sessions/{id}` | 查询/终止会话 |
| POST | `/sessions/{id}/continue` | 继续执行 |
| POST | `/sessions/{id}/step` | 单步（进入/跳过/跳出） |
| GET/POST/DELETE | `/sessions/{id}/breakpoints` | 断点增删查 |
| GET | `/sessions/{id}/variables/{name}` | 查看变量 |
| GET | `/sessions/{id}/frames` | 调用栈 |
| POST | `/sessions/{id}/evaluate` | 求值表达式 |
| GET | `/sessions/{id}/threads` | 线程列表 |
| POST | `/sessions/{id}/threads/{id}/select` | 切换线程 |
| POST | `/sessions/{id}/watchpoints` | 数据断点 |
| GET | `/sessions/{id}/registers` | CPU 寄存器 |
| POST | `/sessions/{id}/remote-attach` | 远程附加调试 |
| POST | `/sessions/{id}/load-core` | 加载 core dump |

## MCP 工具（15 个）

供 Claude Desktop / Copilot 使用，自动发现：`debug_start`, `debug_set_breakpoint`, `debug_run`, `debug_step`, `debug_continue`, `debug_get_variables`, `debug_get_location`, `debug_evaluate`, `debug_get_frames`, `debug_get_threads`, `debug_select_thread`, `debug_set_watchpoint`, `debug_get_registers`, `debug_load_core`, `debug_stop`

## macOS 用户注意

macOS 上的 GDB 需要代码签名才能运行程序（ptrace 限制）。推荐：

- **LLDB（推荐）**：`/usr/bin/python3 poc/lldb_agent.py` — 系统自带，零配置
- **Mock 模式**：`python3 poc/debug_agent_mock.py` — 完整流程，无需调试器
- **Docker**：`docker-compose up --build`

## 测试矩阵（181 个）

| 层 | 数量 |
|----|------|
| Python 单元测试 | 56 |
| REST API 流程 | 21 |
| 适配器接口（三后端） | 22 |
| MCP 协议 | 14 |
| DWARF ctypes | 8 |
| C ELF 引擎 | 21 |
| C DWARF 引擎 | 13 |
| C Core dump | 14 |
| C Demangle | 8 |
| 真实 GDB（Docker） | 5 |
| **总计** | **181** |

## 技术栈

- **语言**：Python 3.11+（全类型提示） + C11（引擎层）
- **协议**：REST（FastAPI）+ MCP（JSON-RPC stdio）
- **调试器**：GDB/MI（pexpect）+ LLDB（SB API，子进程模式）
- **C 引擎**：libdwarf-bridge.dylib
- **测试**：pytest + pytest-asyncio + C 单元测试
- **CI/CD**：GitHub Actions（13 jobs, Linux + macOS）

## 许可证

MIT
