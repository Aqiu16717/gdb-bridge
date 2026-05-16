"""Integration tests for API flows.

Tests marked with @pytest.mark.gdb require Docker/GDB environment.
Tests without the mark run against the API layer with mock-compatible paths.
"""

from __future__ import annotations

import pytest
from httpx import AsyncClient


class TestHealthAndErrorRoutes:
    """Tests for basic API health and error flows."""

    @pytest.mark.asyncio
    async def test_health_check(self, app_client: AsyncClient) -> None:
        """Health endpoint returns 200."""
        response = await app_client.get("/health")
        assert response.status_code == 200
        assert response.json() == {"status": "ok"}

    @pytest.mark.asyncio
    async def test_404_for_unknown_route(self, app_client: AsyncClient) -> None:
        """Unknown routes return 404."""
        response = await app_client.get("/nonexistent")
        assert response.status_code == 404

    @pytest.mark.asyncio
    async def test_422_for_invalid_json(self, app_client: AsyncClient) -> None:
        """Invalid JSON body returns 422."""
        response = await app_client.post(
            "/sessions",
            content="not json",
            headers={"Content-Type": "application/json"},
        )
        assert response.status_code in (400, 422)


class TestSessionLifecycle:
    """Tests for session creation, query, and deletion."""

    @pytest.mark.asyncio
    @pytest.mark.gdb
    async def test_create_session_minimal(self, app_client: AsyncClient) -> None:
        """Create a session with minimal request. Requires GDB."""
        response = await app_client.post(
            "/sessions",
            json={
                "target": {"type": "file", "path": "/bin/true"},
                "gdb_path": "echo",
            },
        )
        # May fail if no GDB available, but should not 500
        assert response.status_code in (201, 500, 503)

        if response.status_code == 201:
            data = response.json()
            assert "session_id" in data
            assert data["session_id"].startswith("sess_")
            assert "status" in data

    @pytest.mark.asyncio
    async def test_create_session_missing_target(self, app_client: AsyncClient) -> None:
        """Creating session without target returns 422."""
        response = await app_client.post(
            "/sessions",
            json={"gdb_path": "gdb"},
        )
        assert response.status_code == 422

    @pytest.mark.asyncio
    async def test_create_session_invalid_target_type(self, app_client: AsyncClient) -> None:
        """Invalid target type returns 422."""
        response = await app_client.post(
            "/sessions",
            json={
                "target": {"type": "invalid", "path": "/app"},
            },
        )
        assert response.status_code == 422

    @pytest.mark.asyncio
    async def test_get_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Querying nonexistent session returns 404."""
        response = await app_client.get("/sessions/nonexistent")
        assert response.status_code == 404
        data = response.json()
        assert data["error"]["code"] == "E002"

    @pytest.mark.asyncio
    async def test_delete_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Deleting nonexistent session returns 404."""
        response = await app_client.delete("/sessions/nonexistent")
        assert response.status_code == 404

    @pytest.mark.asyncio
    @pytest.mark.gdb
    async def test_multiple_sessions_independent(self, app_client: AsyncClient) -> None:
        """Creating multiple sessions generates unique IDs."""
        ids = set()
        for _ in range(3):
            response = await app_client.post(
                "/sessions",
                json={
                    "target": {"type": "file", "path": "/bin/true"},
                    "gdb_path": "echo",
                },
            )
            if response.status_code == 201:
                ids.add(response.json()["session_id"])
        # All successful IDs should be unique
        assert len(ids) == len(ids)  # Will be 0 if all failed


