"""Entry point for GDB-Bridge HTTP service."""

from __future__ import annotations

import uvicorn

from gdb_bridge.api import create_app

app = create_app()


if __name__ == "__main__":
    uvicorn.run(
        "gdb_bridge.main:app",
        host="0.0.0.0",
        port=8080,
        reload=True,
    )
