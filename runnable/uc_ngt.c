

int exit_status;

#include "my_assert.h"

int ngt_00(unsigned char uc) { return !(uc > 0x00); }
int ngt_01(unsigned char uc) { return !(uc > 0x01); }
int ngt_02(unsigned char uc) { return !(uc > 0x02); }

int ngt_03(unsigned char uc) { return !(uc > 0x03); }
int ngt_04(unsigned char uc) { return !(uc > 0x04); }
int ngt_05(unsigned char uc) { return !(uc > 0x05); }

int ngt_07(unsigned char uc) { return !(uc > 0x07); }
int ngt_08(unsigned char uc) { return !(uc > 0x08); }
int ngt_09(unsigned char uc) { return !(uc > 0x09); }

int ngt_0f(unsigned char uc) { return !(uc > 0x0f); }
int ngt_10(unsigned char uc) { return !(uc > 0x10); }
int ngt_11(unsigned char uc) { return !(uc > 0x11); }

int ngt_1f(unsigned char uc) { return !(uc > 0x1f); }
int ngt_20(unsigned char uc) { return !(uc > 0x20); }
int ngt_21(unsigned char uc) { return !(uc > 0x21); }

int ngt_3f(unsigned char uc) { return !(uc > 0x3f); }
int ngt_40(unsigned char uc) { return !(uc > 0x40); }
int ngt_41(unsigned char uc) { return !(uc > 0x41); }

int ngt_7f(unsigned char uc) { return !(uc > 0x7f); }
int ngt_80(unsigned char uc) { return !(uc > 0x80); }
int ngt_81(unsigned char uc) { return !(uc > 0x81); }

int ngt_ff(unsigned char uc) { return !(uc > 0xff); }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(ngt_00(uc) == 1);
  my_assert(ngt_01(uc) == 1);

  uc = 0x01;
  my_assert(ngt_00(uc) != 1);
  my_assert(ngt_01(uc) == 1);
  my_assert(ngt_02(uc) == 1);

  uc = 0x02;
  my_assert(ngt_01(uc) != 1);
  my_assert(ngt_02(uc) == 1);
  my_assert(ngt_03(uc) == 1);

  uc = 0x04;
  my_assert(ngt_03(uc) != 1);
  my_assert(ngt_04(uc) == 1);
  my_assert(ngt_05(uc) == 1);

  uc = 0x08;
  my_assert(ngt_07(uc) != 1);
  my_assert(ngt_08(uc) == 1);
  my_assert(ngt_09(uc) == 1);

  uc = 0x10;
  my_assert(ngt_0f(uc) != 1);
  my_assert(ngt_10(uc) == 1);
  my_assert(ngt_11(uc) == 1);

  uc = 0x20;
  my_assert(ngt_1f(uc) != 1);
  my_assert(ngt_20(uc) == 1);
  my_assert(ngt_21(uc) == 1);

  uc = 0x40;
  my_assert(ngt_3f(uc) != 1);
  my_assert(ngt_40(uc) == 1);
  my_assert(ngt_41(uc) == 1);

  uc = 0x80;
  my_assert(ngt_7f(uc) != 1);
  my_assert(ngt_80(uc) == 1);
  my_assert(ngt_81(uc) == 1);

  uc = 0xff;
  my_assert(ngt_ff(uc) == 1);

  return exit_status;
}
