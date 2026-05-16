#!/bin/bash
# Verify LLDB PoC against real-world C++ fixture
# Requires: macOS with Xcode CLI tools

set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PROJECT_DIR="$(cd "$SCRIPT_DIR/../.." && pwd)"

echo "=== Building fixture ==="
g++ -std=c++17 -g -O0 -o "$SCRIPT_DIR/json_test" "$SCRIPT_DIR/json_test.cpp"
echo ""

echo "=== Running LLDB PoC ==="
/usr/bin/python3 "$PROJECT_DIR/poc/lldb_agent.py" 2>&1
echo ""

echo "=== Done ==="
