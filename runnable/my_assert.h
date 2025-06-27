#ifndef __MY_ASSERT_H__
#define __MY_ASSERT_H__

#ifdef __cplusplus
#define MY_LOCAL inline
extern "C" {
#else
#define MY_LOCAL static
#endif

extern int exit_status;

int printf(const char *, ...);
int strcmp(const char *, const char *);

MY_LOCAL void _my_assert(int passed, char *file, unsigned int line,
                         char *condition) {
  if (passed) {
#ifdef VERBOSE
    printf("( -- assertion passed %s:%d : %s -- )\n", file, line, condition);
#endif
  } else {
    printf("Assertion failed %s:%d : %s\n", file, line, condition);
    exit_status = 1;
  }
}

#define my_assert(x) _my_assert((x), __FILE__, __LINE__, #x)

#ifdef __cplusplus
}
#endif
#endif
