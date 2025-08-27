

int exit_status;

#include "my_assert.h"

int le_00(unsigned char uc) {
  if (uc <= 0x00)
    return 1;
  else
    return 0;
}
int le_01(unsigned char uc) {
  if (uc <= 0x01)
    return 1;
  else
    return 0;
}
int le_02(unsigned char uc) {
  if (uc <= 0x02)
    return 1;
  else
    return 0;
}

int le_03(unsigned char uc) {
  if (uc <= 0x03)
    return 1;
  else
    return 0;
}
int le_04(unsigned char uc) {
  if (uc <= 0x04)
    return 1;
  else
    return 0;
}
int le_05(unsigned char uc) {
  if (uc <= 0x05)
    return 1;
  else
    return 0;
}

int le_07(unsigned char uc) {
  if (uc <= 0x07)
    return 1;
  else
    return 0;
}
int le_08(unsigned char uc) {
  if (uc <= 0x08)
    return 1;
  else
    return 0;
}
int le_09(unsigned char uc) {
  if (uc <= 0x09)
    return 1;
  else
    return 0;
}

int le_0f(unsigned char uc) {
  if (uc <= 0x0f)
    return 1;
  else
    return 0;
}
int le_10(unsigned char uc) {
  if (uc <= 0x10)
    return 1;
  else
    return 0;
}
int le_11(unsigned char uc) {
  if (uc <= 0x11)
    return 1;
  else
    return 0;
}

int le_1f(unsigned char uc) {
  if (uc <= 0x1f)
    return 1;
  else
    return 0;
}
int le_20(unsigned char uc) {
  if (uc <= 0x20)
    return 1;
  else
    return 0;
}
int le_21(unsigned char uc) {
  if (uc <= 0x21)
    return 1;
  else
    return 0;
}

int le_3f(unsigned char uc) {
  if (uc <= 0x3f)
    return 1;
  else
    return 0;
}
int le_40(unsigned char uc) {
  if (uc <= 0x40)
    return 1;
  else
    return 0;
}
int le_41(unsigned char uc) {
  if (uc <= 0x41)
    return 1;
  else
    return 0;
}

int le_7f(unsigned char uc) {
  if (uc <= 0x7f)
    return 1;
  else
    return 0;
}
int le_80(unsigned char uc) {
  if (uc <= 0x80)
    return 1;
  else
    return 0;
}
int le_81(unsigned char uc) {
  if (uc <= 0x81)
    return 1;
  else
    return 0;
}

int le_ff(unsigned char uc) {
  if (uc <= 0xff)
    return 1;
  else
    return 0;
}

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(le_00(uc) == 1);
  my_assert(le_01(uc) == 1);

  uc = 0x01;
  my_assert(le_00(uc) != 1);
  my_assert(le_01(uc) == 1);
  my_assert(le_02(uc) == 1);

  uc = 0x02;
  my_assert(le_01(uc) != 1);
  my_assert(le_02(uc) == 1);
  my_assert(le_03(uc) == 1);

  uc = 0x04;
  my_assert(le_03(uc) != 1);
  my_assert(le_04(uc) == 1);
  my_assert(le_05(uc) == 1);

  uc = 0x08;
  my_assert(le_07(uc) != 1);
  my_assert(le_08(uc) == 1);
  my_assert(le_09(uc) == 1);

  uc = 0x10;
  my_assert(le_0f(uc) != 1);
  my_assert(le_10(uc) == 1);
  my_assert(le_11(uc) == 1);

  uc = 0x20;
  my_assert(le_1f(uc) != 1);
  my_assert(le_20(uc) == 1);
  my_assert(le_21(uc) == 1);

  uc = 0x40;
  my_assert(le_3f(uc) != 1);
  my_assert(le_40(uc) == 1);
  my_assert(le_41(uc) == 1);

  uc = 0x80;
  my_assert(le_7f(uc) != 1);
  my_assert(le_80(uc) == 1);
  my_assert(le_81(uc) == 1);

  uc = 0xff;
  my_assert(le_ff(uc) == 1);

  return exit_status;
}
