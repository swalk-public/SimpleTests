

int exit_status;

#include "my_assert.h"

int nlt_m128(signed char sc) { return !(sc < -128); }
int nlt_m127(signed char sc) { return !(sc < -127); }
int nlt_m65(signed char sc) { return !(sc < -65); }
int nlt_m64(signed char sc) { return !(sc < -64); }
int nlt_m63(signed char sc) { return !(sc < -63); }
int nlt_m33(signed char sc) { return !(sc < -33); }
int nlt_m32(signed char sc) { return !(sc < -32); }
int nlt_m31(signed char sc) { return !(sc < -31); }
int nlt_m17(signed char sc) { return !(sc < -17); }
int nlt_m16(signed char sc) { return !(sc < -16); }
int nlt_m15(signed char sc) { return !(sc < -15); }
int nlt_m9(signed char sc) { return !(sc < -9); }
int nlt_m8(signed char sc) { return !(sc < -8); }
int nlt_m7(signed char sc) { return !(sc < -7); }
int nlt_m5(signed char sc) { return !(sc < -5); }
int nlt_m4(signed char sc) { return !(sc < -4); }
int nlt_m3(signed char sc) { return !(sc < -3); }
int nlt_m2(signed char sc) { return !(sc < -2); }
int nlt_m1(signed char sc) { return !(sc < -1); }
int nlt_00(signed char sc) { return !(sc < 0); }
int nlt_01(signed char sc) { return !(sc < 1); }
int nlt_02(signed char sc) { return !(sc < 2); }
int nlt_03(signed char sc) { return !(sc < 3); }
int nlt_04(signed char sc) { return !(sc < 4); }
int nlt_05(signed char sc) { return !(sc < 5); }
int nlt_07(signed char sc) { return !(sc < 7); }
int nlt_08(signed char sc) { return !(sc < 8); }
int nlt_09(signed char sc) { return !(sc < 9); }
int nlt_15(signed char sc) { return !(sc < 15); }
int nlt_16(signed char sc) { return !(sc < 16); }
int nlt_17(signed char sc) { return !(sc < 17); }
int nlt_31(signed char sc) { return !(sc < 31); }
int nlt_32(signed char sc) { return !(sc < 32); }
int nlt_33(signed char sc) { return !(sc < 33); }
int nlt_63(signed char sc) { return !(sc < 63); }
int nlt_64(signed char sc) { return !(sc < 64); }
int nlt_65(signed char sc) { return !(sc < 65); }
int nlt_127(signed char sc) { return !(sc < 127); }

static signed char sc;
int main() {
  sc = -128;
  my_assert(nlt_m128(sc) == 1);
  my_assert(nlt_m127(sc) != 1);

  sc = -64;
  my_assert(nlt_m65(sc) == 1);
  my_assert(nlt_m64(sc) == 1);
  my_assert(nlt_m63(sc) != 1);

  sc = -32;
  my_assert(nlt_m33(sc) == 1);
  my_assert(nlt_m32(sc) == 1);
  my_assert(nlt_m31(sc) != 1);

  sc = -16;
  my_assert(nlt_m17(sc) == 1);
  my_assert(nlt_m16(sc) == 1);
  my_assert(nlt_m15(sc) != 1);

  sc = -8;
  my_assert(nlt_m9(sc) == 1);
  my_assert(nlt_m8(sc) == 1);
  my_assert(nlt_m7(sc) != 1);

  sc = -4;
  my_assert(nlt_m5(sc) == 1);
  my_assert(nlt_m4(sc) == 1);
  my_assert(nlt_m3(sc) != 1);

  sc = -2;
  my_assert(nlt_m3(sc) == 1);
  my_assert(nlt_m2(sc) == 1);
  my_assert(nlt_m1(sc) != 1);

  sc = -1;
  my_assert(nlt_m2(sc) == 1);
  my_assert(nlt_m1(sc) == 1);
  my_assert(nlt_00(sc) != 1);

  sc = 0;
  my_assert(nlt_m1(sc) == 1);
  my_assert(nlt_00(sc) == 1);
  my_assert(nlt_01(sc) != 1);

  sc = 1;
  my_assert(nlt_00(sc) == 1);
  my_assert(nlt_01(sc) == 1);
  my_assert(nlt_02(sc) != 1);

  sc = 2;
  my_assert(nlt_01(sc) == 1);
  my_assert(nlt_02(sc) == 1);
  my_assert(nlt_03(sc) != 1);

  sc = 4;
  my_assert(nlt_03(sc) == 1);
  my_assert(nlt_04(sc) == 1);
  my_assert(nlt_05(sc) != 1);

  sc = 8;
  my_assert(nlt_07(sc) == 1);
  my_assert(nlt_08(sc) == 1);
  my_assert(nlt_09(sc) != 1);

  sc = 16;
  my_assert(nlt_15(sc) == 1);
  my_assert(nlt_16(sc) == 1);
  my_assert(nlt_17(sc) != 1);

  sc = 32;
  my_assert(nlt_31(sc) == 1);
  my_assert(nlt_32(sc) == 1);
  my_assert(nlt_33(sc) != 1);

  sc = 64;
  my_assert(nlt_63(sc) == 1);
  my_assert(nlt_64(sc) == 1);
  my_assert(nlt_65(sc) != 1);

  sc = 127;
  my_assert(nlt_127(sc) == 1);
  return exit_status;
}
