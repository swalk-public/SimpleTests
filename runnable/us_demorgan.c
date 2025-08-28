
static unsigned short testBits = 0xa5a5u;

int exit_status;
#include "my_assert.h"

int main() {

  /* walking 1's */
  my_assert((testBits | 0x8000u) == ~(~testBits & ~0x8000u));
  my_assert((testBits | 0x4000u) == ~(~testBits & ~0x4000u));
  my_assert((testBits | 0x2000u) == ~(~testBits & ~0x2000u));
  my_assert((testBits | 0x1000u) == ~(~testBits & ~0x1000u));

  /* walking 1's */
  my_assert((testBits | 0x0800u) == ~(~testBits & ~0x0800u));
  my_assert((testBits | 0x0400u) == ~(~testBits & ~0x0400u));
  my_assert((testBits | 0x0200u) == ~(~testBits & ~0x0200u));
  my_assert((testBits | 0x0100u) == ~(~testBits & ~0x0100u));

  /* walking 1's */
  my_assert((testBits | 0x0080u) == ~(~testBits & ~0x0080u));
  my_assert((testBits | 0x0040u) == ~(~testBits & ~0x0040u));
  my_assert((testBits | 0x0020u) == ~(~testBits & ~0x0020u));
  my_assert((testBits | 0x0010u) == ~(~testBits & ~0x0010u));

  /* walking 1's */
  my_assert((testBits | 0x0008u) == ~(~testBits & ~0x0008u));
  my_assert((testBits | 0x0004u) == ~(~testBits & ~0x0004u));
  my_assert((testBits | 0x0002u) == ~(~testBits & ~0x0002u));
  my_assert((testBits | 0x0001u) == ~(~testBits & ~0x0001u));

  /* walking 0's */
  my_assert((testBits | 0x7fffu) == ~(~testBits & ~0x7fffu));
  my_assert((testBits | 0xbfffu) == ~(~testBits & ~0xbfffu));
  my_assert((testBits | 0xdfffu) == ~(~testBits & ~0xdfffu));
  my_assert((testBits | 0xefffu) == ~(~testBits & ~0xefffu));

  /* walking 0's */
  my_assert((testBits | 0xf7ffu) == ~(~testBits & ~0xf7ffu));
  my_assert((testBits | 0xfbffu) == ~(~testBits & ~0xfbffu));
  my_assert((testBits | 0xfdffu) == ~(~testBits & ~0xfdffu));
  my_assert((testBits | 0xfeffu) == ~(~testBits & ~0xfeffu));

  /* walking 0's */
  my_assert((testBits | 0xff7fu) == ~(~testBits & ~0xff7fu));
  my_assert((testBits | 0xffbfu) == ~(~testBits & ~0xffbfu));
  my_assert((testBits | 0xffdfu) == ~(~testBits & ~0xffdfu));
  my_assert((testBits | 0xffefu) == ~(~testBits & ~0xffefu));

  /* walking 0's */
  my_assert((testBits | 0xfff7u) == ~(~testBits & ~0xfff7u));
  my_assert((testBits | 0xfffbu) == ~(~testBits & ~0xfffbu));
  my_assert((testBits | 0xfffdu) == ~(~testBits & ~0xfffdu));
  my_assert((testBits | 0xfffeu) == ~(~testBits & ~0xfffeu));

  return exit_status;
}
