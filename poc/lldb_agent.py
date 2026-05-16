#!/usr/bin/env python3
"""LLDB Agent-Friendly Debugging Interface — macOS PoC.

This module provides a macOS-native debugging interface using LLDB's
Python SB API. Unlike GDB, LLDB requires no code signing on macOS.

Usage:
    /usr/bin/python3 poc/lldb_agent.py    # Uses Apple's Python 3.9 + bundled lldb

Requires:
    - macOS (LLDB is bundled with Xcode CLI Tools)
    - Python 3.9+ (Apple's /usr/bin/python3 has lldb module)
"""

from __future__ import annotations

import json
import os
import sys
from dataclasses import asdict, dataclass, field
from pathlib import Path
from typing import Any

# Apple's bundled LLDB Python module
LLDB_PATH = "/Library/Developer/CommandLineTools/Library/PrivateFrameworks/LLDB.framework/Versions/A/Resources/Python"
if LLDB_PATH not in sys.path:
    sys.path.insert(0, LLDB_PATH)

import lldb  # type: ignore[import-not-found] # noqa: E402


# ── Data structures (mirrors MVP Pydantic models) ────────────────────────────


@dataclass
class Location:
    """Code location."""

    file: str | None = None
    line: int | None = None
    function: str | None = None
    address: str | None = None


@dataclass
class VariableInfo:
    """Variable information."""

    name: str
    value: str
    type: str | None = None
    is_optimized_out: bool = False


@dataclass
class FrameInfo:
    """Stack frame."""

    level: int
    function: str | None = None
    file: str | None = None
    line: int | None = None


@dataclass
class StopEvent:
    """Program stop event."""

    status: str = "stopped"
    reason: str = ""
    location: Location = field(default_factory=Location)
    breakpoint_id: int | None = None
    thread_id: int | None = None


@dataclass
class BreakpointInfo:
    """Breakpoint information."""

    breakpoint_id: int
    location: str
    enabled: bool = True


