"""GDB/MI Session wrapper for Agent debugging.

This module provides a Python wrapper around GDB's Machine Interface (MI),
enabling structured interaction with GDB for AI Agent debugging workflows.
"""

from __future__ import annotations

import re
import uuid
from dataclasses import dataclass, field
from typing import Any, Optional

import pexpect


@dataclass
class GDBBreakpoint:
    """Represents a GDB breakpoint."""

    number: int
    type: str
    disp: str
    enabled: bool
    addr: str
    func: Optional[str] = None
    file: Optional[str] = None
    line: Optional[int] = None
    cond: Optional[str] = None


@dataclass
class GDBFrame:
    """Represents a stack frame."""

    level: int
    addr: str
    func: Optional[str] = None
    file: Optional[str] = None
    line: Optional[int] = None
    args: list[dict] = field(default_factory=list)


@dataclass
class GDBVariable:
    """Represents a variable in the current scope."""

    name: str
    type: str
    value: str


@dataclass
class GDBStopReason:
    """Represents why the program stopped."""

    reason: str
    bkptno: Optional[int] = None
    frame: Optional[GDBFrame] = None
    thread_id: Optional[int] = None


@dataclass
class GDBResponse:
    """Structured response from a GDB/MI command."""

    success: bool
    result: dict[str, Any] = field(default_factory=dict)
    errors: list[str] = field(default_factory=list)
    stopped_reason: Optional[GDBStopReason] = None


