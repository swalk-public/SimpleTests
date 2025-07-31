

int exit_status;

#include "my_assert.h"

int lt_m32768(signed short ss) { return ss < -32768; }
int lt_m32767(signed short ss) { return ss < -32767; }
int lt_m16385(signed short ss) { return ss < -16385; }
int lt_m16384(signed short ss) { return ss < -16384; }
int lt_m16383(signed short ss) { return ss < -16383; }
int lt_m8193(signed short ss) { return ss < -8193; }
int lt_m8192(signed short ss) { return ss < -8192; }
int lt_m8191(signed short ss) { return ss < -8191; }
int lt_m4097(signed short ss) { return ss < -4097; }
int lt_m4096(signed short ss) { return ss < -4096; }
int lt_m4095(signed short ss) { return ss < -4095; }
int lt_m2049(signed short ss) { return ss < -2049; }
int lt_m2048(signed short ss) { return ss < -2048; }
int lt_m2047(signed short ss) { return ss < -2047; }
int lt_m1025(signed short ss) { return ss < -1025; }
int lt_m1024(signed short ss) { return ss < -1024; }
int lt_m1023(signed short ss) { return ss < -1023; }
int lt_m513(signed short ss) { return ss < -513; }
int lt_m512(signed short ss) { return ss < -512; }
int lt_m511(signed short ss) { return ss < -511; }
int lt_m257(signed short ss) { return ss < -257; }
int lt_m256(signed short ss) { return ss < -256; }
int lt_m255(signed short ss) { return ss < -255; }
int lt_m129(signed short ss) { return ss < -129; }
int lt_m128(signed short ss) { return ss < -128; }
int lt_m127(signed short ss) { return ss < -127; }
int lt_m65(signed short ss) { return ss < -65; }
int lt_m64(signed short ss) { return ss < -64; }
int lt_m63(signed short ss) { return ss < -63; }
int lt_m33(signed short ss) { return ss < -33; }
int lt_m32(signed short ss) { return ss < -32; }
int lt_m31(signed short ss) { return ss < -31; }
int lt_m17(signed short ss) { return ss < -17; }
int lt_m16(signed short ss) { return ss < -16; }
int lt_m15(signed short ss) { return ss < -15; }
int lt_m9(signed short ss) { return ss < -9; }
int lt_m8(signed short ss) { return ss < -8; }
int lt_m7(signed short ss) { return ss < -7; }
int lt_m5(signed short ss) { return ss < -5; }
int lt_m4(signed short ss) { return ss < -4; }
int lt_m3(signed short ss) { return ss < -3; }
int lt_m2(signed short ss) { return ss < -2; }
int lt_m1(signed short ss) { return ss < -1; }
int lt_00(signed short ss) { return ss < 0; }
int lt_01(signed short ss) { return ss < 1; }
int lt_02(signed short ss) { return ss < 2; }
int lt_03(signed short ss) { return ss < 3; }
int lt_04(signed short ss) { return ss < 4; }
int lt_05(signed short ss) { return ss < 5; }
int lt_07(signed short ss) { return ss < 7; }
int lt_08(signed short ss) { return ss < 8; }
int lt_09(signed short ss) { return ss < 9; }
int lt_15(signed short ss) { return ss < 15; }
int lt_16(signed short ss) { return ss < 16; }
int lt_17(signed short ss) { return ss < 17; }
int lt_31(signed short ss) { return ss < 31; }
int lt_32(signed short ss) { return ss < 32; }
int lt_33(signed short ss) { return ss < 33; }
int lt_63(signed short ss) { return ss < 63; }
int lt_64(signed short ss) { return ss < 64; }
int lt_65(signed short ss) { return ss < 65; }
int lt_127(signed short ss) { return ss < 127; }
int lt_128(signed short ss) { return ss < 128; }
int lt_129(signed short ss) { return ss < 129; }
int lt_255(signed short ss) { return ss < 255; }
int lt_256(signed short ss) { return ss < 256; }
int lt_257(signed short ss) { return ss < 257; }
int lt_511(signed short ss) { return ss < 511; }
int lt_512(signed short ss) { return ss < 512; }
int lt_513(signed short ss) { return ss < 513; }
int lt_1023(signed short ss) { return ss < 1023; }
int lt_1024(signed short ss) { return ss < 1024; }
int lt_1025(signed short ss) { return ss < 1025; }
int lt_2047(signed short ss) { return ss < 2047; }
int lt_2048(signed short ss) { return ss < 2048; }
int lt_2049(signed short ss) { return ss < 2049; }
int lt_4095(signed short ss) { return ss < 4095; }
int lt_4096(signed short ss) { return ss < 4096; }
int lt_4097(signed short ss) { return ss < 4097; }
int lt_8191(signed short ss) { return ss < 8191; }
int lt_8192(signed short ss) { return ss < 8192; }
int lt_8193(signed short ss) { return ss < 8193; }
int lt_16383(signed short ss) { return ss < 16383; }
int lt_16384(signed short ss) { return ss < 16384; }
int lt_16385(signed short ss) { return ss < 16385; }
int lt_32767(signed short ss) { return ss < 32767; }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(lt_m32768(ss) != 1);
  my_assert(lt_m32767(ss) == 1);

  ss = -16384;
  my_assert(lt_m16385(ss) != 1);
  my_assert(lt_m16384(ss) != 1);
  my_assert(lt_m16383(ss) == 1);

  ss = -8192;
  my_assert(lt_m8193(ss) != 1);
  my_assert(lt_m8192(ss) != 1);
  my_assert(lt_m8191(ss) == 1);

  ss = -4096;
  my_assert(lt_m4097(ss) != 1);
  my_assert(lt_m4096(ss) != 1);
  my_assert(lt_m4095(ss) == 1);

  ss = -2048;
  my_assert(lt_m2049(ss) != 1);
  my_assert(lt_m2048(ss) != 1);
  my_assert(lt_m2047(ss) == 1);

  ss = -1024;
  my_assert(lt_m1025(ss) != 1);
  my_assert(lt_m1024(ss) != 1);
  my_assert(lt_m1023(ss) == 1);

  ss = -512;
  my_assert(lt_m513(ss) != 1);
  my_assert(lt_m512(ss) != 1);
  my_assert(lt_m511(ss) == 1);

  ss = -256;
  my_assert(lt_m257(ss) != 1);
  my_assert(lt_m256(ss) != 1);
  my_assert(lt_m255(ss) == 1);

  ss = -128;
  my_assert(lt_m129(ss) != 1);
  my_assert(lt_m128(ss) != 1);
  my_assert(lt_m127(ss) == 1);

  ss = -64;
  my_assert(lt_m65(ss) != 1);
  my_assert(lt_m64(ss) != 1);
  my_assert(lt_m63(ss) == 1);

  ss = -32;
  my_assert(lt_m33(ss) != 1);
  my_assert(lt_m32(ss) != 1);
  my_assert(lt_m31(ss) == 1);

  ss = -16;
  my_assert(lt_m17(ss) != 1);
  my_assert(lt_m16(ss) != 1);
  my_assert(lt_m15(ss) == 1);

  ss = -8;
  my_assert(lt_m9(ss) != 1);
  my_assert(lt_m8(ss) != 1);
  my_assert(lt_m7(ss) == 1);

  ss = -4;
  my_assert(lt_m5(ss) != 1);
  my_assert(lt_m4(ss) != 1);
  my_assert(lt_m3(ss) == 1);

  ss = -2;
  my_assert(lt_m3(ss) != 1);
  my_assert(lt_m2(ss) != 1);
  my_assert(lt_m1(ss) == 1);

  ss = -1;
  my_assert(lt_m2(ss) != 1);
  my_assert(lt_m1(ss) != 1);
  my_assert(lt_00(ss) == 1);

  ss = 0;
  my_assert(lt_m1(ss) != 1);
  my_assert(lt_00(ss) != 1);
  my_assert(lt_01(ss) == 1);

  ss = 1;
  my_assert(lt_00(ss) != 1);
  my_assert(lt_01(ss) != 1);
  my_assert(lt_02(ss) == 1);

  ss = 2;
  my_assert(lt_01(ss) != 1);
  my_assert(lt_02(ss) != 1);
  my_assert(lt_03(ss) == 1);

  ss = 4;
  my_assert(lt_03(ss) != 1);
  my_assert(lt_04(ss) != 1);
  my_assert(lt_05(ss) == 1);

  ss = 8;
  my_assert(lt_07(ss) != 1);
  my_assert(lt_08(ss) != 1);
  my_assert(lt_09(ss) == 1);

  ss = 16;
  my_assert(lt_15(ss) != 1);
  my_assert(lt_16(ss) != 1);
  my_assert(lt_17(ss) == 1);

  ss = 32;
  my_assert(lt_31(ss) != 1);
  my_assert(lt_32(ss) != 1);
  my_assert(lt_33(ss) == 1);

  ss = 64;
  my_assert(lt_63(ss) != 1);
  my_assert(lt_64(ss) != 1);
  my_assert(lt_65(ss) == 1);

  ss = 128;
  my_assert(lt_127(ss) != 1);
  my_assert(lt_128(ss) != 1);
  my_assert(lt_129(ss) == 1);

  ss = 256;
  my_assert(lt_255(ss) != 1);
  my_assert(lt_256(ss) != 1);
  my_assert(lt_257(ss) == 1);

  ss = 512;
  my_assert(lt_511(ss) != 1);
  my_assert(lt_512(ss) != 1);
  my_assert(lt_513(ss) == 1);

  ss = 1024;
  my_assert(lt_1023(ss) != 1);
  my_assert(lt_1024(ss) != 1);
  my_assert(lt_1025(ss) == 1);

  ss = 2048;
  my_assert(lt_2047(ss) != 1);
  my_assert(lt_2048(ss) != 1);
  my_assert(lt_2049(ss) == 1);

  ss = 4096;
  my_assert(lt_4095(ss) != 1);
  my_assert(lt_4096(ss) != 1);
  my_assert(lt_4097(ss) == 1);

  ss = 8192;
  my_assert(lt_8191(ss) != 1);
  my_assert(lt_8192(ss) != 1);
  my_assert(lt_8193(ss) == 1);

  ss = 16384;
  my_assert(lt_16383(ss) != 1);
  my_assert(lt_16384(ss) != 1);
  my_assert(lt_16385(ss) == 1);

  ss = 32767;
  my_assert(lt_32767(ss) != 1);

  return exit_status;
}
