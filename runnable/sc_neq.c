

int exit_status;

#include "my_assert.h"

int neq_m128(signed char sc) { return !(sc == -128); }
int neq_m127(signed char sc) { return !(sc == -127); }
int neq_m65(signed char sc) { return !(sc == -65); }
int neq_m64(signed char sc) { return !(sc == -64); }
int neq_m63(signed char sc) { return !(sc == -63); }
int neq_m33(signed char sc) { return !(sc == -33); }
int neq_m32(signed char sc) { return !(sc == -32); }
int neq_m31(signed char sc) { return !(sc == -31); }
int neq_m17(signed char sc) { return !(sc == -17); }
int neq_m16(signed char sc) { return !(sc == -16); }
int neq_m15(signed char sc) { return !(sc == -15); }
int neq_m9(signed char sc) { return !(sc == -9); }
int neq_m8(signed char sc) { return !(sc == -8); }
int neq_m7(signed char sc) { return !(sc == -7); }
int neq_m5(signed char sc) { return !(sc == -5); }
int neq_m4(signed char sc) { return !(sc == -4); }
int neq_m3(signed char sc) { return !(sc == -3); }
int neq_m2(signed char sc) { return !(sc == -2); }
int neq_m1(signed char sc) { return !(sc == -1); }
int neq_00(signed char sc) { return !(sc == 0); }
int neq_01(signed char sc) { return !(sc == 1); }
int neq_02(signed char sc) { return !(sc == 2); }
int neq_03(signed char sc) { return !(sc == 3); }
int neq_04(signed char sc) { return !(sc == 4); }
int neq_05(signed char sc) { return !(sc == 5); }
int neq_07(signed char sc) { return !(sc == 7); }
int neq_08(signed char sc) { return !(sc == 8); }
int neq_09(signed char sc) { return !(sc == 9); }
int neq_15(signed char sc) { return !(sc == 15); }
int neq_16(signed char sc) { return !(sc == 16); }
int neq_17(signed char sc) { return !(sc == 17); }
int neq_31(signed char sc) { return !(sc == 31); }
int neq_32(signed char sc) { return !(sc == 32); }
int neq_33(signed char sc) { return !(sc == 33); }
int neq_63(signed char sc) { return !(sc == 63); }
int neq_64(signed char sc) { return !(sc == 64); }
int neq_65(signed char sc) { return !(sc == 65); }
int neq_127(signed char sc) { return !(sc == 127); }

static signed char sc;
int main() {
  sc = -128;
  my_assert(neq_m128(sc) != 1);
  my_assert(neq_m127(sc) == 1);

  sc = -64;
  my_assert(neq_m65(sc) == 1);
  my_assert(neq_m64(sc) != 1);
  my_assert(neq_m63(sc) == 1);

  sc = -32;
  my_assert(neq_m33(sc) == 1);
  my_assert(neq_m32(sc) != 1);
  my_assert(neq_m31(sc) == 1);

  sc = -16;
  my_assert(neq_m17(sc) == 1);
  my_assert(neq_m16(sc) != 1);
  my_assert(neq_m15(sc) == 1);

  sc = -8;
  my_assert(neq_m9(sc) == 1);
  my_assert(neq_m8(sc) != 1);
  my_assert(neq_m7(sc) == 1);

  sc = -4;
  my_assert(neq_m5(sc) == 1);
  my_assert(neq_m4(sc) != 1);
  my_assert(neq_m3(sc) == 1);

  sc = -2;
  my_assert(neq_m3(sc) == 1);
  my_assert(neq_m2(sc) != 1);
  my_assert(neq_m1(sc) == 1);

  sc = -1;
  my_assert(neq_m2(sc) == 1);
  my_assert(neq_m1(sc) != 1);
  my_assert(neq_00(sc) == 1);

  sc = 0;
  my_assert(neq_m1(sc) == 1);
  my_assert(neq_00(sc) != 1);
  my_assert(neq_01(sc) == 1);

  sc = 1;
  my_assert(neq_00(sc) == 1);
  my_assert(neq_01(sc) != 1);
  my_assert(neq_02(sc) == 1);

  sc = 2;
  my_assert(neq_01(sc) == 1);
  my_assert(neq_02(sc) != 1);
  my_assert(neq_03(sc) == 1);

  sc = 4;
  my_assert(neq_03(sc) == 1);
  my_assert(neq_04(sc) != 1);
  my_assert(neq_05(sc) == 1);

  sc = 8;
  my_assert(neq_07(sc) == 1);
  my_assert(neq_08(sc) != 1);
  my_assert(neq_09(sc) == 1);

  sc = 16;
  my_assert(neq_15(sc) == 1);
  my_assert(neq_16(sc) != 1);
  my_assert(neq_17(sc) == 1);

  sc = 32;
  my_assert(neq_31(sc) == 1);
  my_assert(neq_32(sc) != 1);
  my_assert(neq_33(sc) == 1);

  sc = 64;
  my_assert(neq_63(sc) == 1);
  my_assert(neq_64(sc) != 1);
  my_assert(neq_65(sc) == 1);

  sc = 127;
  my_assert(neq_127(sc) != 1);
  return exit_status;
}
