/*
 * libdemangle.c — C++ name demangling via __cxa_demangle
 *
 * Links against the system C++ ABI library (-lc++abi on macOS, -lstdc++ on Linux).
 * Falls back to returning the mangled name if demangling fails.
 *
 * Author: @c-master for gdb-bridge
 */
#include "libdemangle.h"
#include <stdlib.h>
#include <string.h>

/*
 * __cxa_demangle from the Itanium C++ ABI.
 * Signature:
 *   char *__cxa_demangle(const char *mangled_name,
 *                        char *output_buffer,
 *                        size_t *length,
 *                        int *status);
 *
 * Returns: demangled name (malloc'd if output_buffer is NULL), or NULL on error.
 * Status: 0=success, -1=memory, -2=invalid name, -3=invalid args
 */
extern char *__cxa_demangle(const char *mangled_name,
                            char *output_buffer,
                            size_t *length,
                            int *status);

char *demangle(const char *mangled_name) {
    return demangle_len(mangled_name, NULL);
}

char *demangle_len(const char *mangled_name, size_t *out_len) {
    if (!mangled_name) return NULL;

    /* Quick check: Itanium-mangled names start with _Z */
    if (mangled_name[0] != '_' || mangled_name[1] != 'Z') {
        /* Not a mangled C++ name — return a copy as-is */
        char *copy = strdup(mangled_name);
        if (out_len) *out_len = copy ? strlen(copy) : 0;
        return copy;
    }

    int status = 0;
    size_t len = 0;
    char *result = __cxa_demangle(mangled_name, NULL, &len, &status);

    if (status != 0 || !result) {
        /* Demangling failed — return the original name */
        char *copy = strdup(mangled_name);
        if (out_len) *out_len = copy ? strlen(copy) : 0;
        return copy;
    }

    if (out_len) *out_len = len;
    return result;
}
