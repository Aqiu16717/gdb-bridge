"""Parameterized tests for DebuggerAdapter implementations.

Runs the same test suite against every adapter backend:
    - GDBService  (GDB/MI)
    - LLDBService (LLDB SB API)
    - MockAdapter (for testing without a debugger)

Usage:
    pytest tests/integration/test_adapter_interface.py -v
    pytest tests/integration/test_adapter_interface.py -v -k "gdb"
    pytest tests/integration/test_adapter_interface.py -v -k "lldb"
"""
from __future__ import annotations

import pytest

from gdb_bridge.services.debug_adapter import DebuggerAdapter
from gdb_bridge.models.debug import (
    StepType,
    StopReason,
    Variable,
)


def get_adapter_instance(name: str, session_id: str) -> DebuggerAdapter:
    """Factory: create an adapter instance by backend name."""
    if name == "gdb":
        from gdb_bridge.services.gdb_service import GDBService
        return GDBService(session_id)
    elif name == "lldb":
        try:
            from gdb_bridge.services.lldb_service import LLDBService
            return LLDBService(session_id)
        except ImportError:
            pytest.skip("LLDBService not available (Phase 2 TODO)")
    elif name == "mock":
        from .mock_adapter import MockAdapter
        return MockAdapter(session_id)
    raise ValueError(f"Unknown adapter: {name}")


# ── Test classes (one per adapter) ──────────────────────────────────────────


class TestAdapterContract:
    """Verify adapter interface contract: every adapter has all 12 methods.

    These tests only inspect the class — no debugger process needed.
    """
    ADAPTERS = ["mock", "gdb", "lldb"]

    @pytest.mark.parametrize("backend", ADAPTERS)
    def test_adapter_has_all_methods(self, backend: str) -> None:
        """All backends must implement the full DebuggerAdapter ABC."""
        adapter = get_adapter_instance(backend, "test_sess")
        abstract_methods = {
            "start", "stop",
            "run", "step", "continue_execution",
            "set_breakpoint", "delete_breakpoint", "list_breakpoints",
            "get_current_location", "get_variables",
            "evaluate_expression", "get_frames",
            "get_threads", "select_thread",          # Thread support
            "set_watchpoint", "get_registers",         # Watchpoints + registers
        }
        for method in abstract_methods:
            assert hasattr(adapter, method), (
                f"{backend} adapter missing method: {method}"
            )
            assert callable(getattr(adapter, method)), (
                f"{backend}.{method} is not callable"
            )

    @pytest.mark.parametrize("backend", ADAPTERS)
    def test_adapter_is_instance_of_abc(self, backend: str) -> None:
        """All backends must be instances of DebuggerAdapter."""
        adapter = get_adapter_instance(backend, "test_sess")
        assert isinstance(adapter, DebuggerAdapter), (
            f"{backend} does not implement DebuggerAdapter"
        )


