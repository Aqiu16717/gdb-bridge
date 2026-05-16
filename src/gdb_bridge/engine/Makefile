# Makefile — gdb-bridge C engine
#
# Builds the DWARF/ELF engine as a shared library callable from Python via ctypes.
#
# Targets:
#   make              — build libdwarf-bridge.dylib (macOS) or .so (Linux)
#   make test_elf     — generate ELF test binary
#   make test         — build and run C test harness
#   make clean        — remove build artifacts

UNAME_S := $(shell uname -s)

# ── Platform detection ──
ifeq ($(UNAME_S),Darwin)
	SO_EXT   := dylib
	CC       := cc
	CFLAGS   += -arch arm64
	LDFLAGS  += -Wl,-install_name,@rpath/libdwarf-bridge.dylib
else ifeq ($(UNAME_S),Linux)
	SO_EXT   := so
	CC       := gcc
endif

# ── Compiler flags ──
CFLAGS   += -std=c11 -Wall -Wextra -Werror -Wstrict-aliasing=2 \
            -Wshadow -Wcast-align -Wpointer-arith -Wwrite-strings \
            -fPIC -O2 -g
LDFLAGS  += -shared

# ── Targets ──
# Use Makefile's own directory to work from any CWD
MAKEFILE_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
ENGINE_DIR   := $(MAKEFILE_DIR)
BUILD_DIR    := $(ENGINE_DIR)/build

SO_TARGET   := $(BUILD_DIR)/libdwarf-bridge.$(SO_EXT)
TEST_ELF    := $(BUILD_DIR)/test_elf.bin
TEST_DWARF  := $(BUILD_DIR)/test_dwarf.bin
TEST_GEN    := $(BUILD_DIR)/gen_elf_test
DWARF_GEN   := $(BUILD_DIR)/gen_dwarf_elf
TEST_RUNNER := $(BUILD_DIR)/test_elf_runner
TEST_DWARF_RUNNER := $(BUILD_DIR)/test_dwarf_runner
TEST_CORE   := $(BUILD_DIR)/test_core.bin
CORE_GEN    := $(BUILD_DIR)/gen_core_test
TEST_CORE_RUNNER := $(BUILD_DIR)/test_core_runner

SRCS := $(ENGINE_DIR)/libelf_utils.c $(ENGINE_DIR)/libdwarf_index.c $(ENGINE_DIR)/libcore_parser.c $(ENGINE_DIR)/libdemangle.c
OBJS := $(BUILD_DIR)/libelf_utils.o $(BUILD_DIR)/libdwarf_index.o $(BUILD_DIR)/libcore_parser.o $(BUILD_DIR)/libdemangle.o

# Link flags for __cxa_demangle
ifeq ($(UNAME_S),Darwin)
	CXXABI_LIB := -lc++abi
else
	CXXABI_LIB := -lstdc++
endif

.PHONY: all test_elf test clean

