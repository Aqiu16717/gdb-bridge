"""DebuggerAdapter — abstract interface for debugger backends.

All debugger backends (GDBService, LLDBService) must implement this interface.
The REST and MCP protocol layers depend only on this abstraction, never on
specific backends.
"""

from __future__ import annotations

from abc import ABC, abstractmethod

from gdb_bridge.models.debug import (
    ThreadInfo,
    Breakpoint,
    EvaluationResult,
    Frame,
    Location,
    StopEvent,
    Variable,
)
from gdb_bridge.models.session import CreateSessionRequest, Session


class DebuggerAdapter(ABC):
    """Abstract interface for all debugger backends.

    Implementing classes:
      - GDBService   (GDB/MI via pexpect)
      - LLDBService  (LLDB SB API)
      - MockAdapter  (for testing)
    """

    def __init__(self, session_id: str) -> None:
        """Initialize the adapter.

        Args:
            session_id: Unique session identifier.
        """
        self.session_id = session_id

    # -- Lifecycle ----------------------------------------------------------------

    @abstractmethod
    async def start(self, request: CreateSessionRequest) -> Session:
        """Start a debugging session.

        Args:
            request: Session creation parameters (target, args, env, etc.)

        Returns:
            Session model with session_id and initial status.

        Raises:
            GDBProcessError / LLDbProcessError: If the debugger fails to start.
        """
        ...

    @abstractmethod
    async def stop(self) -> None:
        """Terminate the debugging session.

        Should clean up the debugger process and release resources.
        Must be safe to call multiple times.
        """
        ...

    # -- Execution control --------------------------------------------------------

    @abstractmethod
    async def run(self) -> StopEvent:
        """Run the target until it stops (breakpoint, signal, or exit).

        Returns:
            StopEvent describing why and where execution stopped.
        """
        ...

    @abstractmethod
    async def step(self, step_type: str = "step-in") -> StopEvent:
        """Step execution by one instruction / line.

        Args:
            step_type: One of "step-in", "step-over", "step-out".

        Returns:
            StopEvent describing the new execution state.
        """
        ...

    @abstractmethod
    async def continue_execution(self) -> StopEvent:
        """Continue execution until the next stop event.

        Returns:
            StopEvent describing why execution stopped.
        """
        ...

    # -- Breakpoints ---------------------------------------------------------------

    @abstractmethod
    async def set_breakpoint(
        self,
        location: str,
        condition: str | None = None,
    ) -> Breakpoint:
        """Set a breakpoint.

        Idempotent: setting the same location twice returns the existing
        breakpoint without error.

        Args:
            location: Breakpoint location, e.g. "main.c:42" or "main".
            condition: Optional condition expression.

        Returns:
            Breakpoint model.
        """
        ...

    @abstractmethod
    async def delete_breakpoint(self, breakpoint_id: int) -> None:
        """Delete a breakpoint.

        Args:
            breakpoint_id: ID of the breakpoint to remove.
        """
        ...

    @abstractmethod
    async def list_breakpoints(self) -> list[Breakpoint]:
        """List all breakpoints in this session.

        Returns:
            List of Breakpoint models.
        """
        ...

    # -- Inspection ----------------------------------------------------------------

    @abstractmethod
    async def get_current_location(self) -> Location:
        """Get the current execution location.

        Returns:
            Location with file, line, function, and address.
        """
        ...

    @abstractmethod
    async def get_variables(self) -> list[Variable]:
        """Get local variables at the current stop point.

        Returns:
            List of Variable models.
        """
        ...

    @abstractmethod
    async def evaluate_expression(self, expression: str) -> EvaluationResult:
        """Evaluate an expression in the current frame.

        Args:
            expression: C/C++ expression to evaluate.

        Returns:
            EvaluationResult with value and type.
        """
        ...

    # -- Threads ------------------------------------------------------------------

    @abstractmethod
    async def get_threads(self) -> list[ThreadInfo]:
        """List all threads in the current process.

        Returns:
            List of ThreadInfo models.
        """
        ...

    @abstractmethod
    async def select_thread(self, thread_id: int) -> None:
        """Select a thread for subsequent operations.

        Args:
            thread_id: ID of the thread to select.
        """
        ...

    # -- Watchpoints ---------------------------------------------------------------

    @abstractmethod
    async def set_watchpoint(
        self,
        expression: str,
        watch_type: str = "write",
    ) -> Breakpoint:
        """Set a data watchpoint.

        Args:
            expression: Expression or variable to watch.
            watch_type: "read", "write", or "access".

        Returns:
            Breakpoint model for the watchpoint.
        """
        ...

    @abstractmethod
    async def get_registers(self) -> dict[str, str]:
        """Get current register values.

        Returns:
            Dict mapping register name to hex value.
        """
        ...

    # -- Remote Debugging ---------------------------------------------------------

    @abstractmethod
    async def attach_remote(self, host: str, port: int) -> Session:
        """Attach to a remote gdbserver/lldb-server.

        Args:
            host: Remote host or IP address.
            port: Remote debug server port.

        Returns:
            Session with updated status.
        """
        ...

    # -- Core Dump -----------------------------------------------------------------

    @abstractmethod
    async def load_core(self, core_path: str, exec_path: str | None = None) -> Session:
        """Load a core dump for offline analysis.

        Args:
            core_path: Path to the core dump file.
            exec_path: Optional path to the executable.

        Returns:
            Session with updated status.
        """
        ...

    @abstractmethod
    async def get_frames(self) -> list[Frame]:
        """Get the current call stack.

        Returns:
            List of Frame models, with frame 0 being the innermost frame.
        """
        ...
