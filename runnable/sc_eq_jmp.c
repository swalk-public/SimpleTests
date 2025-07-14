

int exit_status;

#include "my_assert.h"

int eq_m128(signed char sc) {
  if (sc == -128)
    return 1;
  else
    return 0;
}
int eq_m127(signed char sc) {
  if (sc == -127)
    return 1;
  else
    return 0;
}
int eq_m65(signed char sc) {
  if (sc == -65)
    return 1;
  else
    return 0;
}
int eq_m64(signed char sc) {
  if (sc == -64)
    return 1;
  else
    return 0;
}
int eq_m63(signed char sc) {
  if (sc == -63)
    return 1;
  else
    return 0;
}
int eq_m33(signed char sc) {
  if (sc == -33)
    return 1;
  else
    return 0;
}
int eq_m32(signed char sc) {
  if (sc == -32)
    return 1;
  else
    return 0;
}
int eq_m31(signed char sc) {
  if (sc == -31)
    return 1;
  else
    return 0;
}
int eq_m17(signed char sc) {
  if (sc == -17)
    return 1;
  else
    return 0;
}
int eq_m16(signed char sc) {
  if (sc == -16)
    return 1;
  else
    return 0;
}
int eq_m15(signed char sc) {
  if (sc == -15)
    return 1;
  else
    return 0;
}
int eq_m9(signed char sc) {
  if (sc == -9)
    return 1;
  else
    return 0;
}
int eq_m8(signed char sc) {
  if (sc == -8)
    return 1;
  else
    return 0;
}
int eq_m7(signed char sc) {
  if (sc == -7)
    return 1;
  else
    return 0;
}
int eq_m5(signed char sc) {
  if (sc == -5)
    return 1;
  else
    return 0;
}
int eq_m4(signed char sc) {
  if (sc == -4)
    return 1;
  else
    return 0;
}
int eq_m3(signed char sc) {
  if (sc == -3)
    return 1;
  else
    return 0;
}
int eq_m2(signed char sc) {
  if (sc == -2)
    return 1;
  else
    return 0;
}
int eq_m1(signed char sc) {
  if (sc == -1)
    return 1;
  else
    return 0;
}
int eq_00(signed char sc) {
  if (sc == 0)
    return 1;
  else
    return 0;
}
int eq_01(signed char sc) {
  if (sc == 1)
    return 1;
  else
    return 0;
}
int eq_02(signed char sc) {
  if (sc == 2)
    return 1;
  else
    return 0;
}
int eq_03(signed char sc) {
  if (sc == 3)
    return 1;
  else
    return 0;
}
int eq_04(signed char sc) {
  if (sc == 4)
    return 1;
  else
    return 0;
}
int eq_05(signed char sc) {
  if (sc == 5)
    return 1;
  else
    return 0;
}
int eq_07(signed char sc) {
  if (sc == 7)
    return 1;
  else
    return 0;
}
int eq_08(signed char sc) {
  if (sc == 8)
    return 1;
  else
    return 0;
}
int eq_09(signed char sc) {
  if (sc == 9)
    return 1;
  else
    return 0;
}
int eq_15(signed char sc) {
  if (sc == 15)
    return 1;
  else
    return 0;
}
int eq_16(signed char sc) {
  if (sc == 16)
    return 1;
  else
    return 0;
}
int eq_17(signed char sc) {
  if (sc == 17)
    return 1;
  else
    return 0;
}
int eq_31(signed char sc) {
  if (sc == 31)
    return 1;
  else
    return 0;
}
int eq_32(signed char sc) {
  if (sc == 32)
    return 1;
  else
    return 0;
}
int eq_33(signed char sc) {
  if (sc == 33)
    return 1;
  else
    return 0;
}
int eq_63(signed char sc) {
  if (sc == 63)
    return 1;
  else
    return 0;
}
int eq_64(signed char sc) {
  if (sc == 64)
    return 1;
  else
    return 0;
}
int eq_65(signed char sc) {
  if (sc == 65)
    return 1;
  else
    return 0;
}
int eq_127(signed char sc) {
  if (sc == 127)
    return 1;
  else
    return 0;
}

static signed char sc;
int main() {
  sc = -128;
  my_assert(eq_m128(sc) == 1);
  my_assert(eq_m127(sc) != 1);

  sc = -64;
  my_assert(eq_m65(sc) != 1);
  my_assert(eq_m64(sc) == 1);
  my_assert(eq_m63(sc) != 1);

  sc = -32;
  my_assert(eq_m33(sc) != 1);
  my_assert(eq_m32(sc) == 1);
  my_assert(eq_m31(sc) != 1);

  sc = -16;
  my_assert(eq_m17(sc) != 1);
  my_assert(eq_m16(sc) == 1);
  my_assert(eq_m15(sc) != 1);

  sc = -8;
  my_assert(eq_m9(sc) != 1);
  my_assert(eq_m8(sc) == 1);
  my_assert(eq_m7(sc) != 1);

  sc = -4;
  my_assert(eq_m5(sc) != 1);
  my_assert(eq_m4(sc) == 1);
  my_assert(eq_m3(sc) != 1);

  sc = -2;
  my_assert(eq_m3(sc) != 1);
  my_assert(eq_m2(sc) == 1);
  my_assert(eq_m1(sc) != 1);

  sc = -1;
  my_assert(eq_m2(sc) != 1);
  my_assert(eq_m1(sc) == 1);
  my_assert(eq_00(sc) != 1);

  sc = 0;
  my_assert(eq_m1(sc) != 1);
  my_assert(eq_00(sc) == 1);
  my_assert(eq_01(sc) != 1);

  sc = 1;
  my_assert(eq_00(sc) != 1);
  my_assert(eq_01(sc) == 1);
  my_assert(eq_02(sc) != 1);

  sc = 2;
  my_assert(eq_01(sc) != 1);
  my_assert(eq_02(sc) == 1);
  my_assert(eq_03(sc) != 1);

  sc = 4;
  my_assert(eq_03(sc) != 1);
  my_assert(eq_04(sc) == 1);
  my_assert(eq_05(sc) != 1);

  sc = 8;
  my_assert(eq_07(sc) != 1);
  my_assert(eq_08(sc) == 1);
  my_assert(eq_09(sc) != 1);

  sc = 16;
  my_assert(eq_15(sc) != 1);
  my_assert(eq_16(sc) == 1);
  my_assert(eq_17(sc) != 1);

  sc = 32;
  my_assert(eq_31(sc) != 1);
  my_assert(eq_32(sc) == 1);
  my_assert(eq_33(sc) != 1);

  sc = 64;
  my_assert(eq_63(sc) != 1);
  my_assert(eq_64(sc) == 1);
  my_assert(eq_65(sc) != 1);

  sc = 127;
  my_assert(eq_127(sc) == 1);
  return exit_status;
}
