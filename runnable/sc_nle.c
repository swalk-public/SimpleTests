

int exit_status;

#include "my_assert.h"

int nle_m128(signed char sc) { return !(sc <= -128); }
int nle_m127(signed char sc) { return !(sc <= -127); }
int nle_m65(signed char sc) { return !(sc <= -65); }
int nle_m64(signed char sc) { return !(sc <= -64); }
int nle_m63(signed char sc) { return !(sc <= -63); }
int nle_m33(signed char sc) { return !(sc <= -33); }
int nle_m32(signed char sc) { return !(sc <= -32); }
int nle_m31(signed char sc) { return !(sc <= -31); }
int nle_m17(signed char sc) { return !(sc <= -17); }
int nle_m16(signed char sc) { return !(sc <= -16); }
int nle_m15(signed char sc) { return !(sc <= -15); }
int nle_m9(signed char sc) { return !(sc <= -9); }
int nle_m8(signed char sc) { return !(sc <= -8); }
int nle_m7(signed char sc) { return !(sc <= -7); }
int nle_m5(signed char sc) { return !(sc <= -5); }
int nle_m4(signed char sc) { return !(sc <= -4); }
int nle_m3(signed char sc) { return !(sc <= -3); }
int nle_m2(signed char sc) { return !(sc <= -2); }
int nle_m1(signed char sc) { return !(sc <= -1); }
int nle_00(signed char sc) { return !(sc <= 0); }
int nle_01(signed char sc) { return !(sc <= 1); }
int nle_02(signed char sc) { return !(sc <= 2); }
int nle_03(signed char sc) { return !(sc <= 3); }
int nle_04(signed char sc) { return !(sc <= 4); }
int nle_05(signed char sc) { return !(sc <= 5); }
int nle_07(signed char sc) { return !(sc <= 7); }
int nle_08(signed char sc) { return !(sc <= 8); }
int nle_09(signed char sc) { return !(sc <= 9); }
int nle_15(signed char sc) { return !(sc <= 15); }
int nle_16(signed char sc) { return !(sc <= 16); }
int nle_17(signed char sc) { return !(sc <= 17); }
int nle_31(signed char sc) { return !(sc <= 31); }
int nle_32(signed char sc) { return !(sc <= 32); }
int nle_33(signed char sc) { return !(sc <= 33); }
int nle_63(signed char sc) { return !(sc <= 63); }
int nle_64(signed char sc) { return !(sc <= 64); }
int nle_65(signed char sc) { return !(sc <= 65); }
int nle_127(signed char sc) { return !(sc <= 127); }

static signed char sc;
int main() {
  sc = -128;
  my_assert(nle_m128(sc) != 1);
  my_assert(nle_m127(sc) != 1);

  sc = -64;
  my_assert(nle_m65(sc) == 1);
  my_assert(nle_m64(sc) != 1);
  my_assert(nle_m63(sc) != 1);

  sc = -32;
  my_assert(nle_m33(sc) == 1);
  my_assert(nle_m32(sc) != 1);
  my_assert(nle_m31(sc) != 1);

  sc = -16;
  my_assert(nle_m17(sc) == 1);
  my_assert(nle_m16(sc) != 1);
  my_assert(nle_m15(sc) != 1);

  sc = -8;
  my_assert(nle_m9(sc) == 1);
  my_assert(nle_m8(sc) != 1);
  my_assert(nle_m7(sc) != 1);

  sc = -4;
  my_assert(nle_m5(sc) == 1);
  my_assert(nle_m4(sc) != 1);
  my_assert(nle_m3(sc) != 1);

  sc = -2;
  my_assert(nle_m3(sc) == 1);
  my_assert(nle_m2(sc) != 1);
  my_assert(nle_m1(sc) != 1);

  sc = -1;
  my_assert(nle_m2(sc) == 1);
  my_assert(nle_m1(sc) != 1);
  my_assert(nle_00(sc) != 1);

  sc = 0;
  my_assert(nle_m1(sc) == 1);
  my_assert(nle_00(sc) != 1);
  my_assert(nle_01(sc) != 1);

  sc = 1;
  my_assert(nle_00(sc) == 1);
  my_assert(nle_01(sc) != 1);
  my_assert(nle_02(sc) != 1);

  sc = 2;
  my_assert(nle_01(sc) == 1);
  my_assert(nle_02(sc) != 1);
  my_assert(nle_03(sc) != 1);

  sc = 4;
  my_assert(nle_03(sc) == 1);
  my_assert(nle_04(sc) != 1);
  my_assert(nle_05(sc) != 1);

  sc = 8;
  my_assert(nle_07(sc) == 1);
  my_assert(nle_08(sc) != 1);
  my_assert(nle_09(sc) != 1);

  sc = 16;
  my_assert(nle_15(sc) == 1);
  my_assert(nle_16(sc) != 1);
  my_assert(nle_17(sc) != 1);

  sc = 32;
  my_assert(nle_31(sc) == 1);
  my_assert(nle_32(sc) != 1);
  my_assert(nle_33(sc) != 1);

  sc = 64;
  my_assert(nle_63(sc) == 1);
  my_assert(nle_64(sc) != 1);
  my_assert(nle_65(sc) != 1);

  sc = 127;
  my_assert(nle_127(sc) != 1);
  return exit_status;
}
