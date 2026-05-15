"""MockAdapter — in-memory DebuggerAdapter for testing.

Implements the full DebuggerAdapter interface with predictable
responses. No real debugger required.
"""
from __future__ import annotations

from gdb_bridge.models.debug import (
    Breakpoint,
    EvaluationResult,
    Frame,
    Location,
    StopEvent,
    StopReason,
    Variable,
)
from gdb_bridge.models.session import CreateSessionRequest, Session, SessionStatus
from gdb_bridge.core.exceptions import GDBProcessError
from gdb_bridge.services.debug_adapter import DebuggerAdapter


class MockAdapter(DebuggerAdapter):
    """In-memory mock adapter implementing full DebuggerAdapter contract."""

    def __init__(self, session_id: str) -> None:
        super().__init__(session_id)
        self._started = False
        self._stopped = False
        self._breakpoints: dict[int, Breakpoint] = {}
        self._next_bp_id = 1
        self._current_line = 22
        self._variables: list[Variable] = [
            Variable(name="x", value="10"),
            Variable(name="y", value="20"),
        ]

    async def start(self, request: CreateSessionRequest) -> Session:
        self._started = True
        self._stopped = False
        return Session(
            session_id=self.session_id,
            status=SessionStatus.CREATED,
        )

    async def stop(self) -> None:
        self._stopped = True
        self._breakpoints.clear()

    def _check_alive(self) -> None:
        if self._stopped or not self._started:
            raise GDBProcessError("Adapter not started or already stopped")

    async def run(self) -> StopEvent:
        self._check_alive()
        return StopEvent(
            status="stopped",
            reason=StopReason.BREAKPOINT_HIT,
            location=Location(file="main.c", line=self._current_line, function="main"),
        )

    async def step(self, step_type: str = "step-in") -> StopEvent:
        self._check_alive()
        self._current_line += 1
        return StopEvent(
            status="stopped",
            reason=StopReason.STEP_DONE,
            location=Location(file="main.c", line=self._current_line, function="main"),
        )

    async def continue_execution(self) -> StopEvent:
        self._check_alive()
        return StopEvent(
            status="stopped",
            reason=StopReason.EXIT,
            location=Location(),
        )

    async def set_breakpoint(
        self, location: str, condition: str | None = None
    ) -> Breakpoint:
        self._check_alive()
        # Idempotent: return existing if already set
        for bp in self._breakpoints.values():
            if bp.location == location:
                return bp
        bp = Breakpoint(
            breakpoint_id=self._next_bp_id,
            location=location,
            condition=condition,
        )
        self._next_bp_id += 1
        self._breakpoints[bp.breakpoint_id] = bp
        return bp

    async def delete_breakpoint(self, breakpoint_id: int) -> None:
        self._check_alive()
        self._breakpoints.pop(breakpoint_id, None)

    async def list_breakpoints(self) -> list[Breakpoint]:
        self._check_alive()
        return list(self._breakpoints.values())

    async def get_current_location(self) -> Location:
        self._check_alive()
        return Location(
            file="main.c", line=self._current_line, function="main"
        )

    async def get_variables(self) -> list[Variable]:
        self._check_alive()
        return list(self._variables)

    async def evaluate_expression(self, expression: str) -> EvaluationResult:
        self._check_alive()
        return EvaluationResult(expression=expression, value="42", type="int")

    async def get_frames(self) -> list[Frame]:
        self._check_alive()
        return [
            Frame(level=0, function="main", file="main.c", line=self._current_line),
            Frame(level=1, function="_start", file="crt.c", line=1),
        ]
