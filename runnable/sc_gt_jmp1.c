

int exit_status;

#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int gt_m128(signed char sc) {
  if (sc > -128)
    return True();
  else
    return False();
}
int gt_m127(signed char sc) {
  if (sc > -127)
    return True();
  else
    return False();
}
int gt_m65(signed char sc) {
  if (sc > -65)
    return True();
  else
    return False();
}
int gt_m64(signed char sc) {
  if (sc > -64)
    return True();
  else
    return False();
}
int gt_m63(signed char sc) {
  if (sc > -63)
    return True();
  else
    return False();
}
int gt_m33(signed char sc) {
  if (sc > -33)
    return True();
  else
    return False();
}
int gt_m32(signed char sc) {
  if (sc > -32)
    return True();
  else
    return False();
}
int gt_m31(signed char sc) {
  if (sc > -31)
    return True();
  else
    return False();
}
int gt_m17(signed char sc) {
  if (sc > -17)
    return True();
  else
    return False();
}
int gt_m16(signed char sc) {
  if (sc > -16)
    return True();
  else
    return False();
}
int gt_m15(signed char sc) {
  if (sc > -15)
    return True();
  else
    return False();
}
int gt_m9(signed char sc) {
  if (sc > -9)
    return True();
  else
    return False();
}
int gt_m8(signed char sc) {
  if (sc > -8)
    return True();
  else
    return False();
}
int gt_m7(signed char sc) {
  if (sc > -7)
    return True();
  else
    return False();
}
int gt_m5(signed char sc) {
  if (sc > -5)
    return True();
  else
    return False();
}
int gt_m4(signed char sc) {
  if (sc > -4)
    return True();
  else
    return False();
}
int gt_m3(signed char sc) {
  if (sc > -3)
    return True();
  else
    return False();
}
int gt_m2(signed char sc) {
  if (sc > -2)
    return True();
  else
    return False();
}
int gt_m1(signed char sc) {
  if (sc > -1)
    return True();
  else
    return False();
}
int gt_00(signed char sc) {
  if (sc > 0)
    return True();
  else
    return False();
}
int gt_01(signed char sc) {
  if (sc > 1)
    return True();
  else
    return False();
}
int gt_02(signed char sc) {
  if (sc > 2)
    return True();
  else
    return False();
}
int gt_03(signed char sc) {
  if (sc > 3)
    return True();
  else
    return False();
}
int gt_04(signed char sc) {
  if (sc > 4)
    return True();
  else
    return False();
}
int gt_05(signed char sc) {
  if (sc > 5)
    return True();
  else
    return False();
}
int gt_07(signed char sc) {
  if (sc > 7)
    return True();
  else
    return False();
}
int gt_08(signed char sc) {
  if (sc > 8)
    return True();
  else
    return False();
}
int gt_09(signed char sc) {
  if (sc > 9)
    return True();
  else
    return False();
}
int gt_15(signed char sc) {
  if (sc > 15)
    return True();
  else
    return False();
}
int gt_16(signed char sc) {
  if (sc > 16)
    return True();
  else
    return False();
}
int gt_17(signed char sc) {
  if (sc > 17)
    return True();
  else
    return False();
}
int gt_31(signed char sc) {
  if (sc > 31)
    return True();
  else
    return False();
}
int gt_32(signed char sc) {
  if (sc > 32)
    return True();
  else
    return False();
}
int gt_33(signed char sc) {
  if (sc > 33)
    return True();
  else
    return False();
}
int gt_63(signed char sc) {
  if (sc > 63)
    return True();
  else
    return False();
}
int gt_64(signed char sc) {
  if (sc > 64)
    return True();
  else
    return False();
}
int gt_65(signed char sc) {
  if (sc > 65)
    return True();
  else
    return False();
}
int gt_127(signed char sc) {
  if (sc > 127)
    return True();
  else
    return False();
}

static signed char sc;
int main() {
  sc = -128;
  my_assert(gt_m128(sc) != 1);
  my_assert(gt_m127(sc) != 1);

  sc = -64;
  my_assert(gt_m65(sc) == 1);
  my_assert(gt_m64(sc) != 1);
  my_assert(gt_m63(sc) != 1);

  sc = -32;
  my_assert(gt_m33(sc) == 1);
  my_assert(gt_m32(sc) != 1);
  my_assert(gt_m31(sc) != 1);

  sc = -16;
  my_assert(gt_m17(sc) == 1);
  my_assert(gt_m16(sc) != 1);
  my_assert(gt_m15(sc) != 1);

  sc = -8;
  my_assert(gt_m9(sc) == 1);
  my_assert(gt_m8(sc) != 1);
  my_assert(gt_m7(sc) != 1);

  sc = -4;
  my_assert(gt_m5(sc) == 1);
  my_assert(gt_m4(sc) != 1);
  my_assert(gt_m3(sc) != 1);

  sc = -2;
  my_assert(gt_m3(sc) == 1);
  my_assert(gt_m2(sc) != 1);
  my_assert(gt_m1(sc) != 1);

  sc = -1;
  my_assert(gt_m2(sc) == 1);
  my_assert(gt_m1(sc) != 1);
  my_assert(gt_00(sc) != 1);

  sc = 0;
  my_assert(gt_m1(sc) == 1);
  my_assert(gt_00(sc) != 1);
  my_assert(gt_01(sc) != 1);

  sc = 1;
  my_assert(gt_00(sc) == 1);
  my_assert(gt_01(sc) != 1);
  my_assert(gt_02(sc) != 1);

  sc = 2;
  my_assert(gt_01(sc) == 1);
  my_assert(gt_02(sc) != 1);
  my_assert(gt_03(sc) != 1);

  sc = 4;
  my_assert(gt_03(sc) == 1);
  my_assert(gt_04(sc) != 1);
  my_assert(gt_05(sc) != 1);

  sc = 8;
  my_assert(gt_07(sc) == 1);
  my_assert(gt_08(sc) != 1);
  my_assert(gt_09(sc) != 1);

  sc = 16;
  my_assert(gt_15(sc) == 1);
  my_assert(gt_16(sc) != 1);
  my_assert(gt_17(sc) != 1);

  sc = 32;
  my_assert(gt_31(sc) == 1);
  my_assert(gt_32(sc) != 1);
  my_assert(gt_33(sc) != 1);

  sc = 64;
  my_assert(gt_63(sc) == 1);
  my_assert(gt_64(sc) != 1);
  my_assert(gt_65(sc) != 1);

  sc = 127;
  my_assert(gt_127(sc) != 1);
  return exit_status;
}
