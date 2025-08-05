

int exit_status;

#include "my_assert.h"

int le_m32768(signed short ss) { return ss <= -32768; }
int le_m32767(signed short ss) { return ss <= -32767; }
int le_m16385(signed short ss) { return ss <= -16385; }
int le_m16384(signed short ss) { return ss <= -16384; }
int le_m16383(signed short ss) { return ss <= -16383; }
int le_m8193(signed short ss) { return ss <= -8193; }
int le_m8192(signed short ss) { return ss <= -8192; }
int le_m8191(signed short ss) { return ss <= -8191; }
int le_m4097(signed short ss) { return ss <= -4097; }
int le_m4096(signed short ss) { return ss <= -4096; }
int le_m4095(signed short ss) { return ss <= -4095; }
int le_m2049(signed short ss) { return ss <= -2049; }
int le_m2048(signed short ss) { return ss <= -2048; }
int le_m2047(signed short ss) { return ss <= -2047; }
int le_m1025(signed short ss) { return ss <= -1025; }
int le_m1024(signed short ss) { return ss <= -1024; }
int le_m1023(signed short ss) { return ss <= -1023; }
int le_m513(signed short ss) { return ss <= -513; }
int le_m512(signed short ss) { return ss <= -512; }
int le_m511(signed short ss) { return ss <= -511; }
int le_m257(signed short ss) { return ss <= -257; }
int le_m256(signed short ss) { return ss <= -256; }
int le_m255(signed short ss) { return ss <= -255; }
int le_m129(signed short ss) { return ss <= -129; }
int le_m128(signed short ss) { return ss <= -128; }
int le_m127(signed short ss) { return ss <= -127; }
int le_m65(signed short ss) { return ss <= -65; }
int le_m64(signed short ss) { return ss <= -64; }
int le_m63(signed short ss) { return ss <= -63; }
int le_m33(signed short ss) { return ss <= -33; }
int le_m32(signed short ss) { return ss <= -32; }
int le_m31(signed short ss) { return ss <= -31; }
int le_m17(signed short ss) { return ss <= -17; }
int le_m16(signed short ss) { return ss <= -16; }
int le_m15(signed short ss) { return ss <= -15; }
int le_m9(signed short ss) { return ss <= -9; }
int le_m8(signed short ss) { return ss <= -8; }
int le_m7(signed short ss) { return ss <= -7; }
int le_m5(signed short ss) { return ss <= -5; }
int le_m4(signed short ss) { return ss <= -4; }
int le_m3(signed short ss) { return ss <= -3; }
int le_m2(signed short ss) { return ss <= -2; }
int le_m1(signed short ss) { return ss <= -1; }
int le_00(signed short ss) { return ss <= 0; }
int le_01(signed short ss) { return ss <= 1; }
int le_02(signed short ss) { return ss <= 2; }
int le_03(signed short ss) { return ss <= 3; }
int le_04(signed short ss) { return ss <= 4; }
int le_05(signed short ss) { return ss <= 5; }
int le_07(signed short ss) { return ss <= 7; }
int le_08(signed short ss) { return ss <= 8; }
int le_09(signed short ss) { return ss <= 9; }
int le_15(signed short ss) { return ss <= 15; }
int le_16(signed short ss) { return ss <= 16; }
int le_17(signed short ss) { return ss <= 17; }
int le_31(signed short ss) { return ss <= 31; }
int le_32(signed short ss) { return ss <= 32; }
int le_33(signed short ss) { return ss <= 33; }
int le_63(signed short ss) { return ss <= 63; }
int le_64(signed short ss) { return ss <= 64; }
int le_65(signed short ss) { return ss <= 65; }
int le_127(signed short ss) { return ss <= 127; }
int le_128(signed short ss) { return ss <= 128; }
int le_129(signed short ss) { return ss <= 129; }
int le_255(signed short ss) { return ss <= 255; }
int le_256(signed short ss) { return ss <= 256; }
int le_257(signed short ss) { return ss <= 257; }
int le_511(signed short ss) { return ss <= 511; }
int le_512(signed short ss) { return ss <= 512; }
int le_513(signed short ss) { return ss <= 513; }
int le_1023(signed short ss) { return ss <= 1023; }
int le_1024(signed short ss) { return ss <= 1024; }
int le_1025(signed short ss) { return ss <= 1025; }
int le_2047(signed short ss) { return ss <= 2047; }
int le_2048(signed short ss) { return ss <= 2048; }
int le_2049(signed short ss) { return ss <= 2049; }
int le_4095(signed short ss) { return ss <= 4095; }
int le_4096(signed short ss) { return ss <= 4096; }
int le_4097(signed short ss) { return ss <= 4097; }
int le_8191(signed short ss) { return ss <= 8191; }
int le_8192(signed short ss) { return ss <= 8192; }
int le_8193(signed short ss) { return ss <= 8193; }
int le_16383(signed short ss) { return ss <= 16383; }
int le_16384(signed short ss) { return ss <= 16384; }
int le_16385(signed short ss) { return ss <= 16385; }
int le_32767(signed short ss) { return ss <= 32767; }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(le_m32768(ss) == 1);
  my_assert(le_m32767(ss) == 1);

  ss = -16384;
  my_assert(le_m16385(ss) != 1);
  my_assert(le_m16384(ss) == 1);
  my_assert(le_m16383(ss) == 1);

  ss = -8192;
  my_assert(le_m8193(ss) != 1);
  my_assert(le_m8192(ss) == 1);
  my_assert(le_m8191(ss) == 1);

  ss = -4096;
  my_assert(le_m4097(ss) != 1);
  my_assert(le_m4096(ss) == 1);
  my_assert(le_m4095(ss) == 1);

  ss = -2048;
  my_assert(le_m2049(ss) != 1);
  my_assert(le_m2048(ss) == 1);
  my_assert(le_m2047(ss) == 1);

  ss = -1024;
  my_assert(le_m1025(ss) != 1);
  my_assert(le_m1024(ss) == 1);
  my_assert(le_m1023(ss) == 1);

  ss = -512;
  my_assert(le_m513(ss) != 1);
  my_assert(le_m512(ss) == 1);
  my_assert(le_m511(ss) == 1);

  ss = -256;
  my_assert(le_m257(ss) != 1);
  my_assert(le_m256(ss) == 1);
  my_assert(le_m255(ss) == 1);

  ss = -128;
  my_assert(le_m129(ss) != 1);
  my_assert(le_m128(ss) == 1);
  my_assert(le_m127(ss) == 1);

  ss = -64;
  my_assert(le_m65(ss) != 1);
  my_assert(le_m64(ss) == 1);
  my_assert(le_m63(ss) == 1);

  ss = -32;
  my_assert(le_m33(ss) != 1);
  my_assert(le_m32(ss) == 1);
  my_assert(le_m31(ss) == 1);

  ss = -16;
  my_assert(le_m17(ss) != 1);
  my_assert(le_m16(ss) == 1);
  my_assert(le_m15(ss) == 1);

  ss = -8;
  my_assert(le_m9(ss) != 1);
  my_assert(le_m8(ss) == 1);
  my_assert(le_m7(ss) == 1);

  ss = -4;
  my_assert(le_m5(ss) != 1);
  my_assert(le_m4(ss) == 1);
  my_assert(le_m3(ss) == 1);

  ss = -2;
  my_assert(le_m3(ss) != 1);
  my_assert(le_m2(ss) == 1);
  my_assert(le_m1(ss) == 1);

  ss = -1;
  my_assert(le_m2(ss) != 1);
  my_assert(le_m1(ss) == 1);
  my_assert(le_00(ss) == 1);

  ss = 0;
  my_assert(le_m1(ss) != 1);
  my_assert(le_00(ss) == 1);
  my_assert(le_01(ss) == 1);

  ss = 1;
  my_assert(le_00(ss) != 1);
  my_assert(le_01(ss) == 1);
  my_assert(le_02(ss) == 1);

  ss = 2;
  my_assert(le_01(ss) != 1);
  my_assert(le_02(ss) == 1);
  my_assert(le_03(ss) == 1);

  ss = 4;
  my_assert(le_03(ss) != 1);
  my_assert(le_04(ss) == 1);
  my_assert(le_05(ss) == 1);

  ss = 8;
  my_assert(le_07(ss) != 1);
  my_assert(le_08(ss) == 1);
  my_assert(le_09(ss) == 1);

  ss = 16;
  my_assert(le_15(ss) != 1);
  my_assert(le_16(ss) == 1);
  my_assert(le_17(ss) == 1);

  ss = 32;
  my_assert(le_31(ss) != 1);
  my_assert(le_32(ss) == 1);
  my_assert(le_33(ss) == 1);

  ss = 64;
  my_assert(le_63(ss) != 1);
  my_assert(le_64(ss) == 1);
  my_assert(le_65(ss) == 1);

  ss = 128;
  my_assert(le_127(ss) != 1);
  my_assert(le_128(ss) == 1);
  my_assert(le_129(ss) == 1);

  ss = 256;
  my_assert(le_255(ss) != 1);
  my_assert(le_256(ss) == 1);
  my_assert(le_257(ss) == 1);

  ss = 512;
  my_assert(le_511(ss) != 1);
  my_assert(le_512(ss) == 1);
  my_assert(le_513(ss) == 1);

  ss = 1024;
  my_assert(le_1023(ss) != 1);
  my_assert(le_1024(ss) == 1);
  my_assert(le_1025(ss) == 1);

  ss = 2048;
  my_assert(le_2047(ss) != 1);
  my_assert(le_2048(ss) == 1);
  my_assert(le_2049(ss) == 1);

  ss = 4096;
  my_assert(le_4095(ss) != 1);
  my_assert(le_4096(ss) == 1);
  my_assert(le_4097(ss) == 1);

  ss = 8192;
  my_assert(le_8191(ss) != 1);
  my_assert(le_8192(ss) == 1);
  my_assert(le_8193(ss) == 1);

  ss = 16384;
  my_assert(le_16383(ss) != 1);
  my_assert(le_16384(ss) == 1);
  my_assert(le_16385(ss) == 1);

  ss = 32767;
  my_assert(le_32767(ss) == 1);

  return exit_status;
}
