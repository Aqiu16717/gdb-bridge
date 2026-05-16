#!/bin/bash
# Generate a large ELF with substantial DWARF debug info.
# Creates a C file with many functions to inflate DWARF size.
#
# Usage: bash gen_large.sh
# Output: large_binary_test (binary), large_source.c (source)
#
# Expected: ~50-100MB of DWARF debug symbols

NUM_FUNCTIONS=2000

cat > large_source.c << 'HEADER'
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
HEADER

for i in $(seq 1 $NUM_FUNCTIONS); do
    cat >> large_source.c << FUNC

typedef struct {
    int field_$i;
    long field_${i}_b;
    double field_${i}_c;
    char name_$i[64];
} StructType$i;

int function_$i(StructType$i *s, int param_a, double param_b, const char *param_c) {
    int local_$i = param_a * $i;
    double local_${i}_d = param_b * $i;
    char buf_$i[128];
    snprintf(buf_$i, sizeof(buf_$i), "function_%d: %d, %f, %s", $i, local_$i, local_${i}_d, param_c ? param_c : "null");
    return local_$i + (int)local_${i}_d;
}
FUNC
done

cat >> large_source.c << MAIN

int main(int argc, char *argv[]) {
    printf("Large binary test with $NUM_FUNCTIONS functions\n");
    return 0;
}
MAIN

gcc -g -O0 -o large_binary_test large_source.c
echo "Done: large_binary_test created ($(stat -f%z large_binary_test 2>/dev/null || stat -c%s large_binary_test) bytes)"
echo "Source: $(wc -l < large_source.c) lines"
