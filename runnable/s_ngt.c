

int exit_status;

#include "my_assert.h"

int ngt_m32768(signed short ss) { return !(ss > -32768); }
int ngt_m32767(signed short ss) { return !(ss > -32767); }
int ngt_m16385(signed short ss) { return !(ss > -16385); }
int ngt_m16384(signed short ss) { return !(ss > -16384); }
int ngt_m16383(signed short ss) { return !(ss > -16383); }
int ngt_m8193(signed short ss) { return !(ss > -8193); }
int ngt_m8192(signed short ss) { return !(ss > -8192); }
int ngt_m8191(signed short ss) { return !(ss > -8191); }
int ngt_m4097(signed short ss) { return !(ss > -4097); }
int ngt_m4096(signed short ss) { return !(ss > -4096); }
int ngt_m4095(signed short ss) { return !(ss > -4095); }
int ngt_m2049(signed short ss) { return !(ss > -2049); }
int ngt_m2048(signed short ss) { return !(ss > -2048); }
int ngt_m2047(signed short ss) { return !(ss > -2047); }
int ngt_m1025(signed short ss) { return !(ss > -1025); }
int ngt_m1024(signed short ss) { return !(ss > -1024); }
int ngt_m1023(signed short ss) { return !(ss > -1023); }
int ngt_m513(signed short ss) { return !(ss > -513); }
int ngt_m512(signed short ss) { return !(ss > -512); }
int ngt_m511(signed short ss) { return !(ss > -511); }
int ngt_m257(signed short ss) { return !(ss > -257); }
int ngt_m256(signed short ss) { return !(ss > -256); }
int ngt_m255(signed short ss) { return !(ss > -255); }
int ngt_m129(signed short ss) { return !(ss > -129); }
int ngt_m128(signed short ss) { return !(ss > -128); }
int ngt_m127(signed short ss) { return !(ss > -127); }
int ngt_m65(signed short ss) { return !(ss > -65); }
int ngt_m64(signed short ss) { return !(ss > -64); }
int ngt_m63(signed short ss) { return !(ss > -63); }
int ngt_m33(signed short ss) { return !(ss > -33); }
int ngt_m32(signed short ss) { return !(ss > -32); }
int ngt_m31(signed short ss) { return !(ss > -31); }
int ngt_m17(signed short ss) { return !(ss > -17); }
int ngt_m16(signed short ss) { return !(ss > -16); }
int ngt_m15(signed short ss) { return !(ss > -15); }
int ngt_m9(signed short ss) { return !(ss > -9); }
int ngt_m8(signed short ss) { return !(ss > -8); }
int ngt_m7(signed short ss) { return !(ss > -7); }
int ngt_m5(signed short ss) { return !(ss > -5); }
int ngt_m4(signed short ss) { return !(ss > -4); }
int ngt_m3(signed short ss) { return !(ss > -3); }
int ngt_m2(signed short ss) { return !(ss > -2); }
int ngt_m1(signed short ss) { return !(ss > -1); }
int ngt_00(signed short ss) { return !(ss > 0); }
int ngt_01(signed short ss) { return !(ss > 1); }
int ngt_02(signed short ss) { return !(ss > 2); }
int ngt_03(signed short ss) { return !(ss > 3); }
int ngt_04(signed short ss) { return !(ss > 4); }
int ngt_05(signed short ss) { return !(ss > 5); }
int ngt_07(signed short ss) { return !(ss > 7); }
int ngt_08(signed short ss) { return !(ss > 8); }
int ngt_09(signed short ss) { return !(ss > 9); }
int ngt_15(signed short ss) { return !(ss > 15); }
int ngt_16(signed short ss) { return !(ss > 16); }
int ngt_17(signed short ss) { return !(ss > 17); }
int ngt_31(signed short ss) { return !(ss > 31); }
int ngt_32(signed short ss) { return !(ss > 32); }
int ngt_33(signed short ss) { return !(ss > 33); }
int ngt_63(signed short ss) { return !(ss > 63); }
int ngt_64(signed short ss) { return !(ss > 64); }
int ngt_65(signed short ss) { return !(ss > 65); }
int ngt_127(signed short ss) { return !(ss > 127); }
int ngt_128(signed short ss) { return !(ss > 128); }
int ngt_129(signed short ss) { return !(ss > 129); }
int ngt_255(signed short ss) { return !(ss > 255); }
int ngt_256(signed short ss) { return !(ss > 256); }
int ngt_257(signed short ss) { return !(ss > 257); }
int ngt_511(signed short ss) { return !(ss > 511); }
int ngt_512(signed short ss) { return !(ss > 512); }
int ngt_513(signed short ss) { return !(ss > 513); }
int ngt_1023(signed short ss) { return !(ss > 1023); }
int ngt_1024(signed short ss) { return !(ss > 1024); }
int ngt_1025(signed short ss) { return !(ss > 1025); }
int ngt_2047(signed short ss) { return !(ss > 2047); }
int ngt_2048(signed short ss) { return !(ss > 2048); }
int ngt_2049(signed short ss) { return !(ss > 2049); }
int ngt_4095(signed short ss) { return !(ss > 4095); }
int ngt_4096(signed short ss) { return !(ss > 4096); }
int ngt_4097(signed short ss) { return !(ss > 4097); }
int ngt_8191(signed short ss) { return !(ss > 8191); }
int ngt_8192(signed short ss) { return !(ss > 8192); }
int ngt_8193(signed short ss) { return !(ss > 8193); }
int ngt_16383(signed short ss) { return !(ss > 16383); }
int ngt_16384(signed short ss) { return !(ss > 16384); }
int ngt_16385(signed short ss) { return !(ss > 16385); }
int ngt_32767(signed short ss) { return !(ss > 32767); }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(ngt_m32768(ss) == 1);
  my_assert(ngt_m32767(ss) == 1);

  ss = -16384;
  my_assert(ngt_m16385(ss) != 1);
  my_assert(ngt_m16384(ss) == 1);
  my_assert(ngt_m16383(ss) == 1);

  ss = -8192;
  my_assert(ngt_m8193(ss) != 1);
  my_assert(ngt_m8192(ss) == 1);
  my_assert(ngt_m8191(ss) == 1);

  ss = -4096;
  my_assert(ngt_m4097(ss) != 1);
  my_assert(ngt_m4096(ss) == 1);
  my_assert(ngt_m4095(ss) == 1);

  ss = -2048;
  my_assert(ngt_m2049(ss) != 1);
  my_assert(ngt_m2048(ss) == 1);
  my_assert(ngt_m2047(ss) == 1);

  ss = -1024;
  my_assert(ngt_m1025(ss) != 1);
  my_assert(ngt_m1024(ss) == 1);
  my_assert(ngt_m1023(ss) == 1);

  ss = -512;
  my_assert(ngt_m513(ss) != 1);
  my_assert(ngt_m512(ss) == 1);
  my_assert(ngt_m511(ss) == 1);

  ss = -256;
  my_assert(ngt_m257(ss) != 1);
  my_assert(ngt_m256(ss) == 1);
  my_assert(ngt_m255(ss) == 1);

  ss = -128;
  my_assert(ngt_m129(ss) != 1);
  my_assert(ngt_m128(ss) == 1);
  my_assert(ngt_m127(ss) == 1);

  ss = -64;
  my_assert(ngt_m65(ss) != 1);
  my_assert(ngt_m64(ss) == 1);
  my_assert(ngt_m63(ss) == 1);

  ss = -32;
  my_assert(ngt_m33(ss) != 1);
  my_assert(ngt_m32(ss) == 1);
  my_assert(ngt_m31(ss) == 1);

  ss = -16;
  my_assert(ngt_m17(ss) != 1);
  my_assert(ngt_m16(ss) == 1);
  my_assert(ngt_m15(ss) == 1);

  ss = -8;
  my_assert(ngt_m9(ss) != 1);
  my_assert(ngt_m8(ss) == 1);
  my_assert(ngt_m7(ss) == 1);

  ss = -4;
  my_assert(ngt_m5(ss) != 1);
  my_assert(ngt_m4(ss) == 1);
  my_assert(ngt_m3(ss) == 1);

  ss = -2;
  my_assert(ngt_m3(ss) != 1);
  my_assert(ngt_m2(ss) == 1);
  my_assert(ngt_m1(ss) == 1);

  ss = -1;
  my_assert(ngt_m2(ss) != 1);
  my_assert(ngt_m1(ss) == 1);
  my_assert(ngt_00(ss) == 1);

  ss = 0;
  my_assert(ngt_m1(ss) != 1);
  my_assert(ngt_00(ss) == 1);
  my_assert(ngt_01(ss) == 1);

  ss = 1;
  my_assert(ngt_00(ss) != 1);
  my_assert(ngt_01(ss) == 1);
  my_assert(ngt_02(ss) == 1);

  ss = 2;
  my_assert(ngt_01(ss) != 1);
  my_assert(ngt_02(ss) == 1);
  my_assert(ngt_03(ss) == 1);

  ss = 4;
  my_assert(ngt_03(ss) != 1);
  my_assert(ngt_04(ss) == 1);
  my_assert(ngt_05(ss) == 1);

  ss = 8;
  my_assert(ngt_07(ss) != 1);
  my_assert(ngt_08(ss) == 1);
  my_assert(ngt_09(ss) == 1);

  ss = 16;
  my_assert(ngt_15(ss) != 1);
  my_assert(ngt_16(ss) == 1);
  my_assert(ngt_17(ss) == 1);

  ss = 32;
  my_assert(ngt_31(ss) != 1);
  my_assert(ngt_32(ss) == 1);
  my_assert(ngt_33(ss) == 1);

  ss = 64;
  my_assert(ngt_63(ss) != 1);
  my_assert(ngt_64(ss) == 1);
  my_assert(ngt_65(ss) == 1);

  ss = 128;
  my_assert(ngt_127(ss) != 1);
  my_assert(ngt_128(ss) == 1);
  my_assert(ngt_129(ss) == 1);

  ss = 256;
  my_assert(ngt_255(ss) != 1);
  my_assert(ngt_256(ss) == 1);
  my_assert(ngt_257(ss) == 1);

  ss = 512;
  my_assert(ngt_511(ss) != 1);
  my_assert(ngt_512(ss) == 1);
  my_assert(ngt_513(ss) == 1);

  ss = 1024;
  my_assert(ngt_1023(ss) != 1);
  my_assert(ngt_1024(ss) == 1);
  my_assert(ngt_1025(ss) == 1);

  ss = 2048;
  my_assert(ngt_2047(ss) != 1);
  my_assert(ngt_2048(ss) == 1);
  my_assert(ngt_2049(ss) == 1);

  ss = 4096;
  my_assert(ngt_4095(ss) != 1);
  my_assert(ngt_4096(ss) == 1);
  my_assert(ngt_4097(ss) == 1);

  ss = 8192;
  my_assert(ngt_8191(ss) != 1);
  my_assert(ngt_8192(ss) == 1);
  my_assert(ngt_8193(ss) == 1);

  ss = 16384;
  my_assert(ngt_16383(ss) != 1);
  my_assert(ngt_16384(ss) == 1);
  my_assert(ngt_16385(ss) == 1);

  ss = 32767;
  my_assert(ngt_32767(ss) == 1);

  return exit_status;
}
