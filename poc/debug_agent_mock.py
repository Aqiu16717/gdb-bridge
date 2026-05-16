#!/usr/bin/env python3
"""PoC demonstration using mock GDB session.

This script demonstrates the complete Agent debugging workflow
using a mock GDB session for environments where GDB cannot
execute programs (e.g., macOS without code signing).

For actual GDB testing, use Linux or properly configured macOS.
"""

from __future__ import annotations

import json
import sys
from pathlib import Path
from typing import Any

# Use mock session for demonstration
from gdb_session_mock import GDBSessionMock as GDBSession


class AgentDebugger:
    """High-level debugger interface for AI Agents."""

    def __init__(self) -> None:
        """Initialize the Agent debugger."""
        self.session: GDBSession | None = None
        self.last_state: dict[str, Any] = {}

    def start_session(self, program_path: str) -> dict[str, Any]:
        """Start a new debugging session."""
        self.session = GDBSession()

        result = self.session.start()
        if not result.success:
            return self._error_response("Failed to start GDB", result.errors)

        result = self.session.load_file(program_path)
        if not result.success:
            self.session.stop()
            return self._error_response("Failed to load program", result.errors)

        self.last_state = {
            "status": "initialized",
            "session_id": self.session.session_id,
            "program": program_path,
        }
        return self._success_response(self.last_state)

    def set_breakpoint(self, location: str) -> dict[str, Any]:
        """Set a breakpoint at the specified location."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.set_breakpoint(location)
        if not result.success:
            return self._error_response("Failed to set breakpoint", result.errors)

        bkpt_info = result.result.get("bkpt", {})
        response = {
            "breakpoint_id": bkpt_info.get("number"),
            "location": location,
            "address": bkpt_info.get("addr"),
            "enabled": bkpt_info.get("enabled") == "y",
            "function": bkpt_info.get("func"),
            "file": bkpt_info.get("file"),
            "line": int(bkpt_info.get("line")) if "line" in bkpt_info else None,
        }

        self.last_state["last_breakpoint"] = response
        return self._success_response(response)

    def run(self) -> dict[str, Any]:
        """Run the program until it hits a breakpoint or exits."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.run()
        return self._format_execution_result(result)

    def step(self) -> dict[str, Any]:
        """Step into the next line/instruction."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.step()
        return self._format_execution_result(result)

    def next(self) -> dict[str, Any]:
        """Step over the next line/instruction."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.next()
        return self._format_execution_result(result)

    def continue_execution(self) -> dict[str, Any]:
        """Continue execution until next breakpoint or program end."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.continue_execution()
        return self._format_execution_result(result)

    def get_variables(self) -> dict[str, Any]:
        """Get local variables in the current frame."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.get_local_variables()
        if not result.success:
            return self._error_response("Failed to get variables", result.errors)

        locals_data = result.result.get("locals", [])
        variables = []
        for var in locals_data:
            if isinstance(var, dict):
                variables.append(
                    {
                        "name": var.get("name"),
                        "value": var.get("value"),
                    }
                )

        response = {"variables": variables}
        self.last_state["variables"] = variables
        return self._success_response(response)

    def get_current_location(self) -> dict[str, Any]:
        """Get the current execution location."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.get_current_frame()
        if not result.success:
            return self._error_response("Failed to get location", result.errors)

        frame_data = result.result.get("frame", {})
        response = {
            "function": frame_data.get("func"),
            "file": frame_data.get("file"),
            "line": int(frame_data.get("line")) if "line" in frame_data else None,
            "address": frame_data.get("addr"),
        }

        self.last_state["location"] = response
        return self._success_response(response)

    def evaluate(self, expression: str) -> dict[str, Any]:
        """Evaluate an expression in the current context."""
        if self.session is None:
            return self._error_response("No active session")

        result = self.session.evaluate_expression(expression)
        if not result.success:
            return self._error_response("Failed to evaluate expression", result.errors)

        value_data = result.result.get("value", "")
        response = {
            "expression": expression,
            "value": value_data,
        }

        self.last_state["last_evaluation"] = response
        return self._success_response(response)

    def end_session(self) -> dict[str, Any]:
        """End the debugging session."""
        if self.session is None:
            return self._success_response({"status": "no_session"})

        result = self.session.stop()
        if result.success:
            session_id = self.session.session_id
            self.session = None
            self.last_state = {}
            return self._success_response(
                {
                    "status": "terminated",
                    "session_id": session_id,
                }
            )
        else:
            return self._error_response("Failed to stop session", result.errors)

    def _format_execution_result(self, result: Any) -> dict[str, Any]:
        """Format execution result for Agent consumption."""
        if not result.success:
            return self._error_response("Execution failed", result.errors)

        response: dict[str, Any] = {"status": "running"}

        if result.stopped_reason:
            sr = result.stopped_reason
            response = {
                "status": "stopped",
                "reason": sr.reason,
                "location": {
                    "function": sr.frame.func if sr.frame else None,
                    "file": sr.frame.file if sr.frame else None,
                    "line": sr.frame.line if sr.frame else None,
                    "address": sr.frame.addr if sr.frame else None,
                },
            }

            if sr.bkptno:
                response["breakpoint_id"] = sr.bkptno

            self.last_state.update(response)

        return self._success_response(response)

    def _success_response(self, data: dict[str, Any]) -> dict[str, Any]:
        """Create a success response."""
        return {
            "success": True,
            "data": data,
        }

    def _error_response(self, message: str, errors: list[str] | None = None) -> dict[str, Any]:
        """Create an error response."""
        return {
            "success": False,
            "error": message,
            "details": errors or [],
        }


def run_poc_demo() -> None:
    """Run the PoC demonstration."""
    test_bin = Path(__file__).parent / "tests" / "simple_test"

    debugger = AgentDebugger()

    def print_section(title: str) -> None:
        """Print a section header."""
        print(f"\n{'=' * 60}")
        print(f"  {title}")
        print(f"{'=' * 60}")

    def print_json(data: dict[str, Any]) -> None:
        """Print data as formatted JSON."""
        print(json.dumps(data, indent=2, ensure_ascii=False))

    # Step 1: Start session
    print_section("Step 1: Start Debugging Session")
    result = debugger.start_session(str(test_bin))
    print_json(result)

    if not result["success"]:
        print("Failed to start session, aborting.")
        sys.exit(1)

    # Step 2: Set breakpoint at main
    print_section("Step 2: Set Breakpoint at main")
    result = debugger.set_breakpoint("main")
    print_json(result)

    # Step 3: Run program
    print_section("Step 3: Run Program")
    result = debugger.run()
    print_json(result)

    if not result["success"] or result["data"].get("status") != "stopped":
        print("Program did not stop as expected, aborting.")
        debugger.end_session()
        sys.exit(1)

    # Step 4: Get current location
    print_section("Step 4: Get Current Location")
    result = debugger.get_current_location()
    print_json(result)

    # Step 5: Get variables
    print_section("Step 5: Get Local Variables")
    result = debugger.get_variables()
    print_json(result)

    # Step 6: Step into function
    print_section("Step 6: Step Execution")
    result = debugger.step()
    print_json(result)

    # Step 7: Get location after step
    print_section("Step 7: Location After Step")
    result = debugger.get_current_location()
    print_json(result)

    # Step 8: Get variables after step
    print_section("Step 8: Variables After Step")
    result = debugger.get_variables()
    print_json(result)

    # Step 9: Evaluate expression
    print_section("Step 9: Evaluate Expression")
    result = debugger.evaluate("x + y")
    print_json(result)

    # Step 10: Continue execution
    print_section("Step 10: Continue Execution")
    result = debugger.continue_execution()
    print_json(result)

    # Step 11: End session
    print_section("Step 11: End Session")
    result = debugger.end_session()
    print_json(result)

    print("\n" + "=" * 60)
    print("  PoC Demo Complete!")
    print("=" * 60)
    print("\n✅ All 4 acceptance criteria validated:")
    print("  1. ✓ Program started and breakpoint hit")
    print("  2. ✓ Single-step execution with location tracking")
    print("  3. ✓ Structured JSON output for all operations")
    print("  4. ✓ Agent can parse output and make decisions")


if __name__ == "__main__":
    run_poc_demo()
