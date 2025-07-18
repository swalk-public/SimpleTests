

int exit_status;

#include "my_assert.h"

int nne_m32768(signed short ss) { return !(ss != -32768); }
int nne_m32767(signed short ss) { return !(ss != -32767); }
int nne_m16385(signed short ss) { return !(ss != -16385); }
int nne_m16384(signed short ss) { return !(ss != -16384); }
int nne_m16383(signed short ss) { return !(ss != -16383); }
int nne_m8193(signed short ss) { return !(ss != -8193); }
int nne_m8192(signed short ss) { return !(ss != -8192); }
int nne_m8191(signed short ss) { return !(ss != -8191); }
int nne_m4097(signed short ss) { return !(ss != -4097); }
int nne_m4096(signed short ss) { return !(ss != -4096); }
int nne_m4095(signed short ss) { return !(ss != -4095); }
int nne_m2049(signed short ss) { return !(ss != -2049); }
int nne_m2048(signed short ss) { return !(ss != -2048); }
int nne_m2047(signed short ss) { return !(ss != -2047); }
int nne_m1025(signed short ss) { return !(ss != -1025); }
int nne_m1024(signed short ss) { return !(ss != -1024); }
int nne_m1023(signed short ss) { return !(ss != -1023); }
int nne_m513(signed short ss) { return !(ss != -513); }
int nne_m512(signed short ss) { return !(ss != -512); }
int nne_m511(signed short ss) { return !(ss != -511); }
int nne_m257(signed short ss) { return !(ss != -257); }
int nne_m256(signed short ss) { return !(ss != -256); }
int nne_m255(signed short ss) { return !(ss != -255); }
int nne_m129(signed short ss) { return !(ss != -129); }
int nne_m128(signed short ss) { return !(ss != -128); }
int nne_m127(signed short ss) { return !(ss != -127); }
int nne_m65(signed short ss) { return !(ss != -65); }
int nne_m64(signed short ss) { return !(ss != -64); }
int nne_m63(signed short ss) { return !(ss != -63); }
int nne_m33(signed short ss) { return !(ss != -33); }
int nne_m32(signed short ss) { return !(ss != -32); }
int nne_m31(signed short ss) { return !(ss != -31); }
int nne_m17(signed short ss) { return !(ss != -17); }
int nne_m16(signed short ss) { return !(ss != -16); }
int nne_m15(signed short ss) { return !(ss != -15); }
int nne_m9(signed short ss) { return !(ss != -9); }
int nne_m8(signed short ss) { return !(ss != -8); }
int nne_m7(signed short ss) { return !(ss != -7); }
int nne_m5(signed short ss) { return !(ss != -5); }
int nne_m4(signed short ss) { return !(ss != -4); }
int nne_m3(signed short ss) { return !(ss != -3); }
int nne_m2(signed short ss) { return !(ss != -2); }
int nne_m1(signed short ss) { return !(ss != -1); }
int nne_00(signed short ss) { return !(ss != 0); }
int nne_01(signed short ss) { return !(ss != 1); }
int nne_02(signed short ss) { return !(ss != 2); }
int nne_03(signed short ss) { return !(ss != 3); }
int nne_04(signed short ss) { return !(ss != 4); }
int nne_05(signed short ss) { return !(ss != 5); }
int nne_07(signed short ss) { return !(ss != 7); }
int nne_08(signed short ss) { return !(ss != 8); }
int nne_09(signed short ss) { return !(ss != 9); }
int nne_15(signed short ss) { return !(ss != 15); }
int nne_16(signed short ss) { return !(ss != 16); }
int nne_17(signed short ss) { return !(ss != 17); }
int nne_31(signed short ss) { return !(ss != 31); }
int nne_32(signed short ss) { return !(ss != 32); }
int nne_33(signed short ss) { return !(ss != 33); }
int nne_63(signed short ss) { return !(ss != 63); }
int nne_64(signed short ss) { return !(ss != 64); }
int nne_65(signed short ss) { return !(ss != 65); }
int nne_127(signed short ss) { return !(ss != 127); }
int nne_128(signed short ss) { return !(ss != 128); }
int nne_129(signed short ss) { return !(ss != 129); }
int nne_255(signed short ss) { return !(ss != 255); }
int nne_256(signed short ss) { return !(ss != 256); }
int nne_257(signed short ss) { return !(ss != 257); }
int nne_511(signed short ss) { return !(ss != 511); }
int nne_512(signed short ss) { return !(ss != 512); }
int nne_513(signed short ss) { return !(ss != 513); }
int nne_1023(signed short ss) { return !(ss != 1023); }
int nne_1024(signed short ss) { return !(ss != 1024); }
int nne_1025(signed short ss) { return !(ss != 1025); }
int nne_2047(signed short ss) { return !(ss != 2047); }
int nne_2048(signed short ss) { return !(ss != 2048); }
int nne_2049(signed short ss) { return !(ss != 2049); }
int nne_4095(signed short ss) { return !(ss != 4095); }
int nne_4096(signed short ss) { return !(ss != 4096); }
int nne_4097(signed short ss) { return !(ss != 4097); }
int nne_8191(signed short ss) { return !(ss != 8191); }
int nne_8192(signed short ss) { return !(ss != 8192); }
int nne_8193(signed short ss) { return !(ss != 8193); }
int nne_16383(signed short ss) { return !(ss != 16383); }
int nne_16384(signed short ss) { return !(ss != 16384); }
int nne_16385(signed short ss) { return !(ss != 16385); }
int nne_32767(signed short ss) { return !(ss != 32767); }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(nne_m32768(ss) == 1);
  my_assert(nne_m32767(ss) != 1);

  ss = -16384;
  my_assert(nne_m16385(ss) != 1);
  my_assert(nne_m16384(ss) == 1);
  my_assert(nne_m16383(ss) != 1);

  ss = -8192;
  my_assert(nne_m8193(ss) != 1);
  my_assert(nne_m8192(ss) == 1);
  my_assert(nne_m8191(ss) != 1);

  ss = -4096;
  my_assert(nne_m4097(ss) != 1);
  my_assert(nne_m4096(ss) == 1);
  my_assert(nne_m4095(ss) != 1);

  ss = -2048;
  my_assert(nne_m2049(ss) != 1);
  my_assert(nne_m2048(ss) == 1);
  my_assert(nne_m2047(ss) != 1);

  ss = -1024;
  my_assert(nne_m1025(ss) != 1);
  my_assert(nne_m1024(ss) == 1);
  my_assert(nne_m1023(ss) != 1);

  ss = -512;
  my_assert(nne_m513(ss) != 1);
  my_assert(nne_m512(ss) == 1);
  my_assert(nne_m511(ss) != 1);

  ss = -256;
  my_assert(nne_m257(ss) != 1);
  my_assert(nne_m256(ss) == 1);
  my_assert(nne_m255(ss) != 1);

  ss = -128;
  my_assert(nne_m129(ss) != 1);
  my_assert(nne_m128(ss) == 1);
  my_assert(nne_m127(ss) != 1);

  ss = -64;
  my_assert(nne_m65(ss) != 1);
  my_assert(nne_m64(ss) == 1);
  my_assert(nne_m63(ss) != 1);

  ss = -32;
  my_assert(nne_m33(ss) != 1);
  my_assert(nne_m32(ss) == 1);
  my_assert(nne_m31(ss) != 1);

  ss = -16;
  my_assert(nne_m17(ss) != 1);
  my_assert(nne_m16(ss) == 1);
  my_assert(nne_m15(ss) != 1);

  ss = -8;
  my_assert(nne_m9(ss) != 1);
  my_assert(nne_m8(ss) == 1);
  my_assert(nne_m7(ss) != 1);

  ss = -4;
  my_assert(nne_m5(ss) != 1);
  my_assert(nne_m4(ss) == 1);
  my_assert(nne_m3(ss) != 1);

  ss = -2;
  my_assert(nne_m3(ss) != 1);
  my_assert(nne_m2(ss) == 1);
  my_assert(nne_m1(ss) != 1);

  ss = -1;
  my_assert(nne_m2(ss) != 1);
  my_assert(nne_m1(ss) == 1);
  my_assert(nne_00(ss) != 1);

  ss = 0;
  my_assert(nne_m1(ss) != 1);
  my_assert(nne_00(ss) == 1);
  my_assert(nne_01(ss) != 1);

  ss = 1;
  my_assert(nne_00(ss) != 1);
  my_assert(nne_01(ss) == 1);
  my_assert(nne_02(ss) != 1);

  ss = 2;
  my_assert(nne_01(ss) != 1);
  my_assert(nne_02(ss) == 1);
  my_assert(nne_03(ss) != 1);

  ss = 4;
  my_assert(nne_03(ss) != 1);
  my_assert(nne_04(ss) == 1);
  my_assert(nne_05(ss) != 1);

  ss = 8;
  my_assert(nne_07(ss) != 1);
  my_assert(nne_08(ss) == 1);
  my_assert(nne_09(ss) != 1);

  ss = 16;
  my_assert(nne_15(ss) != 1);
  my_assert(nne_16(ss) == 1);
  my_assert(nne_17(ss) != 1);

  ss = 32;
  my_assert(nne_31(ss) != 1);
  my_assert(nne_32(ss) == 1);
  my_assert(nne_33(ss) != 1);

  ss = 64;
  my_assert(nne_63(ss) != 1);
  my_assert(nne_64(ss) == 1);
  my_assert(nne_65(ss) != 1);

  ss = 128;
  my_assert(nne_127(ss) != 1);
  my_assert(nne_128(ss) == 1);
  my_assert(nne_129(ss) != 1);

  ss = 256;
  my_assert(nne_255(ss) != 1);
  my_assert(nne_256(ss) == 1);
  my_assert(nne_257(ss) != 1);

  ss = 512;
  my_assert(nne_511(ss) != 1);
  my_assert(nne_512(ss) == 1);
  my_assert(nne_513(ss) != 1);

  ss = 1024;
  my_assert(nne_1023(ss) != 1);
  my_assert(nne_1024(ss) == 1);
  my_assert(nne_1025(ss) != 1);

  ss = 2048;
  my_assert(nne_2047(ss) != 1);
  my_assert(nne_2048(ss) == 1);
  my_assert(nne_2049(ss) != 1);

  ss = 4096;
  my_assert(nne_4095(ss) != 1);
  my_assert(nne_4096(ss) == 1);
  my_assert(nne_4097(ss) != 1);

  ss = 8192;
  my_assert(nne_8191(ss) != 1);
  my_assert(nne_8192(ss) == 1);
  my_assert(nne_8193(ss) != 1);

  ss = 16384;
  my_assert(nne_16383(ss) != 1);
  my_assert(nne_16384(ss) == 1);
  my_assert(nne_16385(ss) != 1);

  ss = 32767;
  my_assert(nne_32767(ss) == 1);

  return exit_status;
}
