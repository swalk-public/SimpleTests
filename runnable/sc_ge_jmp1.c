

int exit_status;

#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int ge_m128(signed char sc) {
  if (sc >= -128)
    return True();
  else
    return False();
}
int ge_m127(signed char sc) {
  if (sc >= -127)
    return True();
  else
    return False();
}
int ge_m65(signed char sc) {
  if (sc >= -65)
    return True();
  else
    return False();
}
int ge_m64(signed char sc) {
  if (sc >= -64)
    return True();
  else
    return False();
}
int ge_m63(signed char sc) {
  if (sc >= -63)
    return True();
  else
    return False();
}
int ge_m33(signed char sc) {
  if (sc >= -33)
    return True();
  else
    return False();
}
int ge_m32(signed char sc) {
  if (sc >= -32)
    return True();
  else
    return False();
}
int ge_m31(signed char sc) {
  if (sc >= -31)
    return True();
  else
    return False();
}
int ge_m17(signed char sc) {
  if (sc >= -17)
    return True();
  else
    return False();
}
int ge_m16(signed char sc) {
  if (sc >= -16)
    return True();
  else
    return False();
}
int ge_m15(signed char sc) {
  if (sc >= -15)
    return True();
  else
    return False();
}
int ge_m9(signed char sc) {
  if (sc >= -9)
    return True();
  else
    return False();
}
int ge_m8(signed char sc) {
  if (sc >= -8)
    return True();
  else
    return False();
}
int ge_m7(signed char sc) {
  if (sc >= -7)
    return True();
  else
    return False();
}
int ge_m5(signed char sc) {
  if (sc >= -5)
    return True();
  else
    return False();
}
int ge_m4(signed char sc) {
  if (sc >= -4)
    return True();
  else
    return False();
}
int ge_m3(signed char sc) {
  if (sc >= -3)
    return True();
  else
    return False();
}
int ge_m2(signed char sc) {
  if (sc >= -2)
    return True();
  else
    return False();
}
int ge_m1(signed char sc) {
  if (sc >= -1)
    return True();
  else
    return False();
}
int ge_00(signed char sc) {
  if (sc >= 0)
    return True();
  else
    return False();
}
int ge_01(signed char sc) {
  if (sc >= 1)
    return True();
  else
    return False();
}
int ge_02(signed char sc) {
  if (sc >= 2)
    return True();
  else
    return False();
}
int ge_03(signed char sc) {
  if (sc >= 3)
    return True();
  else
    return False();
}
int ge_04(signed char sc) {
  if (sc >= 4)
    return True();
  else
    return False();
}
int ge_05(signed char sc) {
  if (sc >= 5)
    return True();
  else
    return False();
}
int ge_07(signed char sc) {
  if (sc >= 7)
    return True();
  else
    return False();
}
int ge_08(signed char sc) {
  if (sc >= 8)
    return True();
  else
    return False();
}
int ge_09(signed char sc) {
  if (sc >= 9)
    return True();
  else
    return False();
}
int ge_15(signed char sc) {
  if (sc >= 15)
    return True();
  else
    return False();
}
int ge_16(signed char sc) {
  if (sc >= 16)
    return True();
  else
    return False();
}
int ge_17(signed char sc) {
  if (sc >= 17)
    return True();
  else
    return False();
}
int ge_31(signed char sc) {
  if (sc >= 31)
    return True();
  else
    return False();
}
int ge_32(signed char sc) {
  if (sc >= 32)
    return True();
  else
    return False();
}
int ge_33(signed char sc) {
  if (sc >= 33)
    return True();
  else
    return False();
}
int ge_63(signed char sc) {
  if (sc >= 63)
    return True();
  else
    return False();
}
int ge_64(signed char sc) {
  if (sc >= 64)
    return True();
  else
    return False();
}
int ge_65(signed char sc) {
  if (sc >= 65)
    return True();
  else
    return False();
}
int ge_127(signed char sc) {
  if (sc >= 127)
    return True();
  else
    return False();
}

static signed char sc;
int main() {
  sc = -128;
  my_assert(ge_m128(sc) == 1);
  my_assert(ge_m127(sc) != 1);

  sc = -64;
  my_assert(ge_m65(sc) == 1);
  my_assert(ge_m64(sc) == 1);
  my_assert(ge_m63(sc) != 1);

  sc = -32;
  my_assert(ge_m33(sc) == 1);
  my_assert(ge_m32(sc) == 1);
  my_assert(ge_m31(sc) != 1);

  sc = -16;
  my_assert(ge_m17(sc) == 1);
  my_assert(ge_m16(sc) == 1);
  my_assert(ge_m15(sc) != 1);

  sc = -8;
  my_assert(ge_m9(sc) == 1);
  my_assert(ge_m8(sc) == 1);
  my_assert(ge_m7(sc) != 1);

  sc = -4;
  my_assert(ge_m5(sc) == 1);
  my_assert(ge_m4(sc) == 1);
  my_assert(ge_m3(sc) != 1);

  sc = -2;
  my_assert(ge_m3(sc) == 1);
  my_assert(ge_m2(sc) == 1);
  my_assert(ge_m1(sc) != 1);

  sc = -1;
  my_assert(ge_m2(sc) == 1);
  my_assert(ge_m1(sc) == 1);
  my_assert(ge_00(sc) != 1);

  sc = 0;
  my_assert(ge_m1(sc) == 1);
  my_assert(ge_00(sc) == 1);
  my_assert(ge_01(sc) != 1);

  sc = 1;
  my_assert(ge_00(sc) == 1);
  my_assert(ge_01(sc) == 1);
  my_assert(ge_02(sc) != 1);

  sc = 2;
  my_assert(ge_01(sc) == 1);
  my_assert(ge_02(sc) == 1);
  my_assert(ge_03(sc) != 1);

  sc = 4;
  my_assert(ge_03(sc) == 1);
  my_assert(ge_04(sc) == 1);
  my_assert(ge_05(sc) != 1);

  sc = 8;
  my_assert(ge_07(sc) == 1);
  my_assert(ge_08(sc) == 1);
  my_assert(ge_09(sc) != 1);

  sc = 16;
  my_assert(ge_15(sc) == 1);
  my_assert(ge_16(sc) == 1);
  my_assert(ge_17(sc) != 1);

  sc = 32;
  my_assert(ge_31(sc) == 1);
  my_assert(ge_32(sc) == 1);
  my_assert(ge_33(sc) != 1);

  sc = 64;
  my_assert(ge_63(sc) == 1);
  my_assert(ge_64(sc) == 1);
  my_assert(ge_65(sc) != 1);

  sc = 127;
  my_assert(ge_127(sc) == 1);
  return exit_status;
}
