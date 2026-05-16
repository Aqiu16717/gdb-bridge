/*
 * Shared library test fixture (macOS)
 *
 * Build:
 *   gcc -dynamiclib -g -O0 -o libfoo.dylib libfoo.c
 *   gcc -g -O0 -o shared_lib_test main.c -L. -lfoo
 *
 * Linux:
 *   gcc -shared -fPIC -g -O0 -o libfoo.so libfoo.c
 *   gcc -g -O0 -o shared_lib_test main.c -L. -lfoo -Wl,-rpath=.
 */
#include <stdio.h>

int libfoo_add(int a, int b) {
    int result = a + b;
    return result;
}

const char* libfoo_version(void) {
    return "libfoo v1.0.0";
}
