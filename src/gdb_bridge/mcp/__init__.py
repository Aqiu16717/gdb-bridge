"""MCP (Model Context Protocol) server for gdb-bridge.

Exposes DebuggerAdapter tools to MCP-compatible AI Agents (Claude, Copilot).
"""

from gdb_bridge.mcp.server import MCPServer

__all__ = ["MCPServer"]
