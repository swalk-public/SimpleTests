

int exit_status;
#include "my_assert.h"

int neq_00(unsigned char uc) { return !(uc == 0x00); }
int neq_01(unsigned char uc) { return !(uc == 0x01); }
int neq_02(unsigned char uc) { return !(uc == 0x02); }

int neq_03(unsigned char uc) { return !(uc == 0x03); }
int neq_04(unsigned char uc) { return !(uc == 0x04); }
int neq_05(unsigned char uc) { return !(uc == 0x05); }

int neq_07(unsigned char uc) { return !(uc == 0x07); }
int neq_08(unsigned char uc) { return !(uc == 0x08); }
int neq_09(unsigned char uc) { return !(uc == 0x09); }

int neq_0f(unsigned char uc) { return !(uc == 0x0f); }
int neq_10(unsigned char uc) { return !(uc == 0x10); }
int neq_11(unsigned char uc) { return !(uc == 0x11); }

int neq_1f(unsigned char uc) { return !(uc == 0x1f); }
int neq_20(unsigned char uc) { return !(uc == 0x20); }
int neq_21(unsigned char uc) { return !(uc == 0x21); }

int neq_3f(unsigned char uc) { return !(uc == 0x3f); }
int neq_40(unsigned char uc) { return !(uc == 0x40); }
int neq_41(unsigned char uc) { return !(uc == 0x41); }

int neq_7f(unsigned char uc) { return !(uc == 0x7f); }
int neq_80(unsigned char uc) { return !(uc == 0x80); }
int neq_81(unsigned char uc) { return !(uc == 0x81); }

int neq_ff(unsigned char uc) { return !(uc == 0xff); }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(neq_00(uc) != 1);
  my_assert(neq_01(uc) == 1);

  uc = 0x01;
  my_assert(neq_00(uc) == 1);
  my_assert(neq_01(uc) != 1);
  my_assert(neq_02(uc) == 1);

  uc = 0x02;
  my_assert(neq_01(uc) == 1);
  my_assert(neq_02(uc) != 1);
  my_assert(neq_03(uc) == 1);

  uc = 0x04;
  my_assert(neq_03(uc) == 1);
  my_assert(neq_04(uc) != 1);
  my_assert(neq_05(uc) == 1);

  uc = 0x08;
  my_assert(neq_07(uc) == 1);
  my_assert(neq_08(uc) != 1);
  my_assert(neq_09(uc) == 1);

  uc = 0x10;
  my_assert(neq_0f(uc) == 1);
  my_assert(neq_10(uc) != 1);
  my_assert(neq_11(uc) == 1);

  uc = 0x20;
  my_assert(neq_1f(uc) == 1);
  my_assert(neq_20(uc) != 1);
  my_assert(neq_21(uc) == 1);

  uc = 0x40;
  my_assert(neq_3f(uc) == 1);
  my_assert(neq_40(uc) != 1);
  my_assert(neq_41(uc) == 1);

  uc = 0x80;
  my_assert(neq_7f(uc) == 1);
  my_assert(neq_80(uc) != 1);
  my_assert(neq_81(uc) == 1);

  uc = 0xff;
  my_assert(neq_ff(uc) != 1);

  return exit_status;
}
