"""Tests for data models."""

from __future__ import annotations

import pytest
from pydantic import ValidationError

from gdb_bridge.models.session import (
    CreateSessionRequest,
    Session,
    SessionStatus,
    Target,
    TargetType,
)
from gdb_bridge.models.debug import (
    Breakpoint,
    CreateBreakpointRequest,
    EvaluationResult,
    Frame,
    Location,
    StepType,
    StopEvent,
    StopReason,
    Variable,
)
from gdb_bridge.models.errors import ErrorCode, ErrorResponse


class TestTargetModel:
    """Tests for Target model."""

    def test_create_file_target(self) -> None:
        """Test creating a file target."""
        target = Target(type=TargetType.FILE, path="/path/to/binary")
        assert target.type == TargetType.FILE
        assert target.path == "/path/to/binary"
        assert target.args == []
        assert target.env == {}

    def test_create_target_with_args(self) -> None:
        """Test creating a target with arguments."""
        target = Target(
            type=TargetType.FILE,
            path="/bin/ls",
            args=["-la", "/tmp"],
            env={"DEBUG": "1"},
        )
        assert len(target.args) == 2
        assert target.env["DEBUG"] == "1"

    def test_target_serialization(self) -> None:
        """Test Target JSON serialization."""
        target = Target(type=TargetType.FILE, path="/app")
        data = target.model_dump()
        assert data["type"] == "file"
        assert data["path"] == "/app"

    def test_target_deserialization(self) -> None:
        """Test Target JSON deserialization."""
        data = {"type": "file", "path": "/app", "args": [], "env": {}}
        target = Target.model_validate(data)
        assert target.path == "/app"

    def test_invalid_target_type(self) -> None:
        """Test invalid target type raises error."""
        with pytest.raises(ValidationError):
            Target(type="invalid", path="/app")  # type: ignore[arg-type]

    def test_missing_required_fields(self) -> None:
        """Test missing required fields raises error."""
        with pytest.raises(ValidationError):
            Target(type=TargetType.FILE)  # Missing path
        with pytest.raises(ValidationError):
            Target(path="/app")  # Missing type


class TestSessionModel:
    """Tests for Session model."""

    def test_create_session(self) -> None:
        """Test creating a session."""
        session = Session(
            session_id="sess_test123",
            status=SessionStatus.CREATED,
        )
        assert session.session_id == "sess_test123"
        assert session.status == SessionStatus.CREATED
        assert session.created_at is not None

    def test_session_status_enum(self) -> None:
        """Test session status enum values."""
        assert SessionStatus.CREATED.value == "created"
        assert SessionStatus.RUNNING.value == "running"
        assert SessionStatus.STOPPED.value == "stopped"
        assert SessionStatus.TERMINATED.value == "terminated"

    def test_create_session_request_minimal(self) -> None:
        """Test minimal session creation request."""
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/app"),
        )
        assert request.gdb_path == "gdb"
        assert request.working_dir is None

    def test_create_session_request_full(self) -> None:
        """Test full session creation request."""
        request = CreateSessionRequest(
            target=Target(type=TargetType.FILE, path="/app", args=["-v"]),
            gdb_path="/usr/local/bin/gdb",
            working_dir="/work",
        )
        assert request.gdb_path == "/usr/local/bin/gdb"
        assert request.working_dir == "/work"


class TestBreakpointModel:
    """Tests for Breakpoint model."""

    def test_create_breakpoint(self) -> None:
        """Test creating a breakpoint."""
        bp = Breakpoint(
            breakpoint_id=1,
            location="main.c:42",
        )
        assert bp.breakpoint_id == 1
        assert bp.enabled is True
        assert bp.times == 0

    def test_create_breakpoint_with_condition(self) -> None:
        """Test breakpoint with condition."""
        bp = Breakpoint(
            breakpoint_id=2,
            location="utils.c:10",
            condition="i > 100",
            enabled=False,
        )
        assert bp.condition == "i > 100"
        assert bp.enabled is False

    def test_create_breakpoint_request(self) -> None:
        """Test breakpoint creation request."""
        request = CreateBreakpointRequest(location="main.c:42")
        assert request.condition is None
        assert request.hit_count is None

    def test_create_breakpoint_request_with_condition(self) -> None:
        """Test breakpoint request with condition."""
        request = CreateBreakpointRequest(
            location="loop.c:15",
            condition="iter > 1000",
            hit_count=5,
        )
        assert request.condition == "iter > 1000"
        assert request.hit_count == 5

    def test_breakpoint_serialization(self) -> None:
        """Test breakpoint JSON serialization."""
        bp = Breakpoint(breakpoint_id=1, location="main.c:42")
        data = bp.model_dump()
        assert data["breakpoint_id"] == 1
        assert data["enabled"] is True


