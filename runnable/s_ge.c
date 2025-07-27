

int exit_status;

#include "my_assert.h"

int ge_m32768(signed short ss) { return ss >= -32768; }
int ge_m32767(signed short ss) { return ss >= -32767; }
int ge_m16385(signed short ss) { return ss >= -16385; }
int ge_m16384(signed short ss) { return ss >= -16384; }
int ge_m16383(signed short ss) { return ss >= -16383; }
int ge_m8193(signed short ss) { return ss >= -8193; }
int ge_m8192(signed short ss) { return ss >= -8192; }
int ge_m8191(signed short ss) { return ss >= -8191; }
int ge_m4097(signed short ss) { return ss >= -4097; }
int ge_m4096(signed short ss) { return ss >= -4096; }
int ge_m4095(signed short ss) { return ss >= -4095; }
int ge_m2049(signed short ss) { return ss >= -2049; }
int ge_m2048(signed short ss) { return ss >= -2048; }
int ge_m2047(signed short ss) { return ss >= -2047; }
int ge_m1025(signed short ss) { return ss >= -1025; }
int ge_m1024(signed short ss) { return ss >= -1024; }
int ge_m1023(signed short ss) { return ss >= -1023; }
int ge_m513(signed short ss) { return ss >= -513; }
int ge_m512(signed short ss) { return ss >= -512; }
int ge_m511(signed short ss) { return ss >= -511; }
int ge_m257(signed short ss) { return ss >= -257; }
int ge_m256(signed short ss) { return ss >= -256; }
int ge_m255(signed short ss) { return ss >= -255; }
int ge_m129(signed short ss) { return ss >= -129; }
int ge_m128(signed short ss) { return ss >= -128; }
int ge_m127(signed short ss) { return ss >= -127; }
int ge_m65(signed short ss) { return ss >= -65; }
int ge_m64(signed short ss) { return ss >= -64; }
int ge_m63(signed short ss) { return ss >= -63; }
int ge_m33(signed short ss) { return ss >= -33; }
int ge_m32(signed short ss) { return ss >= -32; }
int ge_m31(signed short ss) { return ss >= -31; }
int ge_m17(signed short ss) { return ss >= -17; }
int ge_m16(signed short ss) { return ss >= -16; }
int ge_m15(signed short ss) { return ss >= -15; }
int ge_m9(signed short ss) { return ss >= -9; }
int ge_m8(signed short ss) { return ss >= -8; }
int ge_m7(signed short ss) { return ss >= -7; }
int ge_m5(signed short ss) { return ss >= -5; }
int ge_m4(signed short ss) { return ss >= -4; }
int ge_m3(signed short ss) { return ss >= -3; }
int ge_m2(signed short ss) { return ss >= -2; }
int ge_m1(signed short ss) { return ss >= -1; }
int ge_00(signed short ss) { return ss >= 0; }
int ge_01(signed short ss) { return ss >= 1; }
int ge_02(signed short ss) { return ss >= 2; }
int ge_03(signed short ss) { return ss >= 3; }
int ge_04(signed short ss) { return ss >= 4; }
int ge_05(signed short ss) { return ss >= 5; }
int ge_07(signed short ss) { return ss >= 7; }
int ge_08(signed short ss) { return ss >= 8; }
int ge_09(signed short ss) { return ss >= 9; }
int ge_15(signed short ss) { return ss >= 15; }
int ge_16(signed short ss) { return ss >= 16; }
int ge_17(signed short ss) { return ss >= 17; }
int ge_31(signed short ss) { return ss >= 31; }
int ge_32(signed short ss) { return ss >= 32; }
int ge_33(signed short ss) { return ss >= 33; }
int ge_63(signed short ss) { return ss >= 63; }
int ge_64(signed short ss) { return ss >= 64; }
int ge_65(signed short ss) { return ss >= 65; }
int ge_127(signed short ss) { return ss >= 127; }
int ge_128(signed short ss) { return ss >= 128; }
int ge_129(signed short ss) { return ss >= 129; }
int ge_255(signed short ss) { return ss >= 255; }
int ge_256(signed short ss) { return ss >= 256; }
int ge_257(signed short ss) { return ss >= 257; }
int ge_511(signed short ss) { return ss >= 511; }
int ge_512(signed short ss) { return ss >= 512; }
int ge_513(signed short ss) { return ss >= 513; }
int ge_1023(signed short ss) { return ss >= 1023; }
int ge_1024(signed short ss) { return ss >= 1024; }
int ge_1025(signed short ss) { return ss >= 1025; }
int ge_2047(signed short ss) { return ss >= 2047; }
int ge_2048(signed short ss) { return ss >= 2048; }
int ge_2049(signed short ss) { return ss >= 2049; }
int ge_4095(signed short ss) { return ss >= 4095; }
int ge_4096(signed short ss) { return ss >= 4096; }
int ge_4097(signed short ss) { return ss >= 4097; }
int ge_8191(signed short ss) { return ss >= 8191; }
int ge_8192(signed short ss) { return ss >= 8192; }
int ge_8193(signed short ss) { return ss >= 8193; }
int ge_16383(signed short ss) { return ss >= 16383; }
int ge_16384(signed short ss) { return ss >= 16384; }
int ge_16385(signed short ss) { return ss >= 16385; }
int ge_32767(signed short ss) { return ss >= 32767; }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(ge_m32768(ss) == 1);
  my_assert(ge_m32767(ss) != 1);

  ss = -16384;
  my_assert(ge_m16385(ss) == 1);
  my_assert(ge_m16384(ss) == 1);
  my_assert(ge_m16383(ss) != 1);

  ss = -8192;
  my_assert(ge_m8193(ss) == 1);
  my_assert(ge_m8192(ss) == 1);
  my_assert(ge_m8191(ss) != 1);

  ss = -4096;
  my_assert(ge_m4097(ss) == 1);
  my_assert(ge_m4096(ss) == 1);
  my_assert(ge_m4095(ss) != 1);

  ss = -2048;
  my_assert(ge_m2049(ss) == 1);
  my_assert(ge_m2048(ss) == 1);
  my_assert(ge_m2047(ss) != 1);

  ss = -1024;
  my_assert(ge_m1025(ss) == 1);
  my_assert(ge_m1024(ss) == 1);
  my_assert(ge_m1023(ss) != 1);

  ss = -512;
  my_assert(ge_m513(ss) == 1);
  my_assert(ge_m512(ss) == 1);
  my_assert(ge_m511(ss) != 1);

  ss = -256;
  my_assert(ge_m257(ss) == 1);
  my_assert(ge_m256(ss) == 1);
  my_assert(ge_m255(ss) != 1);

  ss = -128;
  my_assert(ge_m129(ss) == 1);
  my_assert(ge_m128(ss) == 1);
  my_assert(ge_m127(ss) != 1);

  ss = -64;
  my_assert(ge_m65(ss) == 1);
  my_assert(ge_m64(ss) == 1);
  my_assert(ge_m63(ss) != 1);

  ss = -32;
  my_assert(ge_m33(ss) == 1);
  my_assert(ge_m32(ss) == 1);
  my_assert(ge_m31(ss) != 1);

  ss = -16;
  my_assert(ge_m17(ss) == 1);
  my_assert(ge_m16(ss) == 1);
  my_assert(ge_m15(ss) != 1);

  ss = -8;
  my_assert(ge_m9(ss) == 1);
  my_assert(ge_m8(ss) == 1);
  my_assert(ge_m7(ss) != 1);

  ss = -4;
  my_assert(ge_m5(ss) == 1);
  my_assert(ge_m4(ss) == 1);
  my_assert(ge_m3(ss) != 1);

  ss = -2;
  my_assert(ge_m3(ss) == 1);
  my_assert(ge_m2(ss) == 1);
  my_assert(ge_m1(ss) != 1);

  ss = -1;
  my_assert(ge_m2(ss) == 1);
  my_assert(ge_m1(ss) == 1);
  my_assert(ge_00(ss) != 1);

  ss = 0;
  my_assert(ge_m1(ss) == 1);
  my_assert(ge_00(ss) == 1);
  my_assert(ge_01(ss) != 1);

  ss = 1;
  my_assert(ge_00(ss) == 1);
  my_assert(ge_01(ss) == 1);
  my_assert(ge_02(ss) != 1);

  ss = 2;
  my_assert(ge_01(ss) == 1);
  my_assert(ge_02(ss) == 1);
  my_assert(ge_03(ss) != 1);

  ss = 4;
  my_assert(ge_03(ss) == 1);
  my_assert(ge_04(ss) == 1);
  my_assert(ge_05(ss) != 1);

  ss = 8;
  my_assert(ge_07(ss) == 1);
  my_assert(ge_08(ss) == 1);
  my_assert(ge_09(ss) != 1);

  ss = 16;
  my_assert(ge_15(ss) == 1);
  my_assert(ge_16(ss) == 1);
  my_assert(ge_17(ss) != 1);

  ss = 32;
  my_assert(ge_31(ss) == 1);
  my_assert(ge_32(ss) == 1);
  my_assert(ge_33(ss) != 1);

  ss = 64;
  my_assert(ge_63(ss) == 1);
  my_assert(ge_64(ss) == 1);
  my_assert(ge_65(ss) != 1);

  ss = 128;
  my_assert(ge_127(ss) == 1);
  my_assert(ge_128(ss) == 1);
  my_assert(ge_129(ss) != 1);

  ss = 256;
  my_assert(ge_255(ss) == 1);
  my_assert(ge_256(ss) == 1);
  my_assert(ge_257(ss) != 1);

  ss = 512;
  my_assert(ge_511(ss) == 1);
  my_assert(ge_512(ss) == 1);
  my_assert(ge_513(ss) != 1);

  ss = 1024;
  my_assert(ge_1023(ss) == 1);
  my_assert(ge_1024(ss) == 1);
  my_assert(ge_1025(ss) != 1);

  ss = 2048;
  my_assert(ge_2047(ss) == 1);
  my_assert(ge_2048(ss) == 1);
  my_assert(ge_2049(ss) != 1);

  ss = 4096;
  my_assert(ge_4095(ss) == 1);
  my_assert(ge_4096(ss) == 1);
  my_assert(ge_4097(ss) != 1);

  ss = 8192;
  my_assert(ge_8191(ss) == 1);
  my_assert(ge_8192(ss) == 1);
  my_assert(ge_8193(ss) != 1);

  ss = 16384;
  my_assert(ge_16383(ss) == 1);
  my_assert(ge_16384(ss) == 1);
  my_assert(ge_16385(ss) != 1);

  ss = 32767;
  my_assert(ge_32767(ss) == 1);

  return exit_status;
}
