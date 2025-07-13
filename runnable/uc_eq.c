

int exit_status;

#include "my_assert.h"

int eq_00(unsigned char uc) { return uc == 0x00; }
int eq_01(unsigned char uc) { return uc == 0x01; }
int eq_02(unsigned char uc) { return uc == 0x02; }

int eq_03(unsigned char uc) { return uc == 0x03; }
int eq_04(unsigned char uc) { return uc == 0x04; }
int eq_05(unsigned char uc) { return uc == 0x05; }

int eq_07(unsigned char uc) { return uc == 0x07; }
int eq_08(unsigned char uc) { return uc == 0x08; }
int eq_09(unsigned char uc) { return uc == 0x09; }

int eq_0f(unsigned char uc) { return uc == 0x0f; }
int eq_10(unsigned char uc) { return uc == 0x10; }
int eq_11(unsigned char uc) { return uc == 0x11; }

int eq_1f(unsigned char uc) { return uc == 0x1f; }
int eq_20(unsigned char uc) { return uc == 0x20; }
int eq_21(unsigned char uc) { return uc == 0x21; }

int eq_3f(unsigned char uc) { return uc == 0x3f; }
int eq_40(unsigned char uc) { return uc == 0x40; }
int eq_41(unsigned char uc) { return uc == 0x41; }

int eq_7f(unsigned char uc) { return uc == 0x7f; }
int eq_80(unsigned char uc) { return uc == 0x80; }
int eq_81(unsigned char uc) { return uc == 0x81; }

int eq_ff(unsigned char uc) { return uc == 0xff; }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(eq_00(uc) == 1);
  my_assert(eq_01(uc) != 1);

  uc = 0x01;
  my_assert(eq_00(uc) != 1);
  my_assert(eq_01(uc) == 1);
  my_assert(eq_02(uc) != 1);

  uc = 0x02;
  my_assert(eq_01(uc) != 1);
  my_assert(eq_02(uc) == 1);
  my_assert(eq_03(uc) != 1);

  uc = 0x04;
  my_assert(eq_03(uc) != 1);
  my_assert(eq_04(uc) == 1);
  my_assert(eq_05(uc) != 1);

  uc = 0x08;
  my_assert(eq_07(uc) != 1);
  my_assert(eq_08(uc) == 1);
  my_assert(eq_09(uc) != 1);

  uc = 0x10;
  my_assert(eq_0f(uc) != 1);
  my_assert(eq_10(uc) == 1);
  my_assert(eq_11(uc) != 1);

  uc = 0x20;
  my_assert(eq_1f(uc) != 1);
  my_assert(eq_20(uc) == 1);
  my_assert(eq_21(uc) != 1);

  uc = 0x40;
  my_assert(eq_3f(uc) != 1);
  my_assert(eq_40(uc) == 1);
  my_assert(eq_41(uc) != 1);

  uc = 0x80;
  my_assert(eq_7f(uc) != 1);
  my_assert(eq_80(uc) == 1);
  my_assert(eq_81(uc) != 1);

  uc = 0xff;
  my_assert(eq_ff(uc) == 1);

  return exit_status;
}
