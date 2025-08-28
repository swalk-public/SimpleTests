

int exit_status;

#include "my_assert.h"

int nle_m32768(signed short ss) { return !(ss <= -32768); }
int nle_m32767(signed short ss) { return !(ss <= -32767); }
int nle_m16385(signed short ss) { return !(ss <= -16385); }
int nle_m16384(signed short ss) { return !(ss <= -16384); }
int nle_m16383(signed short ss) { return !(ss <= -16383); }
int nle_m8193(signed short ss) { return !(ss <= -8193); }
int nle_m8192(signed short ss) { return !(ss <= -8192); }
int nle_m8191(signed short ss) { return !(ss <= -8191); }
int nle_m4097(signed short ss) { return !(ss <= -4097); }
int nle_m4096(signed short ss) { return !(ss <= -4096); }
int nle_m4095(signed short ss) { return !(ss <= -4095); }
int nle_m2049(signed short ss) { return !(ss <= -2049); }
int nle_m2048(signed short ss) { return !(ss <= -2048); }
int nle_m2047(signed short ss) { return !(ss <= -2047); }
int nle_m1025(signed short ss) { return !(ss <= -1025); }
int nle_m1024(signed short ss) { return !(ss <= -1024); }
int nle_m1023(signed short ss) { return !(ss <= -1023); }
int nle_m513(signed short ss) { return !(ss <= -513); }
int nle_m512(signed short ss) { return !(ss <= -512); }
int nle_m511(signed short ss) { return !(ss <= -511); }
int nle_m257(signed short ss) { return !(ss <= -257); }
int nle_m256(signed short ss) { return !(ss <= -256); }
int nle_m255(signed short ss) { return !(ss <= -255); }
int nle_m129(signed short ss) { return !(ss <= -129); }
int nle_m128(signed short ss) { return !(ss <= -128); }
int nle_m127(signed short ss) { return !(ss <= -127); }
int nle_m65(signed short ss) { return !(ss <= -65); }
int nle_m64(signed short ss) { return !(ss <= -64); }
int nle_m63(signed short ss) { return !(ss <= -63); }
int nle_m33(signed short ss) { return !(ss <= -33); }
int nle_m32(signed short ss) { return !(ss <= -32); }
int nle_m31(signed short ss) { return !(ss <= -31); }
int nle_m17(signed short ss) { return !(ss <= -17); }
int nle_m16(signed short ss) { return !(ss <= -16); }
int nle_m15(signed short ss) { return !(ss <= -15); }
int nle_m9(signed short ss) { return !(ss <= -9); }
int nle_m8(signed short ss) { return !(ss <= -8); }
int nle_m7(signed short ss) { return !(ss <= -7); }
int nle_m5(signed short ss) { return !(ss <= -5); }
int nle_m4(signed short ss) { return !(ss <= -4); }
int nle_m3(signed short ss) { return !(ss <= -3); }
int nle_m2(signed short ss) { return !(ss <= -2); }
int nle_m1(signed short ss) { return !(ss <= -1); }
int nle_00(signed short ss) { return !(ss <= 0); }
int nle_01(signed short ss) { return !(ss <= 1); }
int nle_02(signed short ss) { return !(ss <= 2); }
int nle_03(signed short ss) { return !(ss <= 3); }
int nle_04(signed short ss) { return !(ss <= 4); }
int nle_05(signed short ss) { return !(ss <= 5); }
int nle_07(signed short ss) { return !(ss <= 7); }
int nle_08(signed short ss) { return !(ss <= 8); }
int nle_09(signed short ss) { return !(ss <= 9); }
int nle_15(signed short ss) { return !(ss <= 15); }
int nle_16(signed short ss) { return !(ss <= 16); }
int nle_17(signed short ss) { return !(ss <= 17); }
int nle_31(signed short ss) { return !(ss <= 31); }
int nle_32(signed short ss) { return !(ss <= 32); }
int nle_33(signed short ss) { return !(ss <= 33); }
int nle_63(signed short ss) { return !(ss <= 63); }
int nle_64(signed short ss) { return !(ss <= 64); }
int nle_65(signed short ss) { return !(ss <= 65); }
int nle_127(signed short ss) { return !(ss <= 127); }
int nle_128(signed short ss) { return !(ss <= 128); }
int nle_129(signed short ss) { return !(ss <= 129); }
int nle_255(signed short ss) { return !(ss <= 255); }
int nle_256(signed short ss) { return !(ss <= 256); }
int nle_257(signed short ss) { return !(ss <= 257); }
int nle_511(signed short ss) { return !(ss <= 511); }
int nle_512(signed short ss) { return !(ss <= 512); }
int nle_513(signed short ss) { return !(ss <= 513); }
int nle_1023(signed short ss) { return !(ss <= 1023); }
int nle_1024(signed short ss) { return !(ss <= 1024); }
int nle_1025(signed short ss) { return !(ss <= 1025); }
int nle_2047(signed short ss) { return !(ss <= 2047); }
int nle_2048(signed short ss) { return !(ss <= 2048); }
int nle_2049(signed short ss) { return !(ss <= 2049); }
int nle_4095(signed short ss) { return !(ss <= 4095); }
int nle_4096(signed short ss) { return !(ss <= 4096); }
int nle_4097(signed short ss) { return !(ss <= 4097); }
int nle_8191(signed short ss) { return !(ss <= 8191); }
int nle_8192(signed short ss) { return !(ss <= 8192); }
int nle_8193(signed short ss) { return !(ss <= 8193); }
int nle_16383(signed short ss) { return !(ss <= 16383); }
int nle_16384(signed short ss) { return !(ss <= 16384); }
int nle_16385(signed short ss) { return !(ss <= 16385); }
int nle_32767(signed short ss) { return !(ss <= 32767); }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(nle_m32768(ss) != 1);
  my_assert(nle_m32767(ss) != 1);

  ss = -16384;
  my_assert(nle_m16385(ss) == 1);
  my_assert(nle_m16384(ss) != 1);
  my_assert(nle_m16383(ss) != 1);

  ss = -8192;
  my_assert(nle_m8193(ss) == 1);
  my_assert(nle_m8192(ss) != 1);
  my_assert(nle_m8191(ss) != 1);

  ss = -4096;
  my_assert(nle_m4097(ss) == 1);
  my_assert(nle_m4096(ss) != 1);
  my_assert(nle_m4095(ss) != 1);

  ss = -2048;
  my_assert(nle_m2049(ss) == 1);
  my_assert(nle_m2048(ss) != 1);
  my_assert(nle_m2047(ss) != 1);

  ss = -1024;
  my_assert(nle_m1025(ss) == 1);
  my_assert(nle_m1024(ss) != 1);
  my_assert(nle_m1023(ss) != 1);

  ss = -512;
  my_assert(nle_m513(ss) == 1);
  my_assert(nle_m512(ss) != 1);
  my_assert(nle_m511(ss) != 1);

  ss = -256;
  my_assert(nle_m257(ss) == 1);
  my_assert(nle_m256(ss) != 1);
  my_assert(nle_m255(ss) != 1);

  ss = -128;
  my_assert(nle_m129(ss) == 1);
  my_assert(nle_m128(ss) != 1);
  my_assert(nle_m127(ss) != 1);

  ss = -64;
  my_assert(nle_m65(ss) == 1);
  my_assert(nle_m64(ss) != 1);
  my_assert(nle_m63(ss) != 1);

  ss = -32;
  my_assert(nle_m33(ss) == 1);
  my_assert(nle_m32(ss) != 1);
  my_assert(nle_m31(ss) != 1);

  ss = -16;
  my_assert(nle_m17(ss) == 1);
  my_assert(nle_m16(ss) != 1);
  my_assert(nle_m15(ss) != 1);

  ss = -8;
  my_assert(nle_m9(ss) == 1);
  my_assert(nle_m8(ss) != 1);
  my_assert(nle_m7(ss) != 1);

  ss = -4;
  my_assert(nle_m5(ss) == 1);
  my_assert(nle_m4(ss) != 1);
  my_assert(nle_m3(ss) != 1);

  ss = -2;
  my_assert(nle_m3(ss) == 1);
  my_assert(nle_m2(ss) != 1);
  my_assert(nle_m1(ss) != 1);

  ss = -1;
  my_assert(nle_m2(ss) == 1);
  my_assert(nle_m1(ss) != 1);
  my_assert(nle_00(ss) != 1);

  ss = 0;
  my_assert(nle_m1(ss) == 1);
  my_assert(nle_00(ss) != 1);
  my_assert(nle_01(ss) != 1);

  ss = 1;
  my_assert(nle_00(ss) == 1);
  my_assert(nle_01(ss) != 1);
  my_assert(nle_02(ss) != 1);

  ss = 2;
  my_assert(nle_01(ss) == 1);
  my_assert(nle_02(ss) != 1);
  my_assert(nle_03(ss) != 1);

  ss = 4;
  my_assert(nle_03(ss) == 1);
  my_assert(nle_04(ss) != 1);
  my_assert(nle_05(ss) != 1);

  ss = 8;
  my_assert(nle_07(ss) == 1);
  my_assert(nle_08(ss) != 1);
  my_assert(nle_09(ss) != 1);

  ss = 16;
  my_assert(nle_15(ss) == 1);
  my_assert(nle_16(ss) != 1);
  my_assert(nle_17(ss) != 1);

  ss = 32;
  my_assert(nle_31(ss) == 1);
  my_assert(nle_32(ss) != 1);
  my_assert(nle_33(ss) != 1);

  ss = 64;
  my_assert(nle_63(ss) == 1);
  my_assert(nle_64(ss) != 1);
  my_assert(nle_65(ss) != 1);

  ss = 128;
  my_assert(nle_127(ss) == 1);
  my_assert(nle_128(ss) != 1);
  my_assert(nle_129(ss) != 1);

  ss = 256;
  my_assert(nle_255(ss) == 1);
  my_assert(nle_256(ss) != 1);
  my_assert(nle_257(ss) != 1);

  ss = 512;
  my_assert(nle_511(ss) == 1);
  my_assert(nle_512(ss) != 1);
  my_assert(nle_513(ss) != 1);

  ss = 1024;
  my_assert(nle_1023(ss) == 1);
  my_assert(nle_1024(ss) != 1);
  my_assert(nle_1025(ss) != 1);

  ss = 2048;
  my_assert(nle_2047(ss) == 1);
  my_assert(nle_2048(ss) != 1);
  my_assert(nle_2049(ss) != 1);

  ss = 4096;
  my_assert(nle_4095(ss) == 1);
  my_assert(nle_4096(ss) != 1);
  my_assert(nle_4097(ss) != 1);

  ss = 8192;
  my_assert(nle_8191(ss) == 1);
  my_assert(nle_8192(ss) != 1);
  my_assert(nle_8193(ss) != 1);

  ss = 16384;
  my_assert(nle_16383(ss) == 1);
  my_assert(nle_16384(ss) != 1);
  my_assert(nle_16385(ss) != 1);

  ss = 32767;
  my_assert(nle_32767(ss) != 1);

  return exit_status;
}
