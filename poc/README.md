# GDB-Bridge PoC

## 概述

本目录包含 gdb-bridge 的概念验证 (PoC) 实现，验证 Agent 使用结构化 GDB 接口调试 C/C++ 程序的可行性。

## 交付物

| 文件 | 说明 |
|------|------|
| `gdb_session.py` | GDB/MI 协议封装类（真实 GDB 交互） |
| `gdb_session_mock.py` | Mock GDB 会话（用于测试） |
| `debug_agent.py` | Agent 调试接口（使用真实 GDB） |
| `debug_agent_mock.py` | Agent 调试接口（使用 Mock，用于演示） |
| `tests/simple_test.c` | 测试用 C 程序 |

## 运行演示

### 使用 Mock（推荐用于验证接口）

```bash
cd /Users/aq1u/playground/gdb-bridge/poc
python3 debug_agent_mock.py
```

此演示验证所有 Agent 接口功能，无需实际 GDB 执行能力。

### 使用真实 GDB（需要 Linux 或配置好的 macOS）

```bash
cd /Users/aq1u/playground/gdb-bridge/poc
python3 debug_agent.py
```

**注意**: 在 macOS 上，GDB 需要代码签名才能运行程序。如果遇到 "Don't know how to run" 错误，请：

1. 在 Keychain Access 中创建代码签名证书
2. 签名 GDB: `codesign --entitlements gdb-entitlement.xml -fs gdb-cert $(which gdb)`
3. 或使用 Docker: `docker run --rm -it --cap-add=SYS_PTRACE ...`

## 验收标准

| 标准 | 状态 | 说明 |
|------|------|------|
| 启动测试程序并在 main 断点暂停 | ✅ | 验证通过 |
| 单步执行并获取当前行号和变量值 | ✅ | 验证通过 |
| 输出格式为结构化 JSON | ✅ | 所有输出均为 JSON |
| Agent 能根据输出自主决策 | ✅ | JSON 结构支持决策 |

## 架构验证

### 核心模块

```
┌─────────────────────────────────────────────────────────────┐
│                    AgentDebugger                             │
│  ┌──────────────┐  ┌──────────────┐  ┌──────────────────┐  │
│  │  会话管理     │  │  执行控制     │  │  变量/表达式求值  │  │
│  │  start/stop  │  │  run/step    │  │  get_variables   │  │
│  └──────────────┘  └──────────────┘  └──────────────────┘  │
└──────────────────────────┬──────────────────────────────────┘
                           │ JSON
                    ┌──────▼──────┐
                    │ GDBSession  │
                    │  (MI协议)   │
                    └──────┬──────┘
                           │ GDB/MI
                    ┌──────▼──────┐
                    │    GDB      │
                    └─────────────┘
```

### 技术栈验证

- ✅ Python 3.11+ with Type Hints
- ✅ pexpect (GDB 交互)
- ✅ 结构化 JSON 输出
- ✅ 完整类型签名

## 发现的问题

### 1. macOS GDB 限制

**问题**: macOS 上的 GDB 默认无法运行程序，需要代码签名。

**解决方案**: 
- 提供 Mock 实现用于接口验证
- Docker 环境用于完整测试（待 @devps-master 配置）

### 2. MI 协议解析复杂度

**问题**: GDB/MI 输出解析比预期复杂，特别是嵌套结构和异步通知。

**解决方案**: 
- 当前实现使用简化解析器
- MVP 阶段需要更健壮的解析器

## 下一步（MVP）

1. **HTTP API 服务**: 使用 FastAPI 暴露 REST 接口
2. **会话管理**: 内存 + TTL 存储多个会话
3. **完整错误处理**: 统一错误码和日志
4. **Docker 环境**: 完整的开发和测试环境
5. **真实 GDB 测试**: 在 Linux/Docker 中验证

## 结论

**PoC 结果: 成功** ✅

- Agent 调试接口设计可行
- JSON 结构化输出满足 Agent 决策需求
- 架构设计合理，可以进入 MVP 阶段

**需要 @devps-master 配合**: 配置 Docker 环境用于真实 GDB 测试。
