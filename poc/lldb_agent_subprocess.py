#!/usr/bin/env python3
"""LLDB JSON Pipe Agent — subprocess mode for gdb-bridge.

This script runs under Apple's /usr/bin/python3 (Python 3.9, bundled lldb).
It reads JSON commands from stdin and writes JSON responses to stdout,
acting as a thin subprocess agent driven by LLDBService.

Usage (not called directly — launched by LLDBService):
    /usr/bin/python3 poc/lldb_agent_subprocess.py <program_path>
"""

from __future__ import annotations

import json
import os
import sys

LLDB_PATH = "/Library/Developer/CommandLineTools/Library/PrivateFrameworks/LLDB.framework/Versions/A/Resources/Python"
if LLDB_PATH not in sys.path:
    sys.path.insert(0, LLDB_PATH)

import lldb  # noqa: E402


def main() -> None:
    """Main loop: read JSON commands, execute, write JSON responses."""
    if len(sys.argv) < 2:
        _write({"success": False, "error": "Usage: lldb_agent_subprocess.py <program_path>"})
        sys.exit(1)

    program_path = sys.argv[1]

    debugger = lldb.SBDebugger.Create()
    debugger.SetAsync(False)

    target = debugger.CreateTarget(program_path)
    if not target or not target.IsValid():
        _write({"success": False, "error": f"Failed to create target: {program_path}"})
        sys.exit(1)

    process: lldb.SBProcess | None = None
    breakpoints: dict[int, dict] = {}

    while True:
        try:
            line = sys.stdin.readline()
            if not line:
                break
            cmd = json.loads(line.strip())
        except (json.JSONDecodeError, EOFError):
            break

        method = cmd.get("method")
        params = cmd.get("params", {})

        try:
            if method == "run":
                process = _run(target, os.getcwd())
                _write(_stop_event(process))
            elif method == "step":
                process = _get_process(process)
                step_type = params.get("type", "step-in")
                _step(process, step_type)
                _write(_stop_event(process))
            elif method == "continue":
                process = _get_process(process)
                process.Continue()
                _write(_stop_event(process))
            elif method == "set_breakpoint":
                bp_id, info = _set_breakpoint(target, params["location"])
                breakpoints[bp_id] = info
                _write({"success": True, "data": info})
            elif method == "list_breakpoints":
                _write({"success": True, "data": {"breakpoints": list(breakpoints.values())}})
            elif method == "delete_breakpoint":
                bp_id = params["breakpoint_id"]
                target.BreakpointDelete(bp_id)
                breakpoints.pop(bp_id, None)
                _write({"success": True})
            elif method == "get_location":
                loc = _get_location(_get_process(process))
                _write({"success": True, "data": loc})
            elif method == "get_variables":
                variables = _get_variables(_get_process(process))
                _write({"success": True, "data": {"variables": variables}})
            elif method == "evaluate":
                result = _evaluate(_get_process(process), params["expression"])
                _write(result)

            elif method == "get_threads":
                threads = _get_threads(_get_process(process))
                _write({"success": True, "data": {"threads": threads}})
            elif method == "select_thread":
                proc = _get_process(process)
                proc.SetSelectedThreadByID(params["thread_id"])
                _write({"success": True})
            elif method == "set_watchpoint":
                t = _get_target(target)
                bp = t.BreakpointCreateByName(params["expression"])
                bp_id = bp.GetID()
                info = {"breakpoint_id": bp_id, "location": "watch:" + params["expression"], "enabled": True}
                breakpoints[bp_id] = info
                _write({"success": True, "data": info})

            elif method == "get_frames":
                frames = _get_frames(_get_process(process))
                _write({"success": True, "data": {"frames": frames}})
            elif method == "stop":
                _write({"success": True})
                break
            else:
                _write({"success": False, "error": f"Unknown method: {method}"})
        except Exception as e:
            _write({"success": False, "error": str(e)})

    if process and process.IsValid():
        process.Kill()
    lldb.SBDebugger.Destroy(debugger)


# ── LLDB operations ──────────────────────────────────────────────────────


def _run(target: lldb.SBTarget, cwd: str) -> lldb.SBProcess:
    launch_info = lldb.SBLaunchInfo([])
    launch_info.SetWorkingDirectory(cwd)
    error = lldb.SBError()
    process = target.Launch(launch_info, error)
    if not error.Success():
        raise RuntimeError(f"Launch failed: {error.GetCString()}")
    return process


def _step(process: lldb.SBProcess, step_type: str) -> None:
    thread = process.GetSelectedThread()
    if step_type == "step-over":
        thread.StepOver()
    elif step_type == "step-out":
        thread.StepOut()
    else:
        thread.StepInto()


