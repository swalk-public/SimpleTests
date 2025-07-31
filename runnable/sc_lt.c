

int exit_status;

#include "my_assert.h"

int lt_m128(signed char sc) { return sc < -128; }
int lt_m127(signed char sc) { return sc < -127; }
int lt_m65(signed char sc) { return sc < -65; }
int lt_m64(signed char sc) { return sc < -64; }
int lt_m63(signed char sc) { return sc < -63; }
int lt_m33(signed char sc) { return sc < -33; }
int lt_m32(signed char sc) { return sc < -32; }
int lt_m31(signed char sc) { return sc < -31; }
int lt_m17(signed char sc) { return sc < -17; }
int lt_m16(signed char sc) { return sc < -16; }
int lt_m15(signed char sc) { return sc < -15; }
int lt_m9(signed char sc) { return sc < -9; }
int lt_m8(signed char sc) { return sc < -8; }
int lt_m7(signed char sc) { return sc < -7; }
int lt_m5(signed char sc) { return sc < -5; }
int lt_m4(signed char sc) { return sc < -4; }
int lt_m3(signed char sc) { return sc < -3; }
int lt_m2(signed char sc) { return sc < -2; }
int lt_m1(signed char sc) { return sc < -1; }
int lt_00(signed char sc) { return sc < 0; }
int lt_01(signed char sc) { return sc < 1; }
int lt_02(signed char sc) { return sc < 2; }
int lt_03(signed char sc) { return sc < 3; }
int lt_04(signed char sc) { return sc < 4; }
int lt_05(signed char sc) { return sc < 5; }
int lt_07(signed char sc) { return sc < 7; }
int lt_08(signed char sc) { return sc < 8; }
int lt_09(signed char sc) { return sc < 9; }
int lt_15(signed char sc) { return sc < 15; }
int lt_16(signed char sc) { return sc < 16; }
int lt_17(signed char sc) { return sc < 17; }
int lt_31(signed char sc) { return sc < 31; }
int lt_32(signed char sc) { return sc < 32; }
int lt_33(signed char sc) { return sc < 33; }
int lt_63(signed char sc) { return sc < 63; }
int lt_64(signed char sc) { return sc < 64; }
int lt_65(signed char sc) { return sc < 65; }
int lt_127(signed char sc) { return sc < 127; }

static signed char sc;
int main() {
  sc = -128;
  my_assert(lt_m128(sc) != 1);
  my_assert(lt_m127(sc) == 1);

  sc = -64;
  my_assert(lt_m65(sc) != 1);
  my_assert(lt_m64(sc) != 1);
  my_assert(lt_m63(sc) == 1);

  sc = -32;
  my_assert(lt_m33(sc) != 1);
  my_assert(lt_m32(sc) != 1);
  my_assert(lt_m31(sc) == 1);

  sc = -16;
  my_assert(lt_m17(sc) != 1);
  my_assert(lt_m16(sc) != 1);
  my_assert(lt_m15(sc) == 1);

  sc = -8;
  my_assert(lt_m9(sc) != 1);
  my_assert(lt_m8(sc) != 1);
  my_assert(lt_m7(sc) == 1);

  sc = -4;
  my_assert(lt_m5(sc) != 1);
  my_assert(lt_m4(sc) != 1);
  my_assert(lt_m3(sc) == 1);

  sc = -2;
  my_assert(lt_m3(sc) != 1);
  my_assert(lt_m2(sc) != 1);
  my_assert(lt_m1(sc) == 1);

  sc = -1;
  my_assert(lt_m2(sc) != 1);
  my_assert(lt_m1(sc) != 1);
  my_assert(lt_00(sc) == 1);

  sc = 0;
  my_assert(lt_m1(sc) != 1);
  my_assert(lt_00(sc) != 1);
  my_assert(lt_01(sc) == 1);

  sc = 1;
  my_assert(lt_00(sc) != 1);
  my_assert(lt_01(sc) != 1);
  my_assert(lt_02(sc) == 1);

  sc = 2;
  my_assert(lt_01(sc) != 1);
  my_assert(lt_02(sc) != 1);
  my_assert(lt_03(sc) == 1);

  sc = 4;
  my_assert(lt_03(sc) != 1);
  my_assert(lt_04(sc) != 1);
  my_assert(lt_05(sc) == 1);

  sc = 8;
  my_assert(lt_07(sc) != 1);
  my_assert(lt_08(sc) != 1);
  my_assert(lt_09(sc) == 1);

  sc = 16;
  my_assert(lt_15(sc) != 1);
  my_assert(lt_16(sc) != 1);
  my_assert(lt_17(sc) == 1);

  sc = 32;
  my_assert(lt_31(sc) != 1);
  my_assert(lt_32(sc) != 1);
  my_assert(lt_33(sc) == 1);

  sc = 64;
  my_assert(lt_63(sc) != 1);
  my_assert(lt_64(sc) != 1);
  my_assert(lt_65(sc) == 1);

  sc = 127;
  my_assert(lt_127(sc) != 1);
  return exit_status;
}
