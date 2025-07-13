

int exit_status;

#include "my_assert.h"

int eq_m32768(signed short ss) { return ss == -32768; }
int eq_m32767(signed short ss) { return ss == -32767; }
int eq_m16385(signed short ss) { return ss == -16385; }
int eq_m16384(signed short ss) { return ss == -16384; }
int eq_m16383(signed short ss) { return ss == -16383; }
int eq_m8193(signed short ss) { return ss == -8193; }
int eq_m8192(signed short ss) { return ss == -8192; }
int eq_m8191(signed short ss) { return ss == -8191; }
int eq_m4097(signed short ss) { return ss == -4097; }
int eq_m4096(signed short ss) { return ss == -4096; }
int eq_m4095(signed short ss) { return ss == -4095; }
int eq_m2049(signed short ss) { return ss == -2049; }
int eq_m2048(signed short ss) { return ss == -2048; }
int eq_m2047(signed short ss) { return ss == -2047; }
int eq_m1025(signed short ss) { return ss == -1025; }
int eq_m1024(signed short ss) { return ss == -1024; }
int eq_m1023(signed short ss) { return ss == -1023; }
int eq_m513(signed short ss) { return ss == -513; }
int eq_m512(signed short ss) { return ss == -512; }
int eq_m511(signed short ss) { return ss == -511; }
int eq_m257(signed short ss) { return ss == -257; }
int eq_m256(signed short ss) { return ss == -256; }
int eq_m255(signed short ss) { return ss == -255; }
int eq_m129(signed short ss) { return ss == -129; }
int eq_m128(signed short ss) { return ss == -128; }
int eq_m127(signed short ss) { return ss == -127; }
int eq_m65(signed short ss) { return ss == -65; }
int eq_m64(signed short ss) { return ss == -64; }
int eq_m63(signed short ss) { return ss == -63; }
int eq_m33(signed short ss) { return ss == -33; }
int eq_m32(signed short ss) { return ss == -32; }
int eq_m31(signed short ss) { return ss == -31; }
int eq_m17(signed short ss) { return ss == -17; }
int eq_m16(signed short ss) { return ss == -16; }
int eq_m15(signed short ss) { return ss == -15; }
int eq_m9(signed short ss) { return ss == -9; }
int eq_m8(signed short ss) { return ss == -8; }
int eq_m7(signed short ss) { return ss == -7; }
int eq_m5(signed short ss) { return ss == -5; }
int eq_m4(signed short ss) { return ss == -4; }
int eq_m3(signed short ss) { return ss == -3; }
int eq_m2(signed short ss) { return ss == -2; }
int eq_m1(signed short ss) { return ss == -1; }
int eq_00(signed short ss) { return ss == 0; }
int eq_01(signed short ss) { return ss == 1; }
int eq_02(signed short ss) { return ss == 2; }
int eq_03(signed short ss) { return ss == 3; }
int eq_04(signed short ss) { return ss == 4; }
int eq_05(signed short ss) { return ss == 5; }
int eq_07(signed short ss) { return ss == 7; }
int eq_08(signed short ss) { return ss == 8; }
int eq_09(signed short ss) { return ss == 9; }
int eq_15(signed short ss) { return ss == 15; }
int eq_16(signed short ss) { return ss == 16; }
int eq_17(signed short ss) { return ss == 17; }
int eq_31(signed short ss) { return ss == 31; }
int eq_32(signed short ss) { return ss == 32; }
int eq_33(signed short ss) { return ss == 33; }
int eq_63(signed short ss) { return ss == 63; }
int eq_64(signed short ss) { return ss == 64; }
int eq_65(signed short ss) { return ss == 65; }
int eq_127(signed short ss) { return ss == 127; }
int eq_128(signed short ss) { return ss == 128; }
int eq_129(signed short ss) { return ss == 129; }
int eq_255(signed short ss) { return ss == 255; }
int eq_256(signed short ss) { return ss == 256; }
int eq_257(signed short ss) { return ss == 257; }
int eq_511(signed short ss) { return ss == 511; }
int eq_512(signed short ss) { return ss == 512; }
int eq_513(signed short ss) { return ss == 513; }
int eq_1023(signed short ss) { return ss == 1023; }
int eq_1024(signed short ss) { return ss == 1024; }
int eq_1025(signed short ss) { return ss == 1025; }
int eq_2047(signed short ss) { return ss == 2047; }
int eq_2048(signed short ss) { return ss == 2048; }
int eq_2049(signed short ss) { return ss == 2049; }
int eq_4095(signed short ss) { return ss == 4095; }
int eq_4096(signed short ss) { return ss == 4096; }
int eq_4097(signed short ss) { return ss == 4097; }
int eq_8191(signed short ss) { return ss == 8191; }
int eq_8192(signed short ss) { return ss == 8192; }
int eq_8193(signed short ss) { return ss == 8193; }
int eq_16383(signed short ss) { return ss == 16383; }
int eq_16384(signed short ss) { return ss == 16384; }
int eq_16385(signed short ss) { return ss == 16385; }
int eq_32767(signed short ss) { return ss == 32767; }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(eq_m32768(ss) == 1);
  my_assert(eq_m32767(ss) != 1);

  ss = -16384;
  my_assert(eq_m16385(ss) != 1);
  my_assert(eq_m16384(ss) == 1);
  my_assert(eq_m16383(ss) != 1);

  ss = -8192;
  my_assert(eq_m8193(ss) != 1);
  my_assert(eq_m8192(ss) == 1);
  my_assert(eq_m8191(ss) != 1);

  ss = -4096;
  my_assert(eq_m4097(ss) != 1);
  my_assert(eq_m4096(ss) == 1);
  my_assert(eq_m4095(ss) != 1);

  ss = -2048;
  my_assert(eq_m2049(ss) != 1);
  my_assert(eq_m2048(ss) == 1);
  my_assert(eq_m2047(ss) != 1);

  ss = -1024;
  my_assert(eq_m1025(ss) != 1);
  my_assert(eq_m1024(ss) == 1);
  my_assert(eq_m1023(ss) != 1);

  ss = -512;
  my_assert(eq_m513(ss) != 1);
  my_assert(eq_m512(ss) == 1);
  my_assert(eq_m511(ss) != 1);

  ss = -256;
  my_assert(eq_m257(ss) != 1);
  my_assert(eq_m256(ss) == 1);
  my_assert(eq_m255(ss) != 1);

  ss = -128;
  my_assert(eq_m129(ss) != 1);
  my_assert(eq_m128(ss) == 1);
  my_assert(eq_m127(ss) != 1);

  ss = -64;
  my_assert(eq_m65(ss) != 1);
  my_assert(eq_m64(ss) == 1);
  my_assert(eq_m63(ss) != 1);

  ss = -32;
  my_assert(eq_m33(ss) != 1);
  my_assert(eq_m32(ss) == 1);
  my_assert(eq_m31(ss) != 1);

  ss = -16;
  my_assert(eq_m17(ss) != 1);
  my_assert(eq_m16(ss) == 1);
  my_assert(eq_m15(ss) != 1);

  ss = -8;
  my_assert(eq_m9(ss) != 1);
  my_assert(eq_m8(ss) == 1);
  my_assert(eq_m7(ss) != 1);

  ss = -4;
  my_assert(eq_m5(ss) != 1);
  my_assert(eq_m4(ss) == 1);
  my_assert(eq_m3(ss) != 1);

  ss = -2;
  my_assert(eq_m3(ss) != 1);
  my_assert(eq_m2(ss) == 1);
  my_assert(eq_m1(ss) != 1);

  ss = -1;
  my_assert(eq_m2(ss) != 1);
  my_assert(eq_m1(ss) == 1);
  my_assert(eq_00(ss) != 1);

  ss = 0;
  my_assert(eq_m1(ss) != 1);
  my_assert(eq_00(ss) == 1);
  my_assert(eq_01(ss) != 1);

  ss = 1;
  my_assert(eq_00(ss) != 1);
  my_assert(eq_01(ss) == 1);
  my_assert(eq_02(ss) != 1);

  ss = 2;
  my_assert(eq_01(ss) != 1);
  my_assert(eq_02(ss) == 1);
  my_assert(eq_03(ss) != 1);

  ss = 4;
  my_assert(eq_03(ss) != 1);
  my_assert(eq_04(ss) == 1);
  my_assert(eq_05(ss) != 1);

  ss = 8;
  my_assert(eq_07(ss) != 1);
  my_assert(eq_08(ss) == 1);
  my_assert(eq_09(ss) != 1);

  ss = 16;
  my_assert(eq_15(ss) != 1);
  my_assert(eq_16(ss) == 1);
  my_assert(eq_17(ss) != 1);

  ss = 32;
  my_assert(eq_31(ss) != 1);
  my_assert(eq_32(ss) == 1);
  my_assert(eq_33(ss) != 1);

  ss = 64;
  my_assert(eq_63(ss) != 1);
  my_assert(eq_64(ss) == 1);
  my_assert(eq_65(ss) != 1);

  ss = 128;
  my_assert(eq_127(ss) != 1);
  my_assert(eq_128(ss) == 1);
  my_assert(eq_129(ss) != 1);

  ss = 256;
  my_assert(eq_255(ss) != 1);
  my_assert(eq_256(ss) == 1);
  my_assert(eq_257(ss) != 1);

  ss = 512;
  my_assert(eq_511(ss) != 1);
  my_assert(eq_512(ss) == 1);
  my_assert(eq_513(ss) != 1);

  ss = 1024;
  my_assert(eq_1023(ss) != 1);
  my_assert(eq_1024(ss) == 1);
  my_assert(eq_1025(ss) != 1);

  ss = 2048;
  my_assert(eq_2047(ss) != 1);
  my_assert(eq_2048(ss) == 1);
  my_assert(eq_2049(ss) != 1);

  ss = 4096;
  my_assert(eq_4095(ss) != 1);
  my_assert(eq_4096(ss) == 1);
  my_assert(eq_4097(ss) != 1);

  ss = 8192;
  my_assert(eq_8191(ss) != 1);
  my_assert(eq_8192(ss) == 1);
  my_assert(eq_8193(ss) != 1);

  ss = 16384;
  my_assert(eq_16383(ss) != 1);
  my_assert(eq_16384(ss) == 1);
  my_assert(eq_16385(ss) != 1);

  ss = 32767;
  my_assert(eq_32767(ss) == 1);

  return exit_status;
}
