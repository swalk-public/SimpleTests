

int exit_status;

#include "my_assert.h"

int nne_m128(signed char sc) { return !(sc != -128); }
int nne_m127(signed char sc) { return !(sc != -127); }
int nne_m65(signed char sc) { return !(sc != -65); }
int nne_m64(signed char sc) { return !(sc != -64); }
int nne_m63(signed char sc) { return !(sc != -63); }
int nne_m33(signed char sc) { return !(sc != -33); }
int nne_m32(signed char sc) { return !(sc != -32); }
int nne_m31(signed char sc) { return !(sc != -31); }
int nne_m17(signed char sc) { return !(sc != -17); }
int nne_m16(signed char sc) { return !(sc != -16); }
int nne_m15(signed char sc) { return !(sc != -15); }
int nne_m9(signed char sc) { return !(sc != -9); }
int nne_m8(signed char sc) { return !(sc != -8); }
int nne_m7(signed char sc) { return !(sc != -7); }
int nne_m5(signed char sc) { return !(sc != -5); }
int nne_m4(signed char sc) { return !(sc != -4); }
int nne_m3(signed char sc) { return !(sc != -3); }
int nne_m2(signed char sc) { return !(sc != -2); }
int nne_m1(signed char sc) { return !(sc != -1); }
int nne_00(signed char sc) { return !(sc != 0); }
int nne_01(signed char sc) { return !(sc != 1); }
int nne_02(signed char sc) { return !(sc != 2); }
int nne_03(signed char sc) { return !(sc != 3); }
int nne_04(signed char sc) { return !(sc != 4); }
int nne_05(signed char sc) { return !(sc != 5); }
int nne_07(signed char sc) { return !(sc != 7); }
int nne_08(signed char sc) { return !(sc != 8); }
int nne_09(signed char sc) { return !(sc != 9); }
int nne_15(signed char sc) { return !(sc != 15); }
int nne_16(signed char sc) { return !(sc != 16); }
int nne_17(signed char sc) { return !(sc != 17); }
int nne_31(signed char sc) { return !(sc != 31); }
int nne_32(signed char sc) { return !(sc != 32); }
int nne_33(signed char sc) { return !(sc != 33); }
int nne_63(signed char sc) { return !(sc != 63); }
int nne_64(signed char sc) { return !(sc != 64); }
int nne_65(signed char sc) { return !(sc != 65); }
int nne_127(signed char sc) { return !(sc != 127); }

static signed char sc;
int main() {
  sc = -128;
  my_assert(nne_m128(sc) == 1);
  my_assert(nne_m127(sc) != 1);

  sc = -64;
  my_assert(nne_m65(sc) != 1);
  my_assert(nne_m64(sc) == 1);
  my_assert(nne_m63(sc) != 1);

  sc = -32;
  my_assert(nne_m33(sc) != 1);
  my_assert(nne_m32(sc) == 1);
  my_assert(nne_m31(sc) != 1);

  sc = -16;
  my_assert(nne_m17(sc) != 1);
  my_assert(nne_m16(sc) == 1);
  my_assert(nne_m15(sc) != 1);

  sc = -8;
  my_assert(nne_m9(sc) != 1);
  my_assert(nne_m8(sc) == 1);
  my_assert(nne_m7(sc) != 1);

  sc = -4;
  my_assert(nne_m5(sc) != 1);
  my_assert(nne_m4(sc) == 1);
  my_assert(nne_m3(sc) != 1);

  sc = -2;
  my_assert(nne_m3(sc) != 1);
  my_assert(nne_m2(sc) == 1);
  my_assert(nne_m1(sc) != 1);

  sc = -1;
  my_assert(nne_m2(sc) != 1);
  my_assert(nne_m1(sc) == 1);
  my_assert(nne_00(sc) != 1);

  sc = 0;
  my_assert(nne_m1(sc) != 1);
  my_assert(nne_00(sc) == 1);
  my_assert(nne_01(sc) != 1);

  sc = 1;
  my_assert(nne_00(sc) != 1);
  my_assert(nne_01(sc) == 1);
  my_assert(nne_02(sc) != 1);

  sc = 2;
  my_assert(nne_01(sc) != 1);
  my_assert(nne_02(sc) == 1);
  my_assert(nne_03(sc) != 1);

  sc = 4;
  my_assert(nne_03(sc) != 1);
  my_assert(nne_04(sc) == 1);
  my_assert(nne_05(sc) != 1);

  sc = 8;
  my_assert(nne_07(sc) != 1);
  my_assert(nne_08(sc) == 1);
  my_assert(nne_09(sc) != 1);

  sc = 16;
  my_assert(nne_15(sc) != 1);
  my_assert(nne_16(sc) == 1);
  my_assert(nne_17(sc) != 1);

  sc = 32;
  my_assert(nne_31(sc) != 1);
  my_assert(nne_32(sc) == 1);
  my_assert(nne_33(sc) != 1);

  sc = 64;
  my_assert(nne_63(sc) != 1);
  my_assert(nne_64(sc) == 1);
  my_assert(nne_65(sc) != 1);

  sc = 127;
  my_assert(nne_127(sc) == 1);
  return exit_status;
}