class TestStopEventModel:
    """Tests for StopEvent model."""

    def test_breakpoint_hit(self) -> None:
        """Test breakpoint hit stop event."""
        event = StopEvent(
            status="stopped",
            reason=StopReason.BREAKPOINT_HIT,
            location=Location(file="main.c", line=42, function="main"),
        )
        assert event.status == "stopped"
        assert event.reason == StopReason.BREAKPOINT_HIT
        assert event.location.file == "main.c"

    def test_signal_received(self) -> None:
        """Test signal received stop event."""
        event = StopEvent(
            status="stopped",
            reason=StopReason.SIGNAL_RECEIVED,
            location=Location(),
            signal="SIGSEGV",
        )
        assert event.signal == "SIGSEGV"

    def test_step_type_enum(self) -> None:
        """Test step type enum."""
        assert StepType.STEP_IN.value == "step-in"
        assert StepType.STEP_OVER.value == "step-over"
        assert StepType.STEP_OUT.value == "step-out"


class TestVariableModel:
    """Tests for Variable model."""

    def test_create_variable(self) -> None:
        """Test creating a variable."""
        var = Variable(name="x", type="int", value="42")
        assert var.name == "x"
        assert var.value == "42"
        assert var.is_optimized_out is False

    def test_optimized_out_variable(self) -> None:
        """Test optimized out variable."""
        var = Variable(name="ptr", value="<optimized out>", is_optimized_out=True)
        assert var.is_optimized_out is True

    def test_variable_with_address(self) -> None:
        """Test variable with address."""
        var = Variable(
            name="buf",
            type="char*",
            address="0x7fff5fbff80c",
        )
        assert var.address == "0x7fff5fbff80c"


class TestErrorModels:
    """Tests for error models."""

    def test_error_code_enum(self) -> None:
        """Test error code enum."""
        assert ErrorCode.SESSION_NOT_FOUND.value == "E002"
        assert ErrorCode.INVALID_BREAKPOINT_LOCATION.value == "E004"

    def test_error_response_create(self) -> None:
        """Test ErrorResponse factory method."""
        response = ErrorResponse.create(
            code=ErrorCode.SESSION_NOT_FOUND,
            message="Session not found: sess_123",
            details={"session_id": "sess_123"},
        )
        assert response.error.code == ErrorCode.SESSION_NOT_FOUND
        assert response.error.message == "Session not found: sess_123"
        assert response.error.details["session_id"] == "sess_123"

    def test_error_response_serialization(self) -> None:
        """Test error response serialization."""
        response = ErrorResponse.create(
            code=ErrorCode.EVALUATION_FAILED,
            message="Cannot evaluate expression",
        )
        data = response.model_dump()
        assert data["error"]["code"] == "E005"
        assert data["error"]["message"] == "Cannot evaluate expression"


class TestFrameModel:
    """Tests for Frame model."""

    def test_create_frame(self) -> None:
        """Test creating a frame."""
        frame = Frame(
            level=0,
            function="main",
            file="main.c",
            line=42,
        )
        assert frame.level == 0
        assert frame.line == 42

    def test_frame_serialization(self) -> None:
        """Test frame serialization."""
        frame = Frame(level=1, function="add", file="utils.c", line=10)
        data = frame.model_dump()
        assert data["level"] == 1
        assert data["function"] == "add"


class TestEvaluationResultModel:
    """Tests for EvaluationResult model."""

    def test_create_evaluation(self) -> None:
        """Test creating an evaluation result."""
        result = EvaluationResult(
            expression="x + y",
            value="30",
            type="int",
        )
        assert result.expression == "x + y"
        assert result.value == "30"

    def test_evaluation_with_complex_value(self) -> None:
        """Test evaluation with complex value."""
        result = EvaluationResult(
            expression="user->name",
            value={"first": "Alice", "last": "Smith"},
        )
        assert isinstance(result.value, dict)
