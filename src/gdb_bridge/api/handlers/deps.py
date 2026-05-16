"""Dependencies for API handlers."""

from __future__ import annotations

from gdb_bridge.api.app import session_manager  # type: ignore[attr-defined,import-not-found]
from gdb_bridge.core.session_manager import SessionManager
from gdb_bridge.models.session import Session
from gdb_bridge.services.debug_adapter import DebuggerAdapter


async def get_session_info(
    session_id: str,
    manager: SessionManager = session_manager,
) -> tuple[Session, "DebuggerAdapter"]:
    """Get session and GDB service for a session ID.

    Args:
        session_id: Session ID
        manager: Session manager instance

    Returns:
        Tuple of (Session, GDBService)
    """
    session = manager.get_session(session_id)
    adapter = manager.get_gdb_service(session_id)
    return session, adapter
