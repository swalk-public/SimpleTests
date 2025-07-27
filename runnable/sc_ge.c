

int exit_status;

#include "my_assert.h"

int ge_m128(signed char sc) { return sc >= -128; }
int ge_m127(signed char sc) { return sc >= -127; }
int ge_m65(signed char sc) { return sc >= -65; }
int ge_m64(signed char sc) { return sc >= -64; }
int ge_m63(signed char sc) { return sc >= -63; }
int ge_m33(signed char sc) { return sc >= -33; }
int ge_m32(signed char sc) { return sc >= -32; }
int ge_m31(signed char sc) { return sc >= -31; }
int ge_m17(signed char sc) { return sc >= -17; }
int ge_m16(signed char sc) { return sc >= -16; }
int ge_m15(signed char sc) { return sc >= -15; }
int ge_m9(signed char sc) { return sc >= -9; }
int ge_m8(signed char sc) { return sc >= -8; }
int ge_m7(signed char sc) { return sc >= -7; }
int ge_m5(signed char sc) { return sc >= -5; }
int ge_m4(signed char sc) { return sc >= -4; }
int ge_m3(signed char sc) { return sc >= -3; }
int ge_m2(signed char sc) { return sc >= -2; }
int ge_m1(signed char sc) { return sc >= -1; }
int ge_00(signed char sc) { return sc >= 0; }
int ge_01(signed char sc) { return sc >= 1; }
int ge_02(signed char sc) { return sc >= 2; }
int ge_03(signed char sc) { return sc >= 3; }
int ge_04(signed char sc) { return sc >= 4; }
int ge_05(signed char sc) { return sc >= 5; }
int ge_07(signed char sc) { return sc >= 7; }
int ge_08(signed char sc) { return sc >= 8; }
int ge_09(signed char sc) { return sc >= 9; }
int ge_15(signed char sc) { return sc >= 15; }
int ge_16(signed char sc) { return sc >= 16; }
int ge_17(signed char sc) { return sc >= 17; }
int ge_31(signed char sc) { return sc >= 31; }
int ge_32(signed char sc) { return sc >= 32; }
int ge_33(signed char sc) { return sc >= 33; }
int ge_63(signed char sc) { return sc >= 63; }
int ge_64(signed char sc) { return sc >= 64; }
int ge_65(signed char sc) { return sc >= 65; }
int ge_127(signed char sc) { return sc >= 127; }

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
