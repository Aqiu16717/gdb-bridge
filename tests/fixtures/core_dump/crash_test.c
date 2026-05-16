/* Core dump test fixture
 * Build: gcc -g -O0 -o crash_test crash_test.c
 * Run: ./crash_test (will SIGSEGV)
 * Generate core: ulimit -c unlimited && ./crash_test */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deep_stack(int depth) {
    char buf[64];
    if (depth <= 0) {
        // Trigger SIGSEGV
        int *p = NULL;
        *p = 42;
    }
    snprintf(buf, sizeof(buf), "depth=%d", depth);
    printf("%s\n", buf);
    deep_stack(depth - 1);
}

int main(int argc, char *argv[]) {
    printf("Starting crash test...\n");
    deep_stack(5);
    printf("Should not reach here\n");
    return 0;
}
