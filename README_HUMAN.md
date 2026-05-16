# gdb-bridge — 让 AI 帮你调试程序

**一句话**: 把你的 AI 助手变成一个会调试 C/C++ 程序的工程师。

---

## 这玩意儿能干嘛？

你写了个 C++ 程序，崩了。正常流程是：
1. 开 GDB
2. 设断点
3. 一步步跟
4. 打印变量
5. 分析崩溃

这需要你知道 GDB 怎么用、怎么读寄存器、怎么看调用栈。

**有了 gdb-bridge，你的 AI 助手（Claude、Copilot）也能干这些事**。
你跟它说"我的程序崩了"，它自己就去找问题——设断点、单步、看变量、定位崩溃行。

---

## 30 秒体验

```bash
# 1. 安装
pip install -e '.[dev]'

# 2. 启动（macOS 零配置）
/usr/bin/python3 poc/lldb_agent.py

# 3. 或者启动 API 服务
uvicorn gdb_bridge.main:app
# 打开 http://localhost:8000/docs 就能看到所有接口
```

不需要装 GDB，不需要配环境——macOS 上直接用 LLDB。

---

## AI Agent 能做什么

通过 gdb-bridge，AI 可以：

| 能力 | 怎么用 |
|------|--------|
| 🎯 **设断点** | Agent 说"在第 42 行设断点" → 自动命中 |
| 👣 **单步执行** | "走一步" / "跳进这个函数" / "跳出" |
| 🔍 **看变量** | "x 的值是多少" → `{name: "x", value: "42"}` |
| 📚 **看调用栈** | "现在在哪个函数里" → 完整的调用链 |
| 💥 **分析崩溃** | 加载 core dump，自动回溯崩溃前的调用栈 |
| 🔗 **远程调试** | 连接远程服务器上的 gdbserver |
| 🧵 **多线程** | 列出所有线程、切换到指定线程 |
| 🏷️ **符号翻译** | `_Z3fooi` 自动变成 `foo(int)` |

---

## 两种接入方式

### REST API（任何 HTTP 客户端都能用）

```bash
# 创建调试会话
curl -X POST http://localhost:8000/sessions \
  -H "Content-Type: application/json" \
  -d '{"program": "./my_program"}'

# 设断点
curl -X POST http://localhost:8000/sessions/abc123/breakpoints \
  -H "Content-Type: application/json" \
  -d '{"location": "main"}'

# 运行到断点
curl -X POST http://localhost:8000/sessions/abc123/continue

# 查看变量
curl http://localhost:8000/sessions/abc123/variables/x
```

### MCP 协议（Claude 桌面版原生支持）

在 Claude Desktop 配置里加上：

```json
{
  "mcpServers": {
    "gdb-bridge": {
      "command": "python3",
      "args": ["-m", "gdb_bridge.mcp.server"]
    }
  }
}
```

然后 Claude 就自动有了 15 个调试工具，可以直接帮你调程序。

---

## 什么时候你需要这个？

- ✅ 你的程序崩了，不想手动 GDB
- ✅ 想让 AI 帮你定位 bug，不只是写代码
- ✅ 调试复杂的 C++ 模板代码（名字都被 mangle 了）
- ✅ 分析生产环境的 core dump
- ✅ 远程调试服务器上的进程
- ✅ 给你的 AI 工具链加上调试能力

---

## 当前能力一览

- **181 个测试**，全部通过
- 支持 **GDB + LLDB** 双后端
- 支持 **REST API + MCP 协议** 双入口
- **macOS 零配置**（LLDB 系统自带）
- 自研 **C 引擎**：ELF 解析、DWARF 符号、Core dump、C++ 名字翻译
- **Docker 支持**：一行命令启动完整环境

---

## 下一步

- 📖 技术细节看 [README.md](README.md)
- 🔧 AI Agent 开发看 [CLAUDE.md](CLAUDE.md)
- 👥 团队协作看 [AGENTS.md](AGENTS.md)
- 🐛 有问题提 [Issue](https://github.com/Aqiu16717/gdb-bridge/issues)
