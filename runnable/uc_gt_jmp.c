

int exit_status;

#include "my_assert.h"

int gt_00(unsigned char uc) {
  if (uc > 0x00)
    return 1;
  else
    return 0;
}
int gt_01(unsigned char uc) {
  if (uc > 0x01)
    return 1;
  else
    return 0;
}
int gt_02(unsigned char uc) {
  if (uc > 0x02)
    return 1;
  else
    return 0;
}

int gt_03(unsigned char uc) {
  if (uc > 0x03)
    return 1;
  else
    return 0;
}
int gt_04(unsigned char uc) {
  if (uc > 0x04)
    return 1;
  else
    return 0;
}
int gt_05(unsigned char uc) {
  if (uc > 0x05)
    return 1;
  else
    return 0;
}

int gt_07(unsigned char uc) {
  if (uc > 0x07)
    return 1;
  else
    return 0;
}
int gt_08(unsigned char uc) {
  if (uc > 0x08)
    return 1;
  else
    return 0;
}
int gt_09(unsigned char uc) {
  if (uc > 0x09)
    return 1;
  else
    return 0;
}

int gt_0f(unsigned char uc) {
  if (uc > 0x0f)
    return 1;
  else
    return 0;
}
int gt_10(unsigned char uc) {
  if (uc > 0x10)
    return 1;
  else
    return 0;
}
int gt_11(unsigned char uc) {
  if (uc > 0x11)
    return 1;
  else
    return 0;
}

int gt_1f(unsigned char uc) {
  if (uc > 0x1f)
    return 1;
  else
    return 0;
}
int gt_20(unsigned char uc) {
  if (uc > 0x20)
    return 1;
  else
    return 0;
}
int gt_21(unsigned char uc) {
  if (uc > 0x21)
    return 1;
  else
    return 0;
}

int gt_3f(unsigned char uc) {
  if (uc > 0x3f)
    return 1;
  else
    return 0;
}
int gt_40(unsigned char uc) {
  if (uc > 0x40)
    return 1;
  else
    return 0;
}
int gt_41(unsigned char uc) {
  if (uc > 0x41)
    return 1;
  else
    return 0;
}

int gt_7f(unsigned char uc) {
  if (uc > 0x7f)
    return 1;
  else
    return 0;
}
int gt_80(unsigned char uc) {
  if (uc > 0x80)
    return 1;
  else
    return 0;
}
int gt_81(unsigned char uc) {
  if (uc > 0x81)
    return 1;
  else
    return 0;
}

int gt_ff(unsigned char uc) {
  if (uc > 0xff)
    return 1;
  else
    return 0;
}

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(gt_00(uc) != 1);
  my_assert(gt_01(uc) != 1);

  uc = 0x01;
  my_assert(gt_00(uc) == 1);
  my_assert(gt_01(uc) != 1);
  my_assert(gt_02(uc) != 1);

  uc = 0x02;
  my_assert(gt_01(uc) == 1);
  my_assert(gt_02(uc) != 1);
  my_assert(gt_03(uc) != 1);

  uc = 0x04;
  my_assert(gt_03(uc) == 1);
  my_assert(gt_04(uc) != 1);
  my_assert(gt_05(uc) != 1);

  uc = 0x08;
  my_assert(gt_07(uc) == 1);
  my_assert(gt_08(uc) != 1);
  my_assert(gt_09(uc) != 1);

  uc = 0x10;
  my_assert(gt_0f(uc) == 1);
  my_assert(gt_10(uc) != 1);
  my_assert(gt_11(uc) != 1);

  uc = 0x20;
  my_assert(gt_1f(uc) == 1);
  my_assert(gt_20(uc) != 1);
  my_assert(gt_21(uc) != 1);

  uc = 0x40;
  my_assert(gt_3f(uc) == 1);
  my_assert(gt_40(uc) != 1);
  my_assert(gt_41(uc) != 1);

  uc = 0x80;
  my_assert(gt_7f(uc) == 1);
  my_assert(gt_80(uc) != 1);
  my_assert(gt_81(uc) != 1);

  uc = 0xff;
  my_assert(gt_ff(uc) != 1);

  return exit_status;
}
