"""Test configuration and shared fixtures."""

from __future__ import annotations

import pytest
from httpx import AsyncClient, ASGITransport


@pytest.fixture
async def client():
    """Create an async HTTP test client."""
    from gdb_bridge.api import create_app

    app = create_app()
    async with AsyncClient(
        transport=ASGITransport(app=app),
        base_url="http://test",
    ) as client:
        yield client
