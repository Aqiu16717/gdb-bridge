"""Session management with TTL support."""

from __future__ import annotations

import asyncio
import uuid
from dataclasses import dataclass, field
from datetime import datetime, timedelta, timezone
from typing import TYPE_CHECKING

from gdb_bridge.core.exceptions import SessionNotFoundError, SessionExpiredError
from gdb_bridge.models.session import Session, SessionStatus

if TYPE_CHECKING:
    from gdb_bridge.services.debug_adapter import DebuggerAdapter


@dataclass
class SessionEntry:
    """Session entry with metadata."""

    session: Session
    gdb_service: "DebuggerAdapter"
    created_at: datetime = field(default_factory=lambda: datetime.now(tz=timezone.utc))
    last_activity: datetime = field(default_factory=lambda: datetime.now(tz=timezone.utc))


class SessionManager:
    """Manages debugging sessions with TTL support.

    This class provides in-memory session storage with automatic
    cleanup of expired sessions.
    """

    def __init__(self, ttl_seconds: int = 3600, cleanup_interval: int = 300) -> None:
        """Initialize session manager.

        Args:
            ttl_seconds: Session TTL in seconds (default: 1 hour)
            cleanup_interval: Cleanup interval in seconds (default: 5 minutes)
        """
        self._sessions: dict[str, SessionEntry] = {}
        self._ttl = timedelta(seconds=ttl_seconds)
        self._cleanup_interval = cleanup_interval
        self._cleanup_task: asyncio.Task | None = None

    async def start(self) -> None:
        """Start the cleanup task."""
        self._cleanup_task = asyncio.create_task(self._cleanup_loop())

    async def stop(self) -> None:
        """Stop the cleanup task and terminate all sessions."""
        if self._cleanup_task:
            self._cleanup_task.cancel()
            try:
                await self._cleanup_task
            except asyncio.CancelledError:
                pass

        # Terminate all active sessions
        for entry in list(self._sessions.values()):
            await self._terminate_session(entry)

        self._sessions.clear()

    def create_session_id(self) -> str:
        """Generate a unique session ID."""
        return f"sess_{uuid.uuid4().hex[:12]}"

    def add_session(
        self,
        session: Session,
        gdb_service: "DebuggerAdapter",
    ) -> Session:
        """Add a new session.

        Args:
            session: Session to add
            gdb_service: Associated GDB service

        Returns:
            The added session
        """
        entry = SessionEntry(
            session=session,
            gdb_service=gdb_service,
        )
        self._sessions[session.session_id] = entry
        return session

    def get_session(self, session_id: str) -> Session:
        """Get a session by ID.

        Args:
            session_id: Session ID

        Returns:
            The session

        Raises:
            SessionNotFoundError: If session not found or expired
        """
        entry = self._get_entry(session_id)
        entry.last_activity = datetime.now(tz=timezone.utc)
        return entry.session

    def get_gdb_service(self, session_id: str) -> "DebuggerAdapter":
        """Get GDB service for a session.

        Args:
            session_id: Session ID

        Returns:
            The GDB service

        Raises:
            SessionNotFoundError: If session not found or expired
        """
        entry = self._get_entry(session_id)
        entry.last_activity = datetime.now(tz=timezone.utc)
        return entry.gdb_service

    async def remove_session(self, session_id: str) -> None:
        """Remove a session.

        Args:
            session_id: Session ID to remove

        Raises:
            SessionNotFoundError: If session not found
        """
        entry = self._get_entry(session_id)
        await self._terminate_session(entry)
        del self._sessions[session_id]

    def list_sessions(self) -> list[Session]:
        """List all active sessions."""
        return [entry.session for entry in self._sessions.values()]

    def update_session_status(
        self,
        session_id: str,
        status: SessionStatus,
    ) -> Session:
        """Update session status.

        Args:
            session_id: Session ID
            status: New status

        Returns:
            Updated session

        Raises:
            SessionNotFoundError: If session not found
        """
        entry = self._get_entry(session_id)
        entry.session.status = status
        entry.last_activity = datetime.now(tz=timezone.utc)
        return entry.session

    def _get_entry(self, session_id: str) -> SessionEntry:
        """Get session entry by ID.

        Args:
            session_id: Session ID

        Returns:
            Session entry

        Raises:
            SessionNotFoundError: If session not found or expired
        """
        entry = self._sessions.get(session_id)
        if entry is None:
            raise SessionNotFoundError(session_id)

        # Check if expired
        if datetime.now(tz=timezone.utc) - entry.last_activity > self._ttl:
            raise SessionExpiredError(session_id)

        return entry

    async def _cleanup_loop(self) -> None:
        """Background task to clean up expired sessions."""
        while True:
            try:
                await asyncio.sleep(self._cleanup_interval)
                await self._cleanup_expired()
            except asyncio.CancelledError:
                break
            except Exception:
                # Log error but continue cleanup loop
                await asyncio.sleep(10)

    async def _cleanup_expired(self) -> None:
        """Clean up expired sessions."""
        now = datetime.now(tz=timezone.utc)
        expired = [
            session_id
            for session_id, entry in self._sessions.items()
            if now - entry.last_activity > self._ttl
        ]

        for session_id in expired:
            entry = self._sessions.get(session_id)
            if entry:
                await self._terminate_session(entry)
                del self._sessions[session_id]

    async def _terminate_session(self, entry: SessionEntry) -> None:
        """Terminate a session's GDB process.

        Args:
            entry: Session entry to terminate
        """
        try:
            await entry.gdb_service.stop()
        except Exception:
            # Log but don't raise - we're cleaning up
            pass
