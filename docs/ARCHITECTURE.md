# GDB-Bridge 架构设计文档

## 1. 项目概述

### 1.1 目标
构建一个 Agent 友好的 GDB 调试中间层，让 AI Agent 能通过结构化接口控制 GDB，获得机器可读的调试信息。

### 1.2 核心问题
- GDB 输出是人类可读的文本，Agent 难以解析
- GDB/MI 协议复杂，学习成本高
- 缺乏针对 Agent 工作流的简化封装

## 2. 架构设计

### 2.1 系统架构图

```
┌─────────────────────────────────────────────────────────────────┐
│                         AI Agent                               │
│  (Claude Code / Copilot / Other Agents)                        │
└───────────────────────────────┬─────────────────────────────────┘
                                │ JSON API
                                │
┌───────────────────────────────▼─────────────────────────────────┐
│                      gdb-bridge (HTTP Server)                   │
│  ┌──────────────────┐  ┌──────────────────┐  ┌───────────────┐  │
│  │  API Handler     │  │  Session Manager │  │  GDB Adapter  │  │
│  │  (REST/gRPC)     │  │  (生命周期管理)   │  │  (MI 协议)    │  │
│  └──────────────────┘  └──────────────────┘  └───────────────┘  │
└───────────────────────────────┬─────────────────────────────────┘
                                │ GDB/MI 协议
                                │
┌───────────────────────────────▼─────────────────────────────────┐
│                          GDB Process                            │
│                    (本地 / 远程 / Docker)                        │
└─────────────────────────────────────────────────────────────────┘
```

### 2.2 模块职责

| 模块 | 职责 | 技术选型 |
|------|------|----------|
| API Handler | 接收 Agent 请求，验证参数，返回结构化响应 | HTTP REST / gRPC |
| Session Manager | 管理调试会话生命周期（创建、销毁、超时） | 内存 + 可选 Redis |
| GDB Adapter | 与 GDB MI 交互，解析异步输出 | Python pexpect / Go expect |
| Output Parser | 解析 GDB/MI 输出为 JSON | 状态机解析器 |
| Error Handler | 统一错误处理和日志记录 | 结构化日志 |

## 3. 接口契约

### 3.1 会话管理

#### POST /sessions
创建调试会话

**Request:**
```json
{
  "target": {
    "type": "file",
    "path": "/path/to/binary",
    "args": ["arg1", "arg2"],
    "env": {"KEY": "value"}
  },
  "gdb_path": "gdb",
  "working_dir": "/path/to/cwd"
}
```

**Response:**
```json
{
  "session_id": "sess_abc123",
  "status": "created",
  "target_pid": 12345,
  "created_at": "2026-05-15T10:30:00Z"
}
```

#### DELETE /sessions/{session_id}
销毁调试会话

**Response:**
```json
{
  "session_id": "sess_abc123",
  "status": "terminated"
}
```

### 3.2 执行控制

#### POST /sessions/{session_id}/continue
继续执行

**Request:**
```json
{
  "until": null  // 可选：执行到指定位置
}
```

**Response:**
```json
{
  "status": "stopped",
  "reason": "breakpoint-hit",
  "location": {
    "file": "main.c",
    "line": 42,
    "function": "main"
  },
  "thread_id": 1
}
```

#### POST /sessions/{session_id}/step
单步执行

**Request:**
```json
{
  "type": "step-in"  // step-in | step-over | step-out
}
```

**Response:** 同 continue

### 3.3 断点管理

#### POST /sessions/{session_id}/breakpoints
设置断点

**Request:**
```json
{
  "location": "main.c:42",
  "condition": "i > 10",  // 可选
  "hit_count": 5          // 可选
}
```

**Response:**
```json
{
  "breakpoint_id": 1,
  "location": "main.c:42",
  "enabled": true,
  "condition": "i > 10"
}
```

#### GET /sessions/{session_id}/breakpoints
列出所有断点

#### DELETE /sessions/{session_id}/breakpoints/{bp_id}
删除断点

### 3.4 变量查看

#### GET /sessions/{session_id}/variables/{name}
查看变量

**Query Parameters:**
- `scope`: local | global | argument
- `frame`: 栈帧索引（默认当前）

**Response:**
```json
{
  "name": "user",
  "type": "struct User *",
  "value": {
    "id": 123,
    "name": "alice",
    "active": true
  },
  "address": "0x7fff5fbff80c"
}
```

#### GET /sessions/{session_id}/frames
查看调用栈

