# gdb-bridge

让 GDB/LLDB 对 AI Agent 友好。

一个**生产级**的 Agent 友好 C/C++ 调试中间件。支持 REST + MCP 双协议、GDB + LLDB 双后端、自研 C 引擎（ELF/DWARF/Core Dump/符号解码）。**181 个测试，全部阶段完成。**

---

## 这是什么？

gdb-bridge 是一个翻译层：把 GDB 和 LLDB 的复杂内部协议翻译成 AI Agent 能理解的 JSON。

传统调试流程：你（人类）在终端里敲 `gdb ./a.out`、`break main`、`run`、`step`，看文本输出。

Agent 调试流程：Agent 发 HTTP 请求 `curl -X POST /sessions/.../step`，收到 JSON：

```json
{
  "status": "stopped",
  "reason": "breakpoint-hit",
  "location": {"file": "main.c", "line": 42, "function": "main"},
  "variables": [{"name": "x", "value": 10}]
}
```

Agent 根据这个 JSON 决定下一步操作，全程不需要知道 GDB/MI 协议或 LLDB 内部细节。

---

## 为什么不是玩具

大多数调试工具封装止步于 "能跑 simple_test.c"。gdb-bridge 的目标是生产环境：

- **181 个测试**（125 Python + 56 C），覆盖率 ≈80%
- **自研 C 引擎**：mmap 零拷贝 ELF/DWARF 解析，直接处理数百 MB 的调试符号
- **13 个 CI 任务**：Linux + macOS 全矩阵
- **远程调试**：gdbserver / lldb-server 透明代理
- **Core dump 分析**：离线加载崩溃现场，栈回溯定位根因
- **真实验证**：在 nlohmann/json 等真实 C++ 项目上跑通

---

## 竞品对比

| 能力 | 竞品（mcp-debugger 等） | gdb-bridge |
|------|----------------------|------------|
| 协议 | 单一（MCP 或 REST） | REST + MCP 双协议 |
| 后端 | 仅 GDB | GDB + LLDB |
| macOS | 不可用 | LLDB 零配置 |
| C 引擎 | 无 | ELF + DWARF + Core Dump + 符号解码 |
| 测试 | 少或无 | 181 tests |
| CI | 基本 | 13 jobs |

---

## 快速开始

### macOS（推荐 LLDB，零配置）

```bash
cd /path/to/gdb-bridge
/usr/bin/python3 poc/lldb_agent.py
```

### Docker（完整 GDB + LLDB 环境）

```bash
docker-compose up --build
docker exec -it gdb-bridge bash
```

### Mock 演示（无需任何调试器）

```bash
python3 poc/debug_agent_mock.py
```

### HTTP API

```bash
source .venv/bin/activate
uvicorn gdb_bridge.main:app --reload
# 浏览器打开 http://localhost:8080/docs 看 Swagger UI
```

### MCP 服务器（Claude Desktop / Copilot）

```bash
python3 -m gdb_bridge.mcp.server
```

Claude Desktop 配置：

```json
{
  "mcpServers": {
    "gdb-bridge": {
      "command": "python3",
      "args": ["-m", "gdb_bridge.mcp.server"],
      "cwd": "/path/to/gdb-bridge"
    }
  }
}
```

---

## 架构

```
Agent (REST :8080) ──┐
                       ├─ DebuggerAdapter (18 个方法) ─┬─ GDBService (GDB/MI)
Agent (MCP stdio)  ──┘                                ├─ LLDBService (LLDB pipe)
                                                       └─ MockAdapter (测试用)
                       ├─ C 引擎 (ctypes)
                       │   └─ libdwarf-bridge.dylib
                       │       ├─ ELF 解析 (21 tests)
                       │       ├─ DWARF 索引 (13 tests)
                       │       ├─ Core Dump (14 tests)
                       │       └─ 符号解码 (8 tests)
```

---

## API 端点（18 个）

| 方法 | 路径 | 说明 |
|------|------|------|
| GET | `/health` | 健康检查 |
| POST | `/sessions` | 创建调试会话 |
| GET | `/sessions/{id}` | 获取会话状态 |
| DELETE | `/sessions/{id}` | 终止会话 |
| POST | `/sessions/{id}/continue` | 继续执行 |
| POST | `/sessions/{id}/step` | 单步执行 |
| GET/POST/DELETE | `/sessions/{id}/breakpoints` | 断点 CRUD |
| GET | `/sessions/{id}/variables/{name}` | 获取变量 |
| GET | `/sessions/{id}/frames` | 调用栈 |
| POST | `/sessions/{id}/evaluate` | 表达式求值 |
| GET | `/sessions/{id}/threads` | 线程列表 |
| POST | `/sessions/{id}/threads/{id}/select` | 切换线程 |
| POST | `/sessions/{id}/watchpoints` | 数据断点 |
| GET | `/sessions/{id}/registers` | 寄存器 |
| POST | `/sessions/{id}/remote-attach` | 远程调试 |
| POST | `/sessions/{id}/load-core` | 加载 Core Dump |

---

## 测试：181 个

| 层级 | 数量 |
|------|------|
| Python 单元测试 | 56 |
| REST API 流程 | 21 |
| 适配器接口（3 后端） | 22 |
| MCP 协议 | 14 |
| DWARF ctypes | 8 |
| C ELF 引擎 | 21 |
| C DWARF 引擎 | 13 |
| C Core Dump | 14 |
| C 符号解码 | 8 |
| 真实 GDB（Docker） | 5 |
| **总计** | **181** |

---

## 项目结构

```
gdb-bridge/
├── src/gdb_bridge/
│   ├── models/           # Pydantic 数据模型
│   ├── core/             # 会话管理、异常处理
│   ├── services/         # DebuggerAdapter + GDB/LLDB/Mock 后端
│   ├── api/              # FastAPI REST 处理器
│   ├── mcp/              # MCP JSON-RPC 服务器
│   └── engine/           # C 引擎 (elf_utils, dwarf_index, core_parser, demangle)
├── poc/                  # PoC 验证代码
├── tests/
│   ├── unit/             # 单元测试
│   ├── integration/      # 集成测试
│   └── fixtures/         # 14 个 C/C++ 测试程序
├── docs/                 # 架构文档
├── CLAUDE.md             # Claude Code 项目指南
├── AGENTS.md             # 多 Agent 协作规范
└── README.zh.md          # 本文件（人类可读）
```

---

## macOS 注意事项

macOS 上 GDB 需要代码签名（ptrace 限制）。推荐使用 LLDB（Xcode 自带，零配置）。

---

## 技术栈

- **语言**：Python 3.11+（完整类型标注）+ C11（引擎）
- **协议**：REST（FastAPI）+ MCP（JSON-RPC stdio）
- **后端**：GDB/MI（pexpect）+ LLDB（SB API through subprocess）
- **C 引擎**：libdwarf-bridge.dylib（ELF + DWARF + Core Dump + 符号解码）
- **测试**：pytest + pytest-asyncio + httpx + C 单元测试
- **CI/CD**：GitHub Actions（13 个任务，Linux + macOS）

---

## 许可证

MIT
