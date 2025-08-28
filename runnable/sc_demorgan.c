
static signed char testBits = 0xa5;

int exit_status;
#include "my_assert.h"

int main() {

  /* walking 1's */
  my_assert((testBits | 0x80u) == ~(~testBits & ~0x80u));
  my_assert((testBits | 0x40u) == ~(~testBits & ~0x40u));
  my_assert((testBits | 0x20u) == ~(~testBits & ~0x20u));
  my_assert((testBits | 0x10u) == ~(~testBits & ~0x10u));

  /* walking 1's */
  my_assert((testBits | 0x08u) == ~(~testBits & ~0x08u));
  my_assert((testBits | 0x04u) == ~(~testBits & ~0x04u));
  my_assert((testBits | 0x02u) == ~(~testBits & ~0x02u));
  my_assert((testBits | 0x01u) == ~(~testBits & ~0x001u));

  /* walking 0's */
  my_assert((testBits | 0x7fu) == ~(~testBits & ~0x7fu));
  my_assert((testBits | 0xbfu) == ~(~testBits & ~0xbfu));
  my_assert((testBits | 0xdfu) == ~(~testBits & ~0xdfu));
  my_assert((testBits | 0xefu) == ~(~testBits & ~0xefu));

  /* walking 0's */
  my_assert((testBits | 0xf7u) == ~(~testBits & ~0xf7u));
  my_assert((testBits | 0xfbu) == ~(~testBits & ~0xfbu));
  my_assert((testBits | 0xfdu) == ~(~testBits & ~0xfdu));
  my_assert((testBits | 0xfeu) == ~(~testBits & ~0xfeu));

  return exit_status;
}
