
static unsigned long long One = 1ull;

int exit_status;
#include "my_assert.h"

int main() {
  my_assert((One * 0x0000000000000001ull) == 0x0000000000000001ull);
  my_assert((One * 0x0000000000000003ull) == 0x0000000000000003ull);
  my_assert((One * 0x0000000000000007ull) == 0x0000000000000007ull);
  my_assert((One * 0x000000000000000full) == 0x000000000000000full);

  my_assert((One * 0x000000000000001full) == 0x000000000000001full);
  my_assert((One * 0x000000000000003full) == 0x000000000000003full);
  my_assert((One * 0x000000000000007full) == 0x000000000000007full);
  my_assert((One * 0x00000000000000ffull) == 0x00000000000000ffull);

  my_assert((One * 0x00000000000001ffull) == 0x00000000000001ffull);
  my_assert((One * 0x00000000000003ffull) == 0x00000000000003ffull);
  my_assert((One * 0x00000000000007ffull) == 0x00000000000007ffull);
  my_assert((One * 0x0000000000000fffull) == 0x0000000000000fffull);

  my_assert((One * 0x0000000000001fffull) == 0x0000000000001fffull);
  my_assert((One * 0x0000000000003fffull) == 0x0000000000003fffull);
  my_assert((One * 0x0000000000007fffull) == 0x0000000000007fffull);
  my_assert((One * 0x000000000000ffffull) == 0x000000000000ffffull);

  my_assert((One * 0x000000000001ffffull) == 0x000000000001ffffull);
  my_assert((One * 0x000000000003ffffull) == 0x000000000003ffffull);
  my_assert((One * 0x000000000007ffffull) == 0x000000000007ffffull);
  my_assert((One * 0x00000000000fffffull) == 0x00000000000fffffull);

  my_assert((One * 0x00000000001fffffull) == 0x00000000001fffffull);
  my_assert((One * 0x00000000003fffffull) == 0x00000000003fffffull);
  my_assert((One * 0x00000000007fffffull) == 0x00000000007fffffull);
  my_assert((One * 0x0000000000ffffffull) == 0x0000000000ffffffull);

  my_assert((One * 0x0000000001ffffffull) == 0x0000000001ffffffull);
  my_assert((One * 0x0000000003ffffffull) == 0x0000000003ffffffull);
  my_assert((One * 0x0000000007ffffffull) == 0x0000000007ffffffull);
  my_assert((One * 0x000000000fffffffull) == 0x000000000fffffffull);

  my_assert((One * 0x000000001fffffffull) == 0x000000001fffffffull);
  my_assert((One * 0x000000003fffffffull) == 0x000000003fffffffull);
  my_assert((One * 0x000000007fffffffull) == 0x000000007fffffffull);
  my_assert((One * 0x00000000ffffffffull) == 0x00000000ffffffffull);

  my_assert((One * 0x00000001ffffffffull) == 0x00000001ffffffffull);
  my_assert((One * 0x00000003ffffffffull) == 0x00000003ffffffffull);
  my_assert((One * 0x00000007ffffffffull) == 0x00000007ffffffffull);
  my_assert((One * 0x0000000fffffffffull) == 0x0000000fffffffffull);

  my_assert((One * 0x0000001fffffffffull) == 0x0000001fffffffffull);
  my_assert((One * 0x0000003fffffffffull) == 0x0000003fffffffffull);
  my_assert((One * 0x0000007fffffffffull) == 0x0000007fffffffffull);
  my_assert((One * 0x000000ffffffffffull) == 0x000000ffffffffffull);

  my_assert((One * 0x000001ffffffffffull) == 0x000001ffffffffffull);
  my_assert((One * 0x000003ffffffffffull) == 0x000003ffffffffffull);
  my_assert((One * 0x000007ffffffffffull) == 0x000007ffffffffffull);
  my_assert((One * 0x00000fffffffffffull) == 0x00000fffffffffffull);

  my_assert((One * 0x00001fffffffffffull) == 0x00001fffffffffffull);
  my_assert((One * 0x00003fffffffffffull) == 0x00003fffffffffffull);
  my_assert((One * 0x00007fffffffffffull) == 0x00007fffffffffffull);
  my_assert((One * 0x0000ffffffffffffull) == 0x0000ffffffffffffull);

  my_assert((One * 0x0001ffffffffffffull) == 0x0001ffffffffffffull);
  my_assert((One * 0x0003ffffffffffffull) == 0x0003ffffffffffffull);
  my_assert((One * 0x0007ffffffffffffull) == 0x0007ffffffffffffull);
  my_assert((One * 0x000fffffffffffffull) == 0x000fffffffffffffull);

  my_assert((One * 0x001fffffffffffffull) == 0x001fffffffffffffull);
  my_assert((One * 0x003fffffffffffffull) == 0x003fffffffffffffull);
  my_assert((One * 0x007fffffffffffffull) == 0x007fffffffffffffull);
  my_assert((One * 0x00ffffffffffffffull) == 0x00ffffffffffffffull);

  my_assert((One * 0x01ffffffffffffffull) == 0x01ffffffffffffffull);
  my_assert((One * 0x03ffffffffffffffull) == 0x03ffffffffffffffull);
  my_assert((One * 0x07ffffffffffffffull) == 0x07ffffffffffffffull);
  my_assert((One * 0x0fffffffffffffffull) == 0x0fffffffffffffffull);

  my_assert((One * 0x1fffffffffffffffull) == 0x1fffffffffffffffull);
  my_assert((One * 0x3fffffffffffffffull) == 0x3fffffffffffffffull);
  my_assert((One * 0x7fffffffffffffffull) == 0x7fffffffffffffffull);
  my_assert((One * 0xffffffffffffffffull) == 0xffffffffffffffffull);

  return exit_status;
}
