"""Data models for GDB-Bridge API."""

from gdb_bridge.models.session import (
    CreateSessionRequest,
    Session,
    SessionStatus,
    Target,
    TargetType,
)
from gdb_bridge.models.debug import (
    Breakpoint,
    CreateBreakpointRequest,
    EvaluateRequest,
    EvaluationResult,
    Frame,
    Location,
    StepType,
    StopEvent,
    StopReason,
    Variable,
)
from gdb_bridge.models.errors import ErrorResponse, ErrorCode

__all__ = [
    # Session models
    "CreateSessionRequest",
    "Session",
    "SessionStatus",
    "Target",
    "TargetType",
    # Debug models
    "Breakpoint",
    "CreateBreakpointRequest",
    "EvaluateRequest",
    "EvaluationResult",
    "Frame",
    "Location",
    "StepType",
    "StopEvent",
    "StopReason",
    "Variable",
    # Error models
    "ErrorResponse",
    "ErrorCode",
]
