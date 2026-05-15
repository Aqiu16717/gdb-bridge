# gdb-bridge Dockerfile
# Multi-stage build for optimized image size

# Stage 1: Builder
FROM python:3.11-slim as builder

WORKDIR /build

# Install build dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    gcc \
    && rm -rf /var/lib/apt/lists/*

# Install Python dependencies
COPY requirements.txt .
RUN pip install --no-cache-dir --user -r requirements.txt

# Stage 2: Runtime
FROM python:3.11-slim

# Install GDB and required tools
RUN apt-get update && apt-get install -y --no-install-recommends \
    gdb \
    build-essential \
    && rm -rf /var/lib/apt/lists/* \
    && apt-get clean

# Create non-root user for security
RUN useradd -m -u 1000 gdbuser && \
    mkdir -p /app /tmp/gdb-sessions && \
    chown -R gdbuser:gdbuser /app /tmp/gdb-sessions

# Copy Python dependencies from builder
COPY --from=builder /root/.local /home/gdbuser/.local
ENV PATH=/home/gdbuser/.local/bin:$PATH

# Switch to non-root user
USER gdbuser
WORKDIR /app

# Copy application code
COPY --chown=gdbuser:gdbuser . /app/

# Expose API port
EXPOSE 8080

# Health check
HEALTHCHECK --interval=30s --timeout=5s --start-period=5s --retries=3 \
    CMD python -c "import urllib.request; urllib.request.urlopen('http://localhost:8080/health')" || exit 1

# Default command
CMD ["uvicorn", "main:app", "--host", "0.0.0.0", "--port", "8080"]
