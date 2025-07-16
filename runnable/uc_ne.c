

int exit_status;
#include "my_assert.h"

int ne_00(unsigned char uc) { return uc != 0x00; }
int ne_01(unsigned char uc) { return uc != 0x01; }
int ne_02(unsigned char uc) { return uc != 0x02; }

int ne_03(unsigned char uc) { return uc != 0x03; }
int ne_04(unsigned char uc) { return uc != 0x04; }
int ne_05(unsigned char uc) { return uc != 0x05; }

int ne_07(unsigned char uc) { return uc != 0x07; }
int ne_08(unsigned char uc) { return uc != 0x08; }
int ne_09(unsigned char uc) { return uc != 0x09; }

int ne_0f(unsigned char uc) { return uc != 0x0f; }
int ne_10(unsigned char uc) { return uc != 0x10; }
int ne_11(unsigned char uc) { return uc != 0x11; }

int ne_1f(unsigned char uc) { return uc != 0x1f; }
int ne_20(unsigned char uc) { return uc != 0x20; }
int ne_21(unsigned char uc) { return uc != 0x21; }

int ne_3f(unsigned char uc) { return uc != 0x3f; }
int ne_40(unsigned char uc) { return uc != 0x40; }
int ne_41(unsigned char uc) { return uc != 0x41; }

int ne_7f(unsigned char uc) { return uc != 0x7f; }
int ne_80(unsigned char uc) { return uc != 0x80; }
int ne_81(unsigned char uc) { return uc != 0x81; }

int ne_ff(unsigned char uc) { return uc != 0xff; }

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(ne_00(uc) != 1);
  my_assert(ne_01(uc) == 1);

  uc = 0x01;
  my_assert(ne_00(uc) == 1);
  my_assert(ne_01(uc) != 1);
  my_assert(ne_02(uc) == 1);

  uc = 0x02;
  my_assert(ne_01(uc) == 1);
  my_assert(ne_02(uc) != 1);
  my_assert(ne_03(uc) == 1);

  uc = 0x04;
  my_assert(ne_03(uc) == 1);
  my_assert(ne_04(uc) != 1);
  my_assert(ne_05(uc) == 1);

  uc = 0x08;
  my_assert(ne_07(uc) == 1);
  my_assert(ne_08(uc) != 1);
  my_assert(ne_09(uc) == 1);

  uc = 0x10;
  my_assert(ne_0f(uc) == 1);
  my_assert(ne_10(uc) != 1);
  my_assert(ne_11(uc) == 1);

  uc = 0x20;
  my_assert(ne_1f(uc) == 1);
  my_assert(ne_20(uc) != 1);
  my_assert(ne_21(uc) == 1);

  uc = 0x40;
  my_assert(ne_3f(uc) == 1);
  my_assert(ne_40(uc) != 1);
  my_assert(ne_41(uc) == 1);

  uc = 0x80;
  my_assert(ne_7f(uc) == 1);
  my_assert(ne_80(uc) != 1);
  my_assert(ne_81(uc) == 1);

  uc = 0xff;
  my_assert(ne_ff(uc) != 1);

  return exit_status;
}
