"""Session-related data models."""

from __future__ import annotations

from datetime import datetime, timezone
from enum import Enum

from pydantic import BaseModel, Field


class TargetType(str, Enum):
    """Target type for debugging session."""

    FILE = "file"
    PID = "pid"
    REMOTE = "remote"


class Target(BaseModel):
    """Debug target specification."""

    type: TargetType = Field(..., description="Target type")
    path: str = Field(..., description="Path to executable or connection string")
    args: list[str] = Field(default_factory=list, description="Command line arguments")
    env: dict[str, str] = Field(default_factory=dict, description="Environment variables")


class SessionStatus(str, Enum):
    """Session lifecycle status."""

    CREATED = "created"
    RUNNING = "running"
    STOPPED = "stopped"
    TERMINATED = "terminated"


class StoppedAt(BaseModel):
    """Location where the program stopped."""

    file: str | None = Field(None, description="Source file")
    line: int | None = Field(None, description="Line number")
    function: str | None = Field(None, description="Function name")


class Session(BaseModel):
    """Debugging session information."""

    session_id: str = Field(..., description="Unique session identifier")
    status: SessionStatus = Field(..., description="Current session status")
    target_pid: int | None = Field(None, description="Target process ID")
    created_at: datetime = Field(default_factory=lambda: datetime.now(tz=timezone.utc), description="Session creation time")
    stopped_at: StoppedAt | None = Field(None, description="Where the program stopped")

    model_config = {
        "json_schema_extra": {
            "examples": [
                {
                    "session_id": "sess_abc123",
                    "status": "stopped",
                    "target_pid": 12345,
                    "created_at": "2026-05-15T10:30:00Z",
                    "stopped_at": {
                        "file": "main.c",
                        "line": 42,
                        "function": "main",
                    },
                }
            ]
        }
    }


class CreateSessionRequest(BaseModel):
    """Request to create a new debugging session."""

    target: Target = Field(..., description="Debug target")
    gdb_path: str = Field(default="gdb", description="Path to GDB executable")
    working_dir: str | None = Field(None, description="Working directory")

    model_config = {
        "json_schema_extra": {
            "examples": [
                {
                    "target": {
                        "type": "file",
                        "path": "/path/to/binary",
                        "args": ["arg1", "arg2"],
                    },
                    "gdb_path": "gdb",
                    "working_dir": "/path/to/cwd",
                }
            ]
        }
    }
