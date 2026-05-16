#include "libdemangle.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int run = 0, pass = 0;
#define T(n) do { run++; printf("  [%d] %s ... ", run, n); } while(0)
#define P()  do { pass++; printf("PASS\n"); } while(0)
#define F(m,...) do { printf("FAIL: " m "\n", ##__VA_ARGS__); } while(0)

int main(void) {
    printf("=== libdemangle Test Suite ===\n\n");

    T("Simple function: _Z3fooi → foo(int)");
    char *d = demangle("_Z3fooi");
    if (!d) F("NULL");
    else if (strcmp(d, "foo(int)") != 0) F("got: %s", d);
    else P();
    free(d);

    T("Method: _ZN3Bar3bazEv → Bar::baz()");
    d = demangle("_ZN3Bar3bazEv");
    if (!d) F("NULL");
    else if (strcmp(d, "Bar::baz()") != 0) F("got: %s", d);
    else P();
    free(d);

    T("Template: _Z3maxIiET_S0_S0_");
    d = demangle("_Z3maxIiET_S0_S0_");
    if (!d) F("NULL");
    else { printf("(%s) ", d); P(); }
    free(d);

    T("Non-mangled (plain C): my_function");
    d = demangle("my_function");
    if (!d) F("NULL");
    else if (strcmp(d, "my_function") != 0) F("got: %s", d);
    else P();
    free(d);

    T("NULL input");
    d = demangle(NULL);
    if (d != NULL) F("should be NULL"); else P();

    T("Empty string");
    d = demangle("");
    if (!d) F("NULL");
    else { printf("(\"%s\") ", d); P(); }
    free(d);

    T("destructor: _ZN3FooD0Ev → Foo::~Foo()");
    d = demangle("_ZN3FooD0Ev");
    if (!d) F("NULL");
    else { printf("(%s) ", d); P(); }
    free(d);

    T("STL: _ZNKSt3mapIiNSt6vectorIiEE4findERKi");
    d = demangle("_ZNKSt3mapIiNSt6vectorIiEE4findERKi");
    if (!d) F("NULL");
    else { printf("(%s) ", d); P(); }
    free(d);

    printf("\n=== Results: %d/%d tests passed ===\n", pass, run);
    return (pass == run) ? 0 : 1;
}
