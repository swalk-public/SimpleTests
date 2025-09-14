
static unsigned long long testBits = 0xa5a5a5a5a5a5a5a5ull;

int exit_status;
#include "my_assert.h"

int main() {
  /* 1010 0101 */
  my_assert(((testBits >> 0) & 0x01ULL) != 0);
  my_assert(((testBits >> 0) & 0x02ULL) == 0);
  my_assert(((testBits >> 0) & 0x04ULL) != 0);
  my_assert(((testBits >> 0) & 0x08ULL) == 0);
  my_assert(((testBits >> 0) & 0x10ULL) == 0);
  my_assert(((testBits >> 0) & 0x20ULL) != 0);
  my_assert(((testBits >> 0) & 0x40ULL) == 0);
  my_assert(((testBits >> 0) & 0x80ULL) != 0);

  /* 1101 0010 */
  my_assert(((testBits >> 1) & 0x01ULL) == 0);
  my_assert(((testBits >> 1) & 0x02ULL) != 0);
  my_assert(((testBits >> 1) & 0x04ULL) == 0);
  my_assert(((testBits >> 1) & 0x08ULL) == 0);
  my_assert(((testBits >> 1) & 0x10ULL) != 0);
  my_assert(((testBits >> 1) & 0x20ULL) == 0);
  my_assert(((testBits >> 1) & 0x40ULL) != 0);
  my_assert(((testBits >> 1) & 0x80ULL) != 0);

  /* 0110 1001 */
  my_assert(((testBits >> 2) & 0x01ULL) != 0);
  my_assert(((testBits >> 2) & 0x02ULL) == 0);
  my_assert(((testBits >> 2) & 0x04ULL) == 0);
  my_assert(((testBits >> 2) & 0x08ULL) != 0);
  my_assert(((testBits >> 2) & 0x10ULL) == 0);
  my_assert(((testBits >> 2) & 0x20ULL) != 0);
  my_assert(((testBits >> 2) & 0x40ULL) != 0);
  my_assert(((testBits >> 2) & 0x80ULL) == 0);

  /* 1011 0100 */
  my_assert(((testBits >> 3) & 0x01ULL) == 0);
  my_assert(((testBits >> 3) & 0x02ULL) == 0);
  my_assert(((testBits >> 3) & 0x04ULL) != 0);
  my_assert(((testBits >> 3) & 0x08ULL) == 0);
  my_assert(((testBits >> 3) & 0x10ULL) != 0);
  my_assert(((testBits >> 3) & 0x20ULL) != 0);
  my_assert(((testBits >> 3) & 0x40ULL) == 0);
  my_assert(((testBits >> 3) & 0x80ULL) != 0);

  /* 0101 1010 */
  my_assert(((testBits >> 4) & 0x01ULL) == 0);
  my_assert(((testBits >> 4) & 0x02ULL) != 0);
  my_assert(((testBits >> 4) & 0x04ULL) == 0);
  my_assert(((testBits >> 4) & 0x08ULL) != 0);
  my_assert(((testBits >> 4) & 0x10ULL) != 0);
  my_assert(((testBits >> 4) & 0x20ULL) == 0);
  my_assert(((testBits >> 4) & 0x40ULL) != 0);
  my_assert(((testBits >> 4) & 0x80ULL) == 0);

  /* 0010 1101 */
  my_assert(((testBits >> 5) & 0x01ULL) != 0);
  my_assert(((testBits >> 5) & 0x02ULL) == 0);
  my_assert(((testBits >> 5) & 0x04ULL) != 0);
  my_assert(((testBits >> 5) & 0x08ULL) != 0);
  my_assert(((testBits >> 5) & 0x10ULL) == 0);
  my_assert(((testBits >> 5) & 0x20ULL) != 0);
  my_assert(((testBits >> 5) & 0x40ULL) == 0);
  my_assert(((testBits >> 5) & 0x80ULL) == 0);

  /* 1001 0110 */
  my_assert(((testBits >> 6) & 0x01ULL) == 0);
  my_assert(((testBits >> 6) & 0x02ULL) != 0);
  my_assert(((testBits >> 6) & 0x04ULL) != 0);
  my_assert(((testBits >> 6) & 0x08ULL) == 0);
  my_assert(((testBits >> 6) & 0x10ULL) != 0);
  my_assert(((testBits >> 6) & 0x20ULL) == 0);
  my_assert(((testBits >> 6) & 0x40ULL) == 0);
  my_assert(((testBits >> 6) & 0x80ULL) != 0);

  /* 0100 1011 */
  my_assert(((testBits >> 7) & 0x01ULL) != 0);
  my_assert(((testBits >> 7) & 0x02ULL) != 0);
  my_assert(((testBits >> 7) & 0x04ULL) == 0);
  my_assert(((testBits >> 7) & 0x08ULL) != 0);
  my_assert(((testBits >> 7) & 0x10ULL) == 0);
  my_assert(((testBits >> 7) & 0x20ULL) == 0);
  my_assert(((testBits >> 7) & 0x40ULL) != 0);
  my_assert(((testBits >> 7) & 0x80ULL) == 0);

  /* 1010 0101 */
  my_assert(((testBits >> 8) & 0x01ULL) != 0);
  my_assert(((testBits >> 8) & 0x02ULL) == 0);
  my_assert(((testBits >> 8) & 0x04ULL) != 0);
  my_assert(((testBits >> 8) & 0x08ULL) == 0);
  my_assert(((testBits >> 8) & 0x10ULL) == 0);
  my_assert(((testBits >> 8) & 0x20ULL) != 0);
  my_assert(((testBits >> 8) & 0x40ULL) == 0);
  my_assert(((testBits >> 8) & 0x80ULL) != 0);

  /* 1101 0010 */
  my_assert(((testBits >> 9) & 0x01ULL) == 0);
  my_assert(((testBits >> 9) & 0x02ULL) != 0);
  my_assert(((testBits >> 9) & 0x04ULL) == 0);
  my_assert(((testBits >> 9) & 0x08ULL) == 0);
  my_assert(((testBits >> 9) & 0x10ULL) != 0);
  my_assert(((testBits >> 9) & 0x20ULL) == 0);
  my_assert(((testBits >> 9) & 0x40ULL) != 0);
  my_assert(((testBits >> 9) & 0x80ULL) != 0);

  /* 0110 1001 */
  my_assert(((testBits >> 10) & 0x01ULL) != 0);
  my_assert(((testBits >> 10) & 0x02ULL) == 0);
  my_assert(((testBits >> 10) & 0x04ULL) == 0);
  my_assert(((testBits >> 10) & 0x08ULL) != 0);
  my_assert(((testBits >> 10) & 0x10ULL) == 0);
  my_assert(((testBits >> 10) & 0x20ULL) != 0);
  my_assert(((testBits >> 10) & 0x40ULL) != 0);
  my_assert(((testBits >> 10) & 0x80ULL) == 0);

  /* 1011 0100 */
  my_assert(((testBits >> 11) & 0x01ULL) == 0);
  my_assert(((testBits >> 11) & 0x02ULL) == 0);
  my_assert(((testBits >> 11) & 0x04ULL) != 0);
  my_assert(((testBits >> 11) & 0x08ULL) == 0);
  my_assert(((testBits >> 11) & 0x10ULL) != 0);
  my_assert(((testBits >> 11) & 0x20ULL) != 0);
  my_assert(((testBits >> 11) & 0x40ULL) == 0);
  my_assert(((testBits >> 11) & 0x80ULL) != 0);

  /* 0101 1010 */
  my_assert(((testBits >> 12) & 0x01ULL) == 0);
  my_assert(((testBits >> 12) & 0x02ULL) != 0);
  my_assert(((testBits >> 12) & 0x04ULL) == 0);
  my_assert(((testBits >> 12) & 0x08ULL) != 0);
  my_assert(((testBits >> 12) & 0x10ULL) != 0);
  my_assert(((testBits >> 12) & 0x20ULL) == 0);
  my_assert(((testBits >> 12) & 0x40ULL) != 0);
  my_assert(((testBits >> 12) & 0x80ULL) == 0);

  /* 0010 1101 */
  my_assert(((testBits >> 13) & 0x01ULL) != 0);
  my_assert(((testBits >> 13) & 0x02ULL) == 0);
  my_assert(((testBits >> 13) & 0x04ULL) != 0);
  my_assert(((testBits >> 13) & 0x08ULL) != 0);
  my_assert(((testBits >> 13) & 0x10ULL) == 0);
  my_assert(((testBits >> 13) & 0x20ULL) != 0);
  my_assert(((testBits >> 13) & 0x40ULL) == 0);
  my_assert(((testBits >> 13) & 0x80ULL) == 0);

  /* 1001 0110 */
  my_assert(((testBits >> 14) & 0x01ULL) == 0);
  my_assert(((testBits >> 14) & 0x02ULL) != 0);
  my_assert(((testBits >> 14) & 0x04ULL) != 0);
  my_assert(((testBits >> 14) & 0x08ULL) == 0);
  my_assert(((testBits >> 14) & 0x10ULL) != 0);
  my_assert(((testBits >> 14) & 0x20ULL) == 0);
  my_assert(((testBits >> 14) & 0x40ULL) == 0);
  my_assert(((testBits >> 14) & 0x80ULL) != 0);

  /* 0100 1011 */
  my_assert(((testBits >> 15) & 0x01ULL) != 0);
  my_assert(((testBits >> 15) & 0x02ULL) != 0);
  my_assert(((testBits >> 15) & 0x04ULL) == 0);
  my_assert(((testBits >> 15) & 0x08ULL) != 0);
  my_assert(((testBits >> 15) & 0x10ULL) == 0);
  my_assert(((testBits >> 15) & 0x20ULL) == 0);
  my_assert(((testBits >> 15) & 0x40ULL) != 0);
  my_assert(((testBits >> 15) & 0x80ULL) == 0);

  /* 1010 0101 */
  my_assert(((testBits >> 16) & 0x01ULL) != 0);
  my_assert(((testBits >> 16) & 0x02ULL) == 0);
  my_assert(((testBits >> 16) & 0x04ULL) != 0);
  my_assert(((testBits >> 16) & 0x08ULL) == 0);
  my_assert(((testBits >> 16) & 0x10ULL) == 0);
  my_assert(((testBits >> 16) & 0x20ULL) != 0);
  my_assert(((testBits >> 16) & 0x40ULL) == 0);
  my_assert(((testBits >> 16) & 0x80ULL) != 0);

  /* 1101 0010 */
  my_assert(((testBits >> 17) & 0x01ULL) == 0);
  my_assert(((testBits >> 17) & 0x02ULL) != 0);
  my_assert(((testBits >> 17) & 0x04ULL) == 0);
  my_assert(((testBits >> 17) & 0x08ULL) == 0);
  my_assert(((testBits >> 17) & 0x10ULL) != 0);
  my_assert(((testBits >> 17) & 0x20ULL) == 0);
  my_assert(((testBits >> 17) & 0x40ULL) != 0);
  my_assert(((testBits >> 17) & 0x80ULL) != 0);

  /* 0110 1001 */
  my_assert(((testBits >> 18) & 0x01ULL) != 0);
  my_assert(((testBits >> 18) & 0x02ULL) == 0);
  my_assert(((testBits >> 18) & 0x04ULL) == 0);
  my_assert(((testBits >> 18) & 0x08ULL) != 0);
  my_assert(((testBits >> 18) & 0x10ULL) == 0);
  my_assert(((testBits >> 18) & 0x20ULL) != 0);
  my_assert(((testBits >> 18) & 0x40ULL) != 0);
  my_assert(((testBits >> 18) & 0x80ULL) == 0);

  /* 1011 0100 */
  my_assert(((testBits >> 19) & 0x01ULL) == 0);
  my_assert(((testBits >> 19) & 0x02ULL) == 0);
  my_assert(((testBits >> 19) & 0x04ULL) != 0);
  my_assert(((testBits >> 19) & 0x08ULL) == 0);
  my_assert(((testBits >> 19) & 0x10ULL) != 0);
  my_assert(((testBits >> 19) & 0x20ULL) != 0);
  my_assert(((testBits >> 19) & 0x40ULL) == 0);
  my_assert(((testBits >> 19) & 0x80ULL) != 0);

  /* 0101 1010 */
  my_assert(((testBits >> 20) & 0x01ULL) == 0);
  my_assert(((testBits >> 20) & 0x02ULL) != 0);
  my_assert(((testBits >> 20) & 0x04ULL) == 0);
  my_assert(((testBits >> 20) & 0x08ULL) != 0);
  my_assert(((testBits >> 20) & 0x10ULL) != 0);
  my_assert(((testBits >> 20) & 0x20ULL) == 0);
  my_assert(((testBits >> 20) & 0x40ULL) != 0);
  my_assert(((testBits >> 20) & 0x80ULL) == 0);

  /* 0010 1101 */
  my_assert(((testBits >> 21) & 0x01ULL) != 0);
  my_assert(((testBits >> 21) & 0x02ULL) == 0);
  my_assert(((testBits >> 21) & 0x04ULL) != 0);
  my_assert(((testBits >> 21) & 0x08ULL) != 0);
  my_assert(((testBits >> 21) & 0x10ULL) == 0);
  my_assert(((testBits >> 21) & 0x20ULL) != 0);
  my_assert(((testBits >> 21) & 0x40ULL) == 0);
  my_assert(((testBits >> 21) & 0x80ULL) == 0);

  /* 1001 0110 */
  my_assert(((testBits >> 22) & 0x01ULL) == 0);
  my_assert(((testBits >> 22) & 0x02ULL) != 0);
  my_assert(((testBits >> 22) & 0x04ULL) != 0);
  my_assert(((testBits >> 22) & 0x08ULL) == 0);
  my_assert(((testBits >> 22) & 0x10ULL) != 0);
  my_assert(((testBits >> 22) & 0x20ULL) == 0);
  my_assert(((testBits >> 22) & 0x40ULL) == 0);
  my_assert(((testBits >> 22) & 0x80ULL) != 0);

  /* 0100 1011 */
  my_assert(((testBits >> 23) & 0x01ULL) != 0);
  my_assert(((testBits >> 23) & 0x02ULL) != 0);
  my_assert(((testBits >> 23) & 0x04ULL) == 0);
  my_assert(((testBits >> 23) & 0x08ULL) != 0);
  my_assert(((testBits >> 23) & 0x10ULL) == 0);
  my_assert(((testBits >> 23) & 0x20ULL) == 0);
  my_assert(((testBits >> 23) & 0x40ULL) != 0);
  my_assert(((testBits >> 23) & 0x80ULL) == 0);

  /* 1010 0101 */
  my_assert(((testBits >> 24) & 0x01ULL) != 0);
  my_assert(((testBits >> 24) & 0x02ULL) == 0);
  my_assert(((testBits >> 24) & 0x04ULL) != 0);
  my_assert(((testBits >> 24) & 0x08ULL) == 0);
  my_assert(((testBits >> 24) & 0x10ULL) == 0);
  my_assert(((testBits >> 24) & 0x20ULL) != 0);
  my_assert(((testBits >> 24) & 0x40ULL) == 0);
  my_assert(((testBits >> 24) & 0x80ULL) != 0);

  /* 1101 0010 */
  my_assert(((testBits >> 25) & 0x01ULL) == 0);
  my_assert(((testBits >> 25) & 0x02ULL) != 0);
  my_assert(((testBits >> 25) & 0x04ULL) == 0);
  my_assert(((testBits >> 25) & 0x08ULL) == 0);
  my_assert(((testBits >> 25) & 0x10ULL) != 0);
  my_assert(((testBits >> 25) & 0x20ULL) == 0);
  my_assert(((testBits >> 25) & 0x40ULL) != 0);
  my_assert(((testBits >> 25) & 0x80ULL) != 0);

  /* 0110 1001 */
  my_assert(((testBits >> 26) & 0x01ULL) != 0);
  my_assert(((testBits >> 26) & 0x02ULL) == 0);
  my_assert(((testBits >> 26) & 0x04ULL) == 0);
  my_assert(((testBits >> 26) & 0x08ULL) != 0);
  my_assert(((testBits >> 26) & 0x10ULL) == 0);
  my_assert(((testBits >> 26) & 0x20ULL) != 0);
  my_assert(((testBits >> 26) & 0x40ULL) != 0);
  my_assert(((testBits >> 26) & 0x80ULL) == 0);

  /* 1011 0100 */
  my_assert(((testBits >> 27) & 0x01ULL) == 0);
  my_assert(((testBits >> 27) & 0x02ULL) == 0);
  my_assert(((testBits >> 27) & 0x04ULL) != 0);
  my_assert(((testBits >> 27) & 0x08ULL) == 0);
  my_assert(((testBits >> 27) & 0x10ULL) != 0);
  my_assert(((testBits >> 27) & 0x20ULL) != 0);
  my_assert(((testBits >> 27) & 0x40ULL) == 0);
  my_assert(((testBits >> 27) & 0x80ULL) != 0);

  /* 0101 1010 */
  my_assert(((testBits >> 28) & 0x01ULL) == 0);
  my_assert(((testBits >> 28) & 0x02ULL) != 0);
  my_assert(((testBits >> 28) & 0x04ULL) == 0);
  my_assert(((testBits >> 28) & 0x08ULL) != 0);
  my_assert(((testBits >> 28) & 0x10ULL) != 0);
  my_assert(((testBits >> 28) & 0x20ULL) == 0);
  my_assert(((testBits >> 28) & 0x40ULL) != 0);
  my_assert(((testBits >> 28) & 0x80ULL) == 0);

  /* 0010 1101 */
  my_assert(((testBits >> 29) & 0x01ULL) != 0);
  my_assert(((testBits >> 29) & 0x02ULL) == 0);
  my_assert(((testBits >> 29) & 0x04ULL) != 0);
  my_assert(((testBits >> 29) & 0x08ULL) != 0);
  my_assert(((testBits >> 29) & 0x10ULL) == 0);
  my_assert(((testBits >> 29) & 0x20ULL) != 0);
  my_assert(((testBits >> 29) & 0x40ULL) == 0);
  my_assert(((testBits >> 29) & 0x80ULL) == 0);

  /* 1001 0110 */
  my_assert(((testBits >> 30) & 0x01ULL) == 0);
  my_assert(((testBits >> 30) & 0x02ULL) != 0);
  my_assert(((testBits >> 30) & 0x04ULL) != 0);
  my_assert(((testBits >> 30) & 0x08ULL) == 0);
  my_assert(((testBits >> 30) & 0x10ULL) != 0);
  my_assert(((testBits >> 30) & 0x20ULL) == 0);
  my_assert(((testBits >> 30) & 0x40ULL) == 0);
  my_assert(((testBits >> 30) & 0x80ULL) != 0);

  /* 0100 1011 */
  my_assert(((testBits >> 31) & 0x01ULL) != 0);
  my_assert(((testBits >> 31) & 0x02ULL) != 0);
  my_assert(((testBits >> 31) & 0x04ULL) == 0);
  my_assert(((testBits >> 31) & 0x08ULL) != 0);
  my_assert(((testBits >> 31) & 0x10ULL) == 0);
  my_assert(((testBits >> 31) & 0x20ULL) == 0);
  my_assert(((testBits >> 31) & 0x40ULL) != 0);
  my_assert(((testBits >> 31) & 0x80ULL) == 0);

  /* 1010 0101 */
  my_assert(((testBits >> 32) & 0x01ULL) != 0);
  my_assert(((testBits >> 32) & 0x02ULL) == 0);
  my_assert(((testBits >> 32) & 0x04ULL) != 0);
  my_assert(((testBits >> 32) & 0x08ULL) == 0);
  my_assert(((testBits >> 32) & 0x10ULL) == 0);
  my_assert(((testBits >> 32) & 0x20ULL) != 0);
  my_assert(((testBits >> 32) & 0x40ULL) == 0);
  my_assert(((testBits >> 32) & 0x80ULL) != 0);

  /* 1101 0010 */
  my_assert(((testBits >> 33) & 0x01ULL) == 0);
  my_assert(((testBits >> 33) & 0x02ULL) != 0);
  my_assert(((testBits >> 33) & 0x04ULL) == 0);
  my_assert(((testBits >> 33) & 0x08ULL) == 0);
  my_assert(((testBits >> 33) & 0x10ULL) != 0);
  my_assert(((testBits >> 33) & 0x20ULL) == 0);
  my_assert(((testBits >> 33) & 0x40ULL) != 0);
  my_assert(((testBits >> 33) & 0x80ULL) != 0);

  /* 0110 1001 */
  my_assert(((testBits >> 34) & 0x01ULL) != 0);
  my_assert(((testBits >> 34) & 0x02ULL) == 0);
  my_assert(((testBits >> 34) & 0x04ULL) == 0);
  my_assert(((testBits >> 34) & 0x08ULL) != 0);
  my_assert(((testBits >> 34) & 0x10ULL) == 0);
  my_assert(((testBits >> 34) & 0x20ULL) != 0);
  my_assert(((testBits >> 34) & 0x40ULL) != 0);
  my_assert(((testBits >> 34) & 0x80ULL) == 0);

  /* 1011 0100 */
  my_assert(((testBits >> 35) & 0x01ULL) == 0);
  my_assert(((testBits >> 35) & 0x02ULL) == 0);
  my_assert(((testBits >> 35) & 0x04ULL) != 0);
  my_assert(((testBits >> 35) & 0x08ULL) == 0);
  my_assert(((testBits >> 35) & 0x10ULL) != 0);
  my_assert(((testBits >> 35) & 0x20ULL) != 0);
  my_assert(((testBits >> 35) & 0x40ULL) == 0);
  my_assert(((testBits >> 35) & 0x80ULL) != 0);

  /* 0101 1010 */
  my_assert(((testBits >> 36) & 0x01ULL) == 0);
  my_assert(((testBits >> 36) & 0x02ULL) != 0);
  my_assert(((testBits >> 36) & 0x04ULL) == 0);
  my_assert(((testBits >> 36) & 0x08ULL) != 0);
  my_assert(((testBits >> 36) & 0x10ULL) != 0);
  my_assert(((testBits >> 36) & 0x20ULL) == 0);
  my_assert(((testBits >> 36) & 0x40ULL) != 0);
  my_assert(((testBits >> 36) & 0x80ULL) == 0);

  /* 0010 1101 */
  my_assert(((testBits >> 37) & 0x01ULL) != 0);
  my_assert(((testBits >> 37) & 0x02ULL) == 0);
  my_assert(((testBits >> 37) & 0x04ULL) != 0);
  my_assert(((testBits >> 37) & 0x08ULL) != 0);
  my_assert(((testBits >> 37) & 0x10ULL) == 0);
  my_assert(((testBits >> 37) & 0x20ULL) != 0);
  my_assert(((testBits >> 37) & 0x40ULL) == 0);
  my_assert(((testBits >> 37) & 0x80ULL) == 0);

  /* 1001 0110 */
  my_assert(((testBits >> 38) & 0x01ULL) == 0);
  my_assert(((testBits >> 38) & 0x02ULL) != 0);
  my_assert(((testBits >> 38) & 0x04ULL) != 0);
  my_assert(((testBits >> 38) & 0x08ULL) == 0);
  my_assert(((testBits >> 38) & 0x10ULL) != 0);
  my_assert(((testBits >> 38) & 0x20ULL) == 0);
  my_assert(((testBits >> 38) & 0x40ULL) == 0);
  my_assert(((testBits >> 38) & 0x80ULL) != 0);

  /* 0100 1011 */
  my_assert(((testBits >> 39) & 0x01ULL) != 0);
  my_assert(((testBits >> 39) & 0x02ULL) != 0);
  my_assert(((testBits >> 39) & 0x04ULL) == 0);
  my_assert(((testBits >> 39) & 0x08ULL) != 0);
  my_assert(((testBits >> 39) & 0x10ULL) == 0);
  my_assert(((testBits >> 39) & 0x20ULL) == 0);
  my_assert(((testBits >> 39) & 0x40ULL) != 0);
  my_assert(((testBits >> 39) & 0x80ULL) == 0);

  /* 1010 0101 */
  my_assert(((testBits >> 40) & 0x01ULL) != 0);
  my_assert(((testBits >> 40) & 0x02ULL) == 0);
  my_assert(((testBits >> 40) & 0x04ULL) != 0);
  my_assert(((testBits >> 40) & 0x08ULL) == 0);
  my_assert(((testBits >> 40) & 0x10ULL) == 0);
  my_assert(((testBits >> 40) & 0x20ULL) != 0);
  my_assert(((testBits >> 40) & 0x40ULL) == 0);
  my_assert(((testBits >> 40) & 0x80ULL) != 0);

  /* 1101 0010 */
  my_assert(((testBits >> 41) & 0x01ULL) == 0);
  my_assert(((testBits >> 41) & 0x02ULL) != 0);
  my_assert(((testBits >> 41) & 0x04ULL) == 0);
  my_assert(((testBits >> 41) & 0x08ULL) == 0);
  my_assert(((testBits >> 41) & 0x10ULL) != 0);
  my_assert(((testBits >> 41) & 0x20ULL) == 0);
  my_assert(((testBits >> 41) & 0x40ULL) != 0);
  my_assert(((testBits >> 41) & 0x80ULL) != 0);

  /* 01101001 */
  my_assert(((testBits >> 42) & 0x01ULL) != 0);
  my_assert(((testBits >> 42) & 0x02ULL) == 0);
  my_assert(((testBits >> 42) & 0x04ULL) == 0);
  my_assert(((testBits >> 42) & 0x08ULL) != 0);
  my_assert(((testBits >> 42) & 0x10ULL) == 0);
  my_assert(((testBits >> 42) & 0x20ULL) != 0);
  my_assert(((testBits >> 42) & 0x40ULL) != 0);
  my_assert(((testBits >> 42) & 0x80ULL) == 0);

  /* 1011 0100 */
  my_assert(((testBits >> 43) & 0x01ULL) == 0);
  my_assert(((testBits >> 43) & 0x02ULL) == 0);
  my_assert(((testBits >> 43) & 0x04ULL) != 0);
  my_assert(((testBits >> 43) & 0x08ULL) == 0);
  my_assert(((testBits >> 43) & 0x10ULL) != 0);
  my_assert(((testBits >> 43) & 0x20ULL) != 0);
  my_assert(((testBits >> 43) & 0x40ULL) == 0);
  my_assert(((testBits >> 43) & 0x80ULL) != 0);

  /* 0101 1010 */
  my_assert(((testBits >> 44) & 0x01ULL) == 0);
  my_assert(((testBits >> 44) & 0x02ULL) != 0);
  my_assert(((testBits >> 44) & 0x04ULL) == 0);
  my_assert(((testBits >> 44) & 0x08ULL) != 0);
  my_assert(((testBits >> 44) & 0x10ULL) != 0);
  my_assert(((testBits >> 44) & 0x20ULL) == 0);
  my_assert(((testBits >> 44) & 0x40ULL) != 0);
  my_assert(((testBits >> 44) & 0x80ULL) == 0);

  /* 0010 1101 */
  my_assert(((testBits >> 45) & 0x01ULL) != 0);
  my_assert(((testBits >> 45) & 0x02ULL) == 0);
  my_assert(((testBits >> 45) & 0x04ULL) != 0);
  my_assert(((testBits >> 45) & 0x08ULL) != 0);
  my_assert(((testBits >> 45) & 0x10ULL) == 0);
  my_assert(((testBits >> 45) & 0x20ULL) != 0);
  my_assert(((testBits >> 45) & 0x40ULL) == 0);
  my_assert(((testBits >> 45) & 0x80ULL) == 0);

  /* 1001 0110 */
  my_assert(((testBits >> 46) & 0x01ULL) == 0);
  my_assert(((testBits >> 46) & 0x02ULL) != 0);
  my_assert(((testBits >> 46) & 0x04ULL) != 0);
  my_assert(((testBits >> 46) & 0x08ULL) == 0);
  my_assert(((testBits >> 46) & 0x10ULL) != 0);
  my_assert(((testBits >> 46) & 0x20ULL) == 0);
  my_assert(((testBits >> 46) & 0x40ULL) == 0);
  my_assert(((testBits >> 46) & 0x80ULL) != 0);

  /* 0100 1011 */
  my_assert(((testBits >> 47) & 0x01ULL) != 0);
  my_assert(((testBits >> 47) & 0x02ULL) != 0);
  my_assert(((testBits >> 47) & 0x04ULL) == 0);
  my_assert(((testBits >> 47) & 0x08ULL) != 0);
  my_assert(((testBits >> 47) & 0x10ULL) == 0);
  my_assert(((testBits >> 47) & 0x20ULL) == 0);
  my_assert(((testBits >> 47) & 0x40ULL) != 0);
  my_assert(((testBits >> 47) & 0x80ULL) == 0);

  /* 1010 0101 */
  my_assert(((testBits >> 48) & 0x01ULL) != 0);
  my_assert(((testBits >> 48) & 0x02ULL) == 0);
  my_assert(((testBits >> 48) & 0x04ULL) != 0);
  my_assert(((testBits >> 48) & 0x08ULL) == 0);
  my_assert(((testBits >> 48) & 0x10ULL) == 0);
  my_assert(((testBits >> 48) & 0x20ULL) != 0);
  my_assert(((testBits >> 48) & 0x40ULL) == 0);
  my_assert(((testBits >> 48) & 0x80ULL) != 0);

  /* 1101 0010 */
  my_assert(((testBits >> 49) & 0x01ULL) == 0);
  my_assert(((testBits >> 49) & 0x02ULL) != 0);
  my_assert(((testBits >> 49) & 0x04ULL) == 0);
  my_assert(((testBits >> 49) & 0x08ULL) == 0);
  my_assert(((testBits >> 49) & 0x10ULL) != 0);
  my_assert(((testBits >> 49) & 0x20ULL) == 0);
  my_assert(((testBits >> 49) & 0x40ULL) != 0);
  my_assert(((testBits >> 49) & 0x80ULL) != 0);

  /* 0110 1001 */
  my_assert(((testBits >> 50) & 0x01ULL) != 0);
  my_assert(((testBits >> 50) & 0x02ULL) == 0);
  my_assert(((testBits >> 50) & 0x04ULL) == 0);
  my_assert(((testBits >> 50) & 0x08ULL) != 0);
  my_assert(((testBits >> 50) & 0x10ULL) == 0);
  my_assert(((testBits >> 50) & 0x20ULL) != 0);
  my_assert(((testBits >> 50) & 0x40ULL) != 0);
  my_assert(((testBits >> 50) & 0x80ULL) == 0);

  /* 1011 0100 */
  my_assert(((testBits >> 51) & 0x01ULL) == 0);
  my_assert(((testBits >> 51) & 0x02ULL) == 0);
  my_assert(((testBits >> 51) & 0x04ULL) != 0);
  my_assert(((testBits >> 51) & 0x08ULL) == 0);
  my_assert(((testBits >> 51) & 0x10ULL) != 0);
  my_assert(((testBits >> 51) & 0x20ULL) != 0);
  my_assert(((testBits >> 51) & 0x40ULL) == 0);
  my_assert(((testBits >> 51) & 0x80ULL) != 0);

  /* 0101 1010 */
  my_assert(((testBits >> 52) & 0x01ULL) == 0);
  my_assert(((testBits >> 52) & 0x02ULL) != 0);
  my_assert(((testBits >> 52) & 0x04ULL) == 0);
  my_assert(((testBits >> 52) & 0x08ULL) != 0);
  my_assert(((testBits >> 52) & 0x10ULL) != 0);
  my_assert(((testBits >> 52) & 0x20ULL) == 0);
  my_assert(((testBits >> 52) & 0x40ULL) != 0);
  my_assert(((testBits >> 52) & 0x80ULL) == 0);

  /* 0010 1101 */
  my_assert(((testBits >> 53) & 0x01ULL) != 0);
  my_assert(((testBits >> 53) & 0x02ULL) == 0);
  my_assert(((testBits >> 53) & 0x04ULL) != 0);
  my_assert(((testBits >> 53) & 0x08ULL) != 0);
  my_assert(((testBits >> 53) & 0x10ULL) == 0);
  my_assert(((testBits >> 53) & 0x20ULL) != 0);
  my_assert(((testBits >> 53) & 0x40ULL) == 0);
  my_assert(((testBits >> 53) & 0x80ULL) == 0);

  /* 1001 0110 */
  my_assert(((testBits >> 54) & 0x01ULL) == 0);
  my_assert(((testBits >> 54) & 0x02ULL) != 0);
  my_assert(((testBits >> 54) & 0x04ULL) != 0);
  my_assert(((testBits >> 54) & 0x08ULL) == 0);
  my_assert(((testBits >> 54) & 0x10ULL) != 0);
  my_assert(((testBits >> 54) & 0x20ULL) == 0);
  my_assert(((testBits >> 54) & 0x40ULL) == 0);
  my_assert(((testBits >> 54) & 0x80ULL) != 0);

  /* 0100 1011 */
  my_assert(((testBits >> 55) & 0x01ULL) != 0);
  my_assert(((testBits >> 55) & 0x02ULL) != 0);
  my_assert(((testBits >> 55) & 0x04ULL) == 0);
  my_assert(((testBits >> 55) & 0x08ULL) != 0);
  my_assert(((testBits >> 55) & 0x10ULL) == 0);
  my_assert(((testBits >> 55) & 0x20ULL) == 0);
  my_assert(((testBits >> 55) & 0x40ULL) != 0);
  my_assert(((testBits >> 55) & 0x80ULL) == 0);

  /* 1010 0101 */
  my_assert(((testBits >> 56) & 0x01ULL) != 0);
  my_assert(((testBits >> 56) & 0x02ULL) == 0);
  my_assert(((testBits >> 56) & 0x04ULL) != 0);
  my_assert(((testBits >> 56) & 0x08ULL) == 0);
  my_assert(((testBits >> 56) & 0x10ULL) == 0);
  my_assert(((testBits >> 56) & 0x20ULL) != 0);
  my_assert(((testBits >> 56) & 0x40ULL) == 0);
  my_assert(((testBits >> 56) & 0x80ULL) != 0);

  /* 0101 0010 */
  my_assert(((testBits >> 57) & 0x01ULL) == 0);
  my_assert(((testBits >> 57) & 0x02ULL) != 0);
  my_assert(((testBits >> 57) & 0x04ULL) == 0);
  my_assert(((testBits >> 57) & 0x08ULL) == 0);
  my_assert(((testBits >> 57) & 0x10ULL) != 0);
  my_assert(((testBits >> 57) & 0x20ULL) == 0);
  my_assert(((testBits >> 57) & 0x40ULL) != 0);
  my_assert(((testBits >> 57) & 0x80ULL) == 0);

  /* 0010 1001 */
  my_assert(((testBits >> 58) & 0x01ULL) != 0);
  my_assert(((testBits >> 58) & 0x02ULL) == 0);
  my_assert(((testBits >> 58) & 0x04ULL) == 0);
  my_assert(((testBits >> 58) & 0x08ULL) != 0);
  my_assert(((testBits >> 58) & 0x10ULL) == 0);
  my_assert(((testBits >> 58) & 0x20ULL) != 0);
  my_assert(((testBits >> 58) & 0x40ULL) == 0);
  my_assert(((testBits >> 58) & 0x80ULL) == 0);

  /* 0001 0100 */
  my_assert(((testBits >> 59) & 0x01ULL) == 0);
  my_assert(((testBits >> 59) & 0x02ULL) == 0);
  my_assert(((testBits >> 59) & 0x04ULL) != 0);
  my_assert(((testBits >> 59) & 0x08ULL) == 0);
  my_assert(((testBits >> 59) & 0x10ULL) != 0);
  my_assert(((testBits >> 59) & 0x20ULL) == 0);
  my_assert(((testBits >> 59) & 0x40ULL) == 0);
  my_assert(((testBits >> 59) & 0x80ULL) == 0);

  /* 0000 1010 */
  my_assert(((testBits >> 60) & 0x01ULL) == 0);
  my_assert(((testBits >> 60) & 0x02ULL) != 0);
  my_assert(((testBits >> 60) & 0x04ULL) == 0);
  my_assert(((testBits >> 60) & 0x08ULL) != 0);
  my_assert(((testBits >> 60) & 0x10ULL) == 0);
  my_assert(((testBits >> 60) & 0x20ULL) == 0);
  my_assert(((testBits >> 60) & 0x40ULL) == 0);
  my_assert(((testBits >> 60) & 0x80ULL) == 0);

  /* 00000101 */
  my_assert(((testBits >> 61) & 0x01ULL) != 0);
  my_assert(((testBits >> 61) & 0x02ULL) == 0);
  my_assert(((testBits >> 61) & 0x04ULL) != 0);
  my_assert(((testBits >> 61) & 0x08ULL) == 0);
  my_assert(((testBits >> 61) & 0x10ULL) == 0);
  my_assert(((testBits >> 61) & 0x20ULL) == 0);
  my_assert(((testBits >> 61) & 0x40ULL) == 0);
  my_assert(((testBits >> 61) & 0x80ULL) == 0);

  /* 0000 0010 */
  my_assert(((testBits >> 62) & 0x01ULL) == 0);
  my_assert(((testBits >> 62) & 0x02ULL) != 0);
  my_assert(((testBits >> 62) & 0x04ULL) == 0);
  my_assert(((testBits >> 62) & 0x08ULL) == 0);
  my_assert(((testBits >> 62) & 0x10ULL) == 0);
  my_assert(((testBits >> 62) & 0x20ULL) == 0);
  my_assert(((testBits >> 62) & 0x40ULL) == 0);
  my_assert(((testBits >> 62) & 0x80ULL) == 0);

  /* 0000 0001 */
  my_assert(((testBits >> 63) & 0x01ULL) != 0);
  my_assert(((testBits >> 63) & 0x02ULL) == 0);
  my_assert(((testBits >> 63) & 0x04ULL) == 0);
  my_assert(((testBits >> 63) & 0x08ULL) == 0);
  my_assert(((testBits >> 63) & 0x10ULL) == 0);
  my_assert(((testBits >> 63) & 0x20ULL) == 0);
  my_assert(((testBits >> 63) & 0x40ULL) == 0);
  my_assert(((testBits >> 63) & 0x80ULL) == 0);

  /* 0000 0000 */
  my_assert(((testBits >> 64) & 0x01ULL) == 0);
  my_assert(((testBits >> 64) & 0x02ULL) == 0);
  my_assert(((testBits >> 64) & 0x04ULL) == 0);
  my_assert(((testBits >> 64) & 0x08ULL) == 0);
  my_assert(((testBits >> 64) & 0x10ULL) == 0);
  my_assert(((testBits >> 64) & 0x20ULL) == 0);
  my_assert(((testBits >> 64) & 0x40ULL) == 0);
  my_assert(((testBits >> 64) & 0x80ULL) == 0);

  return exit_status;

#if 0
	1010010110100101101001011010010110100101101001011010010110100101 .	0
	0101001011010010110100101101001011010010110100101101001011010010 .	1
	0010100101101001011010010110100101101001011010010110100101101001 .	2
	0001010010110100101101001011010010110100101101001011010010110100 .	3
	0000101001011010010110100101101001011010010110100101101001011010 .	4
	0000010100101101001011010010110100101101001011010010110100101101 .	5
	0000001010010110100101101001011010010110100101101001011010010110 .	6
	0000000101001011010010110100101101001011010010110100101101001011 .	7
	0000000010100101101001011010010110100101101001011010010110100101 .	8
	0000000001010010110100101101001011010010110100101101001011010010 .	9
	0000000000101001011010010110100101101001011010010110100101101001 .	10
	0000000000010100101101001011010010110100101101001011010010110100 .	11
	0000000000001010010110100101101001011010010110100101101001011010 .	12
	0000000000000101001011010010110100101101001011010010110100101101 .	13
	0000000000000010100101101001011010010110100101101001011010010110 .	14
	0000000000000001010010110100101101001011010010110100101101001011 .	15
	0000000000000000101001011010010110100101101001011010010110100101 . 	16
	0000000000000000010100101101001011010010110100101101001011010010 .	17
	0000000000000000001010010110100101101001011010010110100101101001 .	18
	0000000000000000000101001011010010110100101101001011010010110100 .	19
	0000000000000000000010100101101001011010010110100101101001011010 . 	20
	0000000000000000000001010010110100101101001011010010110100101101 .	21
	0000000000000000000000101001011010010110100101101001011010010110 .	22
	0000000000000000000000010100101101001011010010110100101101001011 .	23
	0000000000000000000000001010010110100101101001011010010110100101 .	24
	0000000000000000000000000101001011010010110100101101001011010010 .	25
	0000000000000000000000000010100101101001011010010110100101101001 .	26
	0000000000000000000000000001010010110100101101001011010010110100 . 	27
	0000000000000000000000000000101001011010010110100101101001011010 .	28
	0000000000000000000000000000010100101101001011010010110100101101 .	29
	0000000000000000000000000000001010010110100101101001011010010110 .	30
	0000000000000000000000000000000101001011010010110100101101001011 .	31
	0000000000000000000000000000000010100101101001011010010110100101 .	32
	0000000000000000000000000000000001010010110100101101001011010010 .	33
	0000000000000000000000000000000000101001011010010110100101101001 .	34
	0000000000000000000000000000000000010100101101001011010010110100 .	35
	0000000000000000000000000000000000001010010110100101101001011010 .	36
	0000000000000000000000000000000000000101001011010010110100101101 .	37
	0000000000000000000000000000000000000010100101101001011010010110 .	38
	0000000000000000000000000000000000000001010010110100101101001011 .	39
	0000000000000000000000000000000000000000101001011010010110100101 .	40
	0000000000000000000000000000000000000000010100101101001011010010 .	41
	0000000000000000000000000000000000000000001010010110100101101001 .	42
	0000000000000000000000000000000000000000000101001011010010110100 .	43
	0000000000000000000000000000000000000000000010100101101001011010 .	44
	0000000000000000000000000000000000000000000001010010110100101101 .	45
	0000000000000000000000000000000000000000000000101001011010010110 .	46
	0000000000000000000000000000000000000000000000010100101101001011 .	47
	0000000000000000000000000000000000000000000000001010010110100101 .	48
	0000000000000000000000000000000000000000000000000101001011010010 .	49
	0000000000000000000000000000000000000000000000000010100101101001 .	50
	0000000000000000000000000000000000000000000000000001010010110100 .	51
	0000000000000000000000000000000000000000000000000000101001011010 .	52
	0000000000000000000000000000000000000000000000000000010100101101 .	53
	0000000000000000000000000000000000000000000000000000001010010110 .	54
	0000000000000000000000000000000000000000000000000000000101001011 .	55
	0000000000000000000000000000000000000000000000000000000010100101 .	56
	0000000000000000000000000000000000000000000000000000000001010010 .	57
	0000000000000000000000000000000000000000000000000000000000101001 .	58
	0000000000000000000000000000000000000000000000000000000000010100 .	59
	0000000000000000000000000000000000000000000000000000000000001010 .	60
	0000000000000000000000000000000000000000000000000000000000000101 .	61
	0000000000000000000000000000000000000000000000000000000000000010 .	62
	0000000000000000000000000000000000000000000000000000000000000001 .	63
	0000000000000000000000000000000000000000000000000000000000000000 .	64
#endif
}