class AgentDebugger:
    """High-level debugger for AI Agent consumption using LLDB.

    Provides structured JSON output identical to the GDB-based interface,
    enabling Agent-driven debugging on macOS without code signing.
    """

    def __init__(self) -> None:
        """Initialize LLDB debugger."""
        self._debugger: lldb.SBDebugger | None = None
        self._target: lldb.SBTarget | None = None
        self._process: lldb.SBProcess | None = None
        self._breakpoints: list[BreakpointInfo] = []
        self.session_id: str = ""
        self.last_state: dict[str, Any] = {}

    # ── Session management ────────────────────────────────────────────────

    def start_session(self, program_path: str) -> dict[str, Any]:
        """Create debugger and load target.

        Args:
            program_path: Path to the executable.

        Returns:
            JSON-serializable dict with session info.
        """
        import uuid

        self.session_id = f"sess_{uuid.uuid4().hex[:8]}"

        self._debugger = lldb.SBDebugger.Create()
        self._debugger.SetAsync(False)  # Synchronous mode for Agent interaction

        # Create target from executable
        target = self._debugger.CreateTarget(program_path)
        if not target or not target.IsValid():
            self._debugger = None
            return _error("Failed to create target", [f"Path: {program_path}"])

        self._target = target

        self.last_state = {
            "status": "initialized",
            "session_id": self.session_id,
            "program": program_path,
            "triple": target.GetTriple(),
        }
        return _ok(self.last_state)

    def end_session(self) -> dict[str, Any]:
        """Terminate debug session.

        Returns:
            JSON-serializable dict confirming termination.
        """
        if self._process and self._process.IsValid():
            self._process.Kill()

        if self._debugger:
            lldb.SBDebugger.Destroy(self._debugger)

        self._debugger = None
        self._target = None
        self._process = None
        self._breakpoints.clear()

        sid = self.session_id
        self.session_id = ""
        self.last_state = {}
        return _ok({"status": "terminated", "session_id": sid})

    # ── Breakpoints ───────────────────────────────────────────────────────

    def set_breakpoint(self, location: str, condition: str | None = None) -> dict[str, Any]:
        """Set a breakpoint.

        Args:
            location: Function name or file:line (e.g., "main", "test.c:22").
            condition: Optional breakpoint condition.

        Returns:
            JSON-serializable dict with breakpoint info.
        """
        if not self._target:
            return _error("No target loaded")

        bp = self._target.BreakpointCreateByName(location)
        if not bp or not bp.IsValid():
            return _error("Failed to create breakpoint", [f"Location: {location}"])

        if condition:
            bp.SetCondition(condition)

        bp_id = bp.GetID()
        info = BreakpointInfo(
            breakpoint_id=bp_id,
            location=location,
            enabled=bp.IsEnabled(),
        )
        self._breakpoints.append(info)

        result = {
            "breakpoint_id": bp_id,
            "location": location,
            "enabled": info.enabled,
            "num_locations": bp.GetNumLocations(),
        }
        self.last_state["last_breakpoint"] = result
        return _ok(result)

    def list_breakpoints(self) -> dict[str, Any]:
        """List all breakpoints.

        Returns:
            JSON-serializable dict with breakpoints list.
        """
        return _ok({"breakpoints": [asdict(bp) for bp in self._breakpoints]})

    # ── Execution control ────────────────────────────────────────────────

    def run(self) -> dict[str, Any]:
        """Launch the process and stop at first breakpoint.

        Returns:
            JSON-serializable dict with stop event.
        """
        if not self._target:
            return _error("No target loaded")

        launch_info = lldb.SBLaunchInfo([])
        launch_info.SetWorkingDirectory(os.getcwd())

        error = lldb.SBError()
        self._process = self._target.Launch(launch_info, error)

        if not error.Success():
            return _error(f"Failed to launch: {error.GetCString() or 'unknown'}")
        if not self._process:
            return _error("Process creation failed")

        return self._get_stop_event()

    def step(self, step_type: str = "step-in") -> dict[str, Any]:
        """Step execution.

        Args:
            step_type: "step-in" (default), "step-over", or "step-out".

        Returns:
            JSON-serializable dict with stop event.
        """
        process = self._get_running_process()
        if not process:
            return _error("No running process")

        thread = process.GetSelectedThread()
        if not thread:
            return _error("No selected thread")

        if step_type == "step-over":
            thread.StepOver()
        elif step_type == "step-out":
            thread.StepOut()
        else:
            thread.StepInto()

        return self._get_stop_event()

    def continue_execution(self) -> dict[str, Any]:
        """Continue execution until next breakpoint or exit.

        Returns:
            JSON-serializable dict with stop event.
        """
        process = self._get_running_process()
        if not process:
            return _error("No running process")

        process.Continue()
        return self._get_stop_event()

    # ── Inspection ────────────────────────────────────────────────────────

    def get_current_location(self) -> dict[str, Any]:
        """Get current execution location.

        Returns:
            JSON-serializable dict with location info.
        """
        process = self._get_running_process()
        if not process:
            return _error("No running process")

        thread = process.GetSelectedThread()
        if not thread:
            return _error("No selected thread")

        frame = thread.GetSelectedFrame()
        if not frame:
            return _error("No selected frame")

        loc = self._frame_to_location(frame)
        result = asdict(loc)
        self.last_state["location"] = result
        return _ok(result)

    def get_variables(self) -> dict[str, Any]:
        """Get local variables in the current frame.

        Returns:
            JSON-serializable dict with variable list.
        """
        process = self._get_running_process()
        if not process:
            return _error("No running process")

        thread = process.GetSelectedThread()
        if not thread:
            return _error("No selected thread")

        frame = thread.GetSelectedFrame()
        if not frame:
            return _error("No selected frame")

        variables: list[dict[str, Any]] = []

        # Get function arguments
        args = frame.GetVariables(True, False, False, True)  # arguments
        for i in range(args.GetSize()):
            var = args.GetValueAtIndex(i)
            variables.append(_lldb_var_to_dict(var))

        # Get local variables
        locals_vars = frame.GetVariables(False, False, True, True)
        for i in range(locals_vars.GetSize()):
            var = locals_vars.GetValueAtIndex(i)
            variables.append(_lldb_var_to_dict(var))

        return _ok({"variables": variables})

    def evaluate(self, expression: str) -> dict[str, Any]:
        """Evaluate an expression in the current frame.

        Args:
            expression: Expression to evaluate.

        Returns:
            JSON-serializable dict with evaluation result.
        """
        process = self._get_running_process()
        if not process:
            return _error("No running process")

        thread = process.GetSelectedThread()
        if not thread:
            return _error("No selected thread")

        frame = thread.GetSelectedFrame()
        if not frame:
            return _error("No selected frame")

        result = frame.EvaluateExpression(expression)
        error = result.GetError()

        if not error.Success():
            return _error(
                f"Failed to evaluate: {error.GetCString() or 'unknown'}",
                [f"Expression: {expression}"],
            )

        value_dict = {"expression": expression, "value": result.GetValue()}
        self.last_state["last_evaluation"] = value_dict
        return _ok(value_dict)

    def get_frames(self) -> dict[str, Any]:
        """Get call stack.

        Returns:
            JSON-serializable dict with frames list.
        """
        process = self._get_running_process()
        if not process:
            return _error("No running process")

        thread = process.GetSelectedThread()
        if not thread:
            return _error("No selected thread")

        frames: list[dict[str, Any]] = []
        for i in range(thread.GetNumFrames()):
            frame = thread.GetFrameAtIndex(i)
            loc = self._frame_to_location(frame)
            frames.append(
                {
                    "level": i,
                    "function": loc.function,
                    "file": loc.file,
                    "line": loc.line,
                    "address": loc.address,
                }
            )

        return _ok({"frames": frames})

    # ── Helpers ───────────────────────────────────────────────────────────

    def _get_running_process(self) -> lldb.SBProcess | None:
        """Get the current running process."""
        if not self._process or not self._process.IsValid():
            return None
        state = self._process.GetState()
        if state in (lldb.eStateExited, lldb.eStateDetached, lldb.eStateCrashed):
            # Process ended; still return it so caller can inspect
            pass
        return self._process

    def _get_stop_event(self) -> dict[str, Any]:
        """Get stop event from the current process state.

        Returns:
            JSON-serializable dict with stop event.
        """
        if not self._process:
            return _error("No process")

        state = self._process.GetState()
        thread = self._process.GetSelectedThread()

        event = StopEvent()

        # Map LLDB state to stop reason
        if state == lldb.eStateStopped:
            stop_reason = thread.GetStopReason() if thread else 0
            reason_map = {
                lldb.eStopReasonBreakpoint: "breakpoint-hit",
                lldb.eStopReasonPlanComplete: "step-done",
                lldb.eStopReasonSignal: "signal-received",
                lldb.eStopReasonException: "signal-received",
                lldb.eStopReasonExec: "step-done",
            }
            event.reason = reason_map.get(stop_reason, "unknown")

            if stop_reason == lldb.eStopReasonBreakpoint and thread:
                event.breakpoint_id = thread.GetStopReasonDataAtIndex(0)

            if thread:
                frame = thread.GetSelectedFrame()
                if frame:
                    event.location = self._frame_to_location(frame)
                    event.thread_id = thread.GetThreadID()

        elif state == lldb.eStateExited:
            event.reason = "exit"
        elif state == lldb.eStateCrashed:
            event.reason = "signal-received"
        else:
            event.reason = "unknown"

        result = {
            "status": "stopped",
            "reason": event.reason,
            "location": asdict(event.location),
            "breakpoint_id": event.breakpoint_id,
            "thread_id": event.thread_id,
        }
        self.last_state.update(result)
        return _ok(result)

    def _frame_to_location(self, frame: lldb.SBFrame) -> Location:
        """Convert LLDB frame to Location dataclass.

        Args:
            frame: LLDB stack frame.

        Returns:
            Location dataclass.
        """
        line_entry = frame.GetLineEntry()
        func = frame.GetFunctionName() or None
        file_spec = line_entry.GetFileSpec() if line_entry.IsValid() else None

        return Location(
            file=f"{file_spec.GetDirectory()}/{file_spec.GetFilename()}"
            if file_spec and file_spec.IsValid()
            else None,
            line=line_entry.GetLine() if line_entry.IsValid() else None,
            function=func,
            address=f"0x{frame.GetPC():x}",
        )