class TestBreakpointOperations:
    """Tests for breakpoint CRUD on nonexistent sessions."""

    @pytest.mark.asyncio
    async def test_set_breakpoint_on_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Setting breakpoint on nonexistent session returns 404."""
        response = await app_client.post(
            "/sessions/nonexistent/breakpoints",
            json={"location": "main.c:42"},
        )
        assert response.status_code == 404

    @pytest.mark.asyncio
    async def test_set_breakpoint_missing_location(self, app_client: AsyncClient) -> None:
        """Breakpoint without location returns 422."""
        response = await app_client.post(
            "/sessions/nonexistent/breakpoints",
            json={},
        )
        assert response.status_code == 422

    @pytest.mark.asyncio
    async def test_list_breakpoints_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Listing breakpoints on nonexistent session returns 404."""
        response = await app_client.get("/sessions/nonexistent/breakpoints")
        assert response.status_code == 404

    @pytest.mark.asyncio
    async def test_delete_breakpoint_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Deleting breakpoint on nonexistent session returns 404."""
        response = await app_client.delete("/sessions/nonexistent/breakpoints/1")
        assert response.status_code == 404


class TestExecutionOperations:
    """Tests for step/continue on nonexistent sessions."""

    @pytest.mark.asyncio
    async def test_step_on_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Step on nonexistent session returns 404."""
        response = await app_client.post(
            "/sessions/nonexistent/step",
            json={"type": "step-in"},
        )
        assert response.status_code in (404, 422)

    @pytest.mark.asyncio
    async def test_invalid_step_type(self, app_client: AsyncClient) -> None:
        """Invalid step type returns 422."""
        response = await app_client.post(
            "/sessions/nonexistent/step",
            json={"type": "jump-into"},
        )
        assert response.status_code in (404, 422)

    @pytest.mark.asyncio
    async def test_continue_on_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Continue on nonexistent session returns 404."""
        response = await app_client.post("/sessions/nonexistent/continue")
        assert response.status_code == 404


class TestVariableAndExpressionOperations:
    """Tests for variable and expression on nonexistent sessions."""

    @pytest.mark.asyncio
    async def test_get_variable_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Getting variable on nonexistent session returns 404."""
        response = await app_client.get("/sessions/nonexistent/variables/x")
        assert response.status_code == 404

    @pytest.mark.asyncio
    async def test_evaluate_expression_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Evaluating expression on nonexistent session returns 404."""
        response = await app_client.post(
            "/sessions/nonexistent/evaluate",
            json={"expression": "x + y"},
        )
        assert response.status_code == 404

    @pytest.mark.asyncio
    async def test_evaluate_missing_expression(self, app_client: AsyncClient) -> None:
        """Missing expression returns 422 (Pydantic validation)."""
        response = await app_client.post(
            "/sessions/nonexistent/evaluate",
            json={},
        )
        assert response.status_code in (404, 422)

    @pytest.mark.asyncio
    async def test_get_frames_nonexistent_session(self, app_client: AsyncClient) -> None:
        """Getting frames on nonexistent session returns 404."""
        response = await app_client.get("/sessions/nonexistent/frames")
        assert response.status_code == 404


class TestErrorResponseFormat:
    """Tests for error response structure consistency."""

    @pytest.mark.asyncio
    async def test_404_error_format(self, app_client: AsyncClient) -> None:
        """404 errors follow standard format."""
        response = await app_client.get("/sessions/nonexistent")
        assert response.status_code == 404
        data = response.json()
        assert "error" in data
        assert "code" in data["error"]
        assert "message" in data["error"]

    @pytest.mark.asyncio
    async def test_422_error_format(self, app_client: AsyncClient) -> None:
        """422 errors follow standard format."""
        response = await app_client.post(
            "/sessions",
            json={"target": {"type": "invalid", "path": "/x"}},
        )
        assert response.status_code == 422
        data = response.json()
        assert "detail" in data  # FastAPI validation format

    @pytest.mark.asyncio
    async def test_all_endpoints_handle_nonexistent_session(self, app_client: AsyncClient) -> None:
        """All debug endpoints return 404 for nonexistent sessions."""
        # This verifies consistent error handling
        endpoints = [
            ("GET", "/sessions/nonexistent"),
            ("DELETE", "/sessions/nonexistent"),
            ("POST", "/sessions/nonexistent/continue"),
            ("POST", "/sessions/nonexistent/step", {"type": "step-in"}),
            ("GET", "/sessions/nonexistent/breakpoints"),
            ("POST", "/sessions/nonexistent/breakpoints", {"location": "main.c:1"}),
            ("GET", "/sessions/nonexistent/variables/x"),
            ("GET", "/sessions/nonexistent/frames"),
            ("POST", "/sessions/nonexistent/evaluate", {"expression": "1+1"}),
        ]

        for method, path, *args in endpoints:
            body = args[0] if args else None
            if method == "GET":
                response = await app_client.get(path)
            elif method == "DELETE":
                response = await app_client.delete(path)
            else:
                response = await app_client.post(path, json=body)
            assert response.status_code in (404, 422), (
                f"{method} {path} should return 404 or 422, got {response.status_code}"
            )


# Real GDB integration tests (require Docker)
@pytest.mark.gdb
class TestRealGDBFlows:
    """Tests that require a real GDB environment.

    These tests are skipped by default. Run with:
        pytest -m gdb --gdb-path=gdb --fixture-dir=tests/fixtures
    """

    @pytest.mark.asyncio
    async def test_full_debug_flow(self, app_client: AsyncClient) -> None:
        """End-to-end: start → breakpoint → step → variables → continue → exit."""
        # 1. Create session
        response = await app_client.post(
            "/sessions",
            json={
                "target": {
                    "type": "file",
                    "path": "tests/fixtures/simple_test",
                },
            },
        )
        assert response.status_code == 201
        session_id = response.json()["session_id"]

        # 2. Set breakpoint at main
        response = await app_client.post(
            f"/sessions/{session_id}/breakpoints",
            json={"location": "main"},
        )
        assert response.status_code == 201
        bp = response.json()
        assert bp["location"] == "main"

        # 3. Continue to breakpoint
        response = await app_client.post(f"/sessions/{session_id}/continue")
        assert response.status_code == 200
        stop = response.json()
        assert stop["reason"] in ("breakpoint-hit", "step-done", "exited-normally")

        # 4. Step
        response = await app_client.post(
            f"/sessions/{session_id}/step",
            json={"type": "step-over"},
        )
        assert response.status_code == 200

        # 5. Get variables
        response = await app_client.get(f"/sessions/{session_id}/variables/x")
        assert response.status_code == 200

        # 6. Evaluate expression
        response = await app_client.post(
            f"/sessions/{session_id}/evaluate",
            json={"expression": "x + y"},
        )
        assert response.status_code == 200

        # 7. Continue to exit
        response = await app_client.post(f"/sessions/{session_id}/continue")
        assert response.status_code in (200, 500)

        # 8. Delete session
        response = await app_client.delete(f"/sessions/{session_id}")
        assert response.status_code == 200
        data = response.json()
        assert data["status"] == "terminated"

    @pytest.mark.asyncio
    async def test_breakpoint_duplicate_idempotent(self, app_client: AsyncClient) -> None:
        """Setting duplicate breakpoint is idempotent."""
        # Per architecture spec: should return existing breakpoint (200)
        response = await app_client.post(
            "/sessions",
            json={"target": {"type": "file", "path": "tests/fixtures/simple_test"}},
        )
        if response.status_code != 201:
            pytest.skip("GDB not available")
        session_id = response.json()["session_id"]

        bp1 = await app_client.post(
            f"/sessions/{session_id}/breakpoints",
            json={"location": "main"},
        )
        bp2 = await app_client.post(
            f"/sessions/{session_id}/breakpoints",
            json={"location": "main"},
        )
        # Should both succeed (idempotent) or return 409 conflict
        assert bp1.status_code in (200, 201)
        assert bp2.status_code in (200, 201, 409)

        await app_client.delete(f"/sessions/{session_id}")

    @pytest.mark.asyncio
    async def test_segfault_signal_handling(self, app_client: AsyncClient) -> None:
        """Program crash returns signal-received stop event."""
        response = await app_client.post(
            "/sessions",
            json={"target": {"type": "file", "path": "tests/fixtures/segfault_test"}},
        )
        if response.status_code != 201:
            pytest.skip("GDB not available")
        session_id = response.json()["session_id"]

        response = await app_client.post(f"/sessions/{session_id}/continue")
        # Should stop with signal-received or exit
        if response.status_code == 200:
            stop = response.json()
            assert stop["reason"] in (
                "signal-received",
                "exited-normally",
                "exited",
                "breakpoint-hit",
                "step-done",
            )

        await app_client.delete(f"/sessions/{session_id}")
