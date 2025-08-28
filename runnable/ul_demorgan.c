
static unsigned long testBits = 0xa5a5a5a5ul;

int exit_status;
#include "my_assert.h"

int main() {
  /* walking 1's */
  my_assert((testBits | 0x80000000ul) == ~(~testBits & ~0x80000000ul));
  my_assert((testBits | 0x40000000ul) == ~(~testBits & ~0x40000000ul));
  my_assert((testBits | 0x20000000ul) == ~(~testBits & ~0x20000000ul));
  my_assert((testBits | 0x10000000ul) == ~(~testBits & ~0x10000000ul));

  /* walking 1's */
  my_assert((testBits | 0x08000000ul) == ~(~testBits & ~0x08000000ul));
  my_assert((testBits | 0x04000000ul) == ~(~testBits & ~0x04000000ul));
  my_assert((testBits | 0x02000000ul) == ~(~testBits & ~0x02000000ul));
  my_assert((testBits | 0x01000000ul) == ~(~testBits & ~0x01000000ul));

  /* walking 1's */
  my_assert((testBits | 0x00800000ul) == ~(~testBits & ~0x00800000ul));
  my_assert((testBits | 0x00400000ul) == ~(~testBits & ~0x00400000ul));
  my_assert((testBits | 0x00200000ul) == ~(~testBits & ~0x00200000ul));
  my_assert((testBits | 0x00100000ul) == ~(~testBits & ~0x00100000ul));

  /* walking 1's */
  my_assert((testBits | 0x00080000ul) == ~(~testBits & ~0x00080000ul));
  my_assert((testBits | 0x00040000ul) == ~(~testBits & ~0x00040000ul));
  my_assert((testBits | 0x00020000ul) == ~(~testBits & ~0x00020000ul));
  my_assert((testBits | 0x00010000ul) == ~(~testBits & ~0x00010000ul));

  /* walking 1's */
  my_assert((testBits | 0x00008000ul) == ~(~testBits & ~0x00008000ul));
  my_assert((testBits | 0x00004000ul) == ~(~testBits & ~0x00004000ul));
  my_assert((testBits | 0x00002000ul) == ~(~testBits & ~0x00002000ul));
  my_assert((testBits | 0x00001000ul) == ~(~testBits & ~0x00001000ul));

  /* walking 1's */
  my_assert((testBits | 0x00000800ul) == ~(~testBits & ~0x00000800ul));
  my_assert((testBits | 0x00000400ul) == ~(~testBits & ~0x00000400ul));
  my_assert((testBits | 0x00000200ul) == ~(~testBits & ~0x00000200ul));
  my_assert((testBits | 0x00000100ul) == ~(~testBits & ~0x00000100ul));

  /* walking 1's */
  my_assert((testBits | 0x00000080ul) == ~(~testBits & ~0x00000080ul));
  my_assert((testBits | 0x00000040ul) == ~(~testBits & ~0x00000040ul));
  my_assert((testBits | 0x00000020ul) == ~(~testBits & ~0x00000020ul));
  my_assert((testBits | 0x00000010ul) == ~(~testBits & ~0x00000010ul));

  /* walking 1's */
  my_assert((testBits | 0x00000008ul) == ~(~testBits & ~0x00000008ul));
  my_assert((testBits | 0x00000004ul) == ~(~testBits & ~0x00000004ul));
  my_assert((testBits | 0x00000002ul) == ~(~testBits & ~0x00000002ul));
  my_assert((testBits | 0x00000001ul) == ~(~testBits & ~0x00000001ul));

  /* walking 0's */
  my_assert((testBits | 0x7ffffffful) == ~(~testBits & ~0x7ffffffful));
  my_assert((testBits | 0xbffffffful) == ~(~testBits & ~0xbffffffful));
  my_assert((testBits | 0xdffffffful) == ~(~testBits & ~0xdffffffful));
  my_assert((testBits | 0xeffffffful) == ~(~testBits & ~0xeffffffful));

  /* walking 0's */
  my_assert((testBits | 0xf7fffffful) == ~(~testBits & ~0xf7fffffful));
  my_assert((testBits | 0xfbfffffful) == ~(~testBits & ~0xfbfffffful));
  my_assert((testBits | 0xfdfffffful) == ~(~testBits & ~0xfdfffffful));
  my_assert((testBits | 0xfefffffful) == ~(~testBits & ~0xfefffffful));

  /* walking 0's */
  my_assert((testBits | 0xff7ffffful) == ~(~testBits & ~0xff7ffffful));
  my_assert((testBits | 0xffbffffful) == ~(~testBits & ~0xffbffffful));
  my_assert((testBits | 0xffdffffful) == ~(~testBits & ~0xffdffffful));
  my_assert((testBits | 0xffeffffful) == ~(~testBits & ~0xffeffffful));

  /* walking 0's */
  my_assert((testBits | 0xfff7fffful) == ~(~testBits & ~0xfff7fffful));
  my_assert((testBits | 0xfffbfffful) == ~(~testBits & ~0xfffbfffful));
  my_assert((testBits | 0xfffdfffful) == ~(~testBits & ~0xfffdfffful));
  my_assert((testBits | 0xfffefffful) == ~(~testBits & ~0xfffefffful));

  /* walking 0's */
  my_assert((testBits | 0xffff7ffful) == ~(~testBits & ~0xffff7ffful));
  my_assert((testBits | 0xffffbffful) == ~(~testBits & ~0xffffbffful));
  my_assert((testBits | 0xffffdffful) == ~(~testBits & ~0xffffdffful));
  my_assert((testBits | 0xffffeffful) == ~(~testBits & ~0xffffeffful));

  /* walking 0's */
  my_assert((testBits | 0xfffff7fful) == ~(~testBits & ~0xfffff7fful));
  my_assert((testBits | 0xfffffbfful) == ~(~testBits & ~0xfffffbfful));
  my_assert((testBits | 0xfffffdfful) == ~(~testBits & ~0xfffffdfful));
  my_assert((testBits | 0xfffffefful) == ~(~testBits & ~0xfffffefful));

  /* walking 0's */
  my_assert((testBits | 0xffffff7ful) == ~(~testBits & ~0xffffff7ful));
  my_assert((testBits | 0xffffffbful) == ~(~testBits & ~0xffffffbful));
  my_assert((testBits | 0xffffffdful) == ~(~testBits & ~0xffffffdful));
  my_assert((testBits | 0xffffffeful) == ~(~testBits & ~0xffffffeful));

  /* walking 0's */
  my_assert((testBits | 0xfffffff7ul) == ~(~testBits & ~0xfffffff7ul));
  my_assert((testBits | 0xfffffffbul) == ~(~testBits & ~0xfffffffbul));
  my_assert((testBits | 0xfffffffdul) == ~(~testBits & ~0xfffffffdul));
  my_assert((testBits | 0xfffffffeul) == ~(~testBits & ~0xfffffffeul));

  return exit_status;
}
