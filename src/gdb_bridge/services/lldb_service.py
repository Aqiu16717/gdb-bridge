"""LLDB debugger service via subprocess JSON pipe.

Runs `poc/lldb_agent_subprocess.py` under Apple's /usr/bin/python3
(bundled lldb module) and communicates via stdin/stdout JSON.
"""

from __future__ import annotations

import asyncio
import json
import os
from pathlib import Path

from gdb_bridge.core.exceptions import GDBProcessError
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
from gdb_bridge.services.debug_adapter import DebuggerAdapter


class LLDBService(DebuggerAdapter):
    """LLDB debugger backend communicating with lldb_agent_subprocess.py.

    Uses subprocess JSON pipe — same architecture as GDBService with pexpect.
    The subprocess runs under Apple's /usr/bin/python3 for built-in lldb module.
    """

    LLDB_PYTHON = "/usr/bin/python3"

    def __init__(self, session_id: str) -> None:
        super().__init__(session_id)
        self._process: asyncio.subprocess.Process | None = None
        self._breakpoints: dict[int, Breakpoint] = {}
        self._next_bp_id = 1
        self._lock = asyncio.Lock()

    async def start(self, request: CreateSessionRequest) -> Session:
        """Start LLDB subprocess and load target.

        Args:
            request: Session creation request.

        Returns:
            Created session.

        Raises:
            GDBProcessError: If LLDB subprocess fails to start.
        """
        agent_script = Path(__file__).parent.parent.parent.parent / "poc" / "lldb_agent_subprocess.py"
        if not agent_script.exists():
            raise GDBProcessError(f"LLDB agent script not found: {agent_script}")

        program_path = request.target.path

        self._process = await asyncio.create_subprocess_exec(
            self.LLDB_PYTHON,
            str(agent_script),
            program_path,
            stdin=asyncio.subprocess.PIPE,
            stdout=asyncio.subprocess.PIPE,
            stderr=asyncio.subprocess.PIPE,
        )

        # Verify subprocess started by reading initial output
        first_line = await asyncio.wait_for(
            self._process.stdout.readline(),
            timeout=10,
        )
        first_line = first_line.decode().strip()
        if not first_line:
            # Try stderr for error info
            err = await self._read_stderr()
            await self._process.wait()
            raise GDBProcessError(f"LLDB subprocess failed: {err}")

        return Session(
            session_id=self.session_id,
            status=SessionStatus.CREATED,
        )

    async def stop(self) -> None:
        """Terminate LLDB subprocess."""
        if self._process:
            try:
                await self._send("stop")
            except Exception:
                pass
            try:
                self._process.kill()
                await self._process.wait()
            except Exception:
                pass
            self._process = None

    async def run(self) -> StopEvent:
        return await self._stop_event(await self._send("run"))

    async def step(self, step_type: str = "step-in") -> StopEvent:
        return await self._stop_event(
            await self._send("step", {"type": step_type})
        )

    async def continue_execution(self) -> StopEvent:
        return await self._stop_event(await self._send("continue"))

    async def set_breakpoint(
        self, location: str, condition: str | None = None
    ) -> Breakpoint:
        # Idempotent check
        for bp in self._breakpoints.values():
            if bp.location == location:
                return bp

        response = await self._send("set_breakpoint", {"location": location})
        data = response.get("data", {})
        bp_id = self._next_bp_id
        self._next_bp_id += 1

        bp = Breakpoint(
            breakpoint_id=bp_id,
            location=location,
            enabled=data.get("enabled", True),
            condition=condition,
        )
        self._breakpoints[bp_id] = bp
        return bp

    async def delete_breakpoint(self, breakpoint_id: int) -> None:
        self._breakpoints.pop(breakpoint_id, None)
        await self._send("delete_breakpoint", {"breakpoint_id": breakpoint_id})

    async def list_breakpoints(self) -> list[Breakpoint]:
        return list(self._breakpoints.values())

    async def get_current_location(self) -> Location:
        response = await self._send("get_location")
        data = response.get("data", {})
        return Location(
            file=data.get("file"),
            line=data.get("line"),
            function=data.get("function"),
            address=data.get("address"),
        )

    async def get_variables(self) -> list[Variable]:
        response = await self._send("get_variables")
        variables = response.get("data", {}).get("variables", [])
        return [
            Variable(
                name=v.get("name", "unknown"),
                value=v.get("value"),
                type=v.get("type"),
                is_optimized_out=v.get("is_optimized_out", False),
            )
            for v in variables
        ]

    async def evaluate_expression(self, expression: str) -> EvaluationResult:
        response = await self._send("evaluate", {"expression": expression})
        data = response.get("data", {})
        return EvaluationResult(
            expression=expression,
            value=data.get("value"),
        )

    async def get_frames(self) -> list[Frame]:
        response = await self._send("get_frames")
        frames = response.get("data", {}).get("frames", [])
        return [
            Frame(
                level=f.get("level", 0),
                function=f.get("function"),
                file=f.get("file"),
                line=f.get("line"),
            )
            for f in frames
        ]

    # ── Subprocess communication ──────────────────────────────────────

    async def _send(self, method: str, params: dict | None = None) -> dict:
        """Send a JSON command to LLDB subprocess and return response.

        Args:
            method: Command method name.
            params: Optional parameters.

        Returns:
            Parsed JSON response.

        Raises:
            GDBProcessError: On subprocess or protocol error.
        """
        async with self._lock:  # Serialize commands to subprocess
            if not self._process:
                raise GDBProcessError("LLDB subprocess not running")

            request = json.dumps({"method": method, "params": params or {}}) + "\n"
            self._process.stdin.write(request.encode())
            await self._process.stdin.drain()

            try:
                line = await asyncio.wait_for(
                    self._process.stdout.readline(),
                    timeout=30,
                )
            except asyncio.TimeoutError:
                raise GDBProcessError("LLDB subprocess timeout")

            line = line.decode().strip()
            if not line:
                err = await self._read_stderr()
                raise GDBProcessError(f"LLDB subprocess empty response: {err}")

            try:
                response = json.loads(line)
            except json.JSONDecodeError:
                raise GDBProcessError(f"Invalid JSON from LLDB: {line}")

            if not response.get("success"):
                raise GDBProcessError(
                    response.get("error", "Unknown LLDB error"),
                    details=response,
                )

            return response

    async def _read_stderr(self) -> str:
        """Read any pending stderr from subprocess."""
        try:
            stderr = await asyncio.wait_for(
                self._process.stderr.read(),
                timeout=0.5,
            )
            return stderr.decode()
        except Exception:
            return ""

    async def _stop_event(self, response: dict) -> StopEvent:
        """Parse subprocess response into StopEvent model.

        Args:
            response: JSON response from subprocess.

        Returns:
            StopEvent model.
        """
        data = response.get("data", {})
        loc = data.get("location", {})

        reason_map = {
            "breakpoint-hit": StopReason.BREAKPOINT_HIT,
            "step-done": StopReason.STEP_DONE,
            "signal-received": StopReason.SIGNAL_RECEIVED,
            "exit": StopReason.EXIT,
        }

        return StopEvent(
            status="stopped",
            reason=reason_map.get(data.get("reason"), StopReason.ERROR),
            location=Location(
                file=loc.get("file"),
                line=loc.get("line"),
                function=loc.get("function"),
                address=loc.get("address"),
            ),
            breakpoint_id=data.get("breakpoint_id"),
        )
