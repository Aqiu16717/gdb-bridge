"""Session management API handlers."""

from __future__ import annotations

from fastapi import APIRouter

from gdb_bridge.core.session_manager import SessionManager
from gdb_bridge.models.session import CreateSessionRequest, Session, SessionStatus
from gdb_bridge.services.gdb_service import GDBService


def create_sessions_router(session_manager: SessionManager) -> APIRouter:
    """Create the sessions router.

    Args:
        session_manager: Shared session manager instance

    Returns:
        Sessions API router
    """
    sessions_router = APIRouter()

    @sessions_router.get(
        "/sessions",
        summary="List all active sessions",
    )
    async def list_sessions() -> dict:
        """List all active debugging sessions."""
        sessions = session_manager.list_sessions()
        return {"sessions": [s.model_dump() for s in sessions]}

    @sessions_router.post(
        "/sessions",
        response_model=Session,
        status_code=201,
        summary="Create a new debugging session",
    )
    async def create_session(request: CreateSessionRequest) -> Session:
        """Create a new debugging session."""
        session_id = session_manager.create_session_id()
        gdb_service = GDBService(session_id)

        session = Session(
            session_id=session_id,
            status=SessionStatus.CREATED,
        )

        await gdb_service.start(request)
        session_manager.add_session(session, gdb_service)

        return session

    @sessions_router.get(
        "/sessions/{session_id}",
        response_model=Session,
        summary="Get session status",
    )
    async def get_session(session_id: str) -> Session:
        """Get session status and information."""
        return session_manager.get_session(session_id)

    @sessions_router.delete(
        "/sessions/{session_id}",
        summary="Terminate a debugging session",
    )
    async def delete_session(session_id: str) -> dict:
        """Terminate a debugging session."""
        await session_manager.remove_session(session_id)
        return {
            "session_id": session_id,
            "status": "terminated",
        }

    return sessions_router
