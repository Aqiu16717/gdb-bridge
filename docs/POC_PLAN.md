# PoC 实施计划

## 目标
验证 Agent 使用结构化 GDB 接口调试 C/C++ 程序的可行性。

## 验收标准

- [x] 能启动一个测试程序并在 main 函数断点暂停
- [x] 能单步执行并获取当前行号和变量值
- [x] 输出格式为结构化 JSON
- [x] Agent 能根据输出自主决策下一步操作

## 时间
1 天

## PoC 范围

### 包含
1. Python 脚本封装 GDB/MI
2. 3 个核心命令：
   - 启动 + 断点设置
   - 单步执行
   - 变量查看
3. JSON 输出格式

### 不包含
1. HTTP 服务
2. 会话管理（内存即可）
3. 错误处理（简单打印）
4. 多线程

## 测试程序

```c
// tests/simple_test.c
#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int x = 10;
    int y = 20;
    int sum = add(x, y);
    printf("Sum: %d\n", sum);
    return 0;
}
```

编译：
```bash
gcc -g -o simple_test simple_test.c
```

## PoC 步骤

### Step 1: 基础封装 (2 小时)
- 使用 pexpect 启动 GDB
- 发送 MI 命令
- 解析简单输出

### Step 2: 核心功能 (3 小时)
- 实现断点设置
- 实现单步执行
- 实现变量获取

### Step 3: 测试验证 (2 小时)
- 编写测试程序
- 运行完整调试流程
- 验证 JSON 输出

### Step 4: Agent 测试 (1 小时)
- 让 Agent 使用 PoC 脚本
- 验证自主决策能力

## 成功标准

1. 脚本能成功调试 simple_test.c
2. 输出为有效 JSON
3. Agent 能根据输出决定下一步操作

## 失败标准

1. GDB/MI 输出解析过于复杂
2. 异步通知处理困难
3. 性能无法满足需求

## 后续决策

**如果 PoC 成功**:
- 按架构文档完整开发
- 实现 HTTP API
- 添加完整测试

**如果 PoC 失败**:
- 分析失败原因
- 评估替代方案（如直接解析 GDB 文本输出）
- 决定是否继续项目
