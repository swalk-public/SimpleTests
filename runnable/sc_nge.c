

int exit_status;

#include "my_assert.h"

int nge_m128(signed char sc) { return !(sc >= -128); }
int nge_m127(signed char sc) { return !(sc >= -127); }
int nge_m65(signed char sc) { return !(sc >= -65); }
int nge_m64(signed char sc) { return !(sc >= -64); }
int nge_m63(signed char sc) { return !(sc >= -63); }
int nge_m33(signed char sc) { return !(sc >= -33); }
int nge_m32(signed char sc) { return !(sc >= -32); }
int nge_m31(signed char sc) { return !(sc >= -31); }
int nge_m17(signed char sc) { return !(sc >= -17); }
int nge_m16(signed char sc) { return !(sc >= -16); }
int nge_m15(signed char sc) { return !(sc >= -15); }
int nge_m9(signed char sc) { return !(sc >= -9); }
int nge_m8(signed char sc) { return !(sc >= -8); }
int nge_m7(signed char sc) { return !(sc >= -7); }
int nge_m5(signed char sc) { return !(sc >= -5); }
int nge_m4(signed char sc) { return !(sc >= -4); }
int nge_m3(signed char sc) { return !(sc >= -3); }
int nge_m2(signed char sc) { return !(sc >= -2); }
int nge_m1(signed char sc) { return !(sc >= -1); }
int nge_00(signed char sc) { return !(sc >= 0); }
int nge_01(signed char sc) { return !(sc >= 1); }
int nge_02(signed char sc) { return !(sc >= 2); }
int nge_03(signed char sc) { return !(sc >= 3); }
int nge_04(signed char sc) { return !(sc >= 4); }
int nge_05(signed char sc) { return !(sc >= 5); }
int nge_07(signed char sc) { return !(sc >= 7); }
int nge_08(signed char sc) { return !(sc >= 8); }
int nge_09(signed char sc) { return !(sc >= 9); }
int nge_15(signed char sc) { return !(sc >= 15); }
int nge_16(signed char sc) { return !(sc >= 16); }
int nge_17(signed char sc) { return !(sc >= 17); }
int nge_31(signed char sc) { return !(sc >= 31); }
int nge_32(signed char sc) { return !(sc >= 32); }
int nge_33(signed char sc) { return !(sc >= 33); }
int nge_63(signed char sc) { return !(sc >= 63); }
int nge_64(signed char sc) { return !(sc >= 64); }
int nge_65(signed char sc) { return !(sc >= 65); }
int nge_127(signed char sc) { return !(sc >= 127); }

static signed char sc;
int main() {
  sc = -128;
  my_assert(nge_m128(sc) != 1);
  my_assert(nge_m127(sc) == 1);

  sc = -64;
  my_assert(nge_m65(sc) != 1);
  my_assert(nge_m64(sc) != 1);
  my_assert(nge_m63(sc) == 1);

  sc = -32;
  my_assert(nge_m33(sc) != 1);
  my_assert(nge_m32(sc) != 1);
  my_assert(nge_m31(sc) == 1);

  sc = -16;
  my_assert(nge_m17(sc) != 1);
  my_assert(nge_m16(sc) != 1);
  my_assert(nge_m15(sc) == 1);

  sc = -8;
  my_assert(nge_m9(sc) != 1);
  my_assert(nge_m8(sc) != 1);
  my_assert(nge_m7(sc) == 1);

  sc = -4;
  my_assert(nge_m5(sc) != 1);
  my_assert(nge_m4(sc) != 1);
  my_assert(nge_m3(sc) == 1);

  sc = -2;
  my_assert(nge_m3(sc) != 1);
  my_assert(nge_m2(sc) != 1);
  my_assert(nge_m1(sc) == 1);

  sc = -1;
  my_assert(nge_m2(sc) != 1);
  my_assert(nge_m1(sc) != 1);
  my_assert(nge_00(sc) == 1);

  sc = 0;
  my_assert(nge_m1(sc) != 1);
  my_assert(nge_00(sc) != 1);
  my_assert(nge_01(sc) == 1);

  sc = 1;
  my_assert(nge_00(sc) != 1);
  my_assert(nge_01(sc) != 1);
  my_assert(nge_02(sc) == 1);

  sc = 2;
  my_assert(nge_01(sc) != 1);
  my_assert(nge_02(sc) != 1);
  my_assert(nge_03(sc) == 1);

  sc = 4;
  my_assert(nge_03(sc) != 1);
  my_assert(nge_04(sc) != 1);
  my_assert(nge_05(sc) == 1);

  sc = 8;
  my_assert(nge_07(sc) != 1);
  my_assert(nge_08(sc) != 1);
  my_assert(nge_09(sc) == 1);

  sc = 16;
  my_assert(nge_15(sc) != 1);
  my_assert(nge_16(sc) != 1);
  my_assert(nge_17(sc) == 1);

  sc = 32;
  my_assert(nge_31(sc) != 1);
  my_assert(nge_32(sc) != 1);
  my_assert(nge_33(sc) == 1);

  sc = 64;
  my_assert(nge_63(sc) != 1);
  my_assert(nge_64(sc) != 1);
  my_assert(nge_65(sc) == 1);

  sc = 127;
  my_assert(nge_127(sc) != 1);
  return exit_status;
}
