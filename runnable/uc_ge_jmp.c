

int exit_status;

#include "my_assert.h"

int ge_00(unsigned char uc) {
  if (uc >= 0x00)
    return 1;
  else
    return 0;
}
int ge_01(unsigned char uc) {
  if (uc >= 0x01)
    return 1;
  else
    return 0;
}
int ge_02(unsigned char uc) {
  if (uc >= 0x02)
    return 1;
  else
    return 0;
}

int ge_03(unsigned char uc) {
  if (uc >= 0x03)
    return 1;
  else
    return 0;
}
int ge_04(unsigned char uc) {
  if (uc >= 0x04)
    return 1;
  else
    return 0;
}
int ge_05(unsigned char uc) {
  if (uc >= 0x05)
    return 1;
  else
    return 0;
}

int ge_07(unsigned char uc) {
  if (uc >= 0x07)
    return 1;
  else
    return 0;
}
int ge_08(unsigned char uc) {
  if (uc >= 0x08)
    return 1;
  else
    return 0;
}
int ge_09(unsigned char uc) {
  if (uc >= 0x09)
    return 1;
  else
    return 0;
}

int ge_0f(unsigned char uc) {
  if (uc >= 0x0f)
    return 1;
  else
    return 0;
}
int ge_10(unsigned char uc) {
  if (uc >= 0x10)
    return 1;
  else
    return 0;
}
int ge_11(unsigned char uc) {
  if (uc >= 0x11)
    return 1;
  else
    return 0;
}

int ge_1f(unsigned char uc) {
  if (uc >= 0x1f)
    return 1;
  else
    return 0;
}
int ge_20(unsigned char uc) {
  if (uc >= 0x20)
    return 1;
  else
    return 0;
}
int ge_21(unsigned char uc) {
  if (uc >= 0x21)
    return 1;
  else
    return 0;
}

int ge_3f(unsigned char uc) {
  if (uc >= 0x3f)
    return 1;
  else
    return 0;
}
int ge_40(unsigned char uc) {
  if (uc >= 0x40)
    return 1;
  else
    return 0;
}
int ge_41(unsigned char uc) {
  if (uc >= 0x41)
    return 1;
  else
    return 0;
}

int ge_7f(unsigned char uc) {
  if (uc >= 0x7f)
    return 1;
  else
    return 0;
}
int ge_80(unsigned char uc) {
  if (uc >= 0x80)
    return 1;
  else
    return 0;
}
int ge_81(unsigned char uc) {
  if (uc >= 0x81)
    return 1;
  else
    return 0;
}

int ge_ff(unsigned char uc) {
  if (uc >= 0xff)
    return 1;
  else
    return 0;
}

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(ge_00(uc) == 1);
  my_assert(ge_01(uc) != 1);

  uc = 0x01;
  my_assert(ge_00(uc) == 1);
  my_assert(ge_01(uc) == 1);
  my_assert(ge_02(uc) != 1);

  uc = 0x02;
  my_assert(ge_01(uc) == 1);
  my_assert(ge_02(uc) == 1);
  my_assert(ge_03(uc) != 1);

  uc = 0x04;
  my_assert(ge_03(uc) == 1);
  my_assert(ge_04(uc) == 1);
  my_assert(ge_05(uc) != 1);

  uc = 0x08;
  my_assert(ge_07(uc) == 1);
  my_assert(ge_08(uc) == 1);
  my_assert(ge_09(uc) != 1);

  uc = 0x10;
  my_assert(ge_0f(uc) == 1);
  my_assert(ge_10(uc) == 1);
  my_assert(ge_11(uc) != 1);

  uc = 0x20;
  my_assert(ge_1f(uc) == 1);
  my_assert(ge_20(uc) == 1);
  my_assert(ge_21(uc) != 1);

  uc = 0x40;
  my_assert(ge_3f(uc) == 1);
  my_assert(ge_40(uc) == 1);
  my_assert(ge_41(uc) != 1);

  uc = 0x80;
  my_assert(ge_7f(uc) == 1);
  my_assert(ge_80(uc) == 1);
  my_assert(ge_81(uc) != 1);

  uc = 0xff;
  my_assert(ge_ff(uc) == 1);

  return exit_status;
}