all: $(SO_TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# ── Static library objects (for unit testing) ──
$(BUILD_DIR)/libelf_utils.o: $(ENGINE_DIR)/libelf_utils.c $(ENGINE_DIR)/libelf_utils.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/libdwarf_index.o: $(ENGINE_DIR)/libdwarf_index.c $(ENGINE_DIR)/libdwarf_index.h $(ENGINE_DIR)/libelf_utils.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(ENGINE_DIR) -c $< -o $@

$(BUILD_DIR)/libcore_parser.o: $(ENGINE_DIR)/libcore_parser.c $(ENGINE_DIR)/libcore_parser.h $(ENGINE_DIR)/libelf_utils.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(ENGINE_DIR) -c $< -o $@

$(BUILD_DIR)/libdemangle.o: $(ENGINE_DIR)/libdemangle.c $(ENGINE_DIR)/libdemangle.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(ENGINE_DIR) -c $< -o $@

# ── Shared library (for Python ctypes) ──
$(SO_TARGET): $(OBJS) | $(BUILD_DIR)
	$(CC) $(LDFLAGS) $(OBJS) $(CXXABI_LIB) -o $@
	@echo "  → Built $(SO_TARGET)"

# ── ELF test binary generator ──
$(TEST_GEN): $(ENGINE_DIR)/gen_elf_test.c | $(BUILD_DIR)
	$(CC) -std=c11 -Wall -Wextra -O2 $< -o $@

# ── Generate ELF test binary ──
$(TEST_ELF): $(TEST_GEN) | $(BUILD_DIR)
	$(TEST_GEN) $(TEST_ELF)

test_elf: $(TEST_ELF)
	@echo "  → ELF test binary generated"

# ── DWARF ELF generator ──
$(DWARF_GEN): $(ENGINE_DIR)/gen_dwarf_elf.c | $(BUILD_DIR)
	$(CC) -std=c11 -Wall -Wextra -O2 $< -o $@

$(TEST_DWARF): $(DWARF_GEN) | $(BUILD_DIR)
	$(DWARF_GEN) $(TEST_DWARF)

test_dwarf_elf: $(TEST_DWARF)
	@echo "  → DWARF test ELF generated"

# ── Test runners ──
$(TEST_RUNNER): $(ENGINE_DIR)/test_elf_runner.c $(OBJS) | $(BUILD_DIR)
	$(CC) -std=c11 -Wall -Wextra -O2 -I$(ENGINE_DIR) $< $(BUILD_DIR)/libelf_utils.o -o $@

$(TEST_DWARF_RUNNER): $(ENGINE_DIR)/test_dwarf_runner.c $(BUILD_DIR)/libelf_utils.o $(BUILD_DIR)/libdwarf_index.o | $(BUILD_DIR)
	$(CC) -std=c11 -Wall -Wextra -O2 -I$(ENGINE_DIR) $< $(BUILD_DIR)/libelf_utils.o $(BUILD_DIR)/libdwarf_index.o -o $@

$(CORE_GEN): $(ENGINE_DIR)/gen_core_test.c | $(BUILD_DIR)
	$(CC) -std=c11 -Wall -Wextra -O2 $< -o $@

$(TEST_CORE): $(CORE_GEN) | $(BUILD_DIR)
	$(CORE_GEN) $(TEST_CORE)

test_core_elf: $(TEST_CORE)
	@echo "  → Core dump test ELF generated"

$(TEST_CORE_RUNNER): $(ENGINE_DIR)/test_core_runner.c $(BUILD_DIR)/libelf_utils.o $(BUILD_DIR)/libdwarf_index.o $(BUILD_DIR)/libcore_parser.o | $(BUILD_DIR)
	$(CC) -std=c11 -Wall -Wextra -O2 -I$(ENGINE_DIR) $< $(BUILD_DIR)/libelf_utils.o $(BUILD_DIR)/libdwarf_index.o $(BUILD_DIR)/libcore_parser.o -o $@

TEST_DEMANGLE_RUNNER := $(BUILD_DIR)/test_demangle_runner

$(TEST_DEMANGLE_RUNNER): $(ENGINE_DIR)/test_demangle_runner.c $(BUILD_DIR)/libdemangle.o | $(BUILD_DIR)
	$(CC) -std=c11 -Wall -Wextra -O2 -I$(ENGINE_DIR) $< $(BUILD_DIR)/libdemangle.o $(CXXABI_LIB) -o $@

test_demangle: $(TEST_DEMANGLE_RUNNER)
	@echo "=== Running Demangle tests ==="
	$(TEST_DEMANGLE_RUNNER)
	@echo "=== All Demangle tests passed ==="

test_core: $(SO_TARGET) $(TEST_CORE) $(TEST_CORE_RUNNER)
	@echo "=== Running Core dump tests ==="
	$(TEST_CORE_RUNNER) $(TEST_CORE)
	@echo "=== All Core dump tests passed ==="

test: test_elf_full test_dwarf_full test_core_full test_demangle_full
	@echo "=== All C engine tests passed (56/56) ==="

test_elf_full: $(SO_TARGET) $(TEST_ELF) $(TEST_RUNNER)
	@echo "=== Running ELF parser tests ==="
	$(TEST_RUNNER) $(TEST_ELF)
	@echo "=== ELF tests passed (21/21) ==="

test_dwarf_full: $(SO_TARGET) $(TEST_DWARF) $(TEST_DWARF_RUNNER)
	@echo "=== Running DWARF index tests ==="
	$(TEST_DWARF_RUNNER) $(TEST_DWARF)
	@echo "=== DWARF tests passed (13/13) ==="

test_core_full: $(SO_TARGET) $(TEST_CORE) $(TEST_CORE_RUNNER)
	@echo "=== Running Core dump tests ==="
	$(TEST_CORE_RUNNER) $(TEST_CORE)
	@echo "=== Core dump tests passed (14/14) ==="

test_demangle_full: $(TEST_DEMANGLE_RUNNER)
	@echo "=== Running Demangle tests ==="
	$(TEST_DEMANGLE_RUNNER)
	@echo "=== Demangle tests passed (8/8) ==="

test_dwarf: $(SO_TARGET) $(TEST_DWARF) $(TEST_DWARF_RUNNER)
	@echo "=== Running DWARF index tests ==="
	$(TEST_DWARF_RUNNER) $(TEST_DWARF)
	@echo "=== All DWARF index tests passed ==="

# ── Clean ──
clean:
	rm -rf $(BUILD_DIR)
