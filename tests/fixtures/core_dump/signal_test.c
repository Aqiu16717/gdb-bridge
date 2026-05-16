/* Signal handling test fixture.
 *
 * Tests: SIGABRT handler, floating point exception, user signal.
 *
 * Build: gcc -g -O0 -o signal_test signal_test.c
 * Run: ./signal_test <type>
 *   abort  -> SIGABRT
 *   fpe    -> SIGFPE (divide by zero)
 *   alarm  -> SIGALRM
 */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>

void handler(int sig) {
    printf("Caught signal %d\n", sig);
}

int main(int argc, char *argv[]) {
    const char *type = argc > 1 ? argv[1] : "none";

    signal(SIGALRM, handler);

    printf("Signal test: %s\n", type);

    if (strcmp(type, "abort") == 0) {
        printf("Triggering abort...\n");
        abort();
    } else if (strcmp(type, "fpe") == 0) {
        printf("Triggering divide by zero...\n");
        volatile int a = 1, b = 0;
        volatile int c = a / b;  // SIGFPE
        printf("%d\n", c);
    } else if (strcmp(type, "alarm") == 0) {
        printf("Triggering alarm...\n");
        alarm(1);
        pause();  // Wait for SIGALRM
        printf("Alarm received\n");
    } else {
        printf("Usage: %s [abort|fpe|alarm]\n", argv[0]);
    }

    return 0;
}
