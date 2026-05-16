"""Tests for custom exceptions."""

from __future__ import annotations


from gdb_bridge.core.exceptions import (
    GDBBridgeException,
    SessionNotFoundError,
    SessionAlreadyRunningError,
    InvalidBreakpointError,
    EvaluationError,
    GDBProcessError,
)
from gdb_bridge.models.errors import ErrorCode


class TestGDBBridgeException:
    """Tests for base exception."""

    def test_basic_exception(self) -> None:
        """Test creating a basic exception."""
        exc = GDBBridgeException(
            message="Something went wrong",
            error_code=ErrorCode.GDB_PROCESS_ERROR,
            status_code=500,
        )
        assert str(exc) == "Something went wrong"
        assert exc.error_code == ErrorCode.GDB_PROCESS_ERROR
        assert exc.status_code == 500

    def test_exception_with_details(self) -> None:
        """Test exception with additional details."""
        exc = GDBBridgeException(
            message="Load failed",
            error_code=ErrorCode.INVALID_BINARY,
            status_code=400,
            details={"path": "/nonexistent", "reason": "file not found"},
        )
        assert exc.details["path"] == "/nonexistent"


class TestSessionNotFoundError:
    """Tests for SessionNotFoundError."""

    def test_create(self) -> None:
        """Test creating the error."""
        exc = SessionNotFoundError(session_id="sess_abc")
        assert "sess_abc" in str(exc)
        assert exc.error_code == ErrorCode.SESSION_NOT_FOUND
        assert exc.status_code == 404

    def test_details_contain_session_id(self) -> None:
        """Test details contain session ID."""
        exc = SessionNotFoundError(session_id="sess_xyz")
        assert exc.details["session_id"] == "sess_xyz"


class TestSessionAlreadyRunningError:
    """Tests for SessionAlreadyRunningError."""

    def test_create(self) -> None:
        """Test creating the error."""
        exc = SessionAlreadyRunningError(session_id="sess_123")
        assert exc.error_code == ErrorCode.SESSION_ALREADY_RUNNING
        assert exc.status_code == 409


class TestInvalidBreakpointError:
    """Tests for InvalidBreakpointError."""

    def test_create_with_reason(self) -> None:
        """Test creating with reason."""
        exc = InvalidBreakpointError(
            location="void.c:999",
            reason="file not found",
        )
        assert exc.error_code == ErrorCode.INVALID_BREAKPOINT_LOCATION
        assert exc.details["location"] == "void.c:999"

    def test_create_without_reason(self) -> None:
        """Test creating without reason."""
        exc = InvalidBreakpointError(location="main.c:42")
        assert exc.status_code == 422


class TestEvaluationError:
    """Tests for EvaluationError."""

    def test_create(self) -> None:
        """Test creating the error."""
        exc = EvaluationError(
            expression="*(int*)0",
            gdb_error="Cannot access memory at address 0x0",
        )
        assert "Cannot access memory" in str(exc)
        assert exc.error_code == ErrorCode.EVALUATION_FAILED

    def test_without_gdb_error(self) -> None:
        """Test without GDB error."""
        exc = EvaluationError(expression="unknown_var")
        assert exc.status_code == 422


class TestGDBProcessError:
    """Tests for GDBProcessError."""

    def test_create(self) -> None:
        """Test creating the error."""
        exc = GDBProcessError("GDB crashed")
        assert exc.status_code == 500
        assert exc.error_code == ErrorCode.GDB_PROCESS_ERROR