def _set_breakpoint(target: lldb.SBTarget, location: str) -> tuple[int, dict]:
    bp = target.BreakpointCreateByName(location)
    bp_id = bp.GetID()
    info = {
        "breakpoint_id": bp_id,
        "location": location,
        "enabled": bp.IsEnabled(),
        "num_locations": bp.GetNumLocations(),
    }
    return bp_id, info


def _get_location(process: lldb.SBProcess) -> dict:
    thread = process.GetSelectedThread()
    frame = thread.GetSelectedFrame()
    line_entry = frame.GetLineEntry()
    return {
        "file": f"{line_entry.GetFileSpec().GetDirectory()}/{line_entry.GetFileSpec().GetFilename()}" if line_entry.IsValid() else None,
        "line": line_entry.GetLine() if line_entry.IsValid() else None,
        "function": frame.GetFunctionName() or None,
        "address": f"0x{frame.GetPC():x}",
    }


def _get_variables(process: lldb.SBProcess) -> list[dict]:
    thread = process.GetSelectedThread()
    frame = thread.GetSelectedFrame()
    variables: list[dict] = []

    for kind in [(True, False, False, True), (False, False, True, True)]:  # args, locals
        vals = frame.GetVariables(*kind)
        for i in range(vals.GetSize()):
            var = vals.GetValueAtIndex(i)
            val_str = var.GetValue() or ""
            variables.append({
                "name": var.GetName() or "unnamed",
                "value": val_str,
                "type": var.GetTypeName() or "",
                "is_optimized_out": "optimized" in val_str.lower(),
            })

    return variables


def _evaluate(process: lldb.SBProcess, expression: str) -> dict:
    thread = process.GetSelectedThread()
    frame = thread.GetSelectedFrame()
    result = frame.EvaluateExpression(expression)
    error = result.GetError()
    if not error.Success():
        return {
            "success": False,
            "error": f"Evaluate failed: {error.GetCString()}",
        }
    return {
        "success": True,
        "data": {"expression": expression, "value": result.GetValue()},
    }


def _get_frames(process: lldb.SBProcess) -> list[dict]:
    thread = process.GetSelectedThread()
    frames = []
    for i in range(thread.GetNumFrames()):
        frame = thread.GetFrameAtIndex(i)
        line_entry = frame.GetLineEntry()
        frames.append({
            "level": i,
            "function": frame.GetFunctionName() or None,
            "file": f"{line_entry.GetFileSpec().GetDirectory()}/{line_entry.GetFileSpec().GetFilename()}" if line_entry.IsValid() else None,
            "line": line_entry.GetLine() if line_entry.IsValid() else None,
        })
    return frames


def _stop_event(process: lldb.SBProcess) -> dict:
    state = process.GetState()
    thread = process.GetSelectedThread()

    result: dict = {"status": "stopped", "reason": "unknown", "location": {}}

    if state == lldb.eStateStopped:
        reason_id = thread.GetStopReason() if thread else 0
        reason_map = {
            lldb.eStopReasonBreakpoint: "breakpoint-hit",
            lldb.eStopReasonPlanComplete: "step-done",
            lldb.eStopReasonSignal: "signal-received",
        }
        result["reason"] = reason_map.get(reason_id, "unknown")
        if reason_id == lldb.eStopReasonBreakpoint and thread:
            result["breakpoint_id"] = thread.GetStopReasonDataAtIndex(0)
        if thread:
            frame = thread.GetSelectedFrame()
            if frame:
                le = frame.GetLineEntry()
                result["location"] = {
                    "file": f"{le.GetFileSpec().GetDirectory()}/{le.GetFileSpec().GetFilename()}" if le.IsValid() else None,
                    "line": le.GetLine() if le.IsValid() else None,
                    "function": frame.GetFunctionName() or None,
                    "address": f"0x{frame.GetPC():x}",
                }
    elif state == lldb.eStateExited:
        result["reason"] = "exit"

    return {"success": True, "data": result}



def _get_threads(process):
    threads = []
    for i in range(process.GetNumThreads()):
        t = process.GetThreadAtIndex(i)
        frame = t.GetSelectedFrame()
        func = frame.GetFunctionName() if frame else None
        threads.append({"thread_id": t.GetThreadID(), "name": t.GetName() or None, "function": func, "is_stopped": t.IsValid()})
    return threads

def _get_target(target_or_process):
    if hasattr(target_or_process, 'GetTarget'):
        return target_or_process.GetTarget()
    return target_or_process

def _get_process(process: lldb.SBProcess | None) -> lldb.SBProcess:
    if not process or not process.IsValid():
        raise RuntimeError("No running process")
    return process


def _write(data: dict) -> None:
    sys.stdout.write(json.dumps(data) + "\n")
    sys.stdout.flush()


if __name__ == "__main__":
    main()
