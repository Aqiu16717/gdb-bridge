# gdb-bridge — 让 AI 帮你调试程序

**一句话**: 把你的 AI 助手变成一个会调试 C/C++ 程序的工程师。

---

## 这玩意儿能干嘛？

你写了个 C++ 程序，崩了。正常流程是手动开 GDB、设断点、一步步跟。这需要你知道调试器怎么用。

**有了 gdb-bridge，你的 AI 助手（Claude、Copilot）也能干这些事**。跟它说"我的程序崩了"，它自己就去找问题。

---

## 30 秒体验

```bash
# 安装
cd /path/to/gdb-bridge
pip install -e '.[dev]'

# macOS — LLDB 原生，零配置
/usr/bin/python3 poc/lldb_agent.py

# 任何平台 — Mock 演示（无需调试器）
python3 poc/debug_agent_mock.py

# HTTP API + Swagger UI
uvicorn gdb_bridge.main:app --reload
# → http://localhost:8080/docs
```

---

## AI Agent 能做什么

| 能力 | Agent 怎么用 |
|------|-------------|
| 🎯 设断点 | "在第 42 行设断点" → 自动命中 |
| 👣 单步执行 | "走一步" / "跳进函数" / "跳出" |
| 🔍 看变量 | "x 是多少" → `{name: "x", value: 42, type: "int"}` |
| 📚 调用栈 | "现在在哪个函数" → 完整调用链 |
| 🧵 多线程 | 列出线程、切换线程 |
| 💾 数据断点 | "监视这个变量什么时候被修改" |
| 📊 寄存器 | 查看 CPU 寄存器 |
| 💥 崩溃分析 | 加载 core dump → 自动回溯 |
| 🔗 远程调试 | 连接 gdbserver / lldb-server |
| 🏷️ 符号翻译 | `_Z3fooi` → `foo(int)` |

---

## 两种接入方式

### REST API — 任何 HTTP 客户端

```bash
curl -X POST http://localhost:8080/sessions \
  -d '{"target": {"type": "file", "path": "./my_program"}}'

curl -X POST http://localhost:8080/sessions/{id}/breakpoints \
  -d '{"location": "main"}'

curl -X POST http://localhost:8080/sessions/{id}/continue

curl http://localhost:8080/sessions/{id}/variables/x
```

16 个端点，`/docs` 打开 Swagger UI。

### MCP 协议 — Claude Desktop 原生

```json
{ "mcpServers": { "gdb-bridge": { "command": "python3", "args": ["-m", "gdb_bridge.mcp.server"] } } }
```

Claude 自动获得 15 个调试工具（10 核心 + 5 专家）。

---

## 什么时候你需要这个？

- ✅ 程序崩了，不想手动 GDB/LLDB
- ✅ 想让 AI 定位 bug，不只是写代码
- ✅ 调试复杂 C++ 模板代码
- ✅ 分析生产环境 core dump
- ✅ 远程调试服务器进程

---

## 当前能力

- **181 个测试** (125 Python + 56 C)
- **GDB + LLDB** 双后端，macOS 零配置
- **REST (16) + MCP (15)** 双协议
- 自研 **C 引擎**：ELF + DWARF + Core dump + 符号解码 (56 C tests)
- **Docker** + **13 CI jobs** (Linux + macOS)

---

- 📖 [README.md](README.md) — 技术文档
- 🔧 [CLAUDE.md](CLAUDE.md) — AI 开发指南
- 🐛 [GitHub Issues](https://github.com/Aqiu16717/gdb-bridge/issues)
