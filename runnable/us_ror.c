
static unsigned short testBits = 0x0101ul;

int exit_status;
#include "my_assert.h"

int main() {

  my_assert((unsigned short)((testBits >> 1) | (testBits << 15)) == 0x8080);
  my_assert((unsigned short)((testBits >> 2) | (testBits << 14)) == 0x4040);
  my_assert((unsigned short)((testBits >> 3) | (testBits << 13)) == 0x2020);
  my_assert((unsigned short)((testBits >> 4) | (testBits << 12)) == 0x1010);

  my_assert((unsigned short)((testBits >> 5) | (testBits << 11)) == 0x0808);
  my_assert((unsigned short)((testBits >> 6) | (testBits << 10)) == 0x0404);
  my_assert((unsigned short)((testBits >> 7) | (testBits << 9)) == 0x0202);
  my_assert((unsigned short)((testBits >> 8) | (testBits << 8)) == 0x0101);

  my_assert((unsigned short)((testBits >> 9) | (testBits << 7)) == 0x8080);
  my_assert((unsigned short)((testBits >> 10) | (testBits << 6)) == 0x4040);
  my_assert((unsigned short)((testBits >> 11) | (testBits << 5)) == 0x2020);
  my_assert((unsigned short)((testBits >> 12) | (testBits << 4)) == 0x1010);

  my_assert((unsigned short)((testBits >> 13) | (testBits << 3)) == 0x0808);
  my_assert((unsigned short)((testBits >> 14) | (testBits << 2)) == 0x0404);
  my_assert((unsigned short)((testBits >> 15) | (testBits << 1)) == 0x0202);
  my_assert((unsigned short)((testBits >> 16) | (testBits << 0)) == 0x0101);

  return exit_status;
}
