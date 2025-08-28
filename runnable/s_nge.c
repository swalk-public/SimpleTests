

int exit_status;

#include "my_assert.h"

int nge_m32768(signed short ss) { return !(ss >= -32768); }
int nge_m32767(signed short ss) { return !(ss >= -32767); }
int nge_m16385(signed short ss) { return !(ss >= -16385); }
int nge_m16384(signed short ss) { return !(ss >= -16384); }
int nge_m16383(signed short ss) { return !(ss >= -16383); }
int nge_m8193(signed short ss) { return !(ss >= -8193); }
int nge_m8192(signed short ss) { return !(ss >= -8192); }
int nge_m8191(signed short ss) { return !(ss >= -8191); }
int nge_m4097(signed short ss) { return !(ss >= -4097); }
int nge_m4096(signed short ss) { return !(ss >= -4096); }
int nge_m4095(signed short ss) { return !(ss >= -4095); }
int nge_m2049(signed short ss) { return !(ss >= -2049); }
int nge_m2048(signed short ss) { return !(ss >= -2048); }
int nge_m2047(signed short ss) { return !(ss >= -2047); }
int nge_m1025(signed short ss) { return !(ss >= -1025); }
int nge_m1024(signed short ss) { return !(ss >= -1024); }
int nge_m1023(signed short ss) { return !(ss >= -1023); }
int nge_m513(signed short ss) { return !(ss >= -513); }
int nge_m512(signed short ss) { return !(ss >= -512); }
int nge_m511(signed short ss) { return !(ss >= -511); }
int nge_m257(signed short ss) { return !(ss >= -257); }
int nge_m256(signed short ss) { return !(ss >= -256); }
int nge_m255(signed short ss) { return !(ss >= -255); }
int nge_m129(signed short ss) { return !(ss >= -129); }
int nge_m128(signed short ss) { return !(ss >= -128); }
int nge_m127(signed short ss) { return !(ss >= -127); }
int nge_m65(signed short ss) { return !(ss >= -65); }
int nge_m64(signed short ss) { return !(ss >= -64); }
int nge_m63(signed short ss) { return !(ss >= -63); }
int nge_m33(signed short ss) { return !(ss >= -33); }
int nge_m32(signed short ss) { return !(ss >= -32); }
int nge_m31(signed short ss) { return !(ss >= -31); }
int nge_m17(signed short ss) { return !(ss >= -17); }
int nge_m16(signed short ss) { return !(ss >= -16); }
int nge_m15(signed short ss) { return !(ss >= -15); }
int nge_m9(signed short ss) { return !(ss >= -9); }
int nge_m8(signed short ss) { return !(ss >= -8); }
int nge_m7(signed short ss) { return !(ss >= -7); }
int nge_m5(signed short ss) { return !(ss >= -5); }
int nge_m4(signed short ss) { return !(ss >= -4); }
int nge_m3(signed short ss) { return !(ss >= -3); }
int nge_m2(signed short ss) { return !(ss >= -2); }
int nge_m1(signed short ss) { return !(ss >= -1); }
int nge_00(signed short ss) { return !(ss >= 0); }
int nge_01(signed short ss) { return !(ss >= 1); }
int nge_02(signed short ss) { return !(ss >= 2); }
int nge_03(signed short ss) { return !(ss >= 3); }
int nge_04(signed short ss) { return !(ss >= 4); }
int nge_05(signed short ss) { return !(ss >= 5); }
int nge_07(signed short ss) { return !(ss >= 7); }
int nge_08(signed short ss) { return !(ss >= 8); }
int nge_09(signed short ss) { return !(ss >= 9); }
int nge_15(signed short ss) { return !(ss >= 15); }
int nge_16(signed short ss) { return !(ss >= 16); }
int nge_17(signed short ss) { return !(ss >= 17); }
int nge_31(signed short ss) { return !(ss >= 31); }
int nge_32(signed short ss) { return !(ss >= 32); }
int nge_33(signed short ss) { return !(ss >= 33); }
int nge_63(signed short ss) { return !(ss >= 63); }
int nge_64(signed short ss) { return !(ss >= 64); }
int nge_65(signed short ss) { return !(ss >= 65); }
int nge_127(signed short ss) { return !(ss >= 127); }
int nge_128(signed short ss) { return !(ss >= 128); }
int nge_129(signed short ss) { return !(ss >= 129); }
int nge_255(signed short ss) { return !(ss >= 255); }
int nge_256(signed short ss) { return !(ss >= 256); }
int nge_257(signed short ss) { return !(ss >= 257); }
int nge_511(signed short ss) { return !(ss >= 511); }
int nge_512(signed short ss) { return !(ss >= 512); }
int nge_513(signed short ss) { return !(ss >= 513); }
int nge_1023(signed short ss) { return !(ss >= 1023); }
int nge_1024(signed short ss) { return !(ss >= 1024); }
int nge_1025(signed short ss) { return !(ss >= 1025); }
int nge_2047(signed short ss) { return !(ss >= 2047); }
int nge_2048(signed short ss) { return !(ss >= 2048); }
int nge_2049(signed short ss) { return !(ss >= 2049); }
int nge_4095(signed short ss) { return !(ss >= 4095); }
int nge_4096(signed short ss) { return !(ss >= 4096); }
int nge_4097(signed short ss) { return !(ss >= 4097); }
int nge_8191(signed short ss) { return !(ss >= 8191); }
int nge_8192(signed short ss) { return !(ss >= 8192); }
int nge_8193(signed short ss) { return !(ss >= 8193); }
int nge_16383(signed short ss) { return !(ss >= 16383); }
int nge_16384(signed short ss) { return !(ss >= 16384); }
int nge_16385(signed short ss) { return !(ss >= 16385); }
int nge_32767(signed short ss) { return !(ss >= 32767); }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(nge_m32768(ss) != 1);
  my_assert(nge_m32767(ss) == 1);

  ss = -16384;
  my_assert(nge_m16385(ss) != 1);
  my_assert(nge_m16384(ss) != 1);
  my_assert(nge_m16383(ss) == 1);

  ss = -8192;
  my_assert(nge_m8193(ss) != 1);
  my_assert(nge_m8192(ss) != 1);
  my_assert(nge_m8191(ss) == 1);

  ss = -4096;
  my_assert(nge_m4097(ss) != 1);
  my_assert(nge_m4096(ss) != 1);
  my_assert(nge_m4095(ss) == 1);

  ss = -2048;
  my_assert(nge_m2049(ss) != 1);
  my_assert(nge_m2048(ss) != 1);
  my_assert(nge_m2047(ss) == 1);

  ss = -1024;
  my_assert(nge_m1025(ss) != 1);
  my_assert(nge_m1024(ss) != 1);
  my_assert(nge_m1023(ss) == 1);

  ss = -512;
  my_assert(nge_m513(ss) != 1);
  my_assert(nge_m512(ss) != 1);
  my_assert(nge_m511(ss) == 1);

  ss = -256;
  my_assert(nge_m257(ss) != 1);
  my_assert(nge_m256(ss) != 1);
  my_assert(nge_m255(ss) == 1);

  ss = -128;
  my_assert(nge_m129(ss) != 1);
  my_assert(nge_m128(ss) != 1);
  my_assert(nge_m127(ss) == 1);

  ss = -64;
  my_assert(nge_m65(ss) != 1);
  my_assert(nge_m64(ss) != 1);
  my_assert(nge_m63(ss) == 1);

  ss = -32;
  my_assert(nge_m33(ss) != 1);
  my_assert(nge_m32(ss) != 1);
  my_assert(nge_m31(ss) == 1);

  ss = -16;
  my_assert(nge_m17(ss) != 1);
  my_assert(nge_m16(ss) != 1);
  my_assert(nge_m15(ss) == 1);

  ss = -8;
  my_assert(nge_m9(ss) != 1);
  my_assert(nge_m8(ss) != 1);
  my_assert(nge_m7(ss) == 1);

  ss = -4;
  my_assert(nge_m5(ss) != 1);
  my_assert(nge_m4(ss) != 1);
  my_assert(nge_m3(ss) == 1);

  ss = -2;
  my_assert(nge_m3(ss) != 1);
  my_assert(nge_m2(ss) != 1);
  my_assert(nge_m1(ss) == 1);

  ss = -1;
  my_assert(nge_m2(ss) != 1);
  my_assert(nge_m1(ss) != 1);
  my_assert(nge_00(ss) == 1);

  ss = 0;
  my_assert(nge_m1(ss) != 1);
  my_assert(nge_00(ss) != 1);
  my_assert(nge_01(ss) == 1);

  ss = 1;
  my_assert(nge_00(ss) != 1);
  my_assert(nge_01(ss) != 1);
  my_assert(nge_02(ss) == 1);

  ss = 2;
  my_assert(nge_01(ss) != 1);
  my_assert(nge_02(ss) != 1);
  my_assert(nge_03(ss) == 1);

  ss = 4;
  my_assert(nge_03(ss) != 1);
  my_assert(nge_04(ss) != 1);
  my_assert(nge_05(ss) == 1);

  ss = 8;
  my_assert(nge_07(ss) != 1);
  my_assert(nge_08(ss) != 1);
  my_assert(nge_09(ss) == 1);

  ss = 16;
  my_assert(nge_15(ss) != 1);
  my_assert(nge_16(ss) != 1);
  my_assert(nge_17(ss) == 1);

  ss = 32;
  my_assert(nge_31(ss) != 1);
  my_assert(nge_32(ss) != 1);
  my_assert(nge_33(ss) == 1);

  ss = 64;
  my_assert(nge_63(ss) != 1);
  my_assert(nge_64(ss) != 1);
  my_assert(nge_65(ss) == 1);

  ss = 128;
  my_assert(nge_127(ss) != 1);
  my_assert(nge_128(ss) != 1);
  my_assert(nge_129(ss) == 1);

  ss = 256;
  my_assert(nge_255(ss) != 1);
  my_assert(nge_256(ss) != 1);
  my_assert(nge_257(ss) == 1);

  ss = 512;
  my_assert(nge_511(ss) != 1);
  my_assert(nge_512(ss) != 1);
  my_assert(nge_513(ss) == 1);

  ss = 1024;
  my_assert(nge_1023(ss) != 1);
  my_assert(nge_1024(ss) != 1);
  my_assert(nge_1025(ss) == 1);

  ss = 2048;
  my_assert(nge_2047(ss) != 1);
  my_assert(nge_2048(ss) != 1);
  my_assert(nge_2049(ss) == 1);

  ss = 4096;
  my_assert(nge_4095(ss) != 1);
  my_assert(nge_4096(ss) != 1);
  my_assert(nge_4097(ss) == 1);

  ss = 8192;
  my_assert(nge_8191(ss) != 1);
  my_assert(nge_8192(ss) != 1);
  my_assert(nge_8193(ss) == 1);

  ss = 16384;
  my_assert(nge_16383(ss) != 1);
  my_assert(nge_16384(ss) != 1);
  my_assert(nge_16385(ss) == 1);

  ss = 32767;
  my_assert(nge_32767(ss) != 1);

  return exit_status;
}
