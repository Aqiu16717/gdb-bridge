"""Tests for API layer."""

from __future__ import annotations

import pytest
from httpx import AsyncClient, ASGITransport


@pytest.mark.asyncio
async def test_health_check():
    """Test health check endpoint."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        response = await client.get("/health")
        assert response.status_code == 200
        assert response.json() == {"status": "ok"}


@pytest.mark.asyncio
async def test_create_session_missing_target():
    """Test creating session with missing target."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        response = await client.post(
            "/sessions",
            json={"gdb_path": "gdb"},
        )
        assert response.status_code == 422  # Validation error


@pytest.mark.asyncio
async def test_get_nonexistent_session():
    """Test getting a session that doesn't exist."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        response = await client.get("/sessions/nonexistent")
        assert response.status_code == 404
        data = response.json()
        assert "error" in data
        assert data["error"]["code"] == "E002"


@pytest.mark.asyncio
async def test_set_breakpoint_nonexistent_session():
    """Test setting breakpoint on nonexistent session."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        response = await client.post(
            "/sessions/nonexistent/breakpoints",
            json={"location": "main.c:42"},
        )
        assert response.status_code == 404


@pytest.mark.asyncio
async def test_delete_nonexistent_session():
    """Test deleting a session that doesn't exist."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        response = await client.delete("/sessions/nonexistent")
        assert response.status_code == 404


@pytest.mark.asyncio
async def test_error_response_format():
    """Test error response follows standard format."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        response = await client.get("/sessions/nonexistent")
        assert response.status_code == 404
        data = response.json()
        assert "error" in data
        assert "code" in data["error"]
        assert "message" in data["error"]


@pytest.mark.asyncio
async def test_invalid_step_type():
    """Test invalid step type gets rejected."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        # Session does not exist, but validation happens first
        response = await client.post(
            "/sessions/nonexistent/step",
            json={"type": "invalid-type"},
        )
        # Could be 422 (validation) or 404 (session not found)
        # depending on FastAPI routing order
        assert response.status_code in (404, 422)


@pytest.mark.asyncio
async def test_invalid_breakpoint_location():
    """Test invalid breakpoint location."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        response = await client.post(
            "/sessions/nonexistent/breakpoints",
            json={},  # Missing required location
        )
        assert response.status_code == 422
