# gdb-bridge Dockerfile
# Multi-stage build — production-grade debugging middleware
# Supports: GDB/MI, LLDB, gdbserver, lldb-server remote debugging

# Stage 1: Build dependencies + C engine
FROM python:3.11-slim AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
    gcc make \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /build

COPY pyproject.toml .
COPY src/ src/
RUN pip install --no-cache-dir --user .

# Build C ELF engine
COPY src/gdb_bridge/engine/ engine/
RUN cd engine && make clean && make

# Stage 2: Runtime
FROM python:3.11-slim

# Install debuggers + remote debugging tools
RUN apt-get update && apt-get install -y --no-install-recommends \
    gdb gdbserver \
    lldb lldb-server \
    build-essential gcc \
    elfutils binutils \
    && rm -rf /var/lib/apt/lists/* && apt-get clean

# Security: non-root user
RUN useradd -m -u 1000 gdbuser && \
    mkdir -p /app /tmp/gdb-sessions /debug-targets && \
    chown -R gdbuser:gdbuser /app /tmp/gdb-sessions /debug-targets

# Copy Python deps from builder
COPY --from=builder /root/.local /home/gdbuser/.local
ENV PATH=/home/gdbuser/.local/bin:$PATH

# Copy C engine shared lib
COPY --from=builder --chown=gdbuser:gdbuser /build/engine/*.so /app/src/gdb_bridge/engine/

USER gdbuser
WORKDIR /app

# Copy application
COPY --chown=gdbuser:gdbuser pyproject.toml .
COPY --chown=gdbuser:gdbuser src/ src/
COPY --chown=gdbuser:gdbuser tests/ tests/
COPY --chown=gdbuser:gdbuser pytest.ini .

# Ports: 8080 REST API, 2345 gdbserver, 2346 lldb-server
EXPOSE 8080 2345 2346

HEALTHCHECK --interval=30s --timeout=5s --start-period=10s --retries=3 \
    CMD python -c "import urllib.request; urllib.request.urlopen('http://localhost:8080/health')" || exit 1

CMD ["uvicorn", "gdb_bridge.main:app", "--host", "0.0.0.0", "--port", "8080"]
