
static unsigned long testBits = 0x01010101ul;

int exit_status;
#include "my_assert.h"

int main() {

  my_assert(((testBits >> 1) | (testBits << 31)) == 0x80808080ul);
  my_assert(((testBits >> 2) | (testBits << 30)) == 0x40404040ul);
  my_assert(((testBits >> 3) | (testBits << 29)) == 0x20202020ul);
  my_assert(((testBits >> 4) | (testBits << 28)) == 0x10101010ul);

  my_assert(((testBits >> 5) | (testBits << 27)) == 0x08080808ul);
  my_assert(((testBits >> 6) | (testBits << 26)) == 0x04040404ul);
  my_assert(((testBits >> 7) | (testBits << 25)) == 0x02020202ul);
  my_assert(((testBits >> 8) | (testBits << 24)) == 0x01010101ul);

  my_assert(((testBits >> 9) | (testBits << 23)) == 0x80808080ul);
  my_assert(((testBits >> 10) | (testBits << 22)) == 0x40404040ul);
  my_assert(((testBits >> 11) | (testBits << 21)) == 0x20202020ul);
  my_assert(((testBits >> 12) | (testBits << 20)) == 0x10101010ul);

  my_assert(((testBits >> 13) | (testBits << 19)) == 0x08080808ul);
  my_assert(((testBits >> 14) | (testBits << 18)) == 0x04040404ul);
  my_assert(((testBits >> 15) | (testBits << 17)) == 0x02020202ul);
  my_assert(((testBits >> 16) | (testBits << 16)) == 0x01010101ul);

  my_assert(((testBits >> 17) | (testBits << 15)) == 0x80808080ul);
  my_assert(((testBits >> 18) | (testBits << 14)) == 0x40404040ul);
  my_assert(((testBits >> 19) | (testBits << 13)) == 0x20202020ul);
  my_assert(((testBits >> 20) | (testBits << 12)) == 0x10101010ul);

  my_assert(((testBits >> 21) | (testBits << 11)) == 0x08080808ul);
  my_assert(((testBits >> 22) | (testBits << 10)) == 0x04040404ul);
  my_assert(((testBits >> 23) | (testBits << 9)) == 0x02020202ul);
  my_assert(((testBits >> 24) | (testBits << 8)) == 0x01010101ul);

  my_assert(((testBits >> 25) | (testBits << 7)) == 0x80808080ul);
  my_assert(((testBits >> 26) | (testBits << 6)) == 0x40404040ul);
  my_assert(((testBits >> 27) | (testBits << 5)) == 0x20202020ul);
  my_assert(((testBits >> 28) | (testBits << 4)) == 0x10101010ul);

  my_assert(((testBits >> 29) | (testBits << 3)) == 0x08080808ul);
  my_assert(((testBits >> 30) | (testBits << 2)) == 0x04040404ul);
  my_assert(((testBits >> 31) | (testBits << 1)) == 0x02020202ul);
  my_assert(((testBits >> 32) | (testBits << 0)) == 0x01010101ul);

  return exit_status;
}
