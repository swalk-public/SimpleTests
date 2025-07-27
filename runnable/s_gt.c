

int exit_status;

#include "my_assert.h"

int gt_m32768(signed short ss) { return ss > -32768; }
int gt_m32767(signed short ss) { return ss > -32767; }
int gt_m16385(signed short ss) { return ss > -16385; }
int gt_m16384(signed short ss) { return ss > -16384; }
int gt_m16383(signed short ss) { return ss > -16383; }
int gt_m8193(signed short ss) { return ss > -8193; }
int gt_m8192(signed short ss) { return ss > -8192; }
int gt_m8191(signed short ss) { return ss > -8191; }
int gt_m4097(signed short ss) { return ss > -4097; }
int gt_m4096(signed short ss) { return ss > -4096; }
int gt_m4095(signed short ss) { return ss > -4095; }
int gt_m2049(signed short ss) { return ss > -2049; }
int gt_m2048(signed short ss) { return ss > -2048; }
int gt_m2047(signed short ss) { return ss > -2047; }
int gt_m1025(signed short ss) { return ss > -1025; }
int gt_m1024(signed short ss) { return ss > -1024; }
int gt_m1023(signed short ss) { return ss > -1023; }
int gt_m513(signed short ss) { return ss > -513; }
int gt_m512(signed short ss) { return ss > -512; }
int gt_m511(signed short ss) { return ss > -511; }
int gt_m257(signed short ss) { return ss > -257; }
int gt_m256(signed short ss) { return ss > -256; }
int gt_m255(signed short ss) { return ss > -255; }
int gt_m129(signed short ss) { return ss > -129; }
int gt_m128(signed short ss) { return ss > -128; }
int gt_m127(signed short ss) { return ss > -127; }
int gt_m65(signed short ss) { return ss > -65; }
int gt_m64(signed short ss) { return ss > -64; }
int gt_m63(signed short ss) { return ss > -63; }
int gt_m33(signed short ss) { return ss > -33; }
int gt_m32(signed short ss) { return ss > -32; }
int gt_m31(signed short ss) { return ss > -31; }
int gt_m17(signed short ss) { return ss > -17; }
int gt_m16(signed short ss) { return ss > -16; }
int gt_m15(signed short ss) { return ss > -15; }
int gt_m9(signed short ss) { return ss > -9; }
int gt_m8(signed short ss) { return ss > -8; }
int gt_m7(signed short ss) { return ss > -7; }
int gt_m5(signed short ss) { return ss > -5; }
int gt_m4(signed short ss) { return ss > -4; }
int gt_m3(signed short ss) { return ss > -3; }
int gt_m2(signed short ss) { return ss > -2; }
int gt_m1(signed short ss) { return ss > -1; }
int gt_00(signed short ss) { return ss > 0; }
int gt_01(signed short ss) { return ss > 1; }
int gt_02(signed short ss) { return ss > 2; }
int gt_03(signed short ss) { return ss > 3; }
int gt_04(signed short ss) { return ss > 4; }
int gt_05(signed short ss) { return ss > 5; }
int gt_07(signed short ss) { return ss > 7; }
int gt_08(signed short ss) { return ss > 8; }
int gt_09(signed short ss) { return ss > 9; }
int gt_15(signed short ss) { return ss > 15; }
int gt_16(signed short ss) { return ss > 16; }
int gt_17(signed short ss) { return ss > 17; }
int gt_31(signed short ss) { return ss > 31; }
int gt_32(signed short ss) { return ss > 32; }
int gt_33(signed short ss) { return ss > 33; }
int gt_63(signed short ss) { return ss > 63; }
int gt_64(signed short ss) { return ss > 64; }
int gt_65(signed short ss) { return ss > 65; }
int gt_127(signed short ss) { return ss > 127; }
int gt_128(signed short ss) { return ss > 128; }
int gt_129(signed short ss) { return ss > 129; }
int gt_255(signed short ss) { return ss > 255; }
int gt_256(signed short ss) { return ss > 256; }
int gt_257(signed short ss) { return ss > 257; }
int gt_511(signed short ss) { return ss > 511; }
int gt_512(signed short ss) { return ss > 512; }
int gt_513(signed short ss) { return ss > 513; }
int gt_1023(signed short ss) { return ss > 1023; }
int gt_1024(signed short ss) { return ss > 1024; }
int gt_1025(signed short ss) { return ss > 1025; }
int gt_2047(signed short ss) { return ss > 2047; }
int gt_2048(signed short ss) { return ss > 2048; }
int gt_2049(signed short ss) { return ss > 2049; }
int gt_4095(signed short ss) { return ss > 4095; }
int gt_4096(signed short ss) { return ss > 4096; }
int gt_4097(signed short ss) { return ss > 4097; }
int gt_8191(signed short ss) { return ss > 8191; }
int gt_8192(signed short ss) { return ss > 8192; }
int gt_8193(signed short ss) { return ss > 8193; }
int gt_16383(signed short ss) { return ss > 16383; }
int gt_16384(signed short ss) { return ss > 16384; }
int gt_16385(signed short ss) { return ss > 16385; }
int gt_32767(signed short ss) { return ss > 32767; }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(gt_m32768(ss) != 1);
  my_assert(gt_m32767(ss) != 1);

  ss = -16384;
  my_assert(gt_m16385(ss) == 1);
  my_assert(gt_m16384(ss) != 1);
  my_assert(gt_m16383(ss) != 1);

  ss = -8192;
  my_assert(gt_m8193(ss) == 1);
  my_assert(gt_m8192(ss) != 1);
  my_assert(gt_m8191(ss) != 1);

  ss = -4096;
  my_assert(gt_m4097(ss) == 1);
  my_assert(gt_m4096(ss) != 1);
  my_assert(gt_m4095(ss) != 1);

  ss = -2048;
  my_assert(gt_m2049(ss) == 1);
  my_assert(gt_m2048(ss) != 1);
  my_assert(gt_m2047(ss) != 1);

  ss = -1024;
  my_assert(gt_m1025(ss) == 1);
  my_assert(gt_m1024(ss) != 1);
  my_assert(gt_m1023(ss) != 1);

  ss = -512;
  my_assert(gt_m513(ss) == 1);
  my_assert(gt_m512(ss) != 1);
  my_assert(gt_m511(ss) != 1);

  ss = -256;
  my_assert(gt_m257(ss) == 1);
  my_assert(gt_m256(ss) != 1);
  my_assert(gt_m255(ss) != 1);

  ss = -128;
  my_assert(gt_m129(ss) == 1);
  my_assert(gt_m128(ss) != 1);
  my_assert(gt_m127(ss) != 1);

  ss = -64;
  my_assert(gt_m65(ss) == 1);
  my_assert(gt_m64(ss) != 1);
  my_assert(gt_m63(ss) != 1);

  ss = -32;
  my_assert(gt_m33(ss) == 1);
  my_assert(gt_m32(ss) != 1);
  my_assert(gt_m31(ss) != 1);

  ss = -16;
  my_assert(gt_m17(ss) == 1);
  my_assert(gt_m16(ss) != 1);
  my_assert(gt_m15(ss) != 1);

  ss = -8;
  my_assert(gt_m9(ss) == 1);
  my_assert(gt_m8(ss) != 1);
  my_assert(gt_m7(ss) != 1);

  ss = -4;
  my_assert(gt_m5(ss) == 1);
  my_assert(gt_m4(ss) != 1);
  my_assert(gt_m3(ss) != 1);

  ss = -2;
  my_assert(gt_m3(ss) == 1);
  my_assert(gt_m2(ss) != 1);
  my_assert(gt_m1(ss) != 1);

  ss = -1;
  my_assert(gt_m2(ss) == 1);
  my_assert(gt_m1(ss) != 1);
  my_assert(gt_00(ss) != 1);

  ss = 0;
  my_assert(gt_m1(ss) == 1);
  my_assert(gt_00(ss) != 1);
  my_assert(gt_01(ss) != 1);

  ss = 1;
  my_assert(gt_00(ss) == 1);
  my_assert(gt_01(ss) != 1);
  my_assert(gt_02(ss) != 1);

  ss = 2;
  my_assert(gt_01(ss) == 1);
  my_assert(gt_02(ss) != 1);
  my_assert(gt_03(ss) != 1);

  ss = 4;
  my_assert(gt_03(ss) == 1);
  my_assert(gt_04(ss) != 1);
  my_assert(gt_05(ss) != 1);

  ss = 8;
  my_assert(gt_07(ss) == 1);
  my_assert(gt_08(ss) != 1);
  my_assert(gt_09(ss) != 1);

  ss = 16;
  my_assert(gt_15(ss) == 1);
  my_assert(gt_16(ss) != 1);
  my_assert(gt_17(ss) != 1);

  ss = 32;
  my_assert(gt_31(ss) == 1);
  my_assert(gt_32(ss) != 1);
  my_assert(gt_33(ss) != 1);

  ss = 64;
  my_assert(gt_63(ss) == 1);
  my_assert(gt_64(ss) != 1);
  my_assert(gt_65(ss) != 1);

  ss = 128;
  my_assert(gt_127(ss) == 1);
  my_assert(gt_128(ss) != 1);
  my_assert(gt_129(ss) != 1);

  ss = 256;
  my_assert(gt_255(ss) == 1);
  my_assert(gt_256(ss) != 1);
  my_assert(gt_257(ss) != 1);

  ss = 512;
  my_assert(gt_511(ss) == 1);
  my_assert(gt_512(ss) != 1);
  my_assert(gt_513(ss) != 1);

  ss = 1024;
  my_assert(gt_1023(ss) == 1);
  my_assert(gt_1024(ss) != 1);
  my_assert(gt_1025(ss) != 1);

  ss = 2048;
  my_assert(gt_2047(ss) == 1);
  my_assert(gt_2048(ss) != 1);
  my_assert(gt_2049(ss) != 1);

  ss = 4096;
  my_assert(gt_4095(ss) == 1);
  my_assert(gt_4096(ss) != 1);
  my_assert(gt_4097(ss) != 1);

  ss = 8192;
  my_assert(gt_8191(ss) == 1);
  my_assert(gt_8192(ss) != 1);
  my_assert(gt_8193(ss) != 1);

  ss = 16384;
  my_assert(gt_16383(ss) == 1);
  my_assert(gt_16384(ss) != 1);
  my_assert(gt_16385(ss) != 1);

  ss = 32767;
  my_assert(gt_32767(ss) != 1);

  return exit_status;
}
