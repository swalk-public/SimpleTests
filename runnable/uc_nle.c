

int exit_status;

#include "my_assert.h"

int nle_00(unsigned char uc) { return !(uc <= 0x00); }
int nle_01(unsigned char uc) { return !(uc <= 0x01); }
int nle_02(unsigned char uc) { return !(uc <= 0x02); }

int nle_03(unsigned char uc) { return !(uc <= 0x03); }
int nle_04(unsigned char uc) { return !(uc <= 0x04); }
int nle_05(unsigned char uc) { return !(uc <= 0x05); }

int nle_07(unsigned char uc) { return !(uc <= 0x07); }
int nle_08(unsigned char uc) { return !(uc <= 0x08); }
int nle_09(unsigned char uc) { return !(uc <= 0x09); }

int nle_0f(unsigned char uc) { return !(uc <= 0x0f); }
int nle_10(unsigned char uc) { return !(uc <= 0x10); }
int nle_11(unsigned char uc) { return !(uc <= 0x11); }

int nle_1f(unsigned char uc) { return !(uc <= 0x1f); }
int nle_20(unsigned char uc) { return !(uc <= 0x20); }
int nle_21(unsigned char uc) { return !(uc <= 0x21); }

int nle_3f(unsigned char uc) { return !(uc <= 0x3f); }
int nle_40(unsigned char uc) { return !(uc <= 0x40); }
int nle_41(unsigned char uc) { return !(uc <= 0x41); }

int nle_7f(unsigned char uc) { return !(uc <= 0x7f); }
int nle_80(unsigned char uc) { return !(uc <= 0x80); }
int nle_81(unsigned char uc) { return !(uc <= 0x81); }

int nle_ff(unsigned char uc) { return !(uc <= 0xff); }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(nle_00(uc) != 1);
  my_assert(nle_01(uc) != 1);

  uc = 0x01;
  my_assert(nle_00(uc) == 1);
  my_assert(nle_01(uc) != 1);
  my_assert(nle_02(uc) != 1);

  uc = 0x02;
  my_assert(nle_01(uc) == 1);
  my_assert(nle_02(uc) != 1);
  my_assert(nle_03(uc) != 1);

  uc = 0x04;
  my_assert(nle_03(uc) == 1);
  my_assert(nle_04(uc) != 1);
  my_assert(nle_05(uc) != 1);

  uc = 0x08;
  my_assert(nle_07(uc) == 1);
  my_assert(nle_08(uc) != 1);
  my_assert(nle_09(uc) != 1);

  uc = 0x10;
  my_assert(nle_0f(uc) == 1);
  my_assert(nle_10(uc) != 1);
  my_assert(nle_11(uc) != 1);

  uc = 0x20;
  my_assert(nle_1f(uc) == 1);
  my_assert(nle_20(uc) != 1);
  my_assert(nle_21(uc) != 1);

  uc = 0x40;
  my_assert(nle_3f(uc) == 1);
  my_assert(nle_40(uc) != 1);
  my_assert(nle_41(uc) != 1);

  uc = 0x80;
  my_assert(nle_7f(uc) == 1);
  my_assert(nle_80(uc) != 1);
  my_assert(nle_81(uc) != 1);

  uc = 0xff;
  my_assert(nle_ff(uc) != 1);

  return exit_status;
}
