"""Custom exceptions for GDB-Bridge."""

from __future__ import annotations

from gdb_bridge.models.errors import ErrorCode


class GDBBridgeException(Exception):
    """Base exception for GDB-Bridge."""

    def __init__(
        self,
        message: str,
        error_code: ErrorCode,
        status_code: int = 500,
        details: dict | None = None,
    ) -> None:
        """Initialize exception.

        Args:
            message: Error message
            error_code: Application error code
            status_code: HTTP status code
            details: Additional error details
        """
        super().__init__(message)
        self.message = message
        self.error_code = error_code
        self.status_code = status_code
        self.details = details or {}


class SessionNotFoundError(GDBBridgeException):
    """Session or resource not found."""

    def __init__(self, session_id: str, message: str | None = None) -> None:
        """Initialize exception.

        Args:
            session_id: Session ID for the context
            message: Optional custom error message
        """
        msg = message or f"Session not found: {session_id}"
        super().__init__(
            message=msg,
            error_code=ErrorCode.SESSION_NOT_FOUND,
            status_code=404,
            details={"session_id": session_id},
        )

class SessionExpiredError(GDBBridgeException):
    """Session TTL expired."""

    def __init__(self, session_id: str, message: str | None = None) -> None:
        """Initialize exception.

        Args:
            session_id: Session ID that expired
            message: Optional custom error message
        """
        msg = message or f"Session expired (TTL): {session_id}"
        super().__init__(
            message=msg,
            error_code=ErrorCode.SESSION_TIMEOUT,
            status_code=503,
            details={"session_id": session_id},
        )


class SessionAlreadyRunningError(GDBBridgeException):
    """Session is already running."""

    def __init__(self, session_id: str) -> None:
        """Initialize exception.

        Args:
            session_id: Session ID that is running
        """
        super().__init__(
            message=f"Session is already running: {session_id}",
            error_code=ErrorCode.SESSION_ALREADY_RUNNING,
            status_code=409,
            details={"session_id": session_id},
        )


class InvalidBreakpointError(GDBBridgeException):
    """Invalid breakpoint location."""

    def __init__(self, location: str, reason: str | None = None) -> None:
        """Initialize exception.

        Args:
            location: Invalid breakpoint location
            reason: Why the location is invalid
        """
        message = f"Invalid breakpoint location: {location}"
        if reason:
            message = f"{message} ({reason})"

        super().__init__(
            message=message,
            error_code=ErrorCode.INVALID_BREAKPOINT_LOCATION,
            status_code=422,
            details={"location": location, "reason": reason},
        )


class EvaluationError(GDBBridgeException):
    """Expression evaluation failed."""

    def __init__(self, expression: str, gdb_error: str | None = None) -> None:
        """Initialize exception.

        Args:
            expression: Expression that failed to evaluate
            gdb_error: Original GDB error message
        """
        message = f"Failed to evaluate expression: {expression}"
        if gdb_error:
            message = f"{message}: {gdb_error}"

        super().__init__(
            message=message,
            error_code=ErrorCode.EVALUATION_FAILED,
            status_code=422,
            details={"expression": expression, "gdb_error": gdb_error},
        )


class GDBProcessError(GDBBridgeException):
    """GDB process error."""

    def __init__(self, message: str, details: dict | None = None) -> None:
        """Initialize exception.

        Args:
            message: Error message
            details: Additional details
        """
        super().__init__(
            message=message,
            error_code=ErrorCode.GDB_PROCESS_ERROR,
            status_code=500,
            details=details,
        )
