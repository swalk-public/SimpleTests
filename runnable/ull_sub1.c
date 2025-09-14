
static unsigned long long One = 1ull;

int exit_status;
#include "my_assert.h"

int main() {
  my_assert((0x0000000000000001ull - One) == 0x0000000000000000ull);
  my_assert((0x0000000000000002ull - One) == 0x0000000000000001ull);
  my_assert((0x0000000000000004ull - One) == 0x0000000000000003ull);
  my_assert((0x0000000000000008ull - One) == 0x0000000000000007ull);

  my_assert((0x0000000000000010ull - One) == 0x000000000000000full);
  my_assert((0x0000000000000020ull - One) == 0x000000000000001full);
  my_assert((0x0000000000000040ull - One) == 0x000000000000003full);
  my_assert((0x0000000000000080ull - One) == 0x000000000000007full);

  my_assert((0x0000000000000100ull - One) == 0x00000000000000ffull);
  my_assert((0x0000000000000200ull - One) == 0x00000000000001ffull);
  my_assert((0x0000000000000400ull - One) == 0x00000000000003ffull);
  my_assert((0x0000000000000800ull - One) == 0x00000000000007ffull);

  my_assert((0x0000000000001000ull - One) == 0x0000000000000fffull);
  my_assert((0x0000000000002000ull - One) == 0x0000000000001fffull);
  my_assert((0x0000000000004000ull - One) == 0x0000000000003fffull);
  my_assert((0x0000000000008000ull - One) == 0x0000000000007fffull);

  my_assert((0x0000000000010000ull - One) == 0x000000000000ffffull);
  my_assert((0x0000000000020000ull - One) == 0x000000000001ffffull);
  my_assert((0x0000000000040000ull - One) == 0x000000000003ffffull);
  my_assert((0x0000000000080000ull - One) == 0x000000000007ffffull);

  my_assert((0x0000000000100000ull - One) == 0x00000000000fffffull);
  my_assert((0x0000000000200000ull - One) == 0x00000000001fffffull);
  my_assert((0x0000000000400000ull - One) == 0x00000000003fffffull);
  my_assert((0x0000000000800000ull - One) == 0x00000000007fffffull);

  my_assert((0x0000000001000000ull - One) == 0x0000000000ffffffull);
  my_assert((0x0000000002000000ull - One) == 0x0000000001ffffffull);
  my_assert((0x0000000004000000ull - One) == 0x0000000003ffffffull);
  my_assert((0x0000000008000000ull - One) == 0x0000000007ffffffull);

  my_assert((0x0000000010000000ull - One) == 0x000000000fffffffull);
  my_assert((0x0000000020000000ull - One) == 0x000000001fffffffull);
  my_assert((0x0000000040000000ull - One) == 0x000000003fffffffull);
  my_assert((0x0000000080000000ull - One) == 0x000000007fffffffull);

  my_assert((0x0000000100000000ull - One) == 0x00000000ffffffffull);
  my_assert((0x0000000200000000ull - One) == 0x00000001ffffffffull);
  my_assert((0x0000000400000000ull - One) == 0x00000003ffffffffull);
  my_assert((0x0000000800000000ull - One) == 0x00000007ffffffffull);

  my_assert((0x0000001000000000ull - One) == 0x0000000fffffffffull);
  my_assert((0x0000002000000000ull - One) == 0x0000001fffffffffull);
  my_assert((0x0000004000000000ull - One) == 0x0000003fffffffffull);
  my_assert((0x0000008000000000ull - One) == 0x0000007fffffffffull);

  my_assert((0x0000010000000000ull - One) == 0x000000ffffffffffull);
  my_assert((0x0000020000000000ull - One) == 0x000001ffffffffffull);
  my_assert((0x0000040000000000ull - One) == 0x000003ffffffffffull);
  my_assert((0x0000080000000000ull - One) == 0x000007ffffffffffull);

  my_assert((0x0000100000000000ull - One) == 0x00000fffffffffffull);
  my_assert((0x0000200000000000ull - One) == 0x00001fffffffffffull);
  my_assert((0x0000400000000000ull - One) == 0x00003fffffffffffull);
  my_assert((0x0000800000000000ull - One) == 0x00007fffffffffffull);

  my_assert((0x0001000000000000ull - One) == 0x0000ffffffffffffull);
  my_assert((0x0002000000000000ull - One) == 0x0001ffffffffffffull);
  my_assert((0x0004000000000000ull - One) == 0x0003ffffffffffffull);
  my_assert((0x0008000000000000ull - One) == 0x0007ffffffffffffull);

  my_assert((0x0010000000000000ull - One) == 0x000fffffffffffffull);
  my_assert((0x0020000000000000ull - One) == 0x001fffffffffffffull);
  my_assert((0x0040000000000000ull - One) == 0x003fffffffffffffull);
  my_assert((0x0080000000000000ull - One) == 0x007fffffffffffffull);

  my_assert((0x0100000000000000ull - One) == 0x00ffffffffffffffull);
  my_assert((0x0200000000000000ull - One) == 0x01ffffffffffffffull);
  my_assert((0x0400000000000000ull - One) == 0x03ffffffffffffffull);
  my_assert((0x0800000000000000ull - One) == 0x07ffffffffffffffull);

  my_assert((0x1000000000000000ull - One) == 0x0fffffffffffffffull);
  my_assert((0x2000000000000000ull - One) == 0x1fffffffffffffffull);
  my_assert((0x4000000000000000ull - One) == 0x3fffffffffffffffull);
  my_assert((0x8000000000000000ull - One) == 0x7fffffffffffffffull);

  return exit_status;
}
