"""Tests for SessionManager."""

from __future__ import annotations

import asyncio
from unittest.mock import AsyncMock

import pytest
import pytest_asyncio

from gdb_bridge.core.exceptions import SessionNotFoundError
from gdb_bridge.core.session_manager import SessionManager
from gdb_bridge.models.session import Session, SessionStatus


@pytest_asyncio.fixture
async def session_manager():
    """Create a session manager instance."""
    sm = SessionManager(ttl_seconds=60, cleanup_interval=9999)
    await sm.start()
    yield sm
    await sm.stop()


@pytest.fixture
def mock_gdb_service():
    """Create a mock GDB service."""
    return AsyncMock()


@pytest.fixture
def test_session():
    """Create a test session."""
    return Session(
        session_id="sess_test",
        status=SessionStatus.CREATED,
    )


class TestSessionManagerBasic:
    """Tests for basic session operations."""

    @pytest.mark.asyncio
    async def test_create_session_id(self, session_manager) -> None:
        """Test session ID generation."""
        session_id = session_manager.create_session_id()
        assert session_id.startswith("sess_")
        assert len(session_id) == 17

    @pytest.mark.asyncio
    async def test_add_session(self, session_manager, test_session, mock_gdb_service) -> None:
        """Test adding a session."""
        session_manager.add_session(test_session, mock_gdb_service)
        retrieved = session_manager.get_session("sess_test")
        assert retrieved.session_id == "sess_test"
        assert retrieved.status == SessionStatus.CREATED

    @pytest.mark.asyncio
    async def test_get_gdb_service(self, session_manager, test_session, mock_gdb_service) -> None:
        """Test getting GDB service for a session."""
        session_manager.add_session(test_session, mock_gdb_service)
        service = session_manager.get_gdb_service("sess_test")
        assert service is mock_gdb_service

    @pytest.mark.asyncio
    async def test_get_nonexistent_session(self, session_manager) -> None:
        """Test getting a session that doesn't exist."""
        with pytest.raises(SessionNotFoundError):
            session_manager.get_session("nonexistent")

    @pytest.mark.asyncio
    async def test_list_sessions(self, session_manager, test_session, mock_gdb_service) -> None:
        """Test listing sessions."""
        session_manager.add_session(test_session, mock_gdb_service)
        session2 = Session(session_id="sess_second", status=SessionStatus.CREATED)
        session_manager.add_session(session2, mock_gdb_service)
        sessions = session_manager.list_sessions()
        assert len(sessions) == 2

    @pytest.mark.asyncio
    async def test_remove_session(self, session_manager, test_session, mock_gdb_service) -> None:
        """Test removing a session."""
        session_manager.add_session(test_session, mock_gdb_service)
        await session_manager.remove_session("sess_test")
        with pytest.raises(SessionNotFoundError):
            session_manager.get_session("sess_test")

    @pytest.mark.asyncio
    async def test_update_session_status(
        self, session_manager, test_session, mock_gdb_service
    ) -> None:
        """Test updating session status."""
        session_manager.add_session(test_session, mock_gdb_service)
        updated = session_manager.update_session_status("sess_test", SessionStatus.RUNNING)
        assert updated.status == SessionStatus.RUNNING
        session = session_manager.get_session("sess_test")
        assert session.status == SessionStatus.RUNNING


class TestSessionManagerTTL:
    """Tests for TTL-related behavior."""

    @pytest.mark.asyncio
    async def test_cleanup_expired_sessions(self) -> None:
        """Test that expired sessions are cleaned up."""
        sm = SessionManager(ttl_seconds=1, cleanup_interval=1)
        await sm.start()
        mock_gdb = AsyncMock()
        session = Session(session_id="sess_expired", status=SessionStatus.CREATED)
        sm.add_session(session, mock_gdb)
        await asyncio.sleep(2.5)
        with pytest.raises(SessionNotFoundError):
            sm.get_session("sess_expired")
        await sm.stop()

    @pytest.mark.asyncio
    async def test_active_session_not_expired(
        self, session_manager, test_session, mock_gdb_service
    ) -> None:
        """Test that active sessions are not expired."""
        session_manager.add_session(test_session, mock_gdb_service)
        session = session_manager.get_session("sess_test")
        assert session.session_id == "sess_test"


@pytest.mark.asyncio
async def test_session_manager_lifecycle():
    """Test full session manager lifecycle."""
    sm = SessionManager(ttl_seconds=10, cleanup_interval=10)
    await sm.start()
    mock_gdb = AsyncMock()
    session = Session(session_id="sess_lifecycle", status=SessionStatus.CREATED)
    sm.add_session(session, mock_gdb)
    retrieved = sm.get_session("sess_lifecycle")
    assert retrieved.session_id == "sess_lifecycle"
    sm.update_session_status("sess_lifecycle", SessionStatus.RUNNING)
    assert sm.get_session("sess_lifecycle").status == SessionStatus.RUNNING
    await sm.remove_session("sess_lifecycle")
    with pytest.raises(SessionNotFoundError):
        sm.get_session("sess_lifecycle")
    await sm.stop()
    mock_gdb.stop.assert_called_once()
