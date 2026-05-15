# gdb-bridge

Make GDB agent friendly.

一个 Agent 友好的 GDB 调试中间层，让 AI Agent 能通过结构化接口控制 GDB。

## 项目状态

**当前阶段**: 架构设计已完成，准备 PoC 验证

## 快速开始

### 安装依赖

```bash
pip install -r requirements.txt
```

### 运行 PoC

```bash
cd poc
python gdb_bridge.py ./test_program
```

### 运行测试

```bash
cd tests
make && ./test_program
```

## 架构文档

- [架构设计](docs/ARCHITECTURE.md) - 系统架构、接口契约、技术选型
- [GDB/MI 映射](docs/GDB_MI_MAPPING.md) - API 与 GDB/MI 命令映射
- [PoC 计划](docs/POC_PLAN.md) - PoC 实施方案
- [API 规范](api/openapi.yaml) - OpenAPI 3.0 定义

## 项目结构

```
gdb-bridge/
├── api/               # API 规范
│   └── openapi.yaml
├── cmd/               # 可执行程序入口
│   └── gdb-bridge/
├── docs/              # 文档
│   ├── ARCHITECTURE.md
│   ├── GDB_MI_MAPPING.md
│   └── POC_PLAN.md
├── internal/          # 内部实现
│   ├── pkg/           # 共享包
│   └── service/       # 业务逻辑
├── poc/               # PoC 实现
└── tests/             # 测试程序和用例
```

## 核心功能

### P0 (MVP)
- [x] 会话管理（创建、销毁）
- [x] 断点设置和删除
- [x] 执行控制（继续、单步）
- [x] 变量查看
- [x] 调用栈查看

### P1
- [ ] 条件断点
- [ ] Watchpoint
- [ ] 表达式求值
- [ ] 多线程支持

### P2
- [ ] 远程调试
- [ ] 核心转储分析
- [ ] LLDB 支持

## 技术栈

- **语言**: Python (PoC/MVP), 可能迁移到 Go (生产)
- **协议**: HTTP REST
- **GDB 接口**: GDB/MI (Machine Interface)

## 贡献

1. 所有跨服务接口需经 @architect 审核
2. 代码需通过 @qa-master 的测试用例
3. DevOps 配置需遵循 @devops-master 的规范

## 许可证

MIT License
