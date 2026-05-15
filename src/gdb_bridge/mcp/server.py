"""MCP JSON-RPC Server for gdb-bridge.

Thin wrapper (~150 lines) that exposes DebuggerAdapter as MCP tools.
Communicates via stdin/stdout JSON-RPC, making gdb-bridge available
to Claude Desktop, Copilot, and any MCP-compatible Agent.

Architecture:
    Agent (MCP) → stdin/stdout JSON-RPC → MCPServer → DebuggerAdapter → GDB/LLDB
"""

from __future__ import annotations

import asyncio
import json
import sys
import uuid

from gdb_bridge.core.exceptions import (
    EvaluationError,
    GDBProcessError,
    InvalidBreakpointError,
    SessionNotFoundError,
)
from gdb_bridge.core.session_manager import SessionManager
from gdb_bridge.models.session import (
    CreateSessionRequest,
    Session,
    SessionStatus,
    Target,
    TargetType,
)
from gdb_bridge.services.debug_adapter import DebuggerAdapter
from gdb_bridge.services.gdb_service import GDBService
from gdb_bridge.services.lldb_service import LLDBService


class MCPServer:
    """MCP JSON-RPC server over stdin/stdout.

    Implements MCP protocol: initialize, tools/list, tools/call.
    Sessions are created per-tool-call and managed internally.
    """

    # Tool schema mirrors the DebuggerAdapter interface
    TOOLS = [
        {
            "name": "debug_start",
            "description": "Start a new debugging session with GDB or LLDB",
            "inputSchema": {
                "type": "object",
                "properties": {
                    "program": {"type": "string", "description": "Path to executable"},
                    "backend": {"type": "string", "enum": ["gdb", "lldb"], "default": "lldb"},
                    "args": {"type": "array", "items": {"type": "string"}},
                },
                "required": ["program"],
            },
        },
        {
            "name": "debug_set_breakpoint",
            "description": "Set a breakpoint at a function or file:line",
            "inputSchema": {
                "type": "object",
                "properties": {
                    "session_id": {"type": "string"},
                    "location": {"type": "string", "description": "e.g. 'main' or 'file.c:42'"},
                    "condition": {"type": "string"},
                },
                "required": ["session_id", "location"],
            },
        },
        {
            "name": "debug_run",
            "description": "Run the program until it hits a breakpoint or exits",
            "inputSchema": {
                "type": "object",
                "properties": {"session_id": {"type": "string"}},
                "required": ["session_id"],
            },
        },
        {
            "name": "debug_step",
            "description": "Step execution (into, over, or out)",
            "inputSchema": {
                "type": "object",
                "properties": {
                    "session_id": {"type": "string"},
                    "type": {"type": "string", "enum": ["step-in", "step-over", "step-out"], "default": "step-in"},
                },
                "required": ["session_id"],
            },
        },
        {
            "name": "debug_continue",
            "description": "Continue execution until next stop",
            "inputSchema": {
                "type": "object",
                "properties": {"session_id": {"type": "string"}},
                "required": ["session_id"],
            },
        },
        {
            "name": "debug_get_variables",
            "description": "Get local variables in the current frame",
            "inputSchema": {
                "type": "object",
                "properties": {"session_id": {"type": "string"}},
                "required": ["session_id"],
            },
        },
        {
            "name": "debug_get_location",
            "description": "Get the current execution location (file, line, function)",
            "inputSchema": {
                "type": "object",
                "properties": {"session_id": {"type": "string"}},
                "required": ["session_id"],
            },
        },
        {
            "name": "debug_evaluate",
            "description": "Evaluate a C/C++ expression in the current frame",
            "inputSchema": {
                "type": "object",
                "properties": {
                    "session_id": {"type": "string"},
                    "expression": {"type": "string"},
                },
                "required": ["session_id", "expression"],
            },
        },
        {
            "name": "debug_get_frames",
            "description": "Get the call stack",
            "inputSchema": {
                "type": "object",
                "properties": {"session_id": {"type": "string"}},
                "required": ["session_id"],
            },
        },
        {
            "name": "debug_stop",
            "description": "Terminate the debugging session",
            "inputSchema": {
                "type": "object",
                "properties": {"session_id": {"type": "string"}},
                "required": ["session_id"],
            },
        },
    ]

    def __init__(self) -> None:
        """Initialize MCP server with session manager."""
        self._manager = SessionManager(ttl_seconds=3600)
        self._adapters: dict[str, DebuggerAdapter] = {}

    async def run(self) -> None:
        """Run the MCP server loop on stdin/stdout."""
        await self._manager.start()
        reader = asyncio.StreamReader()
        protocol = asyncio.StreamReaderProtocol(reader)
        await asyncio.get_event_loop().connect_read_pipe(lambda: protocol, sys.stdin)

        while True:
            try:
                line = await reader.readline()
                if not line:
                    break
                request = json.loads(line.decode().strip())
                response = await self._handle(request)
                self._write(response)
            except (json.JSONDecodeError, EOFError):
                break

        await self._manager.stop()

    async def _handle(self, request: dict) -> dict:
        """Handle a JSON-RPC request.

        Args:
            request: JSON-RPC request dict.

        Returns:
            JSON-RPC response dict.
        """
        req_id = request.get("id")
        method = request.get("method", "")

        try:
            if method == "initialize":
                return self._response(req_id, {
                    "protocolVersion": "2024-11-05",
                    "capabilities": {"tools": {}},
                    "serverInfo": {"name": "gdb-bridge", "version": "0.2.0"},
                })
            elif method == "tools/list":
                return self._response(req_id, {"tools": self.TOOLS})
            elif method == "tools/call":
                result = await self._call_tool(request.get("params", {}))
                return self._response(req_id, {"content": [{"type": "text", "text": json.dumps(result, default=str)}]})
            elif method == "notifications/initialized":
                return {}  # No response for notifications
            else:
                return self._error(req_id, -32601, f"Method not found: {method}")
        except Exception as e:
            return self._error(req_id, -32603, str(e))

    async def _call_tool(self, params: dict) -> dict:
        """Execute an MCP tool call.

        Args:
            params: Tool call parameters.

        Returns:
            Result dict.
        """
        tool_name = params.get("name", "")
        arguments = params.get("arguments", {})

        tool_map = {
            "debug_start": self._tool_start,
            "debug_set_breakpoint": self._tool_set_breakpoint,
            "debug_run": self._tool_run,
            "debug_step": self._tool_step,
            "debug_continue": self._tool_continue,
            "debug_get_variables": self._tool_get_variables,
            "debug_get_location": self._tool_get_location,
            "debug_evaluate": self._tool_evaluate,
            "debug_get_frames": self._tool_get_frames,
            "debug_stop": self._tool_stop,
        }

        handler = tool_map.get(tool_name)
        if not handler:
            return {"success": False, "error": f"Unknown tool: {tool_name}"}

        return await handler(arguments)

    async def _tool_start(self, args: dict) -> dict:
        backend = args.get("backend", "lldb")
        program = args["program"]
        prog_args = args.get("args", [])

        session_id = self._manager.create_session_id()
        adapter_cls = GDBService if backend == "gdb" else LLDBService
        adapter = adapter_cls(session_id)

        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path=program, args=prog_args),
        )
        session = await adapter.start(request)
        self._manager.add_session(session, adapter)
        self._adapters[session_id] = adapter

        return {"success": True, "data": {"session_id": session_id, "backend": backend, "status": "created"}}

    async def _tool_set_breakpoint(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        bp = await adapter.set_breakpoint(args["location"], args.get("condition"))
        return {"success": True, "data": bp.model_dump()}

    async def _tool_run(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        event = await adapter.run()
        return {"success": True, "data": event.model_dump()}

    async def _tool_step(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        event = await adapter.step(args.get("type", "step-in"))
        return {"success": True, "data": event.model_dump()}

    async def _tool_continue(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        event = await adapter.continue_execution()
        return {"success": True, "data": event.model_dump()}

    async def _tool_get_variables(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        variables = await adapter.get_variables()
        return {"success": True, "data": [v.model_dump() for v in variables]}

    async def _tool_get_location(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        loc = await adapter.get_current_location()
        return {"success": True, "data": loc.model_dump()}

    async def _tool_evaluate(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        result = await adapter.evaluate_expression(args["expression"])
        return {"success": True, "data": result.model_dump()}

    async def _tool_get_frames(self, args: dict) -> dict:
        adapter = self._get_adapter(args["session_id"])
        frames = await adapter.get_frames()
        return {"success": True, "data": [f.model_dump() for f in frames]}

    async def _tool_stop(self, args: dict) -> dict:
        session_id = args["session_id"]
        if session_id in self._adapters:
            await self._adapters[session_id].stop()
            del self._adapters[session_id]
        await self._manager.remove_session(session_id)
        return {"success": True, "data": {"status": "terminated"}}

    def _get_adapter(self, session_id: str) -> DebuggerAdapter:
        if session_id not in self._adapters:
            raise SessionNotFoundError(session_id)
        return self._adapters[session_id]

    # ── JSON-RPC helpers ───────────────────────────────────────────────

    def _response(self, req_id, result: dict) -> dict:
        return {"jsonrpc": "2.0", "id": req_id, "result": result}

    def _error(self, req_id, code: int, message: str) -> dict:
        return {"jsonrpc": "2.0", "id": req_id, "error": {"code": code, "message": message}}

    def _write(self, data: dict) -> None:
        if data:
            sys.stdout.write(json.dumps(data, default=str) + "\n")
            sys.stdout.flush()


def main() -> None:
    """Entry point for MCP server."""
    server = MCPServer()
    asyncio.run(server.run())


if __name__ == "__main__":
    main()
