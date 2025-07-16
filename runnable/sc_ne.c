

int exit_status;

#include "my_assert.h"

int ne_m128(signed char sc) { return sc != -128; }
int ne_m127(signed char sc) { return sc != -127; }
int ne_m65(signed char sc) { return sc != -65; }
int ne_m64(signed char sc) { return sc != -64; }
int ne_m63(signed char sc) { return sc != -63; }
int ne_m33(signed char sc) { return sc != -33; }
int ne_m32(signed char sc) { return sc != -32; }
int ne_m31(signed char sc) { return sc != -31; }
int ne_m17(signed char sc) { return sc != -17; }
int ne_m16(signed char sc) { return sc != -16; }
int ne_m15(signed char sc) { return sc != -15; }
int ne_m9(signed char sc) { return sc != -9; }
int ne_m8(signed char sc) { return sc != -8; }
int ne_m7(signed char sc) { return sc != -7; }
int ne_m5(signed char sc) { return sc != -5; }
int ne_m4(signed char sc) { return sc != -4; }
int ne_m3(signed char sc) { return sc != -3; }
int ne_m2(signed char sc) { return sc != -2; }
int ne_m1(signed char sc) { return sc != -1; }
int ne_00(signed char sc) { return sc != 0; }
int ne_01(signed char sc) { return sc != 1; }
int ne_02(signed char sc) { return sc != 2; }
int ne_03(signed char sc) { return sc != 3; }
int ne_04(signed char sc) { return sc != 4; }
int ne_05(signed char sc) { return sc != 5; }
int ne_07(signed char sc) { return sc != 7; }
int ne_08(signed char sc) { return sc != 8; }
int ne_09(signed char sc) { return sc != 9; }
int ne_15(signed char sc) { return sc != 15; }
int ne_16(signed char sc) { return sc != 16; }
int ne_17(signed char sc) { return sc != 17; }
int ne_31(signed char sc) { return sc != 31; }
int ne_32(signed char sc) { return sc != 32; }
int ne_33(signed char sc) { return sc != 33; }
int ne_63(signed char sc) { return sc != 63; }
int ne_64(signed char sc) { return sc != 64; }
int ne_65(signed char sc) { return sc != 65; }
int ne_127(signed char sc) { return sc != 127; }

static signed char sc;
int main() {
  sc = -128;
  my_assert(ne_m128(sc) != 1);
  my_assert(ne_m127(sc) == 1);

  sc = -64;
  my_assert(ne_m65(sc) == 1);
  my_assert(ne_m64(sc) != 1);
  my_assert(ne_m63(sc) == 1);

  sc = -32;
  my_assert(ne_m33(sc) == 1);
  my_assert(ne_m32(sc) != 1);
  my_assert(ne_m31(sc) == 1);

  sc = -16;
  my_assert(ne_m17(sc) == 1);
  my_assert(ne_m16(sc) != 1);
  my_assert(ne_m15(sc) == 1);

  sc = -8;
  my_assert(ne_m9(sc) == 1);
  my_assert(ne_m8(sc) != 1);
  my_assert(ne_m7(sc) == 1);

  sc = -4;
  my_assert(ne_m5(sc) == 1);
  my_assert(ne_m4(sc) != 1);
  my_assert(ne_m3(sc) == 1);

  sc = -2;
  my_assert(ne_m3(sc) == 1);
  my_assert(ne_m2(sc) != 1);
  my_assert(ne_m1(sc) == 1);

  sc = -1;
  my_assert(ne_m2(sc) == 1);
  my_assert(ne_m1(sc) != 1);
  my_assert(ne_00(sc) == 1);

  sc = 0;
  my_assert(ne_m1(sc) == 1);
  my_assert(ne_00(sc) != 1);
  my_assert(ne_01(sc) == 1);

  sc = 1;
  my_assert(ne_00(sc) == 1);
  my_assert(ne_01(sc) != 1);
  my_assert(ne_02(sc) == 1);

  sc = 2;
  my_assert(ne_01(sc) == 1);
  my_assert(ne_02(sc) != 1);
  my_assert(ne_03(sc) == 1);

  sc = 4;
  my_assert(ne_03(sc) == 1);
  my_assert(ne_04(sc) != 1);
  my_assert(ne_05(sc) == 1);

  sc = 8;
  my_assert(ne_07(sc) == 1);
  my_assert(ne_08(sc) != 1);
  my_assert(ne_09(sc) == 1);

  sc = 16;
  my_assert(ne_15(sc) == 1);
  my_assert(ne_16(sc) != 1);
  my_assert(ne_17(sc) == 1);

  sc = 32;
  my_assert(ne_31(sc) == 1);
  my_assert(ne_32(sc) != 1);
  my_assert(ne_33(sc) == 1);

  sc = 64;
  my_assert(ne_63(sc) == 1);
  my_assert(ne_64(sc) != 1);
  my_assert(ne_65(sc) == 1);

  sc = 127;
  my_assert(ne_127(sc) != 1);
  return exit_status;
}
