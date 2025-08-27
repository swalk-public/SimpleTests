

int exit_status;

#include "my_assert.h"

int le_m128(signed char sc) {
  if (sc <= -128)
    return 1;
  else
    return 0;
}
int le_m127(signed char sc) {
  if (sc <= -127)
    return 1;
  else
    return 0;
}
int le_m65(signed char sc) {
  if (sc <= -65)
    return 1;
  else
    return 0;
}
int le_m64(signed char sc) {
  if (sc <= -64)
    return 1;
  else
    return 0;
}
int le_m63(signed char sc) {
  if (sc <= -63)
    return 1;
  else
    return 0;
}
int le_m33(signed char sc) {
  if (sc <= -33)
    return 1;
  else
    return 0;
}
int le_m32(signed char sc) {
  if (sc <= -32)
    return 1;
  else
    return 0;
}
int le_m31(signed char sc) {
  if (sc <= -31)
    return 1;
  else
    return 0;
}
int le_m17(signed char sc) {
  if (sc <= -17)
    return 1;
  else
    return 0;
}
int le_m16(signed char sc) {
  if (sc <= -16)
    return 1;
  else
    return 0;
}
int le_m15(signed char sc) {
  if (sc <= -15)
    return 1;
  else
    return 0;
}
int le_m9(signed char sc) {
  if (sc <= -9)
    return 1;
  else
    return 0;
}
int le_m8(signed char sc) {
  if (sc <= -8)
    return 1;
  else
    return 0;
}
int le_m7(signed char sc) {
  if (sc <= -7)
    return 1;
  else
    return 0;
}
int le_m5(signed char sc) {
  if (sc <= -5)
    return 1;
  else
    return 0;
}
int le_m4(signed char sc) {
  if (sc <= -4)
    return 1;
  else
    return 0;
}
int le_m3(signed char sc) {
  if (sc <= -3)
    return 1;
  else
    return 0;
}
int le_m2(signed char sc) {
  if (sc <= -2)
    return 1;
  else
    return 0;
}
int le_m1(signed char sc) {
  if (sc <= -1)
    return 1;
  else
    return 0;
}
int le_00(signed char sc) {
  if (sc <= 0)
    return 1;
  else
    return 0;
}
int le_01(signed char sc) {
  if (sc <= 1)
    return 1;
  else
    return 0;
}
int le_02(signed char sc) {
  if (sc <= 2)
    return 1;
  else
    return 0;
}
int le_03(signed char sc) {
  if (sc <= 3)
    return 1;
  else
    return 0;
}
int le_04(signed char sc) {
  if (sc <= 4)
    return 1;
  else
    return 0;
}
int le_05(signed char sc) {
  if (sc <= 5)
    return 1;
  else
    return 0;
}
int le_07(signed char sc) {
  if (sc <= 7)
    return 1;
  else
    return 0;
}
int le_08(signed char sc) {
  if (sc <= 8)
    return 1;
  else
    return 0;
}
int le_09(signed char sc) {
  if (sc <= 9)
    return 1;
  else
    return 0;
}
int le_15(signed char sc) {
  if (sc <= 15)
    return 1;
  else
    return 0;
}
int le_16(signed char sc) {
  if (sc <= 16)
    return 1;
  else
    return 0;
}
int le_17(signed char sc) {
  if (sc <= 17)
    return 1;
  else
    return 0;
}
int le_31(signed char sc) {
  if (sc <= 31)
    return 1;
  else
    return 0;
}
int le_32(signed char sc) {
  if (sc <= 32)
    return 1;
  else
    return 0;
}
int le_33(signed char sc) {
  if (sc <= 33)
    return 1;
  else
    return 0;
}
int le_63(signed char sc) {
  if (sc <= 63)
    return 1;
  else
    return 0;
}
int le_64(signed char sc) {
  if (sc <= 64)
    return 1;
  else
    return 0;
}
int le_65(signed char sc) {
  if (sc <= 65)
    return 1;
  else
    return 0;
}
int le_127(signed char sc) {
  if (sc <= 127)
    return 1;
  else
    return 0;
}

static signed char sc;
int main() {
  sc = -128;
  my_assert(le_m128(sc) == 1);
  my_assert(le_m127(sc) == 1);

  sc = -64;
  my_assert(le_m65(sc) != 1);
  my_assert(le_m64(sc) == 1);
  my_assert(le_m63(sc) == 1);

  sc = -32;
  my_assert(le_m33(sc) != 1);
  my_assert(le_m32(sc) == 1);
  my_assert(le_m31(sc) == 1);

  sc = -16;
  my_assert(le_m17(sc) != 1);
  my_assert(le_m16(sc) == 1);
  my_assert(le_m15(sc) == 1);

  sc = -8;
  my_assert(le_m9(sc) != 1);
  my_assert(le_m8(sc) == 1);
  my_assert(le_m7(sc) == 1);

  sc = -4;
  my_assert(le_m5(sc) != 1);
  my_assert(le_m4(sc) == 1);
  my_assert(le_m3(sc) == 1);

  sc = -2;
  my_assert(le_m3(sc) != 1);
  my_assert(le_m2(sc) == 1);
  my_assert(le_m1(sc) == 1);

  sc = -1;
  my_assert(le_m2(sc) != 1);
  my_assert(le_m1(sc) == 1);
  my_assert(le_00(sc) == 1);

  sc = 0;
  my_assert(le_m1(sc) != 1);
  my_assert(le_00(sc) == 1);
  my_assert(le_01(sc) == 1);

  sc = 1;
  my_assert(le_00(sc) != 1);
  my_assert(le_01(sc) == 1);
  my_assert(le_02(sc) == 1);

  sc = 2;
  my_assert(le_01(sc) != 1);
  my_assert(le_02(sc) == 1);
  my_assert(le_03(sc) == 1);

  sc = 4;
  my_assert(le_03(sc) != 1);
  my_assert(le_04(sc) == 1);
  my_assert(le_05(sc) == 1);

  sc = 8;
  my_assert(le_07(sc) != 1);
  my_assert(le_08(sc) == 1);
  my_assert(le_09(sc) == 1);

  sc = 16;
  my_assert(le_15(sc) != 1);
  my_assert(le_16(sc) == 1);
  my_assert(le_17(sc) == 1);

  sc = 32;
  my_assert(le_31(sc) != 1);
  my_assert(le_32(sc) == 1);
  my_assert(le_33(sc) == 1);

  sc = 64;
  my_assert(le_63(sc) != 1);
  my_assert(le_64(sc) == 1);
  my_assert(le_65(sc) == 1);

  sc = 127;
  my_assert(le_127(sc) == 1);
  return exit_status;
}
