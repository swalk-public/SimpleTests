

int exit_status;

#include "my_assert.h"

int ngt_m128(signed char sc) { return !(sc > -128); }
int ngt_m127(signed char sc) { return !(sc > -127); }
int ngt_m65(signed char sc) { return !(sc > -65); }
int ngt_m64(signed char sc) { return !(sc > -64); }
int ngt_m63(signed char sc) { return !(sc > -63); }
int ngt_m33(signed char sc) { return !(sc > -33); }
int ngt_m32(signed char sc) { return !(sc > -32); }
int ngt_m31(signed char sc) { return !(sc > -31); }
int ngt_m17(signed char sc) { return !(sc > -17); }
int ngt_m16(signed char sc) { return !(sc > -16); }
int ngt_m15(signed char sc) { return !(sc > -15); }
int ngt_m9(signed char sc) { return !(sc > -9); }
int ngt_m8(signed char sc) { return !(sc > -8); }
int ngt_m7(signed char sc) { return !(sc > -7); }
int ngt_m5(signed char sc) { return !(sc > -5); }
int ngt_m4(signed char sc) { return !(sc > -4); }
int ngt_m3(signed char sc) { return !(sc > -3); }
int ngt_m2(signed char sc) { return !(sc > -2); }
int ngt_m1(signed char sc) { return !(sc > -1); }
int ngt_00(signed char sc) { return !(sc > 0); }
int ngt_01(signed char sc) { return !(sc > 1); }
int ngt_02(signed char sc) { return !(sc > 2); }
int ngt_03(signed char sc) { return !(sc > 3); }
int ngt_04(signed char sc) { return !(sc > 4); }
int ngt_05(signed char sc) { return !(sc > 5); }
int ngt_07(signed char sc) { return !(sc > 7); }
int ngt_08(signed char sc) { return !(sc > 8); }
int ngt_09(signed char sc) { return !(sc > 9); }
int ngt_15(signed char sc) { return !(sc > 15); }
int ngt_16(signed char sc) { return !(sc > 16); }
int ngt_17(signed char sc) { return !(sc > 17); }
int ngt_31(signed char sc) { return !(sc > 31); }
int ngt_32(signed char sc) { return !(sc > 32); }
int ngt_33(signed char sc) { return !(sc > 33); }
int ngt_63(signed char sc) { return !(sc > 63); }
int ngt_64(signed char sc) { return !(sc > 64); }
int ngt_65(signed char sc) { return !(sc > 65); }
int ngt_127(signed char sc) { return !(sc > 127); }

static signed char sc;
int main() {
  sc = -128;
  my_assert(ngt_m128(sc) == 1);
  my_assert(ngt_m127(sc) == 1);

  sc = -64;
  my_assert(ngt_m65(sc) != 1);
  my_assert(ngt_m64(sc) == 1);
  my_assert(ngt_m63(sc) == 1);

  sc = -32;
  my_assert(ngt_m33(sc) != 1);
  my_assert(ngt_m32(sc) == 1);
  my_assert(ngt_m31(sc) == 1);

  sc = -16;
  my_assert(ngt_m17(sc) != 1);
  my_assert(ngt_m16(sc) == 1);
  my_assert(ngt_m15(sc) == 1);

  sc = -8;
  my_assert(ngt_m9(sc) != 1);
  my_assert(ngt_m8(sc) == 1);
  my_assert(ngt_m7(sc) == 1);

  sc = -4;
  my_assert(ngt_m5(sc) != 1);
  my_assert(ngt_m4(sc) == 1);
  my_assert(ngt_m3(sc) == 1);

  sc = -2;
  my_assert(ngt_m3(sc) != 1);
  my_assert(ngt_m2(sc) == 1);
  my_assert(ngt_m1(sc) == 1);

  sc = -1;
  my_assert(ngt_m2(sc) != 1);
  my_assert(ngt_m1(sc) == 1);
  my_assert(ngt_00(sc) == 1);

  sc = 0;
  my_assert(ngt_m1(sc) != 1);
  my_assert(ngt_00(sc) == 1);
  my_assert(ngt_01(sc) == 1);

  sc = 1;
  my_assert(ngt_00(sc) != 1);
  my_assert(ngt_01(sc) == 1);
  my_assert(ngt_02(sc) == 1);

  sc = 2;
  my_assert(ngt_01(sc) != 1);
  my_assert(ngt_02(sc) == 1);
  my_assert(ngt_03(sc) == 1);

  sc = 4;
  my_assert(ngt_03(sc) != 1);
  my_assert(ngt_04(sc) == 1);
  my_assert(ngt_05(sc) == 1);

  sc = 8;
  my_assert(ngt_07(sc) != 1);
  my_assert(ngt_08(sc) == 1);
  my_assert(ngt_09(sc) == 1);

  sc = 16;
  my_assert(ngt_15(sc) != 1);
  my_assert(ngt_16(sc) == 1);
  my_assert(ngt_17(sc) == 1);

  sc = 32;
  my_assert(ngt_31(sc) != 1);
  my_assert(ngt_32(sc) == 1);
  my_assert(ngt_33(sc) == 1);

  sc = 64;
  my_assert(ngt_63(sc) != 1);
  my_assert(ngt_64(sc) == 1);
  my_assert(ngt_65(sc) == 1);

  sc = 127;
  my_assert(ngt_127(sc) == 1);
  return exit_status;
}
