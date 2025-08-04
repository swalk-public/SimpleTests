

int exit_status;

#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int lt_m128(signed char sc) {
  if (sc < -128)
    return True();
  else
    return False();
}
int lt_m127(signed char sc) {
  if (sc < -127)
    return True();
  else
    return False();
}
int lt_m65(signed char sc) {
  if (sc < -65)
    return True();
  else
    return False();
}
int lt_m64(signed char sc) {
  if (sc < -64)
    return True();
  else
    return False();
}
int lt_m63(signed char sc) {
  if (sc < -63)
    return True();
  else
    return False();
}
int lt_m33(signed char sc) {
  if (sc < -33)
    return True();
  else
    return False();
}
int lt_m32(signed char sc) {
  if (sc < -32)
    return True();
  else
    return False();
}
int lt_m31(signed char sc) {
  if (sc < -31)
    return True();
  else
    return False();
}
int lt_m17(signed char sc) {
  if (sc < -17)
    return True();
  else
    return False();
}
int lt_m16(signed char sc) {
  if (sc < -16)
    return True();
  else
    return False();
}
int lt_m15(signed char sc) {
  if (sc < -15)
    return True();
  else
    return False();
}
int lt_m9(signed char sc) {
  if (sc < -9)
    return True();
  else
    return False();
}
int lt_m8(signed char sc) {
  if (sc < -8)
    return True();
  else
    return False();
}
int lt_m7(signed char sc) {
  if (sc < -7)
    return True();
  else
    return False();
}
int lt_m5(signed char sc) {
  if (sc < -5)
    return True();
  else
    return False();
}
int lt_m4(signed char sc) {
  if (sc < -4)
    return True();
  else
    return False();
}
int lt_m3(signed char sc) {
  if (sc < -3)
    return True();
  else
    return False();
}
int lt_m2(signed char sc) {
  if (sc < -2)
    return True();
  else
    return False();
}
int lt_m1(signed char sc) {
  if (sc < -1)
    return True();
  else
    return False();
}
int lt_00(signed char sc) {
  if (sc < 0)
    return True();
  else
    return False();
}
int lt_01(signed char sc) {
  if (sc < 1)
    return True();
  else
    return False();
}
int lt_02(signed char sc) {
  if (sc < 2)
    return True();
  else
    return False();
}
int lt_03(signed char sc) {
  if (sc < 3)
    return True();
  else
    return False();
}
int lt_04(signed char sc) {
  if (sc < 4)
    return True();
  else
    return False();
}
int lt_05(signed char sc) {
  if (sc < 5)
    return True();
  else
    return False();
}
int lt_07(signed char sc) {
  if (sc < 7)
    return True();
  else
    return False();
}
int lt_08(signed char sc) {
  if (sc < 8)
    return True();
  else
    return False();
}
int lt_09(signed char sc) {
  if (sc < 9)
    return True();
  else
    return False();
}
int lt_15(signed char sc) {
  if (sc < 15)
    return True();
  else
    return False();
}
int lt_16(signed char sc) {
  if (sc < 16)
    return True();
  else
    return False();
}
int lt_17(signed char sc) {
  if (sc < 17)
    return True();
  else
    return False();
}
int lt_31(signed char sc) {
  if (sc < 31)
    return True();
  else
    return False();
}
int lt_32(signed char sc) {
  if (sc < 32)
    return True();
  else
    return False();
}
int lt_33(signed char sc) {
  if (sc < 33)
    return True();
  else
    return False();
}
int lt_63(signed char sc) {
  if (sc < 63)
    return True();
  else
    return False();
}
int lt_64(signed char sc) {
  if (sc < 64)
    return True();
  else
    return False();
}
int lt_65(signed char sc) {
  if (sc < 65)
    return True();
  else
    return False();
}
int lt_127(signed char sc) {
  if (sc < 127)
    return True();
  else
    return False();
}

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
