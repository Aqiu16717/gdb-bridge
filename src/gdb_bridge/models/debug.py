"""Debug operation data models."""

from __future__ import annotations

from enum import Enum
from typing import Any

from pydantic import BaseModel, Field


class StepType(str, Enum):
    """Type of step operation."""

    STEP_IN = "step-in"
    STEP_OVER = "step-over"
    STEP_OUT = "step-out"


class StopReason(str, Enum):
    """Reason why the program stopped."""

    BREAKPOINT_HIT = "breakpoint-hit"
    STEP_DONE = "step-done"
    SIGNAL_RECEIVED = "signal-received"
    EXIT = "exit"
    ERROR = "error"


class Location(BaseModel):
    """Code location information."""

    file: str | None = Field(None, description="Source file")
    line: int | None = Field(None, description="Line number")
    function: str | None = Field(None, description="Function name")
    address: str | None = Field(None, description="Memory address")


class StopEvent(BaseModel):
    """Event fired when the program stops."""

    status: str = Field(default="stopped", description="Always 'stopped'")
    reason: StopReason = Field(..., description="Why the program stopped")
    location: Location = Field(default_factory=Location, description="Where it stopped")
    thread_id: int | None = Field(None, description="Current thread ID")
    signal: str | None = Field(None, description="Signal name if stopped by signal")


class CreateBreakpointRequest(BaseModel):
    """Request to create a breakpoint."""

    location: str = Field(..., description="Breakpoint location (e.g., 'main.c:42')")
    condition: str | None = Field(None, description="Optional condition")
    hit_count: int | None = Field(None, description="Break after N hits")


class Breakpoint(BaseModel):
    """Breakpoint information."""

    breakpoint_id: int = Field(..., description="Unique breakpoint ID")
    location: str = Field(..., description="Breakpoint location")
    enabled: bool = Field(True, description="Whether breakpoint is active")
    condition: str | None = Field(None, description="Breakpoint condition")
    hit_count: int | None = Field(None, description="Break after N hits")
    times: int = Field(0, description="Number of times hit")


class Variable(BaseModel):
    """Variable information."""

    name: str = Field(..., description="Variable name")
    type: str | None = Field(None, description="Variable type")
    value: Any = Field(None, description="Variable value")
    address: str | None = Field(None, description="Memory address")
    is_optimized_out: bool = Field(False, description="Whether variable was optimized out")


class Frame(BaseModel):
    """Stack frame information."""

    level: int = Field(..., description="Frame level (0 = current)")
    function: str | None = Field(None, description="Function name")
    file: str | None = Field(None, description="Source file")
    line: int | None = Field(None, description="Line number")
    address: str | None = Field(None, description="Frame address")


class EvaluateRequest(BaseModel):
    """Request to evaluate an expression."""

    expression: str = Field(..., description="Expression to evaluate")
    frame: int = Field(0, description="Frame index (0 = current)")


<<<<<<< HEAD
=======

class ThreadInfo(BaseModel):
    """Thread information."""

    thread_id: int = Field(..., description="Thread ID")
    name: str | None = Field(None, description="Thread name")
    function: str | None = Field(None, description="Current function")
    line: int | None = Field(None, description="Current line")
    is_stopped: bool = Field(False, description="Whether thread is stopped")


>>>>>>> origin/main
class EvaluationResult(BaseModel):
    """Result of expression evaluation."""

    expression: str = Field(..., description="Evaluated expression")
    value: Any = Field(..., description="Evaluation result")
    type: str | None = Field(None, description="Result type")
