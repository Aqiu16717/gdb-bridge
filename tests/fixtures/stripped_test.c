/* Compiled without debug symbols for edge case tests */
#include <stdio.h>

int secret_function(int x) {
    return x * x + 1;
}

int main() {
    int result = secret_function(5);
    printf("Result: %d\n", result);
    return 0;
}
