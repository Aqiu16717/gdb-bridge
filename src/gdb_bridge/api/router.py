"""API router for GDB-Bridge."""

from __future__ import annotations

from fastapi import APIRouter

from gdb_bridge.core.session_manager import SessionManager
from gdb_bridge.api.handlers.sessions import create_sessions_router
from gdb_bridge.api.handlers.debug import create_debug_router


def create_router(session_manager: SessionManager) -> APIRouter:
    """Create the API router with all sub-routers.

    Args:
        session_manager: Shared session manager instance

    Returns:
        Configured API router
    """
    api_router = APIRouter()

    @api_router.get("/health")
    async def health_check() -> dict:
        """Health check endpoint."""
        return {"status": "ok"}

    # Mount sub-routers
    api_router.include_router(
        create_sessions_router(session_manager), tags=["Sessions"]
    )
    api_router.include_router(
        create_debug_router(session_manager), tags=["Debug"]
    )

    return api_router
