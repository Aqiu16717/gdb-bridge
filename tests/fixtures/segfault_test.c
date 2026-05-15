/* Program that deliberately crashes for signal handling tests */
#include <stdio.h>
#include <stdlib.h>

void cause_crash() {
    int *p = NULL;
    *p = 42;  /* SIGSEGV */
}

int main() {
    printf("About to crash...\n");
    cause_crash();
    printf("Should not reach here\n");
    return 0;
}
