/* Long-running loop for timeout/continue tests */
#include <stdio.h>

int main() {
    int counter = 0;
    for (int i = 0; i < 100; i++) {
        counter += i;
    }
    printf("Final: %d\n", counter);
    return 0;
}
