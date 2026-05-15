"""FastAPI application factory and lifecycle management."""

from __future__ import annotations

from contextlib import asynccontextmanager

from fastapi import FastAPI

from gdb_bridge.api.router import create_router
from gdb_bridge.api.error_handlers import register_error_handlers
from gdb_bridge.core.session_manager import SessionManager


def create_app() -> FastAPI:
    """Create and configure the FastAPI application.

    Returns:
        Configured FastAPI application
    """
    app = FastAPI(
        title="GDB-Bridge API",
        description="Agent-friendly GDB debugging interface",
        version="0.1.0",
    )

    # Create shared session manager
    session_manager = SessionManager()

    @asynccontextmanager
    async def lifespan(app: FastAPI):
        """Manage application lifecycle."""
        await session_manager.start()
        yield
        await session_manager.stop()

    app.router.lifespan_context = lifespan

    # Store session manager in app state
    app.state.session_manager = session_manager

    # Register routes
    router = create_router(session_manager)
    app.include_router(router)

    # Register error handlers
    register_error_handlers(app)

    return app
