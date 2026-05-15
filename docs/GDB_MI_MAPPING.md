# GDB/MI 命令映射

本文档描述 gdb-bridge API 与 GDB/MI (Machine Interface) 命令的映射关系。

## 什么是 GDB/MI

GDB Machine Interface (MI) 是 GDB 的一种面向机器的文本接口。它使用行导向的文本协议：
- 输入：GDB/MI 命令（如 `-exec-run`）
- 输出：结构化文本（记录类型 + 键值对）

## 命令映射表

### 会话管理

| API 操作 | GDB/MI 命令 | 说明 |
|----------|-------------|------|
| 创建会话 | `-file-exec-and-symbols <file>` | 加载可执行文件 |
| | `-exec-arguments <args>` | 设置程序参数 |
| | `-gdb-set mi-async on` | 启用异步模式 |
| 启动调试 | `-exec-run` | 启动程序 |
| 附加进程 | `-target-attach <pid>` | 附加到运行中的进程 |
| 销毁会话 | `-gdb-exit` | 退出 GDB |

### 执行控制

| API 操作 | GDB/MI 命令 | 说明 |
|----------|-------------|------|
| 继续执行 | `-exec-continue` | 继续运行 |
| 运行到位置 | `-exec-until <location>` | 运行到指定位置 |
| 单步进入 | `-exec-step` | Step into |
| 单步跳过 | `-exec-next` | Step over |
| 单步跳出 | `-exec-finish` | Step out |
| 中断执行 | `-exec-interrupt` | 发送 SIGINT |
| 杀死程序 | `-exec-abort` | 终止被调试程序 |

### 断点管理

| API 操作 | GDB/MI 命令 | 说明 |
|----------|-------------|------|
| 设置断点 | `-break-insert <location>` | 设置普通断点 |
| | `-break-insert -c <cond> <loc>` | 设置条件断点 |
| 列出断点 | `-break-list` | 列出所有断点 |
| 删除断点 | `-break-delete <id>` | 删除指定断点 |
| 启用/禁用 | `-break-enable <id>` | 启用断点 |
| | `-break-disable <id>` | 禁用断点 |
| 设置条件 | `-break-condition <id> <cond>` | 修改断点条件 |

### 变量和栈帧

| API 操作 | GDB/MI 命令 | 说明 |
|----------|-------------|------|
| 获取栈帧 | `-stack-list-frames` | 列出调用栈 |
| 选择栈帧 | `-stack-select-frame <level>` | 切换到指定帧 |
| 获取局部变量 | `-stack-list-locals --all-values` | 列出局部变量 |
| 获取参数 | `-stack-list-arguments --all-values` | 列出函数参数 |
| 求值表达式 | `-data-evaluate-expression <expr>` | 计算表达式 |
| 获取变量 | `-var-create ...` + `-var-list-children` | 创建变量对象 |

## GDB/MI 输出格式

### 记录类型

| 前缀 | 含义 | 示例 |
|------|------|------|
| `^` | 同步结果 | `^done` `^error` `^running` |
| `*` | 异步执行通知 | `*running` `*stopped` |
| `+` | 异步状态通知 | `+download` |
| `=` | 异步通知 | `=breakpoint-modified` |
| `~` | 控制台输出 | 程序 stdout |
| `@` | 目标输出 | 程序输出到 tty |
| `&` | GDB 日志 | 调试日志 |

### 结果记录示例

```
^done,bkpt={number="1",type="breakpoint",disp="keep",
  enabled="y",addr="0x00000000004005b6",
  func="main",file="main.c",line="10"}
```

### 停止通知示例

```
*stopped,reason="breakpoint-hit",disp="keep",bkptno="1",
  frame={level="0",addr="0x00000000004005b6",func="main",
  args=[{name="argc",value="1"}],
  file="main.c",fullname="/path/main.c",line="10"},
  thread-id="1",stopped-threads="all"
```

## 错误处理

### GDB/MI 错误格式

```
^error,msg="No symbol \"foo\" in current context.",code="undefined-variable"
```

### 错误码映射

| GDB 错误 | API 错误码 | HTTP Status |
|----------|-----------|-------------|
| Undefined variable | E005 | 422 |
| No symbol in context | E005 | 422 |
| Cannot access memory | E005 | 422 |
| Program is not being run | E002 | 409 |
| No such file or directory | E008 | 400 |
| Permission denied | E009 | 403 |

## Python 实现示例

### 使用 pexpect 与 GDB/MI 交互

```python
import pexpect
import json

class GDBSession:
    def __init__(self, gdb_path="gdb"):
        self.gdb = pexpect.spawn(f"{gdb_path} -i mi")
        self.session_id = generate_id()
        
    def send_command(self, cmd):
        """发送 MI 命令并解析响应"""
        self.gdb.sendline(cmd)
        self.gdb.expect(r"\(gdb\)")
        return self._parse_output(self.gdb.before)
    
    def _parse_output(self, output):
        """解析 MI 输出为结构化数据"""
        lines = output.decode().split('\n')
        result = {"results": [], "async": [], "stream": []}
        
        for line in lines:
            line = line.strip()
            if line.startswith('^'):
                result["results"].append(self._parse_record(line))
            elif line.startswith('*'):
                result["async"].append(self._parse_record(line))
            elif line.startswith('~'):
                result["stream"].append(line[1:])
        
        return result
    
    def _parse_record(self, line):
        """解析 MI 记录为字典"""
        # 简化的解析逻辑
        if line.startswith('^error'):
            return {"type": "error", "data": self._parse_keyvals(line[7:])}
        elif line.startswith('^done'):
            return {"type": "done", "data": self._parse_keyvals(line[6:])}
        return {"type": "unknown", "raw": line}
    
    def _parse_keyvals(self, text):
        """解析键值对（简化版）"""
        # 实际实现需要处理嵌套结构
        return {"raw": text}

# 使用示例
session = GDBSession()
session.send_command("-file-exec-and-symbols ./a.out")
session.send_command("-break-insert main")
result = session.send_command("-exec-run")
print(json.dumps(result, indent=2))
```

## PoC 核心命令

PoC 阶段只需实现以下命令：

1. **会话创建**
   ```
   -file-exec-and-symbols <file>
   -gdb-set mi-async on
   ```

2. **断点设置**
   ```
   -break-insert main
   ```

3. **启动执行**
   ```
   -exec-run
   ```

4. **单步执行**
   ```
   -exec-step
   -exec-next
   ```

5. **获取位置**
   ```
   -stack-info-frame
   ```

6. **获取变量**
   ```
   -stack-list-locals --simple-values
   ```

7. **继续执行**
   ```
   -exec-continue
   ```

## 参考文档

- [GDB/MI Interface Manual](https://sourceware.org/gdb/current/onlinedocs/gdb.html/GDB_002fMI.html)
- [GDB/MI Command Syntax](https://sourceware.org/gdb/current/onlinedocs/gdb.html/GDB_002fMI-Command-Syntax.html)
- [GDB/MI Output Syntax](https://sourceware.org/gdb/current/onlinedocs/gdb.html/GDB_002fMI-Output-Syntax.html)
