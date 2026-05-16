# AGENTS.md — gdb-bridge 团队协作规范

## 项目简介

gdb-bridge 是一个面向 AI Agent 的生产级 C/C++ 调试中间件。
通过 REST API 和 MCP 协议，让 AI Agent 能像人类工程师一样调试程序——
设断点、单步执行、查看变量、分析崩溃现场。

## 团队成员

| Agent | 角色 | 职责 |
|-------|------|------|
| @c-master | C 底层大师 | C 引擎（ELF/DWARF/Core dump/Demangle）|
| @py-arch | Python 架构师 | Python 层、API、DebuggerAdapter |
| @architect | 技术架构师 | 接口设计、模块边界、技术选型 |
| @qa-master | QA 工程师 | 测试策略、回归测试、Bug 验收 |
| @devps-master | DevOps 工程师 | CI/CD、Docker、部署 |
| @pm-lead | 产品经理 | 需求定义、优先级、验收标准 |
| @golang | Go 语言大师 | 高并发层（待命） |
| @frontend-master | 前端大师 | Web UI（待命）、README 文档 |

## 架构决策记录

| 决策 | 日期 | 结论 |
|------|------|------|
| 语言选型 | D1 | Python 3.11+ 为主，C 引擎为辅助（ctypes） |
| 协议 | D1 | REST + MCP 双协议 |
| 后端 | D1 | GDB + LLDB + Mock 三后端 |
| C 引擎 | D1-P2 | ELF/DWARF/Core dump/Demangle，按需渐进 |
| 远程调试 | P2 | gdbserver/lldb-server 透明代理 |
| 并发层 | 远期 | Go（等性能数据驱动） |

## 工作流

1. **需求 → Spec**: @pm-lead 定义 PRD + 验收标准
2. **Spec → 设计**: @architect 定义接口（OpenAPI / ABC）
3. **设计 → 实现**: @py-arch（Python）/ @c-master（C）并行开发
4. **实现 → 测试**: @qa-master 参数化测试 + 回归
5. **测试 → 部署**: @devps-master CI/CD + Docker

## 代码审查规范

- 每个 PR 至少由 2 个 Agent 审查
- Python 代码: mypy strict + ruff，不允许未处理的异常
- C 代码: `-Wall -Wextra -Werror`，通过 uintptr_t 处理对齐
- 测试: P0 功能必须有自动化测试覆盖

## 分支策略

- `main` — 稳定分支，CI 13 jobs 全绿
- Feature branches: `feature/<description>`
- PR: squash merge 到 main

## 快速链接

- 仓库: https://github.com/Aqiu16717/gdb-bridge
- CI: GitHub Actions (13 jobs)
- API 文档: `http://localhost:8080/docs` (启动后)

## 测试

```bash
# Python (125 tests)
pytest -m "not gdb" -v

# C Engine (56 tests)
make -f src/gdb_bridge/engine/Makefile test test_dwarf test_core test_demangle

# 全量 (181 tests)
pytest -m "not gdb" -v && make -f src/gdb_bridge/engine/Makefile test test_dwarf test_core test_demangle
```
