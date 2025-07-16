

int exit_status;

#include "my_assert.h"

int ne_m32768(signed short ss) { return ss != -32768; }
int ne_m32767(signed short ss) { return ss != -32767; }
int ne_m16385(signed short ss) { return ss != -16385; }
int ne_m16384(signed short ss) { return ss != -16384; }
int ne_m16383(signed short ss) { return ss != -16383; }
int ne_m8193(signed short ss) { return ss != -8193; }
int ne_m8192(signed short ss) { return ss != -8192; }
int ne_m8191(signed short ss) { return ss != -8191; }
int ne_m4097(signed short ss) { return ss != -4097; }
int ne_m4096(signed short ss) { return ss != -4096; }
int ne_m4095(signed short ss) { return ss != -4095; }
int ne_m2049(signed short ss) { return ss != -2049; }
int ne_m2048(signed short ss) { return ss != -2048; }
int ne_m2047(signed short ss) { return ss != -2047; }
int ne_m1025(signed short ss) { return ss != -1025; }
int ne_m1024(signed short ss) { return ss != -1024; }
int ne_m1023(signed short ss) { return ss != -1023; }
int ne_m513(signed short ss) { return ss != -513; }
int ne_m512(signed short ss) { return ss != -512; }
int ne_m511(signed short ss) { return ss != -511; }
int ne_m257(signed short ss) { return ss != -257; }
int ne_m256(signed short ss) { return ss != -256; }
int ne_m255(signed short ss) { return ss != -255; }
int ne_m129(signed short ss) { return ss != -129; }
int ne_m128(signed short ss) { return ss != -128; }
int ne_m127(signed short ss) { return ss != -127; }
int ne_m65(signed short ss) { return ss != -65; }
int ne_m64(signed short ss) { return ss != -64; }
int ne_m63(signed short ss) { return ss != -63; }
int ne_m33(signed short ss) { return ss != -33; }
int ne_m32(signed short ss) { return ss != -32; }
int ne_m31(signed short ss) { return ss != -31; }
int ne_m17(signed short ss) { return ss != -17; }
int ne_m16(signed short ss) { return ss != -16; }
int ne_m15(signed short ss) { return ss != -15; }
int ne_m9(signed short ss) { return ss != -9; }
int ne_m8(signed short ss) { return ss != -8; }
int ne_m7(signed short ss) { return ss != -7; }
int ne_m5(signed short ss) { return ss != -5; }
int ne_m4(signed short ss) { return ss != -4; }
int ne_m3(signed short ss) { return ss != -3; }
int ne_m2(signed short ss) { return ss != -2; }
int ne_m1(signed short ss) { return ss != -1; }
int ne_00(signed short ss) { return ss != 0; }
int ne_01(signed short ss) { return ss != 1; }
int ne_02(signed short ss) { return ss != 2; }
int ne_03(signed short ss) { return ss != 3; }
int ne_04(signed short ss) { return ss != 4; }
int ne_05(signed short ss) { return ss != 5; }
int ne_07(signed short ss) { return ss != 7; }
int ne_08(signed short ss) { return ss != 8; }
int ne_09(signed short ss) { return ss != 9; }
int ne_15(signed short ss) { return ss != 15; }
int ne_16(signed short ss) { return ss != 16; }
int ne_17(signed short ss) { return ss != 17; }
int ne_31(signed short ss) { return ss != 31; }
int ne_32(signed short ss) { return ss != 32; }
int ne_33(signed short ss) { return ss != 33; }
int ne_63(signed short ss) { return ss != 63; }
int ne_64(signed short ss) { return ss != 64; }
int ne_65(signed short ss) { return ss != 65; }
int ne_127(signed short ss) { return ss != 127; }
int ne_128(signed short ss) { return ss != 128; }
int ne_129(signed short ss) { return ss != 129; }
int ne_255(signed short ss) { return ss != 255; }
int ne_256(signed short ss) { return ss != 256; }
int ne_257(signed short ss) { return ss != 257; }
int ne_511(signed short ss) { return ss != 511; }
int ne_512(signed short ss) { return ss != 512; }
int ne_513(signed short ss) { return ss != 513; }
int ne_1023(signed short ss) { return ss != 1023; }
int ne_1024(signed short ss) { return ss != 1024; }
int ne_1025(signed short ss) { return ss != 1025; }
int ne_2047(signed short ss) { return ss != 2047; }
int ne_2048(signed short ss) { return ss != 2048; }
int ne_2049(signed short ss) { return ss != 2049; }
int ne_4095(signed short ss) { return ss != 4095; }
int ne_4096(signed short ss) { return ss != 4096; }
int ne_4097(signed short ss) { return ss != 4097; }
int ne_8191(signed short ss) { return ss != 8191; }
int ne_8192(signed short ss) { return ss != 8192; }
int ne_8193(signed short ss) { return ss != 8193; }
int ne_16383(signed short ss) { return ss != 16383; }
int ne_16384(signed short ss) { return ss != 16384; }
int ne_16385(signed short ss) { return ss != 16385; }
int ne_32767(signed short ss) { return ss != 32767; }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(ne_m32768(ss) != 1);
  my_assert(ne_m32767(ss) == 1);

  ss = -16384;
  my_assert(ne_m16385(ss) == 1);
  my_assert(ne_m16384(ss) != 1);
  my_assert(ne_m16383(ss) == 1);

  ss = -8192;
  my_assert(ne_m8193(ss) == 1);
  my_assert(ne_m8192(ss) != 1);
  my_assert(ne_m8191(ss) == 1);

  ss = -4096;
  my_assert(ne_m4097(ss) == 1);
  my_assert(ne_m4096(ss) != 1);
  my_assert(ne_m4095(ss) == 1);

  ss = -2048;
  my_assert(ne_m2049(ss) == 1);
  my_assert(ne_m2048(ss) != 1);
  my_assert(ne_m2047(ss) == 1);

  ss = -1024;
  my_assert(ne_m1025(ss) == 1);
  my_assert(ne_m1024(ss) != 1);
  my_assert(ne_m1023(ss) == 1);

  ss = -512;
  my_assert(ne_m513(ss) == 1);
  my_assert(ne_m512(ss) != 1);
  my_assert(ne_m511(ss) == 1);

  ss = -256;
  my_assert(ne_m257(ss) == 1);
  my_assert(ne_m256(ss) != 1);
  my_assert(ne_m255(ss) == 1);

  ss = -128;
  my_assert(ne_m129(ss) == 1);
  my_assert(ne_m128(ss) != 1);
  my_assert(ne_m127(ss) == 1);

  ss = -64;
  my_assert(ne_m65(ss) == 1);
  my_assert(ne_m64(ss) != 1);
  my_assert(ne_m63(ss) == 1);

  ss = -32;
  my_assert(ne_m33(ss) == 1);
  my_assert(ne_m32(ss) != 1);
  my_assert(ne_m31(ss) == 1);

  ss = -16;
  my_assert(ne_m17(ss) == 1);
  my_assert(ne_m16(ss) != 1);
  my_assert(ne_m15(ss) == 1);

  ss = -8;
  my_assert(ne_m9(ss) == 1);
  my_assert(ne_m8(ss) != 1);
  my_assert(ne_m7(ss) == 1);

  ss = -4;
  my_assert(ne_m5(ss) == 1);
  my_assert(ne_m4(ss) != 1);
  my_assert(ne_m3(ss) == 1);

  ss = -2;
  my_assert(ne_m3(ss) == 1);
  my_assert(ne_m2(ss) != 1);
  my_assert(ne_m1(ss) == 1);

  ss = -1;
  my_assert(ne_m2(ss) == 1);
  my_assert(ne_m1(ss) != 1);
  my_assert(ne_00(ss) == 1);

  ss = 0;
  my_assert(ne_m1(ss) == 1);
  my_assert(ne_00(ss) != 1);
  my_assert(ne_01(ss) == 1);

  ss = 1;
  my_assert(ne_00(ss) == 1);
  my_assert(ne_01(ss) != 1);
  my_assert(ne_02(ss) == 1);

  ss = 2;
  my_assert(ne_01(ss) == 1);
  my_assert(ne_02(ss) != 1);
  my_assert(ne_03(ss) == 1);

  ss = 4;
  my_assert(ne_03(ss) == 1);
  my_assert(ne_04(ss) != 1);
  my_assert(ne_05(ss) == 1);

  ss = 8;
  my_assert(ne_07(ss) == 1);
  my_assert(ne_08(ss) != 1);
  my_assert(ne_09(ss) == 1);

  ss = 16;
  my_assert(ne_15(ss) == 1);
  my_assert(ne_16(ss) != 1);
  my_assert(ne_17(ss) == 1);

  ss = 32;
  my_assert(ne_31(ss) == 1);
  my_assert(ne_32(ss) != 1);
  my_assert(ne_33(ss) == 1);

  ss = 64;
  my_assert(ne_63(ss) == 1);
  my_assert(ne_64(ss) != 1);
  my_assert(ne_65(ss) == 1);

  ss = 128;
  my_assert(ne_127(ss) == 1);
  my_assert(ne_128(ss) != 1);
  my_assert(ne_129(ss) == 1);

  ss = 256;
  my_assert(ne_255(ss) == 1);
  my_assert(ne_256(ss) != 1);
  my_assert(ne_257(ss) == 1);

  ss = 512;
  my_assert(ne_511(ss) == 1);
  my_assert(ne_512(ss) != 1);
  my_assert(ne_513(ss) == 1);

  ss = 1024;
  my_assert(ne_1023(ss) == 1);
  my_assert(ne_1024(ss) != 1);
  my_assert(ne_1025(ss) == 1);

  ss = 2048;
  my_assert(ne_2047(ss) == 1);
  my_assert(ne_2048(ss) != 1);
  my_assert(ne_2049(ss) == 1);

  ss = 4096;
  my_assert(ne_4095(ss) == 1);
  my_assert(ne_4096(ss) != 1);
  my_assert(ne_4097(ss) == 1);

  ss = 8192;
  my_assert(ne_8191(ss) == 1);
  my_assert(ne_8192(ss) != 1);
  my_assert(ne_8193(ss) == 1);

  ss = 16384;
  my_assert(ne_16383(ss) == 1);
  my_assert(ne_16384(ss) != 1);
  my_assert(ne_16385(ss) == 1);

  ss = 32767;
  my_assert(ne_32767(ss) != 1);

  return exit_status;
}