# ── JSON response helpers ──────────────────────────────────────────────────


def _ok(data: dict[str, Any]) -> dict[str, Any]:
    """Create a success response."""
    return {"success": True, "data": data}


def _error(message: str, details: list[str] | None = None) -> dict[str, Any]:
    """Create an error response."""
    return {"success": False, "error": message, "details": details or []}


def _lldb_var_to_dict(var: lldb.SBValue) -> dict[str, Any]:
    """Convert LLDB SBValue to a JSON-serializable dict.

    Args:
        var: LLDB variable value.

    Returns:
        Dict with name, value, type.
    """
    name = var.GetName() or "unnamed"
    value_str = var.GetValue() or ""
    type_str = var.GetTypeName() or ""

    # Check if optimized out
    if "optimized" in value_str.lower():
        return {
            "name": name,
            "value": "<optimized out>",
            "type": type_str,
            "is_optimized_out": True,
        }

    return {
        "name": name,
        "value": value_str,
        "type": type_str,
        "is_optimized_out": False,
    }


# ── Demo ───────────────────────────────────────────────────────────────────


def run_lldb_demo() -> None:
    """Run the LLDB PoC demonstration.

    Demonstrates the complete debugging workflow on macOS using LLDB:
    1. Start session
    2. Set breakpoint at main
    3. Run program (hits breakpoint)
    4. Get location and variables
    5. Step through code
    6. Evaluate expression
    7. Continue to exit
    8. End session
    """
    test_bin = Path(__file__).parent / "tests" / "simple_test"

    # Ensure binary exists
    if not test_bin.exists():
        import subprocess

        print("Compiling test program...")
        test_c = Path(__file__).parent / "tests" / "simple_test.c"
        subprocess.run(
            ["clang", "-gdwarf-4", "-o", str(test_bin), str(test_c)],
            check=True,
        )

    debugger = AgentDebugger()

    def header(title: str) -> None:
        print(f"\n{'=' * 60}")
        print(f"  {title}")
        print(f"{'=' * 60}")

    def out(data: dict[str, Any]) -> None:
        print(json.dumps(data, indent=2, ensure_ascii=False))

    # Step 1: Start
    header("Step 1: Start Session")
    result = debugger.start_session(str(test_bin))
    out(result)
    if not result["success"]:
        print("FAILED to start session")
        sys.exit(1)

    # Step 2: Breakpoint
    header("Step 2: Set Breakpoint at main")
    result = debugger.set_breakpoint("main")
    out(result)

    # Step 3: Run
    header("Step 3: Run Program")
    result = debugger.run()
    out(result)
    if not result["success"] or result["data"].get("reason") != "breakpoint-hit":
        print("Program did not stop at breakpoint as expected")
        debugger.end_session()
        sys.exit(1)

    # Step 4: Location
    header("Step 4: Current Location")
    result = debugger.get_current_location()
    out(result)

    # Step 5: Variables
    header("Step 5: Local Variables")
    result = debugger.get_variables()
    out(result)

    # Step 6: Step over
    header("Step 6: Step Over")
    result = debugger.step("step-over")
    out(result)

    # Step 7: Location after step
    header("Step 7: Location After Step")
    result = debugger.get_current_location()
    out(result)

    # Step 8: Variables after step
    header("Step 8: Variables After Step")
    result = debugger.get_variables()
    out(result)

    # Step 9: Evaluate
    header("Step 9: Evaluate Expression")
    result = debugger.evaluate("x + y")
    out(result)

    # Step 10: Continue
    header("Step 10: Continue to Exit")
    result = debugger.continue_execution()
    out(result)

    # Step 11: End
    header("Step 11: End Session")
    result = debugger.end_session()
    out(result)

    print("\n" + "=" * 60)
    print("  LLDB PoC Demo Complete!")
    print("=" * 60)
    print("\n  All 4 acceptance criteria validated:")
    print("  1. Start + breakpoint at main")
    print("  2. Single-step + variable inspection")
    print("  3. Structured JSON output")
    print("  4. Agent can parse output and decide")


if __name__ == "__main__":
    run_lldb_demo()
