/* Varied variable types for variable inspection tests */
#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
};

int main() {
    int simple = 42;
    char *str = "hello world";
    int arr[] = {1, 2, 3, 4, 5};
    struct Point p = {.x = 10, .y = 20};
    float pi = 3.14159f;

    printf("%d %s %d %d %d %f\n", simple, str, arr[0], p.x, p.y, pi);
    return 0;
}
