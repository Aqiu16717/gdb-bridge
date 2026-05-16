"""Mock GDB/MI Session for testing without actual GDB execution.

This module provides a mock implementation of GDBSession that simulates
debugging sessions for PoC validation on systems where GDB cannot run
programs (e.g., macOS without proper code signing).
"""

from __future__ import annotations

import uuid
from typing import Optional

from gdb_session import GDBFrame, GDBResponse, GDBStopReason


class GDBSessionMock:
    """Mock GDB session for testing.

    Simulates a debugging session with predefined responses,
    useful for testing the Agent interface without a working GDB.
    """

    def __init__(self, gdb_path: str = "gdb", timeout: int = 30) -> None:
        """Initialize a mock GDB session."""
        self.session_id = str(uuid.uuid4())[:8]
        self.gdb_path = gdb_path
        self.timeout = timeout
        self._loaded_file: Optional[str] = None
        self._state: str = "initialized"  # initialized, running, stopped
        self._current_line: int = 22
        self._variables: list[dict[str, str]] = []
        self._step_count: int = 0

    def start(self) -> GDBResponse:
        """Start the mock GDB session."""
        self._state = "initialized"
        return GDBResponse(success=True)

    def stop(self) -> GDBResponse:
        """Stop the mock session."""
        self._state = "terminated"
        return GDBResponse(success=True)

    def load_file(self, path: str) -> GDBResponse:
        """Load a mock executable file."""
        self._loaded_file = path
        return GDBResponse(success=True)

    def set_breakpoint(self, location: str) -> GDBResponse:
        """Set a mock breakpoint."""
        return GDBResponse(
            success=True,
            result={
                "bkpt": {
                    "number": "1",
                    "type": "breakpoint",
                    "disp": "keep",
                    "enabled": "y",
                    "addr": "0x00000001000004c8",
                    "func": "main" if "main" in location else "unknown",
                    "file": "simple_test.c",
                    "line": "22",
                }
            },
        )

    def run(self, args: Optional[list[str]] = None) -> GDBResponse:
        """Simulate running the program until breakpoint."""
        self._state = "stopped"
        self._variables = [
            {"name": "x", "value": "10"},
            {"name": "y", "value": "20"},
            {"name": "sum", "value": "<optimized out>"},
            {"name": "product", "value": "<optimized out>"},
        ]
        return GDBResponse(
            success=True,
            stopped_reason=GDBStopReason(
                reason="breakpoint-hit",
                bkptno=1,
                frame=GDBFrame(
                    level=0,
                    addr="0x00000001000004c8",
                    func="main",
                    file="simple_test.c",
                    line=22,
                ),
                thread_id=1,
            ),
        )

    def step(self) -> GDBResponse:
        """Simulate stepping to the next line."""
        self._step_count += 1
        self._current_line = 23 + self._step_count
        self._state = "stopped"

        # Update variables based on step
        if self._step_count == 1:
            self._variables = [
                {"name": "x", "value": "10"},
                {"name": "y", "value": "20"},
                {"name": "sum", "value": "30"},
                {"name": "product", "value": "<optimized out>"},
            ]

        return GDBResponse(
            success=True,
            stopped_reason=GDBStopReason(
                reason="end-stepping-range",
                frame=GDBFrame(
                    level=0,
                    addr=f"0x00000001000004{self._current_line:02x}",
                    func="main",
                    file="simple_test.c",
                    line=self._current_line,
                ),
            ),
        )

    def next(self) -> GDBResponse:
        """Simulate stepping over."""
        return self.step()

    def continue_execution(self) -> GDBResponse:
        """Simulate continuing until program exit."""
        self._state = "stopped"
        return GDBResponse(
            success=True,
            stopped_reason=GDBStopReason(
                reason="exited-normally",
                frame=None,
            ),
        )

    def get_current_frame(self) -> GDBResponse:
        """Get mock frame information."""
        return GDBResponse(
            success=True,
            result={
                "frame": {
                    "level": "0",
                    "addr": f"0x00000001000004{self._current_line:02x}",
                    "func": "main",
                    "file": "simple_test.c",
                    "line": str(self._current_line),
                }
            },
        )

    def get_local_variables(self) -> GDBResponse:
        """Get mock local variables."""
        return GDBResponse(
            success=True,
            result={"locals": self._variables},
        )

    def evaluate_expression(self, expression: str) -> GDBResponse:
        """Evaluate a mock expression."""
        # Simple expression evaluation
        if "x + y" in expression or "10 + 20" in expression:
            return GDBResponse(
                success=True,
                result={"value": "30"},
            )
        elif "x" in expression:
            return GDBResponse(success=True, result={"value": "10"})
        elif "y" in expression:
            return GDBResponse(success=True, result={"value": "20"})
        else:
            return GDBResponse(success=True, result={"value": f"<{expression}>"})