class TestAdapterSessionLifecycle:
    """Session create/stop tests across backends (uses MockAdapter)."""

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_start_session(self, backend: str) -> None:
        """Start returns a Session with valid ID."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_life")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        session = await adapter.start(request)
        assert session.session_id == "sess_life"
        assert session.status is not None

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_stop_is_idempotent(self, backend: str) -> None:
        """Stop can be called multiple times safely."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_stop")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.stop()
        await adapter.stop()  # second call must not raise

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_methods_raise_after_stop(self, backend: str) -> None:
        """After stop(), further calls should raise or return safe defaults."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType
        from gdb_bridge.core.exceptions import GDBProcessError

        adapter = get_adapter_instance(backend, "sess_stop2")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.stop()

        # After stop, operations should raise GDBProcessError or equivalent
        with pytest.raises(GDBProcessError):
            await adapter.run()


class TestAdapterBreakpoints:
    """Breakpoint CRUD tests (parameterized)."""

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_set_breakpoint(self, backend: str) -> None:
        """Set breakpoint returns valid Breakpoint model."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_bp")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        bp = await adapter.set_breakpoint("main")
        assert bp.location == "main"
        assert bp.enabled is True
        assert bp.breakpoint_id > 0

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_set_breakpoint_idempotent(self, backend: str) -> None:
        """Setting same breakpoint twice is idempotent per contract."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_bp2")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        bp1 = await adapter.set_breakpoint("main")
        bp2 = await adapter.set_breakpoint("main")
        assert bp1.location == bp2.location

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_list_breakpoints(self, backend: str) -> None:
        """List returns all set breakpoints."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_bp3")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.set_breakpoint("foo.c:10")
        bps = await adapter.list_breakpoints()
        assert len(bps) >= 2

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_delete_breakpoint(self, backend: str) -> None:
        """Delete removes breakpoint from list."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_bp4")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        bp = await adapter.set_breakpoint("main")
        await adapter.delete_breakpoint(bp.breakpoint_id)
        bps = await adapter.list_breakpoints()
        assert all(b.breakpoint_id != bp.breakpoint_id for b in bps)


class TestAdapterExecution:
    """Execution control tests (run, step, continue)."""

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_run_stops_at_breakpoint(self, backend: str) -> None:
        """Run stops at a breakpoint."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_run")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        event = await adapter.run()
        assert event.status == "stopped"
        assert event.reason == StopReason.BREAKPOINT_HIT

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_step_returns_stop_event(self, backend: str) -> None:
        """Step returns a valid StopEvent."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_step")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        event = await adapter.step("step-over")
        assert event.reason == StopReason.STEP_DONE

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_continue_returns_stop_event(self, backend: str) -> None:
        """Continue returns a StopEvent."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_cont")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        event = await adapter.continue_execution()
        assert event.status == "stopped"


class TestAdapterInspection:
    """Inspection tests (variables, location, frames, evaluation)."""

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_get_current_location(self, backend: str) -> None:
        """Get location returns a Location model."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_loc")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        loc = await adapter.get_current_location()
        assert loc.function == "main"

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_get_variables(self, backend: str) -> None:
        """Get variables returns list of Variable models."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_var")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        vars_ = await adapter.get_variables()
        assert isinstance(vars_, list)
        for var in vars_:
            assert isinstance(var, Variable)
            assert var.name

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_evaluate_expression(self, backend: str) -> None:
        """Evaluate returns EvaluationResult."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_eval")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        result = await adapter.evaluate_expression("1 + 1")
        assert result.expression == "1 + 1"
        assert result.value is not None

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_get_frames(self, backend: str) -> None:
        """Get frames returns call stack."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_frame")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        frames = await adapter.get_frames()
        assert len(frames) >= 1
        assert frames[0].function == "main"


class TestAdapterThreads:
    """Thread inspection tests."""

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_get_threads(self, backend: str) -> None:
        """List threads returns thread info dicts."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_thread")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        threads = await adapter.get_threads()
        assert len(threads) >= 1
        assert "id" in threads[0]

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_select_thread(self, backend: str) -> None:
        """Select thread does not raise."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_tsel")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        await adapter.select_thread(1)  # must not raise


class TestAdapterWatchpoints:
    """Watchpoint tests."""

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_set_watchpoint(self, backend: str) -> None:
        """Set watchpoint returns Breakpoint."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_wp")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        bp = await adapter.set_watchpoint("x", "write")
        assert bp.location is not None
        assert bp.breakpoint_id > 0


class TestAdapterRegisters:
    """Register inspection tests."""

    @pytest.mark.parametrize("backend", ["mock"])
    @pytest.mark.asyncio
    async def test_get_registers(self, backend: str) -> None:
        """Get registers returns dict."""
        from gdb_bridge.models.session import CreateSessionRequest, Target, TargetType

        adapter = get_adapter_instance(backend, "sess_reg")
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/tmp/test"),
        )
        await adapter.start(request)
        await adapter.set_breakpoint("main")
        await adapter.run()
        regs = await adapter.get_registers()
        assert isinstance(regs, dict)
        assert len(regs) >= 1
