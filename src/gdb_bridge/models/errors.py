"""Error handling data models."""

from __future__ import annotations

from enum import Enum
from typing import Any

from pydantic import BaseModel, Field


class ErrorCode(str, Enum):
    """Standard error codes for GDB-Bridge API."""

    # 400 - Bad Request
    INVALID_REQUEST = "E001"
    INVALID_BINARY = "E008"

    # 403 - Forbidden
    PERMISSION_DENIED = "E009"

    # 404 - Not Found
    SESSION_NOT_FOUND = "E002"
    BREAKPOINT_NOT_FOUND = "E010"

    # 409 - Conflict
    SESSION_ALREADY_RUNNING = "E003"

    # 422 - Unprocessable Entity
    INVALID_BREAKPOINT_LOCATION = "E004"
    EVALUATION_FAILED = "E005"

    # 500 - Internal Server Error
    GDB_PROCESS_ERROR = "E006"

    # 503 - Service Unavailable
    SESSION_TIMEOUT = "E007"


class ErrorDetail(BaseModel):
    """Detailed error information."""

    code: ErrorCode = Field(..., description="Error code")
    message: str = Field(..., description="Human-readable error message")
    details: dict[str, Any] = Field(default_factory=dict, description="Additional error details")


class ErrorResponse(BaseModel):
    """Standard error response."""

    error: ErrorDetail = Field(..., description="Error information")

    @classmethod
    def create(
        cls,
        code: ErrorCode,
        message: str,
        details: dict[str, Any] | None = None,
    ) -> ErrorResponse:
        """Create an error response.

        Args:
            code: Error code
            message: Error message
            details: Additional details

        Returns:
            ErrorResponse instance
        """
        return cls(
            error=ErrorDetail(
                code=code,
                message=message,
                details=details or {},
            )
        )
