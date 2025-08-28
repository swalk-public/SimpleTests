

int exit_status;

#include "my_assert.h"

int nge_00(unsigned char uc) { return !(uc >= 0x00); }
int nge_01(unsigned char uc) { return !(uc >= 0x01); }
int nge_02(unsigned char uc) { return !(uc >= 0x02); }

int nge_03(unsigned char uc) { return !(uc >= 0x03); }
int nge_04(unsigned char uc) { return !(uc >= 0x04); }
int nge_05(unsigned char uc) { return !(uc >= 0x05); }

int nge_07(unsigned char uc) { return !(uc >= 0x07); }
int nge_08(unsigned char uc) { return !(uc >= 0x08); }
int nge_09(unsigned char uc) { return !(uc >= 0x09); }

int nge_0f(unsigned char uc) { return !(uc >= 0x0f); }
int nge_10(unsigned char uc) { return !(uc >= 0x10); }
int nge_11(unsigned char uc) { return !(uc >= 0x11); }

int nge_1f(unsigned char uc) { return !(uc >= 0x1f); }
int nge_20(unsigned char uc) { return !(uc >= 0x20); }
int nge_21(unsigned char uc) { return !(uc >= 0x21); }

int nge_3f(unsigned char uc) { return !(uc >= 0x3f); }
int nge_40(unsigned char uc) { return !(uc >= 0x40); }
int nge_41(unsigned char uc) { return !(uc >= 0x41); }

int nge_7f(unsigned char uc) { return !(uc >= 0x7f); }
int nge_80(unsigned char uc) { return !(uc >= 0x80); }
int nge_81(unsigned char uc) { return !(uc >= 0x81); }

int nge_ff(unsigned char uc) { return !(uc >= 0xff); }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(nge_00(uc) != 1);
  my_assert(nge_01(uc) == 1);

  uc = 0x01;
  my_assert(nge_00(uc) != 1);
  my_assert(nge_01(uc) != 1);
  my_assert(nge_02(uc) == 1);

  uc = 0x02;
  my_assert(nge_01(uc) != 1);
  my_assert(nge_02(uc) != 1);
  my_assert(nge_03(uc) == 1);

  uc = 0x04;
  my_assert(nge_03(uc) != 1);
  my_assert(nge_04(uc) != 1);
  my_assert(nge_05(uc) == 1);

  uc = 0x08;
  my_assert(nge_07(uc) != 1);
  my_assert(nge_08(uc) != 1);
  my_assert(nge_09(uc) == 1);

  uc = 0x10;
  my_assert(nge_0f(uc) != 1);
  my_assert(nge_10(uc) != 1);
  my_assert(nge_11(uc) == 1);

  uc = 0x20;
  my_assert(nge_1f(uc) != 1);
  my_assert(nge_20(uc) != 1);
  my_assert(nge_21(uc) == 1);

  uc = 0x40;
  my_assert(nge_3f(uc) != 1);
  my_assert(nge_40(uc) != 1);
  my_assert(nge_41(uc) == 1);

  uc = 0x80;
  my_assert(nge_7f(uc) != 1);
  my_assert(nge_80(uc) != 1);
  my_assert(nge_81(uc) == 1);

  uc = 0xff;
  my_assert(nge_ff(uc) != 1);

  return exit_status;
}
