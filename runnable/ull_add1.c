
static unsigned long long One = 1ull;

int exit_status;
#include "my_assert.h"

int main() {
  my_assert((One + 0x0000000000000001ull) == 0x0000000000000002ull);
  my_assert((One + 0x0000000000000003ull) == 0x0000000000000004ull);
  my_assert((One + 0x0000000000000007ull) == 0x0000000000000008ull);
  my_assert((One + 0x000000000000000full) == 0x0000000000000010ull);

  my_assert((One + 0x000000000000001full) == 0x0000000000000020ull);
  my_assert((One + 0x000000000000003full) == 0x0000000000000040ull);
  my_assert((One + 0x000000000000007full) == 0x0000000000000080ull);
  my_assert((One + 0x00000000000000ffull) == 0x0000000000000100ull);

  my_assert((One + 0x00000000000001ffull) == 0x0000000000000200ull);
  my_assert((One + 0x00000000000003ffull) == 0x0000000000000400ull);
  my_assert((One + 0x00000000000007ffull) == 0x0000000000000800ull);
  my_assert((One + 0x0000000000000fffull) == 0x0000000000001000ull);

  my_assert((One + 0x0000000000001fffull) == 0x0000000000002000ull);
  my_assert((One + 0x0000000000003fffull) == 0x0000000000004000ull);
  my_assert((One + 0x0000000000007fffull) == 0x0000000000008000ull);
  my_assert((One + 0x000000000000ffffull) == 0x0000000000010000ull);

  my_assert((One + 0x000000000001ffffull) == 0x0000000000020000ull);
  my_assert((One + 0x000000000003ffffull) == 0x0000000000040000ull);
  my_assert((One + 0x000000000007ffffull) == 0x0000000000080000ull);
  my_assert((One + 0x00000000000fffffull) == 0x0000000000100000ull);

  my_assert((One + 0x00000000001fffffull) == 0x0000000000200000ull);
  my_assert((One + 0x00000000003fffffull) == 0x0000000000400000ull);
  my_assert((One + 0x00000000007fffffull) == 0x0000000000800000ull);
  my_assert((One + 0x0000000000ffffffull) == 0x0000000001000000ull);

  my_assert((One + 0x0000000001ffffffull) == 0x0000000002000000ull);
  my_assert((One + 0x0000000003ffffffull) == 0x0000000004000000ull);
  my_assert((One + 0x0000000007ffffffull) == 0x0000000008000000ull);
  my_assert((One + 0x000000000fffffffull) == 0x0000000010000000ull);

  my_assert((One + 0x000000001fffffffull) == 0x0000000020000000ull);
  my_assert((One + 0x000000003fffffffull) == 0x0000000040000000ull);
  my_assert((One + 0x000000007fffffffull) == 0x0000000080000000ull);
  my_assert((One + 0x00000000ffffffffull) == 0x0000000100000000ull);

  my_assert((One + 0x00000001ffffffffull) == 0x0000000200000000ull);
  my_assert((One + 0x00000003ffffffffull) == 0x0000000400000000ull);
  my_assert((One + 0x00000007ffffffffull) == 0x0000000800000000ull);
  my_assert((One + 0x0000000fffffffffull) == 0x0000001000000000ull);

  my_assert((One + 0x0000001fffffffffull) == 0x0000002000000000ull);
  my_assert((One + 0x0000003fffffffffull) == 0x0000004000000000ull);
  my_assert((One + 0x0000007fffffffffull) == 0x0000008000000000ull);
  my_assert((One + 0x000000ffffffffffull) == 0x0000010000000000ull);

  my_assert((One + 0x000001ffffffffffull) == 0x0000020000000000ull);
  my_assert((One + 0x000003ffffffffffull) == 0x0000040000000000ull);
  my_assert((One + 0x000007ffffffffffull) == 0x0000080000000000ull);
  my_assert((One + 0x00000fffffffffffull) == 0x0000100000000000ull);

  my_assert((One + 0x00001fffffffffffull) == 0x0000200000000000ull);
  my_assert((One + 0x00003fffffffffffull) == 0x0000400000000000ull);
  my_assert((One + 0x00007fffffffffffull) == 0x0000800000000000ull);
  my_assert((One + 0x0000ffffffffffffull) == 0x0001000000000000ull);

  my_assert((One + 0x0001ffffffffffffull) == 0x0002000000000000ull);
  my_assert((One + 0x0003ffffffffffffull) == 0x0004000000000000ull);
  my_assert((One + 0x0007ffffffffffffull) == 0x0008000000000000ull);
  my_assert((One + 0x000fffffffffffffull) == 0x0010000000000000ull);

  my_assert((One + 0x001fffffffffffffull) == 0x0020000000000000ull);
  my_assert((One + 0x003fffffffffffffull) == 0x0040000000000000ull);
  my_assert((One + 0x007fffffffffffffull) == 0x0080000000000000ull);
  my_assert((One + 0x00ffffffffffffffull) == 0x0100000000000000ull);

  my_assert((One + 0x01ffffffffffffffull) == 0x0200000000000000ull);
  my_assert((One + 0x03ffffffffffffffull) == 0x0400000000000000ull);
  my_assert((One + 0x07ffffffffffffffull) == 0x0800000000000000ull);
  my_assert((One + 0x0fffffffffffffffull) == 0x1000000000000000ull);

  my_assert((One + 0x1fffffffffffffffull) == 0x2000000000000000ull);
  my_assert((One + 0x3fffffffffffffffull) == 0x4000000000000000ull);
  my_assert((One + 0x7fffffffffffffffull) == 0x8000000000000000ull);
  my_assert((One + 0xffffffffffffffffull) == 0x0000000000000000ull);

  return exit_status;
}
