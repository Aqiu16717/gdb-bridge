"""Error handlers for GDB-Bridge API."""

from __future__ import annotations

from fastapi import FastAPI, Request
from fastapi.responses import JSONResponse

from gdb_bridge.core.exceptions import GDBBridgeException
from gdb_bridge.models.errors import ErrorResponse


def register_error_handlers(app: FastAPI) -> None:
    """Register custom error handlers on the FastAPI app.

    Args:
        app: FastAPI application instance
    """

    @app.exception_handler(GDBBridgeException)
    async def gdb_bridge_exception_handler(
        request: Request,
        exc: GDBBridgeException,
    ) -> JSONResponse:
        """Handle GDB-Bridge specific exceptions.

        Args:
            request: HTTP request
            exc: GDB-Bridge exception

        Returns:
            JSON error response
        """
        error_response = ErrorResponse.create(
            code=exc.error_code,
            message=exc.message,
            details=exc.details,
        )
        return JSONResponse(
            status_code=exc.status_code,
            content=error_response.model_dump(),
        )

    @app.exception_handler(Exception)
    async def generic_exception_handler(
        request: Request,
        exc: Exception,
    ) -> JSONResponse:
        """Handle unhandled exceptions.

        Args:
            request: HTTP request
            exc: Unhandled exception

        Returns:
            JSON error response
        """
        from gdb_bridge.models.errors import ErrorCode as Ec

        error_response = ErrorResponse.create(
            code=Ec.GDB_PROCESS_ERROR,
            message=f"Internal server error: {str(exc)}",
        )
        return JSONResponse(
            status_code=500,
            content=error_response.model_dump(),
        )
