/*
 * libdemangle.h — C++ name demangling for gdb-bridge
 *
 * Uses __cxa_demangle (Itanium ABI) from the system C++ runtime.
 * Falls back to returning the original mangled name on failure.
 *
 * Author: @c-master for gdb-bridge
 */
#ifndef LIBDEMANGLE_H
#define LIBDEMANGLE_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Demangle a C++ mangled name (Itanium ABI, _Z prefix).
 * Returns a malloc'd string (caller must free), or NULL on failure.
 *
 * Example: "_Z3fooi" → "foo(int)"
 */
char *demangle(const char *mangled_name);

/*
 * Demangle with size hint. Same as demangle() but returns length via *out_len.
 */
char *demangle_len(const char *mangled_name, size_t *out_len);

#ifdef __cplusplus
}
#endif

#endif /* LIBDEMANGLE_H */
