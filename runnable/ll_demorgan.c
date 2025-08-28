
static signed long long testBits = 0xa5a5a5a5a5a5a5a5ull;

int exit_status;
#include "my_assert.h"

int main() {
  /* walking 1's */
  my_assert((testBits | 0x8000000000000000ull) ==
            ~(~testBits & ~0x8000000000000000ull));
  my_assert((testBits | 0x4000000000000000ull) ==
            ~(~testBits & ~0x4000000000000000ull));
  my_assert((testBits | 0x2000000000000000ull) ==
            ~(~testBits & ~0x2000000000000000ull));
  my_assert((testBits | 0x1000000000000000ull) ==
            ~(~testBits & ~0x1000000000000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0800000000000000ull) ==
            ~(~testBits & ~0x0800000000000000ull));
  my_assert((testBits | 0x0400000000000000ull) ==
            ~(~testBits & ~0x0400000000000000ull));
  my_assert((testBits | 0x0200000000000000ull) ==
            ~(~testBits & ~0x0200000000000000ull));
  my_assert((testBits | 0x0100000000000000ull) ==
            ~(~testBits & ~0x0100000000000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0080000000000000ull) ==
            ~(~testBits & ~0x0080000000000000ull));
  my_assert((testBits | 0x0040000000000000ull) ==
            ~(~testBits & ~0x0040000000000000ull));
  my_assert((testBits | 0x0020000000000000ull) ==
            ~(~testBits & ~0x0020000000000000ull));
  my_assert((testBits | 0x0010000000000000ull) ==
            ~(~testBits & ~0x0010000000000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0008000000000000ull) ==
            ~(~testBits & ~0x0008000000000000ull));
  my_assert((testBits | 0x0004000000000000ull) ==
            ~(~testBits & ~0x0004000000000000ull));
  my_assert((testBits | 0x0002000000000000ull) ==
            ~(~testBits & ~0x0002000000000000ull));
  my_assert((testBits | 0x0001000000000000ull) ==
            ~(~testBits & ~0x0001000000000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000800000000000ull) ==
            ~(~testBits & ~0x0000800000000000ull));
  my_assert((testBits | 0x0000400000000000ull) ==
            ~(~testBits & ~0x0000400000000000ull));
  my_assert((testBits | 0x0000200000000000ull) ==
            ~(~testBits & ~0x0000200000000000ull));
  my_assert((testBits | 0x0000100000000000ull) ==
            ~(~testBits & ~0x0000100000000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000080000000000ull) ==
            ~(~testBits & ~0x0000080000000000ull));
  my_assert((testBits | 0x0000040000000000ull) ==
            ~(~testBits & ~0x0000040000000000ull));
  my_assert((testBits | 0x0000020000000000ull) ==
            ~(~testBits & ~0x0000020000000000ull));
  my_assert((testBits | 0x0000010000000000ull) ==
            ~(~testBits & ~0x0000010000000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000008000000000ull) ==
            ~(~testBits & ~0x0000008000000000ull));
  my_assert((testBits | 0x0000004000000000ull) ==
            ~(~testBits & ~0x0000004000000000ull));
  my_assert((testBits | 0x0000002000000000ull) ==
            ~(~testBits & ~0x0000002000000000ull));
  my_assert((testBits | 0x0000001000000000ull) ==
            ~(~testBits & ~0x0000001000000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000800000000ull) ==
            ~(~testBits & ~0x0000000800000000ull));
  my_assert((testBits | 0x0000000400000000ull) ==
            ~(~testBits & ~0x0000000400000000ull));
  my_assert((testBits | 0x0000000200000000ull) ==
            ~(~testBits & ~0x0000000200000000ull));
  my_assert((testBits | 0x0000000100000000ull) ==
            ~(~testBits & ~0x0000000100000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000080000000ull) ==
            ~(~testBits & ~0x0000000080000000ull));
  my_assert((testBits | 0x0000000040000000ull) ==
            ~(~testBits & ~0x0000000040000000ull));
  my_assert((testBits | 0x0000000020000000ull) ==
            ~(~testBits & ~0x0000000020000000ull));
  my_assert((testBits | 0x0000000010000000ull) ==
            ~(~testBits & ~0x0000000010000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000008000000ull) ==
            ~(~testBits & ~0x0000000008000000ull));
  my_assert((testBits | 0x0000000004000000ull) ==
            ~(~testBits & ~0x0000000004000000ull));
  my_assert((testBits | 0x0000000002000000ull) ==
            ~(~testBits & ~0x0000000002000000ull));
  my_assert((testBits | 0x0000000001000000ull) ==
            ~(~testBits & ~0x0000000001000000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000000800000ull) ==
            ~(~testBits & ~0x0000000000800000ull));
  my_assert((testBits | 0x0000000000400000ull) ==
            ~(~testBits & ~0x0000000000400000ull));
  my_assert((testBits | 0x0000000000200000ull) ==
            ~(~testBits & ~0x0000000000200000ull));
  my_assert((testBits | 0x0000000000100000ull) ==
            ~(~testBits & ~0x0000000000100000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000000080000ull) ==
            ~(~testBits & ~0x0000000000080000ull));
  my_assert((testBits | 0x0000000000040000ull) ==
            ~(~testBits & ~0x0000000000040000ull));
  my_assert((testBits | 0x0000000000020000ull) ==
            ~(~testBits & ~0x0000000000020000ull));
  my_assert((testBits | 0x0000000000010000ull) ==
            ~(~testBits & ~0x0000000000010000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000000008000ull) ==
            ~(~testBits & ~0x0000000000008000ull));
  my_assert((testBits | 0x0000000000004000ull) ==
            ~(~testBits & ~0x0000000000004000ull));
  my_assert((testBits | 0x0000000000002000ull) ==
            ~(~testBits & ~0x0000000000002000ull));
  my_assert((testBits | 0x0000000000001000ull) ==
            ~(~testBits & ~0x0000000000001000ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000000000800ull) ==
            ~(~testBits & ~0x0000000000000800ull));
  my_assert((testBits | 0x0000000000000400ull) ==
            ~(~testBits & ~0x0000000000000400ull));
  my_assert((testBits | 0x0000000000000200ull) ==
            ~(~testBits & ~0x0000000000000200ull));
  my_assert((testBits | 0x0000000000000100ull) ==
            ~(~testBits & ~0x0000000000000100ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000000000080ull) ==
            ~(~testBits & ~0x0000000000000080ull));
  my_assert((testBits | 0x0000000000000040ull) ==
            ~(~testBits & ~0x0000000000000040ull));
  my_assert((testBits | 0x0000000000000020ull) ==
            ~(~testBits & ~0x0000000000000020ull));
  my_assert((testBits | 0x0000000000000010ull) ==
            ~(~testBits & ~0x0000000000000010ull));

  /* walking 1's */
  my_assert((testBits | 0x0000000000000008ull) ==
            ~(~testBits & ~0x0000000000000008ull));
  my_assert((testBits | 0x0000000000000004ull) ==
            ~(~testBits & ~0x0000000000000004ull));
  my_assert((testBits | 0x0000000000000002ull) ==
            ~(~testBits & ~0x0000000000000002ull));
  my_assert((testBits | 0x0000000000000001ull) ==
            ~(~testBits & ~0x0000000000000001ull));

  /* walking 0's */
  my_assert((testBits | 0x7fffffffffffffffull) ==
            ~(~testBits & ~0x7fffffffffffffffull));
  my_assert((testBits | 0xbfffffffffffffffull) ==
            ~(~testBits & ~0xbfffffffffffffffull));
  my_assert((testBits | 0xdfffffffffffffffull) ==
            ~(~testBits & ~0xdfffffffffffffffull));
  my_assert((testBits | 0xefffffffffffffffull) ==
            ~(~testBits & ~0xefffffffffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xf7ffffffffffffffull) ==
            ~(~testBits & ~0xf7ffffffffffffffull));
  my_assert((testBits | 0xfbffffffffffffffull) ==
            ~(~testBits & ~0xfbffffffffffffffull));
  my_assert((testBits | 0xfdffffffffffffffull) ==
            ~(~testBits & ~0xfdffffffffffffffull));
  my_assert((testBits | 0xfeffffffffffffffull) ==
            ~(~testBits & ~0xfeffffffffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xff7fffffffffffffull) ==
            ~(~testBits & ~0xff7fffffffffffffull));
  my_assert((testBits | 0xffbfffffffffffffull) ==
            ~(~testBits & ~0xffbfffffffffffffull));
  my_assert((testBits | 0xffdfffffffffffffull) ==
            ~(~testBits & ~0xffdfffffffffffffull));
  my_assert((testBits | 0xffefffffffffffffull) ==
            ~(~testBits & ~0xffefffffffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xfff7ffffffffffffull) ==
            ~(~testBits & ~0xfff7ffffffffffffull));
  my_assert((testBits | 0xfffbffffffffffffull) ==
            ~(~testBits & ~0xfffbffffffffffffull));
  my_assert((testBits | 0xfffdffffffffffffull) ==
            ~(~testBits & ~0xfffdffffffffffffull));
  my_assert((testBits | 0xfffeffffffffffffull) ==
            ~(~testBits & ~0xfffeffffffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xffff7fffffffffffull) ==
            ~(~testBits & ~0xffff7fffffffffffull));
  my_assert((testBits | 0xffffbfffffffffffull) ==
            ~(~testBits & ~0xffffbfffffffffffull));
  my_assert((testBits | 0xffffdfffffffffffull) ==
            ~(~testBits & ~0xffffdfffffffffffull));
  my_assert((testBits | 0xffffefffffffffffull) ==
            ~(~testBits & ~0xffffefffffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xfffff7ffffffffffull) ==
            ~(~testBits & ~0xfffff7ffffffffffull));
  my_assert((testBits | 0xfffffbffffffffffull) ==
            ~(~testBits & ~0xfffffbffffffffffull));
  my_assert((testBits | 0xfffffdffffffffffull) ==
            ~(~testBits & ~0xfffffdffffffffffull));
  my_assert((testBits | 0xfffffeffffffffffull) ==
            ~(~testBits & ~0xfffffeffffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xffffff7fffffffffull) ==
            ~(~testBits & ~0xffffff7fffffffffull));
  my_assert((testBits | 0xffffffbfffffffffull) ==
            ~(~testBits & ~0xffffffbfffffffffull));
  my_assert((testBits | 0xffffffdfffffffffull) ==
            ~(~testBits & ~0xffffffdfffffffffull));
  my_assert((testBits | 0xffffffefffffffffull) ==
            ~(~testBits & ~0xffffffefffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xfffffff7ffffffffull) ==
            ~(~testBits & ~0xfffffff7ffffffffull));
  my_assert((testBits | 0xfffffffbffffffffull) ==
            ~(~testBits & ~0xfffffffbffffffffull));
  my_assert((testBits | 0xfffffffdffffffffull) ==
            ~(~testBits & ~0xfffffffdffffffffull));
  my_assert((testBits | 0xfffffffeffffffffull) ==
            ~(~testBits & ~0xfffffffeffffffffull));

  /* walking 0's */
  my_assert((testBits | 0xffffffff7fffffffull) ==
            ~(~testBits & ~0xffffffff7fffffffull));
  my_assert((testBits | 0xffffffffbfffffffull) ==
            ~(~testBits & ~0xffffffffbfffffffull));
  my_assert((testBits | 0xffffffffdfffffffull) ==
            ~(~testBits & ~0xffffffffdfffffffull));
  my_assert((testBits | 0xffffffffefffffffull) ==
            ~(~testBits & ~0xffffffffefffffffull));

  /* walking 0's */
  my_assert((testBits | 0xfffffffff7ffffffull) ==
            ~(~testBits & ~0xfffffffff7ffffffull));
  my_assert((testBits | 0xfffffffffbffffffull) ==
            ~(~testBits & ~0xfffffffffbffffffull));
  my_assert((testBits | 0xfffffffffdffffffull) ==
            ~(~testBits & ~0xfffffffffdffffffull));
  my_assert((testBits | 0xfffffffffeffffffull) ==
            ~(~testBits & ~0xfffffffffeffffffull));

  /* walking 0's */
  my_assert((testBits | 0xffffffffff7fffffull) ==
            ~(~testBits & ~0xffffffffff7fffffull));
  my_assert((testBits | 0xffffffffffbfffffull) ==
            ~(~testBits & ~0xffffffffffbfffffull));
  my_assert((testBits | 0xffffffffffdfffffull) ==
            ~(~testBits & ~0xffffffffffdfffffull));
  my_assert((testBits | 0xffffffffffefffffull) ==
            ~(~testBits & ~0xffffffffffefffffull));

  /* walking 0's */
  my_assert((testBits | 0xfffffffffff7ffffull) ==
            ~(~testBits & ~0xfffffffffff7ffffull));
  my_assert((testBits | 0xfffffffffffbffffull) ==
            ~(~testBits & ~0xfffffffffffbffffull));
  my_assert((testBits | 0xfffffffffffdffffull) ==
            ~(~testBits & ~0xfffffffffffdffffull));
  my_assert((testBits | 0xfffffffffffeffffull) ==
            ~(~testBits & ~0xfffffffffffeffffull));

  /* walking 0's */
  my_assert((testBits | 0xffffffffffff7fffull) ==
            ~(~testBits & ~0xffffffffffff7fffull));
  my_assert((testBits | 0xffffffffffffbfffull) ==
            ~(~testBits & ~0xffffffffffffbfffull));
  my_assert((testBits | 0xffffffffffffdfffull) ==
            ~(~testBits & ~0xffffffffffffdfffull));
  my_assert((testBits | 0xffffffffffffefffull) ==
            ~(~testBits & ~0xffffffffffffefffull));

  /* walking 0's */
  my_assert((testBits | 0xfffffffffffff7ffull) ==
            ~(~testBits & ~0xfffffffffffff7ffull));
  my_assert((testBits | 0xfffffffffffffbffull) ==
            ~(~testBits & ~0xfffffffffffffbffull));
  my_assert((testBits | 0xfffffffffffffdffull) ==
            ~(~testBits & ~0xfffffffffffffdffull));
  my_assert((testBits | 0xfffffffffffffeffull) ==
            ~(~testBits & ~0xfffffffffffffeffull));

  /* walking 0's */
  my_assert((testBits | 0xffffffffffffff7full) ==
            ~(~testBits & ~0xffffffffffffff7full));
  my_assert((testBits | 0xffffffffffffffbfull) ==
            ~(~testBits & ~0xffffffffffffffbfull));
  my_assert((testBits | 0xffffffffffffffdfull) ==
            ~(~testBits & ~0xffffffffffffffdfull));
  my_assert((testBits | 0xffffffffffffffefull) ==
            ~(~testBits & ~0xffffffffffffffefull));

  /* walking 0's */
  my_assert((testBits | 0xfffffffffffffff7ull) ==
            ~(~testBits & ~0xfffffffffffffff7ull));
  my_assert((testBits | 0xfffffffffffffffbull) ==
            ~(~testBits & ~0xfffffffffffffffbull));
  my_assert((testBits | 0xfffffffffffffffdull) ==
            ~(~testBits & ~0xfffffffffffffffdull));
  my_assert((testBits | 0xfffffffffffffffeull) ==
            ~(~testBits & ~0xfffffffffffffffeull));

  return exit_status;
}
