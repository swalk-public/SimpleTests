

int exit_status;

#include "my_assert.h"

int nlt_00(unsigned char uc) { return !(uc < 0x00); }
int nlt_01(unsigned char uc) { return !(uc < 0x01); }
int nlt_02(unsigned char uc) { return !(uc < 0x02); }

int nlt_03(unsigned char uc) { return !(uc < 0x03); }
int nlt_04(unsigned char uc) { return !(uc < 0x04); }
int nlt_05(unsigned char uc) { return !(uc < 0x05); }

int nlt_07(unsigned char uc) { return !(uc < 0x07); }
int nlt_08(unsigned char uc) { return !(uc < 0x08); }
int nlt_09(unsigned char uc) { return !(uc < 0x09); }

int nlt_0f(unsigned char uc) { return !(uc < 0x0f); }
int nlt_10(unsigned char uc) { return !(uc < 0x10); }
int nlt_11(unsigned char uc) { return !(uc < 0x11); }

int nlt_1f(unsigned char uc) { return !(uc < 0x1f); }
int nlt_20(unsigned char uc) { return !(uc < 0x20); }
int nlt_21(unsigned char uc) { return !(uc < 0x21); }

int nlt_3f(unsigned char uc) { return !(uc < 0x3f); }
int nlt_40(unsigned char uc) { return !(uc < 0x40); }
int nlt_41(unsigned char uc) { return !(uc < 0x41); }

int nlt_7f(unsigned char uc) { return !(uc < 0x7f); }
int nlt_80(unsigned char uc) { return !(uc < 0x80); }
int nlt_81(unsigned char uc) { return !(uc < 0x81); }

int nlt_ff(unsigned char uc) { return !(uc < 0xff); }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(nlt_00(uc) == 1);
  my_assert(nlt_01(uc) != 1);

  uc = 0x01;
  my_assert(nlt_00(uc) == 1);
  my_assert(nlt_01(uc) == 1);
  my_assert(nlt_02(uc) != 1);

  uc = 0x02;
  my_assert(nlt_01(uc) == 1);
  my_assert(nlt_02(uc) == 1);
  my_assert(nlt_03(uc) != 1);

  uc = 0x04;
  my_assert(nlt_03(uc) == 1);
  my_assert(nlt_04(uc) == 1);
  my_assert(nlt_05(uc) != 1);

  uc = 0x08;
  my_assert(nlt_07(uc) == 1);
  my_assert(nlt_08(uc) == 1);
  my_assert(nlt_09(uc) != 1);

  uc = 0x10;
  my_assert(nlt_0f(uc) == 1);
  my_assert(nlt_10(uc) == 1);
  my_assert(nlt_11(uc) != 1);

  uc = 0x20;
  my_assert(nlt_1f(uc) == 1);
  my_assert(nlt_20(uc) == 1);
  my_assert(nlt_21(uc) != 1);

  uc = 0x40;
  my_assert(nlt_3f(uc) == 1);
  my_assert(nlt_40(uc) == 1);
  my_assert(nlt_41(uc) != 1);

  uc = 0x80;
  my_assert(nlt_7f(uc) == 1);
  my_assert(nlt_80(uc) == 1);
  my_assert(nlt_81(uc) != 1);

  uc = 0xff;
  my_assert(nlt_ff(uc) == 1);

  return exit_status;
}
