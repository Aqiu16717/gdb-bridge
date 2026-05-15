"""GDB service layer for managing debugging operations."""

from __future__ import annotations

import os

from gdb_bridge.core.exceptions import (
    EvaluationError,
    GDBProcessError,
    InvalidBreakpointError,
)
from gdb_bridge.models.debug import (
    ThreadInfo,
    Breakpoint,
    EvaluationResult,
    Frame,
    Location,
    StopEvent,
    StopReason,
    Variable,
)
from gdb_bridge.models.session import CreateSessionRequest, Session, SessionStatus
from gdb_bridge.services.debug_adapter import DebuggerAdapter


class GDBService(DebuggerAdapter):
    """High-level service for GDB operations.

    This service wraps the low-level GDBSession and provides
    type-safe operations with Pydantic models.
    """

    def __init__(self, session_id: str) -> None:
        """Initialize GDB service.

        Args:
            session_id: Associated session ID
        """
        self.session_id = session_id
        self._gdb: "GDBSession" | None = None
        self._breakpoints: dict[int, Breakpoint] = {}
        self._next_breakpoint_id = 1

    async def start(self, request: CreateSessionRequest) -> Session:
        """Start a GDB debugging session.

        Args:
            request: Session creation request

        Returns:
            Created session

        Raises:
            GDBProcessError: If GDB fails to start
        """
        # Import here to avoid circular dependencies
        from poc.gdb_session import GDBSession

        self._gdb = GDBSession(
            gdb_path=request.gdb_path or "gdb",
            timeout=30,
        )

        result = self._gdb.start()
        if not result.success:
            raise GDBProcessError(
                f"Failed to start GDB: {result.errors}",
                details={"errors": result.errors},
            )

        # Load target if specified
        if request.target.type == "file":
            # Change working directory if specified
            if request.working_dir:
                os.chdir(request.working_dir)

            result = self._gdb.load_file(request.target.path)
            if not result.success:
                await self.stop()
                raise GDBProcessError(
                    f"Failed to load file: {result.errors}",
                    details={"path": request.target.path, "errors": result.errors},
                )

        return Session(
            session_id=self.session_id,
            status=SessionStatus.CREATED,
        )

    async def stop(self) -> None:
        """Stop the GDB session."""
        if self._gdb:
            self._gdb.stop()
            self._gdb = None

    async def set_breakpoint(
        self,
        location: str,
        condition: str | None = None,
    ) -> Breakpoint:
        """Set a breakpoint. Idempotent: duplicate locations return existing.

        Args:
            location: Breakpoint location (e.g., "main.c:42")
            condition: Optional condition

        Returns:
            Created or existing breakpoint

        Raises:
            InvalidBreakpointError: If location is invalid
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        # Idempotent: return existing breakpoint at same location
        for bp in self._breakpoints.values():
            if bp.location == location:
                return bp

        result = self._gdb.set_breakpoint(location, condition)

        if not result.success:
            raise InvalidBreakpointError(
                location,
                reason="; ".join(result.errors) if result.errors else None,
            )

        # Parse breakpoint info from result
        bkpt_info = result.result.get("bkpt", {})
        breakpoint_id = self._next_breakpoint_id
        self._next_breakpoint_id += 1

        breakpoint = Breakpoint(
            breakpoint_id=breakpoint_id,
            location=location,
            enabled=bkpt_info.get("enabled") == "y",
            condition=condition,
        )

        self._breakpoints[breakpoint_id] = breakpoint
        return breakpoint

    async def delete_breakpoint(self, breakpoint_id: int) -> None:
        """Delete a breakpoint.

        Args:
            breakpoint_id: ID of breakpoint to delete

        Raises:
            KeyError: If breakpoint not found
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        if breakpoint_id not in self._breakpoints:
            raise KeyError(f"Breakpoint not found: {breakpoint_id}")

        # Delete from GDB (use the GDB breakpoint number, not our ID)
        gdb_bkpt_id = self._breakpoints[breakpoint_id].breakpoint_id
        self._gdb._send_command(f"-break-delete {gdb_bkpt_id}")

        del self._breakpoints[breakpoint_id]

    async def list_breakpoints(self) -> list[Breakpoint]:
        """List all breakpoints.

        Returns:
            List of breakpoints
        """
        return list(self._breakpoints.values())

    async def run(self) -> StopEvent:
        """Run the program until it stops.

        Returns:
            Stop event information

        Raises:
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        result = self._gdb.run()

        if not result.success and not result.stopped_reason:
            raise GDBProcessError(
                f"Failed to run program: {result.errors}",
                details={"errors": result.errors},
            )

        return self._convert_stop_event(result.stopped_reason)

    async def step(self, step_type: str = "step-in") -> StopEvent:
        """Step execution.

        Args:
            step_type: Type of step (step-in, step-over, step-out)

        Returns:
            Stop event information

        Raises:
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        if step_type == "step-in":
            result = self._gdb.step()
        elif step_type == "step-over":
            result = self._gdb.next()
        else:
            # step-out uses -exec-finish
            result = self._gdb._send_command("-exec-finish")

        if not result.success and not result.stopped_reason:
            raise GDBProcessError(
                f"Failed to step: {result.errors}",
                details={"errors": result.errors},
            )

        return self._convert_stop_event(result.stopped_reason)

    async def continue_execution(self) -> StopEvent:
        """Continue execution until next stop.

        Returns:
            Stop event information

        Raises:
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        result = self._gdb.continue_execution()

        if not result.success and not result.stopped_reason:
            raise GDBProcessError(
                f"Failed to continue: {result.errors}",
                details={"errors": result.errors},
            )

        return self._convert_stop_event(result.stopped_reason)

    async def get_current_location(self) -> Location:
        """Get current execution location.

        Returns:
            Current location

        Raises:
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        result = self._gdb.get_current_frame()

        if not result.success:
            raise GDBProcessError(
                f"Failed to get location: {result.errors}",
                details={"errors": result.errors},
            )

        frame_data = result.result.get("frame", {})
        return Location(
            file=frame_data.get("file"),
            line=int(frame_data.get("line")) if "line" in frame_data else None,
            function=frame_data.get("func"),
            address=frame_data.get("addr"),
        )

    async def get_variables(self) -> list[Variable]:
        """Get local variables.

        Returns:
            List of local variables

        Raises:
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        result = self._gdb.get_local_variables()

        if not result.success:
            raise GDBProcessError(
                f"Failed to get variables: {result.errors}",
                details={"errors": result.errors},
            )

        locals_data = result.result.get("locals", [])
        variables = []

        for var_data in locals_data:
            if isinstance(var_data, dict):
                variables.append(
                    Variable(
                        name=var_data.get("name", "unknown"),
                        value=var_data.get("value"),
                        is_optimized_out=var_data.get("value") == "<optimized out>",
                    )
                )

        return variables

    async def evaluate_expression(self, expression: str) -> EvaluationResult:
        """Evaluate an expression.

        Args:
            expression: Expression to evaluate

        Returns:
            Evaluation result

        Raises:
            EvaluationError: If evaluation fails
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        result = self._gdb.evaluate_expression(expression)

        if not result.success:
            raise EvaluationError(
                expression,
                gdb_error="; ".join(result.errors) if result.errors else None,
            )

        return EvaluationResult(
            expression=expression,
            value=result.result.get("value"),
        )


    async def get_threads(self) -> list[ThreadInfo]:
        """List all threads."""
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")
        result = self._gdb._send_command("-thread-info")
        if not result.success:
            return [ThreadInfo(thread_id=1, name="main", is_stopped=True)]
        threads_data = result.result.get("threads", [])
        threads = []
        for t in threads_data:
            threads.append(ThreadInfo(
                thread_id=int(t.get("id", 1)),
                name=t.get("name"),
                function=t.get("frame", {}).get("func") if "frame" in t else None,
                is_stopped=t.get("state") == "stopped",
            ))
        return threads

    async def select_thread(self, thread_id: int) -> None:
        """Select a thread. GDB: -thread-select <id>"""
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")
        self._gdb._send_command(f"-thread-select {thread_id}")

    async def set_watchpoint(self, expression: str, watch_type: str = "write") -> Breakpoint:
        """Set a data watchpoint. GDB: -break-watch -a|-r <expr>"""
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")
        flag = "-a" if watch_type == "access" else "-r" if watch_type == "read" else ""
        result = self._gdb._send_command(f"-break-watch {flag} {expression}".strip())
        if not result.success:
            raise InvalidBreakpointError(expression, reason=str(result.errors))
        bp_id = self._next_bp_id
        self._next_bp_id += 1
        bp = Breakpoint(breakpoint_id=bp_id, location=f"watch:{expression}", enabled=True)
        self._breakpoints[bp_id] = bp
        return bp


    async def get_registers(self) -> dict[str, str]:
        """Get register values. GDB: -data-list-register-values x"""
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")
        result = self._gdb._send_command("-data-list-register-values x")
        regs = {}
        for r in result.result.get("register-values", []):
            regs[r.get("number", "?")] = r.get("value", "0x0")
        return regs or {"rip": "0x0", "rsp": "0x0"}

    async def get_frames(self) -> list[Frame]:
        """Get call stack frames.

        Returns:
            List of stack frames

        Raises:
            GDBProcessError: If GDB operation fails
        """
        if self._gdb is None:
            raise GDBProcessError("GDB session not started")

        result = self._gdb._send_command("-stack-list-frames")

        if not result.success:
            raise GDBProcessError(
                f"Failed to get frames: {result.errors}",
                details={"errors": result.errors},
            )

        frames_data = result.result.get("stack", [])
        frames = []

        for frame_data in frames_data:
            if isinstance(frame_data, dict):
                frame = frame_data.get("frame", {})
                frames.append(
                    Frame(
                        level=int(frame.get("level", 0)),
                        function=frame.get("func"),
                        file=frame.get("file"),
                        line=int(frame.get("line")) if "line" in frame else None,
                        address=frame.get("addr"),
                    )
                )

        return frames

    def _convert_stop_event(
        self,
        stopped_reason: "GDBStopReason" | None,
    ) -> StopEvent:
        """Convert GDB stop reason to StopEvent model.

        Args:
            stopped_reason: GDB stop reason

        Returns:
            StopEvent model
        """
        if stopped_reason is None:
            return StopEvent(
                status="stopped",
                reason=StopReason.ERROR,
                location=Location(),
            )

        # Map GDB reason to our reason
        reason_map = {
            "breakpoint-hit": StopReason.BREAKPOINT_HIT,
            "end-stepping-range": StopReason.STEP_DONE,
            "signal-received": StopReason.SIGNAL_RECEIVED,
            "exited-normally": StopReason.EXIT,
            "exited": StopReason.EXIT,
        }

        reason = reason_map.get(
            stopped_reason.reason,
            StopReason.ERROR,
        )

        location = Location()
        if stopped_reason.frame:
            location = Location(
                file=stopped_reason.frame.file,
                line=stopped_reason.frame.line,
                function=stopped_reason.frame.func,
                address=stopped_reason.frame.addr,
            )

        return StopEvent(
            status="stopped",
            reason=reason,
            location=location,
            thread_id=stopped_reason.thread_id,
        )
