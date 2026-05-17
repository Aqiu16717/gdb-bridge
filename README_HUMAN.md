# gdb-bridge — 让 AI 帮你调试程序

**一句话**: 把你的 AI 助手变成一个会调试 C/C++ 程序的工程师。

---

## 这玩意儿能干嘛？

你写了个 C++ 程序，崩了。正常流程是：
1. 开 GDB / LLDB
2. 设断点
3. 一步步跟
4. 打印变量
5. 分析崩溃

这需要你知道调试器怎么用、怎么读寄存器、怎么看调用栈。

**有了 gdb-bridge，你的 AI 助手（Claude、Copilot）也能干这些事**。
你跟它说"我的程序崩了"，它自己就去找问题——设断点、单步、看变量、定位崩溃行。

---

## 30 秒体验

```bash
cd /path/to/gdb-bridge

# 安装
python3 -m venv .venv && source .venv/bin/activate
pip install -e '.[dev]'
make -f src/gdb_bridge/engine/Makefile   # 编译 C 引擎 (56 tests)

# LLDB 直接跑（macOS 零配置）
/usr/bin/python3 poc/lldb_agent.py

# 或启动 HTTP API + Swagger UI
gdb-bridge
# 浏览器打开 http://localhost:8080/docs (18 个端点)
```

不需要装 GDB，不需要配环境 — macOS 上 LLDB 系统自带。

---

## AI Agent 能做什么

| 能力 | Agent 怎么操作 | 返回什么 |
|------|---------------|---------|
| 🎯 **设断点** | `POST /sessions/{id}/breakpoints` | 断点编号、位置 |
| 👣 **单步执行** | `POST /sessions/{id}/step` | 当前文件、行号、函数 |
| 🔍 **看变量** | `GET /sessions/{id}/variables/x` | `{name:"x", value:"42", type:"int"}` |
| 📚 **看调用栈** | `GET /sessions/{id}/frames` | 完整调用链 |
| 🧮 **求值表达式** | `POST /sessions/{id}/evaluate` | 计算结果 |
| 🧵 **多线程调试** | `GET /sessions/{id}/threads` | 线程列表、状态 |
| 👁️ **数据断点** | `POST /sessions/{id}/watchpoints` | 变量变化时停住 |
| 📋 **寄存器** | `GET /sessions/{id}/registers` | rip/rbp/rsp 等 |
| 💥 **Crash 分析** | `POST /sessions/{id}/load-core` | 崩溃时的完整调用栈 |
| 🏷️ **C++ 符号翻译** | 自动，无需调用 | `_Z3fooi` → `foo(int)` |
| 🔗 **远程调试** | `POST /sessions/{id}/remote-attach` | attach gdbserver/lldb-server |

---

## 两种接入方式

### REST API（任何 HTTP 客户端）

```bash
# 创建会话
curl -X POST http://localhost:8080/sessions \
  -H "Content-Type: application/json" \
  -d '{"target":{"type":"file","path":"./my_program"}}'

# 设断点
curl -X POST http://localhost:8080/sessions/{sid}/breakpoints \
  -H "Content-Type: application/json" \
  -d '{"location":"main"}'

# 看变量
curl http://localhost:8080/sessions/{sid}/variables/x
```

浏览器打开 `http://localhost:8080/docs` 看完整 Swagger UI。

### MCP 协议（Claude Desktop 原生支持）

```json
{"mcpServers": {"gdb-bridge": {"command": "python3", "args": ["-m", "gdb_bridge.mcp.server"]}}}
```

Claude 自动拥有 15 个调试工具，可以直接帮你调程序。

---

## 当前能力

- **181 tests** 全部通过（125 Python + 56 C）
- **18 REST 端点 + 15 MCP 工具**
- **GDB + LLDB** 双后端，macOS 零配置
- 自研 **C 引擎**: ELF 解析 · DWARF 索引 (v4/v5) · Core dump 分析 · C++ 名字翻译
- **Docker** 支持: `docker-compose up -d`

---

## 何时需要

- ✅ 程序崩了，不想手动 GDB/LLDB
- ✅ 想让 AI 定位 bug，不只是写代码
- ✅ 复杂 C++ 模板代码调试
- ✅ 分析生产环境 core dump
- ✅ 远程调试服务器进程
- ✅ 给 AI 工具链加调试能力