**Response:**
```json
{
  "frames": [
    {
      "level": 0,
      "function": "process_user",
      "file": "user.c",
      "line": 25,
      "address": "0x100001234"
    },
    {
      "level": 1,
      "function": "main",
      "file": "main.c",
      "line": 42
    }
  ]
}
```

### 3.5 表达式求值

#### POST /sessions/{session_id}/evaluate
求值表达式

**Request:**
```json
{
  "expression": "user->name[0]",
  "frame": 0
}
```

**Response:**
```json
{
  "expression": "user->name[0]",
  "value": "a",
  "type": "char"
}
```

## 4. 错误处理

### 4.1 错误码定义

| 错误码 | HTTP Status | 描述 |
|--------|-------------|------|
| E001 | 400 | 无效请求参数 |
| E002 | 404 | 会话不存在 |
| E003 | 409 | 目标程序已在运行 |
| E004 | 422 | 断点设置失败（无效位置） |
| E005 | 422 | 表达式求值失败 |
| E006 | 500 | GDB 进程异常退出 |
| E007 | 503 | 会话超时 |
| E008 | 400 | 无效的二进制文件 |
| E009 | 403 | 无执行权限 |

### 4.2 错误响应格式

```json
{
  "error": {
    "code": "E004",
    "message": "Breakpoint location not found: main.c:999",
    "details": {
      "location": "main.c:999",
      "available_files": ["main.c", "utils.c"]
    }
  }
}
```

## 5. 技术选型

### 5.1 实现语言
**推荐：Python**
- 理由：
  - GDB 有原生 Python API（gdb 模块）
  - 快速开发，适合 PoC
  - pexpect 库成熟稳定

**备选：Go**
- 理由：性能好，编译单二进制
- 代价：需要自行实现 MI 协议解析

### 5.2 通信协议
**推荐：HTTP REST**
- 理由：
  - 简单直观，Agent 容易集成
  - 调试方便（curl/postman）

**备选：gRPC**
- 理由：类型安全，性能更好
- 代价：需要 proto 定义，调试复杂

### 5.3 会话存储
**推荐：内存 + TTL**
- 理由：简单，适合单实例部署

**备选：Redis**
- 理由：支持多实例、持久化
- 代价：增加部署复杂度

## 6. 边界情况处理

| 场景 | 行为 |
|------|------|
| 目标程序崩溃 (SIGSEGV) | 返回错误码 E006，包含信号类型和地址 |
| GDB 输出解析失败 | 返回原始输出 + 警告信息 |
| 断点命中无限循环 | 检测循环次数，超时终止 |
| 大数组/字符串 | 截断显示，提供获取完整数据的 API |
| 优化后的代码 | 标记变量为 "optimized out" |
| 多线程程序 | 返回当前线程和所有线程列表 |

## 7. 部署架构

### 7.1 本地开发
```
[Agent] <---> [gdb-bridge] <---> [GDB] <---> [target]
```

### 7.2 容器化部署
```
[Agent] <---> [gdb-bridge Container] <---> [GDB] <---> [target]
```

### 7.3 远程调试
```
[Agent] <---> [gdb-bridge Server] <---> [GDB Server] <---> [target on remote host]
```

## 8. 技术债务记录

| 债务 | 原因 | 偿还时机 | 后果 |
|------|------|----------|------|
| 单实例部署 | 简化初期实现 | 需要多用户并发时 | 会话隔离问题 |
| 内存存储会话 | 快速开发 | 需要持久化或分布式时 | 服务重启丢失会话 |
| Python 实现 | 快速验证需求 | 性能成为瓶颈时 | 可能需要重写 Go |

## 9. 开发阶段

### Phase 1: PoC (1-2 天)
- Python 脚本封装 GDB/MI
- 实现 3 个核心命令：断点、单步、变量查看
- 验证 Agent 可用性

### Phase 2: MVP (1 周)
- HTTP API 服务
- 会话管理
- 基本错误处理

### Phase 3: 完整功能 (2-3 周)
- 所有 API 实现
- 测试覆盖
- 容器化

## 10. 验收标准映射

| PRD 验收标准 | 架构支持 |
|--------------|----------|
| 启动调试返回会话 ID | POST /sessions |
| 设置断点返回确认 | POST /breakpoints |
| 单步执行返回位置+变量 | POST /step + GET /variables |
| 查看变量返回 JSON | GET /variables |
| 错误处理返回错误码 | 统一错误响应格式 |

---

版本: v0.1
日期: 2026-05-15
作者: @architect
