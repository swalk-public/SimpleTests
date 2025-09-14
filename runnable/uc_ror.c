
static unsigned char testBits = 0x01ul;

int exit_status;
#include "my_assert.h"

int main() {
  my_assert((unsigned char)((testBits >> 1) | (testBits << 7)) == 0x80);
  my_assert((unsigned char)((testBits >> 2) | (testBits << 6)) == 0x40);
  my_assert((unsigned char)((testBits >> 3) | (testBits << 5)) == 0x20);
  my_assert((unsigned char)((testBits >> 4) | (testBits << 4)) == 0x10);

  my_assert((unsigned char)((testBits >> 5) | (testBits << 3)) == 0x08);
  my_assert((unsigned char)((testBits >> 6) | (testBits << 2)) == 0x04);
  my_assert((unsigned char)((testBits >> 7) | (testBits << 1)) == 0x02);
  my_assert((unsigned char)((testBits >> 8) | (testBits << 0)) == 0x01);

  return exit_status;
}
