
static unsigned long long testBits = 0x0101010101010101ull;

int exit_status;
#include "my_assert.h"

int main() {
  my_assert(((testBits >> 1) | (testBits << 63)) == 0x8080808080808080ull);
  my_assert(((testBits >> 2) | (testBits << 62)) == 0x4040404040404040ull);
  my_assert(((testBits >> 3) | (testBits << 61)) == 0x2020202020202020ull);
  my_assert(((testBits >> 4) | (testBits << 60)) == 0x1010101010101010ull);

  my_assert(((testBits >> 5) | (testBits << 59)) == 0x0808080808080808ull);
  my_assert(((testBits >> 6) | (testBits << 58)) == 0x0404040404040404ull);
  my_assert(((testBits >> 7) | (testBits << 57)) == 0x0202020202020202ull);
  my_assert(((testBits >> 8) | (testBits << 56)) == 0x0101010101010101ull);

  my_assert(((testBits >> 9) | (testBits << 55)) == 0x8080808080808080ull);
  my_assert(((testBits >> 10) | (testBits << 54)) == 0x4040404040404040ull);
  my_assert(((testBits >> 11) | (testBits << 53)) == 0x2020202020202020ull);
  my_assert(((testBits >> 12) | (testBits << 52)) == 0x1010101010101010ull);

  my_assert(((testBits >> 13) | (testBits << 51)) == 0x0808080808080808ull);
  my_assert(((testBits >> 14) | (testBits << 50)) == 0x0404040404040404ull);
  my_assert(((testBits >> 15) | (testBits << 49)) == 0x0202020202020202ull);
  my_assert(((testBits >> 16) | (testBits << 48)) == 0x0101010101010101ull);

  my_assert(((testBits >> 17) | (testBits << 47)) == 0x8080808080808080ull);
  my_assert(((testBits >> 18) | (testBits << 46)) == 0x4040404040404040ull);
  my_assert(((testBits >> 19) | (testBits << 45)) == 0x2020202020202020ull);
  my_assert(((testBits >> 20) | (testBits << 44)) == 0x1010101010101010ull);

  my_assert(((testBits >> 21) | (testBits << 43)) == 0x0808080808080808ull);
  my_assert(((testBits >> 22) | (testBits << 42)) == 0x0404040404040404ull);
  my_assert(((testBits >> 23) | (testBits << 41)) == 0x0202020202020202ull);
  my_assert(((testBits >> 24) | (testBits << 40)) == 0x0101010101010101ull);

  my_assert(((testBits >> 25) | (testBits << 39)) == 0x8080808080808080ull);
  my_assert(((testBits >> 26) | (testBits << 38)) == 0x4040404040404040ull);
  my_assert(((testBits >> 27) | (testBits << 37)) == 0x2020202020202020ull);
  my_assert(((testBits >> 28) | (testBits << 36)) == 0x1010101010101010ull);

  my_assert(((testBits >> 29) | (testBits << 35)) == 0x0808080808080808ull);
  my_assert(((testBits >> 30) | (testBits << 34)) == 0x0404040404040404ull);
  my_assert(((testBits >> 31) | (testBits << 33)) == 0x0202020202020202ull);
  my_assert(((testBits >> 32) | (testBits << 32)) == 0x0101010101010101ull);

  my_assert(((testBits >> 33) | (testBits << 31)) == 0x8080808080808080ull);
  my_assert(((testBits >> 34) | (testBits << 30)) == 0x4040404040404040ull);
  my_assert(((testBits >> 35) | (testBits << 29)) == 0x2020202020202020ull);
  my_assert(((testBits >> 36) | (testBits << 28)) == 0x1010101010101010ull);

  my_assert(((testBits >> 37) | (testBits << 27)) == 0x0808080808080808ull);
  my_assert(((testBits >> 38) | (testBits << 26)) == 0x0404040404040404ull);
  my_assert(((testBits >> 39) | (testBits << 25)) == 0x0202020202020202ull);
  my_assert(((testBits >> 40) | (testBits << 24)) == 0x0101010101010101ull);

  my_assert(((testBits >> 41) | (testBits << 23)) == 0x8080808080808080ull);
  my_assert(((testBits >> 42) | (testBits << 22)) == 0x4040404040404040ull);
  my_assert(((testBits >> 43) | (testBits << 21)) == 0x2020202020202020ull);
  my_assert(((testBits >> 44) | (testBits << 20)) == 0x1010101010101010ull);

  my_assert(((testBits >> 45) | (testBits << 19)) == 0x0808080808080808ull);
  my_assert(((testBits >> 46) | (testBits << 18)) == 0x0404040404040404ull);
  my_assert(((testBits >> 47) | (testBits << 17)) == 0x0202020202020202ull);
  my_assert(((testBits >> 48) | (testBits << 16)) == 0x0101010101010101ull);

  my_assert(((testBits >> 49) | (testBits << 15)) == 0x8080808080808080ull);
  my_assert(((testBits >> 50) | (testBits << 14)) == 0x4040404040404040ull);
  my_assert(((testBits >> 51) | (testBits << 13)) == 0x2020202020202020ull);
  my_assert(((testBits >> 52) | (testBits << 12)) == 0x1010101010101010ull);

  my_assert(((testBits >> 53) | (testBits << 11)) == 0x0808080808080808ull);
  my_assert(((testBits >> 54) | (testBits << 10)) == 0x0404040404040404ull);
  my_assert(((testBits >> 55) | (testBits << 9)) == 0x0202020202020202ull);
  my_assert(((testBits >> 56) | (testBits << 8)) == 0x0101010101010101ull);

  my_assert(((testBits >> 57) | (testBits << 7)) == 0x8080808080808080ull);
  my_assert(((testBits >> 58) | (testBits << 6)) == 0x4040404040404040ull);
  my_assert(((testBits >> 59) | (testBits << 5)) == 0x2020202020202020ull);
  my_assert(((testBits >> 60) | (testBits << 4)) == 0x1010101010101010ull);

  my_assert(((testBits >> 61) | (testBits << 3)) == 0x0808080808080808ull);
  my_assert(((testBits >> 62) | (testBits << 2)) == 0x0404040404040404ull);
  my_assert(((testBits >> 63) | (testBits << 1)) == 0x0202020202020202ull);
  my_assert(((testBits >> 64) | (testBits << 0)) == 0x0101010101010101ull);

  return exit_status;
}
