#ifndef __MY_ASSERT_H__
#define __MY_ASSERT_H__

#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
#define MY_LOCAL inline
#else
#define MY_LOCAL static inline
#endif

extern int exit_status;

MY_LOCAL void _my_assert(int passed, char *file, unsigned int line,
                         char *condition) {
  if (passed) {
#if defined(VERBOSE)
    printf("( -- Assertion passed %s/%u: %s -- )\n", file, line, condition);
#endif
  } else {
    printf("Assertion failed: %s/%u: %s\n", file, line, condition);
    exit_status = 1;
  }
}

#define my_assert(x) _my_assert((x), __FILE__, __LINE__, #x)

#ifdef __cplusplus
}
#endif
#endif
