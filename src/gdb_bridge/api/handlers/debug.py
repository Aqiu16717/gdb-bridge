"""Debug operation API handlers."""

from __future__ import annotations

from fastapi import APIRouter, Query

from gdb_bridge.core.session_manager import SessionManager
from gdb_bridge.models.debug import (
    Breakpoint,
    CreateBreakpointRequest,
    EvaluateRequest,
    EvaluationResult,
    StepType,
    StopEvent,
    Variable,
)


def create_debug_router(session_manager: SessionManager) -> APIRouter:
    """Create the debug operations router.

    Args:
        session_manager: Shared session manager instance

    Returns:
        Debug API router
    """
    debug_router = APIRouter()

    @debug_router.post(
        "/sessions/{session_id}/continue",
        response_model=StopEvent,
        summary="Continue execution",
    )
    async def continue_execution(session_id: str) -> StopEvent:
        """Continue execution until next breakpoint or program end."""
        gdb_service = session_manager.get_gdb_service(session_id)
        return await gdb_service.continue_execution()

    @debug_router.post(
        "/sessions/{session_id}/step",
        response_model=StopEvent,
        summary="Step execution",
    )
    async def step_execution(
        session_id: str,
        type: StepType = StepType.STEP_IN,
    ) -> StopEvent:
        """Step execution (step-in, step-over, step-out)."""
        gdb_service = session_manager.get_gdb_service(session_id)
        return await gdb_service.step(type.value)

    @debug_router.get(
        "/sessions/{session_id}/breakpoints",
        summary="List all breakpoints",
    )
    async def list_breakpoints(session_id: str) -> dict:
        """List all breakpoints in the session."""
        gdb_service = session_manager.get_gdb_service(session_id)
        breakpoints = await gdb_service.list_breakpoints()
        return {"breakpoints": breakpoints}

    @debug_router.post(
        "/sessions/{session_id}/breakpoints",
        response_model=Breakpoint,
        status_code=201,
        summary="Set a breakpoint",
    )
    async def set_breakpoint(
        session_id: str,
        request: CreateBreakpointRequest,
    ) -> Breakpoint:
        """Set a breakpoint."""
        gdb_service = session_manager.get_gdb_service(session_id)
        return await gdb_service.set_breakpoint(
            location=request.location,
            condition=request.condition,
        )

    @debug_router.delete(
        "/sessions/{session_id}/breakpoints/{breakpoint_id}",
        status_code=204,
        summary="Delete a breakpoint",
    )
    async def delete_breakpoint(
        session_id: str,
        breakpoint_id: int,
    ) -> None:
        """Delete a breakpoint."""
        gdb_service = session_manager.get_gdb_service(session_id)
        await gdb_service.delete_breakpoint(breakpoint_id)

    @debug_router.get(
        "/sessions/{session_id}/variables/{name}",
        response_model=Variable,
        summary="Get variable value",
    )
    async def get_variable(
        session_id: str,
        name: str,
        scope: str | None = Query(None, enum=["local", "global", "argument"]),
        frame: int = Query(0),
    ) -> Variable:
        """Get variable value."""
        gdb_service = session_manager.get_gdb_service(session_id)
        variables = await gdb_service.get_variables()

        for var in variables:
            if var.name == name:
                return var

        # Try expression evaluation as fallback
        from gdb_bridge.core.exceptions import (
            EvaluationError,
            SessionNotFoundError,
        )

        try:
            result = await gdb_service.evaluate_expression(name)
            return Variable(
                name=name,
                value=result.value,
                type=result.type,
            )
        except EvaluationError:
            raise SessionNotFoundError(session_id, message=f"Variable '{name}' not found") from None

    @debug_router.get(
        "/sessions/{session_id}/frames",
        summary="Get call stack",
    )
    async def get_frames(session_id: str) -> dict:
        """Get call stack frames."""
        gdb_service = session_manager.get_gdb_service(session_id)
        frames = await gdb_service.get_frames()
        return {"frames": frames}

    @debug_router.post(
        "/sessions/{session_id}/evaluate",
        response_model=EvaluationResult,
        summary="Evaluate expression",
    )
    async def evaluate_expression(
        session_id: str,
        request: EvaluateRequest,
    ) -> EvaluationResult:
        """Evaluate an expression in the current context."""
        gdb_service = session_manager.get_gdb_service(session_id)
        return await gdb_service.evaluate_expression(request.expression)

    @debug_router.get(
        "/sessions/{session_id}/threads",
        summary="List threads",
    )
    async def get_threads(session_id: str) -> dict:
        """List all threads."""
        gdb_service = session_manager.get_gdb_service(session_id)
        threads = await gdb_service.get_threads()
        return {"threads": [t.model_dump() for t in threads]}

    @debug_router.post(
        "/sessions/{session_id}/threads/{thread_id}/select",
        summary="Select thread",
    )
    async def select_thread(session_id: str, thread_id: int) -> dict:
        """Select a thread for subsequent operations."""
        gdb_service = session_manager.get_gdb_service(session_id)
        await gdb_service.select_thread(thread_id)
        return {"success": True}

    @debug_router.post(
        "/sessions/{session_id}/watchpoints",
        response_model=Breakpoint,
        status_code=201,
        summary="Set a watchpoint (data breakpoint)",
    )
    async def set_watchpoint(
        session_id: str,
        expression: str = Query(...),
        watch_type: str = Query("write", enum=["read", "write", "access"]),
    ) -> Breakpoint:
        """Set a data watchpoint."""
        gdb_service = session_manager.get_gdb_service(session_id)
        return await gdb_service.set_watchpoint(expression, watch_type)

    @debug_router.get(
        "/sessions/{session_id}/registers",
        summary="Get registers",
    )
    async def get_registers(session_id: str) -> dict:
        """Get current register values."""
        gdb_service = session_manager.get_gdb_service(session_id)
        regs = await gdb_service.get_registers()
        return {"registers": regs}

    @debug_router.post(
        "/sessions/{session_id}/remote-attach",
        summary="Attach to remote debug server",
    )
    async def remote_attach(
        session_id: str,
        host: str = Query(...),
        port: int = Query(...),
    ) -> dict:
        """Attach to remote gdbserver or lldb-server."""
        gdb_service = session_manager.get_gdb_service(session_id)
        session = await gdb_service.attach_remote(host, port)
        return session.model_dump()

    @debug_router.post(
        "/sessions/{session_id}/load-core",
        summary="Load core dump for analysis",
    )
    async def load_core(
        session_id: str,
        core_path: str = Query(...),
        exec_path: str | None = Query(None),
    ) -> dict:
        """Load a core dump file."""
        gdb_service = session_manager.get_gdb_service(session_id)
        session = await gdb_service.load_core(core_path, exec_path)
        return session.model_dump()

    return debug_router
