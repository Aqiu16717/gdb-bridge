/* Normal program for basic debugging flow tests */
#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result;
}

int multiply(int a, int b) {
    int result = a * b;
    return result;
}

int main(int argc, char *argv[]) {
    int x = 10;
    int y = 20;
    int sum = add(x, y);
    int product = multiply(x, y);
    printf("Sum: %d, Product: %d\n", sum, product);
    return 0;
}
