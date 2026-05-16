"""MCP JSON-RPC protocol conformance tests.

Tests the MCP server's protocol layer without requiring a running debugger.
Uses the MockAdapter for predictable responses.
"""

from __future__ import annotations

import json
import pytest
import pytest_asyncio

from gdb_bridge.mcp.server import MCPServer


@pytest_asyncio.fixture
async def mcp():
    """Create an MCPServer instance for testing."""
    server = MCPServer()
    # Inject a MockAdapter-compatible session for testing
    yield server
    # Cleanup
    for sid in list(server._manager._sessions.keys()):
        try:
            await server._manager._sessions[sid].stop()
        except Exception:
            pass


class TestMCPProtocolInit:
    """MCP protocol handshake tests."""

    @pytest.mark.asyncio
    async def test_initialize(self, mcp: MCPServer) -> None:
        """Initialize returns protocol version and capabilities."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 1,
                "method": "initialize",
                "params": {"protocolVersion": "2024-11-05", "capabilities": {}},
            }
        )
        assert response["id"] == 1
        result = response["result"]
        assert result["protocolVersion"] == "2024-11-05"
        assert "tools" in result["capabilities"]

    @pytest.mark.asyncio
    async def test_tools_list(self, mcp: MCPServer) -> None:
        """Tools/list returns all 10 debug tools."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 2,
                "method": "tools/list",
            }
        )
        tools = response["result"]["tools"]
        assert len(tools) >= 10  # grows as adapter methods expand

        tool_names = {t["name"] for t in tools}
        expected_base = {
            "debug_start",
            "debug_set_breakpoint",
            "debug_run",
            "debug_step",
            "debug_continue",
            "debug_get_variables",
            "debug_get_location",
            "debug_evaluate",
            "debug_get_frames",
            "debug_get_threads",
            "debug_select_thread",
            "debug_set_watchpoint",
            "debug_get_registers",
            "debug_load_core",
            "debug_stop",
        }
        assert expected_base.issubset(tool_names)

    @pytest.mark.asyncio
    async def test_tools_schema_valid(self, mcp: MCPServer) -> None:
        """Each tool has name, description, and inputSchema."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 3,
                "method": "tools/list",
            }
        )
        for tool in response["result"]["tools"]:
            assert "name" in tool
            assert "description" in tool
            assert "inputSchema" in tool
            assert "type" in tool["inputSchema"]
            assert tool["inputSchema"]["type"] == "object"


class TestMCPProtocolErrors:
    """MCP error handling tests."""

    @pytest.mark.asyncio
    async def test_unknown_method(self, mcp: MCPServer) -> None:
        """Unknown method returns -32601."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 99,
                "method": "unknown_method",
            }
        )
        assert "error" in response
        assert response["error"]["code"] == -32601

    @pytest.mark.asyncio
    async def test_unknown_tool(self, mcp: MCPServer) -> None:
        """Unknown tool name returns error in content."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 100,
                "method": "tools/call",
                "params": {"name": "nonexistent", "arguments": {}},
            }
        )
        result = response["result"]
        content = json.loads(result["content"][0]["text"])
        assert content["success"] is False
        assert "Unknown tool" in content["error"]

    @pytest.mark.asyncio
    async def test_tool_call_missing_session(self, mcp: MCPServer) -> None:
        """Calling tool with invalid session returns error."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 101,
                "method": "tools/call",
                "params": {
                    "name": "debug_get_location",
                    "arguments": {"session_id": "nonexistent"},
                },
            }
        )
        assert "error" in response
        assert response["error"]["code"] == -32603


class TestMCPToolSchemas:
    """Verify tool input schemas match REST API models."""

    @pytest.mark.asyncio
    async def test_start_requires_program(self, mcp: MCPServer) -> None:
        """debug_start requires 'program' field."""
        start_tool = next(t for t in mcp.TOOLS if t["name"] == "debug_start")
        assert "program" in start_tool["inputSchema"]["required"]

    @pytest.mark.asyncio
    async def test_breakpoint_requires_location(self, mcp: MCPServer) -> None:
        """debug_set_breakpoint requires location."""
        bp_tool = next(t for t in mcp.TOOLS if t["name"] == "debug_set_breakpoint")
        assert "location" in bp_tool["inputSchema"]["required"]

    @pytest.mark.asyncio
    async def test_step_enum_values(self, mcp: MCPServer) -> None:
        """debug_step type enum matches StepType."""
        step_tool = next(t for t in mcp.TOOLS if t["name"] == "debug_step")
        valid = step_tool["inputSchema"]["properties"]["type"]["enum"]
        assert "step-in" in valid
        assert "step-over" in valid
        assert "step-out" in valid

    @pytest.mark.asyncio
    async def test_start_backend_enum(self, mcp: MCPServer) -> None:
        """debug_start backend enum includes gdb and lldb."""
        start_tool = next(t for t in mcp.TOOLS if t["name"] == "debug_start")
        backends = start_tool["inputSchema"]["properties"]["backend"]["enum"]
        assert "gdb" in backends
        assert "lldb" in backends

    @pytest.mark.asyncio
    async def test_all_tools_have_session_id_except_start(self, mcp: MCPServer) -> None:
        """All tools except debug_start require session_id."""
        for tool in mcp.TOOLS:
            schema = tool["inputSchema"]
            if tool["name"] == "debug_start":
                assert "session_id" not in (schema.get("required") or []), (
                    f"{tool['name']} should not require session_id"
                )
            else:
                assert "session_id" in (schema.get("required") or []), (
                    f"{tool['name']} must require session_id"
                )


class TestMCPResponseFormat:
    """Verify JSON-RPC response format."""

    @pytest.mark.asyncio
    async def test_response_format(self, mcp: MCPServer) -> None:
        """Responses follow jsonrpc 2.0 format."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 200,
                "method": "tools/list",
            }
        )
        assert response["jsonrpc"] == "2.0"
        assert response["id"] == 200
        assert "result" in response

    @pytest.mark.asyncio
    async def test_error_format(self, mcp: MCPServer) -> None:
        """Errors follow jsonrpc 2.0 error format."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "id": 201,
                "method": "bad_method",
            }
        )
        assert response["jsonrpc"] == "2.0"
        assert response["id"] == 201
        assert "error" in response
        assert "code" in response["error"]
        assert "message" in response["error"]

    @pytest.mark.asyncio
    async def test_notification_no_response(self, mcp: MCPServer) -> None:
        """Notifications return empty response."""
        response = await mcp._handle(
            {
                "jsonrpc": "2.0",
                "method": "notifications/initialized",
            }
        )
        assert response == {}
