"""Dependencies for API handlers."""

from __future__ import annotations

from gdb_bridge.api.app import session_manager  # type: ignore[attr-defined]
from gdb_bridge.core.session_manager import SessionManager
from gdb_bridge.models.session import Session
from gdb_bridge.services.gdb_service import GDBService


async def get_session_info(
    session_id: str,
    manager: SessionManager = session_manager,
) -> tuple[Session, "GDBService"]:  # type: ignore[name-defined]
    """Get session and GDB service for a session ID.

    Args:
        session_id: Session ID
        manager: Session manager instance

    Returns:
        Tuple of (Session, GDBService)
    """
    session = manager.get_session(session_id)
    gdb_service = manager.get_gdb_service(session_id)
    return session, gdb_service
