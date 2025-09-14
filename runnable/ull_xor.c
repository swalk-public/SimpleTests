
static unsigned long long testBits = 0xa5a5a5a5a5a5a5a5ull;

int exit_status;
#include "my_assert.h"

int main() {
  /* walking 1's */
  my_assert((testBits ^ 0x8000000000000000ull) == 0x25a5a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x4000000000000000ull) == 0xe5a5a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x2000000000000000ull) == 0x85a5a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x1000000000000000ull) == 0xb5a5a5a5a5a5a5a5ull);

  my_assert((testBits ^ 0x0800000000000000ull) == 0xada5a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0400000000000000ull) == 0xa1a5a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0200000000000000ull) == 0xa7a5a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0100000000000000ull) == 0xa4a5a5a5a5a5a5a5ull);

  my_assert((testBits ^ 0x0080000000000000ull) == 0xa525a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0040000000000000ull) == 0xa5e5a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0020000000000000ull) == 0xa585a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0010000000000000ull) == 0xa5b5a5a5a5a5a5a5ull);

  my_assert((testBits ^ 0x0008000000000000ull) == 0xa5ada5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0004000000000000ull) == 0xa5a1a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0002000000000000ull) == 0xa5a7a5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0001000000000000ull) == 0xa5a4a5a5a5a5a5a5ull);

  my_assert((testBits ^ 0x0000800000000000ull) == 0xa5a525a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0000400000000000ull) == 0xa5a5e5a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0000200000000000ull) == 0xa5a585a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0000100000000000ull) == 0xa5a5b5a5a5a5a5a5ull);

  my_assert((testBits ^ 0x0000080000000000ull) == 0xa5a5ada5a5a5a5a5ull);
  my_assert((testBits ^ 0x0000040000000000ull) == 0xa5a5a1a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0000020000000000ull) == 0xa5a5a7a5a5a5a5a5ull);
  my_assert((testBits ^ 0x0000010000000000ull) == 0xa5a5a4a5a5a5a5a5ull);

  my_assert((testBits ^ 0x0000008000000000ull) == 0xa5a5a525a5a5a5a5ull);
  my_assert((testBits ^ 0x0000004000000000ull) == 0xa5a5a5e5a5a5a5a5ull);
  my_assert((testBits ^ 0x0000002000000000ull) == 0xa5a5a585a5a5a5a5ull);
  my_assert((testBits ^ 0x0000001000000000ull) == 0xa5a5a5b5a5a5a5a5ull);

  my_assert((testBits ^ 0x0000000800000000ull) == 0xa5a5a5ada5a5a5a5ull);
  my_assert((testBits ^ 0x0000000400000000ull) == 0xa5a5a5a1a5a5a5a5ull);
  my_assert((testBits ^ 0x0000000200000000ull) == 0xa5a5a5a7a5a5a5a5ull);
  my_assert((testBits ^ 0x0000000100000000ull) == 0xa5a5a5a4a5a5a5a5ull);

  my_assert((testBits ^ 0x0000000080000000ull) == 0xa5a5a5a525a5a5a5ull);
  my_assert((testBits ^ 0x0000000040000000ull) == 0xa5a5a5a5e5a5a5a5ull);
  my_assert((testBits ^ 0x0000000020000000ull) == 0xa5a5a5a585a5a5a5ull);
  my_assert((testBits ^ 0x0000000010000000ull) == 0xa5a5a5a5b5a5a5a5ull);

  my_assert((testBits ^ 0x0000000008000000ull) == 0xa5a5a5a5ada5a5a5ull);
  my_assert((testBits ^ 0x0000000004000000ull) == 0xa5a5a5a5a1a5a5a5ull);
  my_assert((testBits ^ 0x0000000002000000ull) == 0xa5a5a5a5a7a5a5a5ull);
  my_assert((testBits ^ 0x0000000001000000ull) == 0xa5a5a5a5a4a5a5a5ull);

  my_assert((testBits ^ 0x0000000000800000ull) == 0xa5a5a5a5a525a5a5ull);
  my_assert((testBits ^ 0x0000000000400000ull) == 0xa5a5a5a5a5e5a5a5ull);
  my_assert((testBits ^ 0x0000000000200000ull) == 0xa5a5a5a5a585a5a5ull);
  my_assert((testBits ^ 0x0000000000100000ull) == 0xa5a5a5a5a5b5a5a5ull);

  my_assert((testBits ^ 0x0000000000080000ull) == 0xa5a5a5a5a5ada5a5ull);
  my_assert((testBits ^ 0x0000000000040000ull) == 0xa5a5a5a5a5a1a5a5ull);
  my_assert((testBits ^ 0x0000000000020000ull) == 0xa5a5a5a5a5a7a5a5ull);
  my_assert((testBits ^ 0x0000000000010000ull) == 0xa5a5a5a5a5a4a5a5ull);

  my_assert((testBits ^ 0x0000000000008000ull) == 0xa5a5a5a5a5a525a5ull);
  my_assert((testBits ^ 0x0000000000004000ull) == 0xa5a5a5a5a5a5e5a5ull);
  my_assert((testBits ^ 0x0000000000002000ull) == 0xa5a5a5a5a5a585a5ull);
  my_assert((testBits ^ 0x0000000000001000ull) == 0xa5a5a5a5a5a5b5a5ull);

  my_assert((testBits ^ 0x0000000000000800ull) == 0xa5a5a5a5a5a5ada5ull);
  my_assert((testBits ^ 0x0000000000000400ull) == 0xa5a5a5a5a5a5a1a5ull);
  my_assert((testBits ^ 0x0000000000000200ull) == 0xa5a5a5a5a5a5a7a5ull);
  my_assert((testBits ^ 0x0000000000000100ull) == 0xa5a5a5a5a5a5a4a5ull);

  my_assert((testBits ^ 0x0000000000000080ull) == 0xa5a5a5a5a5a5a525ull);
  my_assert((testBits ^ 0x0000000000000040ull) == 0xa5a5a5a5a5a5a5e5ull);
  my_assert((testBits ^ 0x0000000000000020ull) == 0xa5a5a5a5a5a5a585ull);
  my_assert((testBits ^ 0x0000000000000010ull) == 0xa5a5a5a5a5a5a5b5ull);

  my_assert((testBits ^ 0x0000000000000008ull) == 0xa5a5a5a5a5a5a5adull);
  my_assert((testBits ^ 0x0000000000000004ull) == 0xa5a5a5a5a5a5a5a1ull);
  my_assert((testBits ^ 0x0000000000000002ull) == 0xa5a5a5a5a5a5a5a7ull);
  my_assert((testBits ^ 0x0000000000000001ull) == 0xa5a5a5a5a5a5a5a4ull);

  /* walking 0's */
  my_assert((testBits ^ 0x7fffffffffffffffull) == 0xda5a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xbfffffffffffffffull) == 0x1a5a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xdfffffffffffffffull) == 0x7a5a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xefffffffffffffffull) == 0x4a5a5a5a5a5a5a5aull);

  my_assert((testBits ^ 0xf7ffffffffffffffull) == 0x525a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xfbffffffffffffffull) == 0x5e5a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xfdffffffffffffffull) == 0x585a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xfeffffffffffffffull) == 0x5b5a5a5a5a5a5a5aull);

  my_assert((testBits ^ 0xff7fffffffffffffull) == 0x5ada5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xffbfffffffffffffull) == 0x5a1a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xffdfffffffffffffull) == 0x5a7a5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xffefffffffffffffull) == 0x5a4a5a5a5a5a5a5aull);

  my_assert((testBits ^ 0xfff7ffffffffffffull) == 0x5a525a5a5a5a5a5aull);
  my_assert((testBits ^ 0xfffbffffffffffffull) == 0x5a5e5a5a5a5a5a5aull);
  my_assert((testBits ^ 0xfffdffffffffffffull) == 0x5a585a5a5a5a5a5aull);
  my_assert((testBits ^ 0xfffeffffffffffffull) == 0x5a5b5a5a5a5a5a5aull);

  my_assert((testBits ^ 0xffff7fffffffffffull) == 0x5a5ada5a5a5a5a5aull);
  my_assert((testBits ^ 0xffffbfffffffffffull) == 0x5a5a1a5a5a5a5a5aull);
  my_assert((testBits ^ 0xffffdfffffffffffull) == 0x5a5a7a5a5a5a5a5aull);
  my_assert((testBits ^ 0xffffefffffffffffull) == 0x5a5a4a5a5a5a5a5aull);

  my_assert((testBits ^ 0xfffff7ffffffffffull) == 0x5a5a525a5a5a5a5aull);
  my_assert((testBits ^ 0xfffffbffffffffffull) == 0x5a5a5e5a5a5a5a5aull);
  my_assert((testBits ^ 0xfffffdffffffffffull) == 0x5a5a585a5a5a5a5aull);
  my_assert((testBits ^ 0xfffffeffffffffffull) == 0x5a5a5b5a5a5a5a5aull);

  my_assert((testBits ^ 0xffffff7fffffffffull) == 0x5a5a5ada5a5a5a5aull);
  my_assert((testBits ^ 0xffffffbfffffffffull) == 0x5a5a5a1a5a5a5a5aull);
  my_assert((testBits ^ 0xffffffdfffffffffull) == 0x5a5a5a7a5a5a5a5aull);
  my_assert((testBits ^ 0xffffffefffffffffull) == 0x5a5a5a4a5a5a5a5aull);

  my_assert((testBits ^ 0xfffffff7ffffffffull) == 0x5a5a5a525a5a5a5aull);
  my_assert((testBits ^ 0xfffffffbffffffffull) == 0x5a5a5a5e5a5a5a5aull);
  my_assert((testBits ^ 0xfffffffdffffffffull) == 0x5a5a5a585a5a5a5aull);
  my_assert((testBits ^ 0xfffffffeffffffffull) == 0x5a5a5a5b5a5a5a5aull);

  my_assert((testBits ^ 0xffffffff7fffffffull) == 0x5a5a5a5ada5a5a5aull);
  my_assert((testBits ^ 0xffffffffbfffffffull) == 0x5a5a5a5a1a5a5a5aull);
  my_assert((testBits ^ 0xffffffffdfffffffull) == 0x5a5a5a5a7a5a5a5aull);
  my_assert((testBits ^ 0xffffffffefffffffull) == 0x5a5a5a5a4a5a5a5aull);

  my_assert((testBits ^ 0xfffffffff7ffffffull) == 0x5a5a5a5a525a5a5aull);
  my_assert((testBits ^ 0xfffffffffbffffffull) == 0x5a5a5a5a5e5a5a5aull);
  my_assert((testBits ^ 0xfffffffffdffffffull) == 0x5a5a5a5a585a5a5aull);
  my_assert((testBits ^ 0xfffffffffeffffffull) == 0x5a5a5a5a5b5a5a5aull);

  my_assert((testBits ^ 0xffffffffff7fffffull) == 0x5a5a5a5a5ada5a5aull);
  my_assert((testBits ^ 0xffffffffffbfffffull) == 0x5a5a5a5a5a1a5a5aull);
  my_assert((testBits ^ 0xffffffffffdfffffull) == 0x5a5a5a5a5a7a5a5aull);
  my_assert((testBits ^ 0xffffffffffefffffull) == 0x5a5a5a5a5a4a5a5aull);

  my_assert((testBits ^ 0xfffffffffff7ffffull) == 0x5a5a5a5a5a525a5aull);
  my_assert((testBits ^ 0xfffffffffffbffffull) == 0x5a5a5a5a5a5e5a5aull);
  my_assert((testBits ^ 0xfffffffffffdffffull) == 0x5a5a5a5a5a585a5aull);
  my_assert((testBits ^ 0xfffffffffffeffffull) == 0x5a5a5a5a5a5b5a5aull);

  my_assert((testBits ^ 0xffffffffffff7fffull) == 0x5a5a5a5a5a5ada5aull);
  my_assert((testBits ^ 0xffffffffffffbfffull) == 0x5a5a5a5a5a5a1a5aull);
  my_assert((testBits ^ 0xffffffffffffdfffull) == 0x5a5a5a5a5a5a7a5aull);
  my_assert((testBits ^ 0xffffffffffffefffull) == 0x5a5a5a5a5a5a4a5aull);

  my_assert((testBits ^ 0xfffffffffffff7ffull) == 0x5a5a5a5a5a5a525aull);
  my_assert((testBits ^ 0xfffffffffffffbffull) == 0x5a5a5a5a5a5a5e5aull);
  my_assert((testBits ^ 0xfffffffffffffdffull) == 0x5a5a5a5a5a5a585aull);
  my_assert((testBits ^ 0xfffffffffffffeffull) == 0x5a5a5a5a5a5a5b5aull);

  my_assert((testBits ^ 0xffffffffffffff7full) == 0x5a5a5a5a5a5a5adaull);
  my_assert((testBits ^ 0xffffffffffffffbfull) == 0x5a5a5a5a5a5a5a1aull);
  my_assert((testBits ^ 0xffffffffffffffdfull) == 0x5a5a5a5a5a5a5a7aull);
  my_assert((testBits ^ 0xffffffffffffffefull) == 0x5a5a5a5a5a5a5a4aull);

  my_assert((testBits ^ 0xfffffffffffffff7ull) == 0x5a5a5a5a5a5a5a52ull);
  my_assert((testBits ^ 0xfffffffffffffffbull) == 0x5a5a5a5a5a5a5a5eull);
  my_assert((testBits ^ 0xfffffffffffffffdull) == 0x5a5a5a5a5a5a5a58ull);
  my_assert((testBits ^ 0xfffffffffffffffeull) == 0x5a5a5a5a5a5a5a5bull);

  return exit_status;
}
