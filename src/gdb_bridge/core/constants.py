"""Centralized constants for gdb-bridge."""

# ── Session Management ──────────────────────────────────────────────────────
SESSION_TTL_SECONDS = 3600  # 1 hour
SESSION_CLEANUP_INTERVAL = 300  # 5 minutes

# ── GDB/LLDB Communication ──────────────────────────────────────────────────
GDB_COMMAND_TIMEOUT = 30  # seconds
LLDB_COMMAND_TIMEOUT = 30  # seconds
LLDB_PYTHON_PATH = "/usr/bin/python3"

# ── HTTP / MCP ──────────────────────────────────────────────────────────────
DEFAULT_HOST = "0.0.0.0"
DEFAULT_PORT = 8080
MCP_PROTOCOL_VERSION = "2024-11-05"
