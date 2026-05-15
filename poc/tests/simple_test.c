/* Simple test program for GDB-Bridge PoC.
 *
 * This program is used to validate the GDB debugging interface.
 * It has simple functions and local variables for easy inspection.
 */

#include <stdio.h>

/* Add two integers and return the result */
int add(int a, int b) {
    int result = a + b;
    return result;
}

/* Multiply two integers */
int multiply(int a, int b) {
    int result = a * b;
    return result;
}

int main(void) {
    int x = 10;
    int y = 20;
    int sum = add(x, y);
    int product = multiply(x, y);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
