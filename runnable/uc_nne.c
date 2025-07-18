

int exit_status;

#include "my_assert.h"

int nne_00(unsigned char uc) { return !(uc != 0x00); }
int nne_01(unsigned char uc) { return !(uc != 0x01); }
int nne_02(unsigned char uc) { return !(uc != 0x02); }

int nne_03(unsigned char uc) { return !(uc != 0x03); }
int nne_04(unsigned char uc) { return !(uc != 0x04); }
int nne_05(unsigned char uc) { return !(uc != 0x05); }

int nne_07(unsigned char uc) { return !(uc != 0x07); }
int nne_08(unsigned char uc) { return !(uc != 0x08); }
int nne_09(unsigned char uc) { return !(uc != 0x09); }

int nne_0f(unsigned char uc) { return !(uc != 0x0f); }
int nne_10(unsigned char uc) { return !(uc != 0x10); }
int nne_11(unsigned char uc) { return !(uc != 0x11); }

int nne_1f(unsigned char uc) { return !(uc != 0x1f); }
int nne_20(unsigned char uc) { return !(uc != 0x20); }
int nne_21(unsigned char uc) { return !(uc != 0x21); }

int nne_3f(unsigned char uc) { return !(uc != 0x3f); }
int nne_40(unsigned char uc) { return !(uc != 0x40); }
int nne_41(unsigned char uc) { return !(uc != 0x41); }

int nne_7f(unsigned char uc) { return !(uc != 0x7f); }
int nne_80(unsigned char uc) { return !(uc != 0x80); }
int nne_81(unsigned char uc) { return !(uc != 0x81); }

int nne_ff(unsigned char uc) { return !(uc != 0xff); }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(nne_00(uc) == 1);
  my_assert(nne_01(uc) != 1);

  uc = 0x01;
  my_assert(nne_00(uc) != 1);
  my_assert(nne_01(uc) == 1);
  my_assert(nne_02(uc) != 1);

  uc = 0x02;
  my_assert(nne_01(uc) != 1);
  my_assert(nne_02(uc) == 1);
  my_assert(nne_03(uc) != 1);

  uc = 0x04;
  my_assert(nne_03(uc) != 1);
  my_assert(nne_04(uc) == 1);
  my_assert(nne_05(uc) != 1);

  uc = 0x08;
  my_assert(nne_07(uc) != 1);
  my_assert(nne_08(uc) == 1);
  my_assert(nne_09(uc) != 1);

  uc = 0x10;
  my_assert(nne_0f(uc) != 1);
  my_assert(nne_10(uc) == 1);
  my_assert(nne_11(uc) != 1);

  uc = 0x20;
  my_assert(nne_1f(uc) != 1);
  my_assert(nne_20(uc) == 1);
  my_assert(nne_21(uc) != 1);

  uc = 0x40;
  my_assert(nne_3f(uc) != 1);
  my_assert(nne_40(uc) == 1);
  my_assert(nne_41(uc) != 1);

  uc = 0x80;
  my_assert(nne_7f(uc) != 1);
  my_assert(nne_80(uc) == 1);
  my_assert(nne_81(uc) != 1);

  uc = 0xff;
  my_assert(nne_ff(uc) == 1);

  return exit_status;
}