class GDBSession:
    """Manages a GDB debugging session via MI interface.

    This class wraps GDB's Machine Interface to provide a structured,
    Pythonic API for controlling debugging sessions.
    """

    def __init__(self, gdb_path: str = "gdb", timeout: int = 30) -> None:
        """Initialize a new GDB session.

        Args:
            gdb_path: Path to the GDB executable.
            timeout: Default timeout for GDB operations in seconds.
        """
        self.session_id = str(uuid.uuid4())[:8]
        self.gdb_path = gdb_path
        self.timeout = timeout
        self._gdb: Optional[pexpect.spawn] = None
        self._loaded_file: Optional[str] = None

    def start(self) -> GDBResponse:
        """Start the GDB process with MI interface.

        Returns:
            GDBResponse indicating success or failure.
        """
        try:
            self._gdb = pexpect.spawn(
                f"{self.gdb_path} --interpreter=mi",
                timeout=self.timeout,
                encoding="utf-8",
            )
            self._gdb.expect(r"\(gdb\)")
            return GDBResponse(success=True)
        except Exception as e:
            return GDBResponse(success=False, errors=[f"Failed to start GDB: {e}"])

    def stop(self) -> GDBResponse:
        """Stop the GDB process.

        Returns:
            GDBResponse indicating success or failure.
        """
        if self._gdb is None:
            return GDBResponse(success=True)

        try:
            self._gdb.sendline("-gdb-exit")
            self._gdb.expect(pexpect.EOF)
            self._gdb.close()
            self._gdb = None
            return GDBResponse(success=True)
        except Exception as e:
            return GDBResponse(success=False, errors=[f"Failed to stop GDB: {e}"])

    def load_file(self, path: str) -> GDBResponse:
        """Load an executable file into GDB.

        Args:
            path: Path to the executable file.

        Returns:
            GDBResponse with loaded file information.
        """
        if self._gdb is None:
            return GDBResponse(success=False, errors=["GDB not started"])

        response = self._send_command(f"-file-exec-and-symbols {path}")
        if response.success:
            self._loaded_file = path
        return response

    def set_breakpoint(self, location: str, condition: Optional[str] = None) -> GDBResponse:
        """Set a breakpoint at the specified location.

        Args:
            location: Breakpoint location (e.g., "main", "file.c:42").
            condition: Optional condition for the breakpoint.

        Returns:
            GDBResponse with breakpoint information.
        """
        if self._gdb is None:
            return GDBResponse(success=False, errors=["GDB not started"])

        cmd = f"-break-insert {location}"
        if condition:
            cmd = f"-break-insert -c {condition} {location}"

        return self._send_command(cmd)

    def run(self, args: Optional[list[str]] = None) -> GDBResponse:
        """Run the loaded program.

        Args:
            args: Optional list of command-line arguments.

        Returns:
            GDBResponse indicating stop reason.
        """
        if self._gdb is None:
            return GDBResponse(success=False, errors=["GDB not started"])

        if args:
            arg_str = " ".join(args)
            self._send_command(f"-exec-arguments {arg_str}")

        # Try MI run first, fall back to traditional run on macOS
        result = self._send_command("-exec-run")
        if not result.success and any("Don't know how to run" in err for err in result.errors):
            # macOS fallback: use traditional run command
            self._gdb.sendline("run")
            # Wait for program to start and stop at breakpoint
            try:
                self._gdb.expect(r"\(gdb\)", timeout=self.timeout)
                output = self._gdb.before
                # Parse the output for stopped notification
                return self._parse_output(output)
            except pexpect.TIMEOUT:
                return GDBResponse(success=False, errors=["Timeout waiting for program to stop"])
        return result

    def step(self) -> GDBResponse:
        """Step into the next line/instruction.

        Returns:
            GDBResponse with current location after stepping.
        """
        return self._send_command("-exec-step")

    def next(self) -> GDBResponse:
        """Step over the next line/instruction.

        Returns:
            GDBResponse with current location after stepping.
        """
        return self._send_command("-exec-next")

    def continue_execution(self) -> GDBResponse:
        """Continue execution until next breakpoint or program end.

        Returns:
            GDBResponse with stop reason.
        """
        return self._send_command("-exec-continue")

    def get_current_frame(self) -> GDBResponse:
        """Get information about the current stack frame.

        Returns:
            GDBResponse with frame information.
        """
        return self._send_command("-stack-info-frame")

    def get_local_variables(self) -> GDBResponse:
        """Get local variables in the current frame.

        Returns:
            GDBResponse with list of local variables.
        """
        return self._send_command("-stack-list-locals --all-values")

    def evaluate_expression(self, expression: str) -> GDBResponse:
        """Evaluate an expression in the current context.

        Args:
            expression: The expression to evaluate.

        Returns:
            GDBResponse with the evaluation result.
        """
        return self._send_command(f"-data-evaluate-expression {expression}")

    def _send_command(self, cmd: str) -> GDBResponse:
        """Send a command to GDB and parse the response.

        Args:
            cmd: The MI command to send.

        Returns:
            Parsed GDBResponse.
        """
        if self._gdb is None:
            return GDBResponse(success=False, errors=["GDB not started"])

        self._gdb.sendline(cmd)
        self._gdb.expect(r"\(gdb\)")
        output = self._gdb.before

        return self._parse_output(output)

    def _parse_output(self, output: str) -> GDBResponse:
        """Parse GDB/MI output into a structured response.

        Args:
            output: Raw output from GDB.

        Returns:
            Parsed GDBResponse.
        """
        lines = output.strip().split("\n")
        result: dict[str, Any] = {}
        errors: list[str] = []
        stopped_reason: Optional[GDBStopReason] = None

        for line in lines:
            line = line.strip()
            if not line:
                continue

            # Synchronous result record
            if line.startswith("^"):
                if line.startswith("^done"):
                    result = self._parse_result(line[5:])
                elif line.startswith("^error"):
                    error_data = self._parse_result(line[7:])
                    errors.append(error_data.get("msg", "Unknown error"))
                elif line.startswith("^running"):
                    result = {"status": "running"}

            # Async exec notification
            elif line.startswith("*"):
                if line.startswith("*stopped"):
                    stopped_reason = self._parse_stop_reason(line[9:])

        return GDBResponse(
            success=len(errors) == 0,
            result=result,
            errors=errors,
            stopped_reason=stopped_reason,
        )

    def _parse_result(self, text: str) -> dict[str, Any]:
        """Parse a result record into a dictionary.

        Args:
            text: The result text (after ^done, ^error, etc.).

        Returns:
            Parsed dictionary.
        """
        text = text.strip()
        if not text:
            return {}

        # Remove leading comma if present
        if text.startswith(","):
            text = text[1:]

        return self._parse_keyvals(text)

    def _parse_stop_reason(self, text: str) -> GDBStopReason:
        """Parse a stop reason from *stopped notification.

        Args:
            text: The stop reason text.

        Returns:
            GDBStopReason object.
        """
        data = self._parse_keyvals(text)

        frame_data = data.get("frame", {})
        frame = GDBFrame(
            level=int(frame_data.get("level", 0)),
            addr=frame_data.get("addr", "unknown"),
            func=frame_data.get("func"),
            file=frame_data.get("file"),
            line=int(frame_data.get("line")) if "line" in frame_data else None,
            args=frame_data.get("args", []),
        )

        return GDBStopReason(
            reason=data.get("reason", "unknown"),
            bkptno=int(data["bkptno"]) if "bkptno" in data else None,
            frame=frame,
            thread_id=int(data["thread-id"]) if "thread-id" in data else None,
        )

    def _parse_keyvals(self, text: str) -> dict[str, Any]:
        """Parse key=value pairs from MI output.

        This is a simplified parser that handles basic key=value
        and nested structures.

        Args:
            text: The text to parse.

        Returns:
            Dictionary of parsed key-value pairs.
        """
        result: dict[str, Any] = {}
        if not text:
            return result

        # Simple parsing for key="value" or key={...} patterns
        # This is a simplified version - full MI parsing is complex
        i = 0
        while i < len(text):
            # Find key
            key_match = re.match(r"([a-zA-Z0-9_-]+)", text[i:])
            if not key_match:
                break

            key = key_match.group(1)
            i += key_match.end()

            # Skip equals sign
            if i < len(text) and text[i] == "=":
                i += 1
            else:
                continue

            # Parse value
            value, consumed = self._parse_value(text[i:])
            i += consumed

            result[key] = value

            # Skip comma
            if i < len(text) and text[i] == ",":
                i += 1

        return result

    def _parse_value(self, text: str) -> tuple[Any, int]:
        """Parse a single value from MI output.

        Args:
            text: The text containing the value.

        Returns:
            Tuple of (parsed_value, characters_consumed).
        """
        text = text.strip()
        if not text:
            return (None, 0)

        # String value: "..."
        if text.startswith('"'):
            return self._parse_string(text)

        # List value: [...]
        if text.startswith("["):
            return self._parse_list(text)

        # Dictionary value: {...}
        if text.startswith("{"):
            return self._parse_dict(text)

        # Simple value (number or identifier)
        match = re.match(r"([^,\]]*)", text)
        if match:
            value = match.group(1).strip()
            # Try to convert to number
            try:
                if "." in value:
                    return (float(value), len(value))
                else:
                    return (int(value), len(value))
            except ValueError:
                return (value, len(value))

        return (None, 0)

    def _parse_string(self, text: str) -> tuple[str, int]:
        """Parse a quoted string.

        Args:
            text: Text starting with quote.

        Returns:
            Tuple of (string_value, characters_consumed).
        """
        result = []
        i = 1  # Skip opening quote
        while i < len(text):
            if text[i] == '"' and (i == 0 or text[i - 1] != "\\"):
                return ("".join(result), i + 1)
            result.append(text[i])
            i += 1
        return ("".join(result), i)

    def _parse_list(self, text: str) -> tuple[list[Any], int]:
        """Parse a list [...].

        Args:
            text: Text starting with [.

        Returns:
            Tuple of (list, characters_consumed).
        """
        result: list[Any] = []
        i = 1  # Skip opening bracket
        while i < len(text) and text[i] != "]":
            value, consumed = self._parse_value(text[i:])
            if consumed > 0:
                result.append(value)
                i += consumed
            # Skip comma
            if i < len(text) and text[i] == ",":
                i += 1
            elif i < len(text) and text[i].isspace():
                i += 1
            else:
                break

        if i < len(text) and text[i] == "]":
            i += 1

        return (result, i)

    def _parse_dict(self, text: str) -> tuple[dict[str, Any], int]:
        """Parse a dictionary {...}.

        Args:
            text: Text starting with {.

        Returns:
            Tuple of (dict, characters_consumed).
        """
        result: dict[str, Any] = {}
        i = 1  # Skip opening brace

        while i < len(text) and text[i] != "}":
            # Find key
            key_match = re.match(r"\s*([a-zA-Z0-9_-]+)\s*=", text[i:])
            if not key_match:
                break

            key = key_match.group(1)
            i += key_match.end()

            # Parse value
            value, consumed = self._parse_value(text[i:])
            if consumed > 0:
                result[key] = value
                i += consumed

            # Skip comma
            if i < len(text) and text[i] == ",":
                i += 1
            elif i < len(text) and text[i].isspace():
                i += 1
            else:
                break

        if i < len(text) and text[i] == "}":
            i += 1

        return (result, i)
