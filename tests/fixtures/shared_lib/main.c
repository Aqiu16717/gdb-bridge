#include <stdio.h>

/* Declared in libfoo.dylib / libfoo.so */
int libfoo_add(int a, int b);
const char* libfoo_version(void);

int main() {
    int x = 100;
    int y = 200;
    int result = libfoo_add(x, y);
    printf("libfoo_add(%d, %d) = %d\n", x, y, result);
    printf("version: %s\n", libfoo_version());
    return 0;
}
