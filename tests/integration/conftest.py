"""Integration test fixtures."""

from __future__ import annotations

import pytest_asyncio
from httpx import AsyncClient, ASGITransport


@pytest_asyncio.fixture
async def app_client():
    """Create an async HTTP test client with full app stack."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        yield client


@pytest_asyncio.fixture
async def debug_session(app_client: AsyncClient) -> str:
    """Create a debugging session and return its ID."""
    response = await app_client.post(
        "/sessions",
        json={
            "target": {"type": "file", "path": "/dev/null"},
            "gdb_path": "echo",
        },
    )
    if response.status_code == 201:
        data = response.json()
        return data["session_id"]
    # If session creation fails (no GDB), return None
    return None
