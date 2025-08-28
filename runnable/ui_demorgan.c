
static unsigned int testBits = 0xa5a5a5a5ul;

int exit_status;
#include "my_assert.h"

int main() {
  /* walking 1's */
  my_assert((testBits | 0x80000000u) == ~(~testBits & ~0x80000000u));
  my_assert((testBits | 0x40000000u) == ~(~testBits & ~0x40000000u));
  my_assert((testBits | 0x20000000u) == ~(~testBits & ~0x20000000u));
  my_assert((testBits | 0x10000000u) == ~(~testBits & ~0x10000000u));

  /* walking 1's */
  my_assert((testBits | 0x08000000u) == ~(~testBits & ~0x08000000u));
  my_assert((testBits | 0x04000000u) == ~(~testBits & ~0x04000000u));
  my_assert((testBits | 0x02000000u) == ~(~testBits & ~0x02000000u));
  my_assert((testBits | 0x01000000u) == ~(~testBits & ~0x01000000u));

  /* walking 1's */
  my_assert((testBits | 0x00800000u) == ~(~testBits & ~0x00800000u));
  my_assert((testBits | 0x00400000u) == ~(~testBits & ~0x00400000u));
  my_assert((testBits | 0x00200000u) == ~(~testBits & ~0x00200000u));
  my_assert((testBits | 0x00100000u) == ~(~testBits & ~0x00100000u));

  /* walking 1's */
  my_assert((testBits | 0x00080000u) == ~(~testBits & ~0x00080000u));
  my_assert((testBits | 0x00040000u) == ~(~testBits & ~0x00040000u));
  my_assert((testBits | 0x00020000u) == ~(~testBits & ~0x00020000u));
  my_assert((testBits | 0x00010000u) == ~(~testBits & ~0x00010000u));

  /* walking 1's */
  my_assert((testBits | 0x00008000u) == ~(~testBits & ~0x00008000u));
  my_assert((testBits | 0x00004000u) == ~(~testBits & ~0x00004000u));
  my_assert((testBits | 0x00002000u) == ~(~testBits & ~0x00002000u));
  my_assert((testBits | 0x00001000u) == ~(~testBits & ~0x00001000u));

  /* walking 1's */
  my_assert((testBits | 0x00000800u) == ~(~testBits & ~0x00000800u));
  my_assert((testBits | 0x00000400u) == ~(~testBits & ~0x00000400u));
  my_assert((testBits | 0x00000200u) == ~(~testBits & ~0x00000200u));
  my_assert((testBits | 0x00000100u) == ~(~testBits & ~0x00000100u));

  /* walking 1's */
  my_assert((testBits | 0x00000080u) == ~(~testBits & ~0x00000080u));
  my_assert((testBits | 0x00000040u) == ~(~testBits & ~0x00000040u));
  my_assert((testBits | 0x00000020u) == ~(~testBits & ~0x00000020u));
  my_assert((testBits | 0x00000010u) == ~(~testBits & ~0x00000010u));

  /* walking 1's */
  my_assert((testBits | 0x00000008u) == ~(~testBits & ~0x00000008u));
  my_assert((testBits | 0x00000004u) == ~(~testBits & ~0x00000004u));
  my_assert((testBits | 0x00000002u) == ~(~testBits & ~0x00000002u));
  my_assert((testBits | 0x00000001u) == ~(~testBits & ~0x00000001u));

  /* walking 0's */
  my_assert((testBits | 0x7fffffffu) == ~(~testBits & ~0x7fffffffu));
  my_assert((testBits | 0xbfffffffu) == ~(~testBits & ~0xbfffffffu));
  my_assert((testBits | 0xdfffffffu) == ~(~testBits & ~0xdfffffffu));
  my_assert((testBits | 0xefffffffu) == ~(~testBits & ~0xefffffffu));

  /* walking 0's */
  my_assert((testBits | 0xf7ffffffu) == ~(~testBits & ~0xf7ffffffu));
  my_assert((testBits | 0xfbffffffu) == ~(~testBits & ~0xfbffffffu));
  my_assert((testBits | 0xfdffffffu) == ~(~testBits & ~0xfdffffffu));
  my_assert((testBits | 0xfeffffffu) == ~(~testBits & ~0xfeffffffu));

  /* walking 0's */
  my_assert((testBits | 0xff7fffffu) == ~(~testBits & ~0xff7fffffu));
  my_assert((testBits | 0xffbfffffu) == ~(~testBits & ~0xffbfffffu));
  my_assert((testBits | 0xffdfffffu) == ~(~testBits & ~0xffdfffffu));
  my_assert((testBits | 0xffefffffu) == ~(~testBits & ~0xffefffffu));

  /* walking 0's */
  my_assert((testBits | 0xfff7ffffu) == ~(~testBits & ~0xfff7ffffu));
  my_assert((testBits | 0xfffbffffu) == ~(~testBits & ~0xfffbffffu));
  my_assert((testBits | 0xfffdffffu) == ~(~testBits & ~0xfffdffffu));
  my_assert((testBits | 0xfffeffffu) == ~(~testBits & ~0xfffeffffu));

  /* walking 0's */
  my_assert((testBits | 0xffff7fffu) == ~(~testBits & ~0xffff7fffu));
  my_assert((testBits | 0xffffbfffu) == ~(~testBits & ~0xffffbfffu));
  my_assert((testBits | 0xffffdfffu) == ~(~testBits & ~0xffffdfffu));
  my_assert((testBits | 0xffffefffu) == ~(~testBits & ~0xffffefffu));

  /* walking 0's */
  my_assert((testBits | 0xfffff7ffu) == ~(~testBits & ~0xfffff7ffu));
  my_assert((testBits | 0xfffffbffu) == ~(~testBits & ~0xfffffbffu));
  my_assert((testBits | 0xfffffdffu) == ~(~testBits & ~0xfffffdffu));
  my_assert((testBits | 0xfffffeffu) == ~(~testBits & ~0xfffffeffu));

  /* walking 0's */
  my_assert((testBits | 0xffffff7fu) == ~(~testBits & ~0xffffff7fu));
  my_assert((testBits | 0xffffffbfu) == ~(~testBits & ~0xffffffbfu));
  my_assert((testBits | 0xffffffdfu) == ~(~testBits & ~0xffffffdfu));
  my_assert((testBits | 0xffffffefu) == ~(~testBits & ~0xffffffefu));

  /* walking 0's */
  my_assert((testBits | 0xfffffff7u) == ~(~testBits & ~0xfffffff7u));
  my_assert((testBits | 0xfffffffbu) == ~(~testBits & ~0xfffffffbu));
  my_assert((testBits | 0xfffffffdu) == ~(~testBits & ~0xfffffffdu));
  my_assert((testBits | 0xfffffffeu) == ~(~testBits & ~0xfffffffeu));

  return exit_status;
}
