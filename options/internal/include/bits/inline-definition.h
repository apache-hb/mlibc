#ifndef MLIBC_INLINE_DEFINITION_H
#define MLIBC_INLINE_DEFINITION_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __MLIBC_EMIT_INLINE_DEFINITIONS
#define __MLIBC_INLINE_DEFINITION
#else
#ifdef _MSC_VER
#define __MLIBC_INLINE_DEFINITION inline
#else
#define __MLIBC_INLINE_DEFINITION __attribute__((__gnu_inline__)) extern __inline__
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif // MLIBC_INLINE_DEFINITION_H
