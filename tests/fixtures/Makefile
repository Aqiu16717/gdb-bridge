# Build all test fixtures
# Debug builds: -g -O0
# Stripped: strip after build
# Optimized: -O2

CC = gcc
CFLAGS = -Wall -Wextra

all: simple_test segfault_test loop_test variables_test stripped_test optimized_test

simple_test: simple_test.c
	$(CC) $(CFLAGS) -g -O0 -o simple_test simple_test.c

segfault_test: segfault_test.c
	$(CC) $(CFLAGS) -g -O0 -o segfault_test segfault_test.c

loop_test: loop_test.c
	$(CC) $(CFLAGS) -g -O0 -o loop_test loop_test.c

variables_test: variables_test.c
	$(CC) $(CFLAGS) -g -O0 -o variables_test variables_test.c

stripped_test: stripped_test.c
	$(CC) $(CFLAGS) -g -O0 -o stripped_test stripped_test.c
	strip stripped_test

optimized_test: simple_test.c
	$(CC) $(CFLAGS) -O2 -o optimized_test simple_test.c

clean:
	rm -f simple_test segfault_test loop_test variables_test stripped_test optimized_test

.PHONY: all clean
