

int exit_status;

#include "my_assert.h"

int nlt_m32768(signed short ss) { return !(ss < -32768); }
int nlt_m32767(signed short ss) { return !(ss < -32767); }
int nlt_m16385(signed short ss) { return !(ss < -16385); }
int nlt_m16384(signed short ss) { return !(ss < -16384); }
int nlt_m16383(signed short ss) { return !(ss < -16383); }
int nlt_m8193(signed short ss) { return !(ss < -8193); }
int nlt_m8192(signed short ss) { return !(ss < -8192); }
int nlt_m8191(signed short ss) { return !(ss < -8191); }
int nlt_m4097(signed short ss) { return !(ss < -4097); }
int nlt_m4096(signed short ss) { return !(ss < -4096); }
int nlt_m4095(signed short ss) { return !(ss < -4095); }
int nlt_m2049(signed short ss) { return !(ss < -2049); }
int nlt_m2048(signed short ss) { return !(ss < -2048); }
int nlt_m2047(signed short ss) { return !(ss < -2047); }
int nlt_m1025(signed short ss) { return !(ss < -1025); }
int nlt_m1024(signed short ss) { return !(ss < -1024); }
int nlt_m1023(signed short ss) { return !(ss < -1023); }
int nlt_m513(signed short ss) { return !(ss < -513); }
int nlt_m512(signed short ss) { return !(ss < -512); }
int nlt_m511(signed short ss) { return !(ss < -511); }
int nlt_m257(signed short ss) { return !(ss < -257); }
int nlt_m256(signed short ss) { return !(ss < -256); }
int nlt_m255(signed short ss) { return !(ss < -255); }
int nlt_m129(signed short ss) { return !(ss < -129); }
int nlt_m128(signed short ss) { return !(ss < -128); }
int nlt_m127(signed short ss) { return !(ss < -127); }
int nlt_m65(signed short ss) { return !(ss < -65); }
int nlt_m64(signed short ss) { return !(ss < -64); }
int nlt_m63(signed short ss) { return !(ss < -63); }
int nlt_m33(signed short ss) { return !(ss < -33); }
int nlt_m32(signed short ss) { return !(ss < -32); }
int nlt_m31(signed short ss) { return !(ss < -31); }
int nlt_m17(signed short ss) { return !(ss < -17); }
int nlt_m16(signed short ss) { return !(ss < -16); }
int nlt_m15(signed short ss) { return !(ss < -15); }
int nlt_m9(signed short ss) { return !(ss < -9); }
int nlt_m8(signed short ss) { return !(ss < -8); }
int nlt_m7(signed short ss) { return !(ss < -7); }
int nlt_m5(signed short ss) { return !(ss < -5); }
int nlt_m4(signed short ss) { return !(ss < -4); }
int nlt_m3(signed short ss) { return !(ss < -3); }
int nlt_m2(signed short ss) { return !(ss < -2); }
int nlt_m1(signed short ss) { return !(ss < -1); }
int nlt_00(signed short ss) { return !(ss < 0); }
int nlt_01(signed short ss) { return !(ss < 1); }
int nlt_02(signed short ss) { return !(ss < 2); }
int nlt_03(signed short ss) { return !(ss < 3); }
int nlt_04(signed short ss) { return !(ss < 4); }
int nlt_05(signed short ss) { return !(ss < 5); }
int nlt_07(signed short ss) { return !(ss < 7); }
int nlt_08(signed short ss) { return !(ss < 8); }
int nlt_09(signed short ss) { return !(ss < 9); }
int nlt_15(signed short ss) { return !(ss < 15); }
int nlt_16(signed short ss) { return !(ss < 16); }
int nlt_17(signed short ss) { return !(ss < 17); }
int nlt_31(signed short ss) { return !(ss < 31); }
int nlt_32(signed short ss) { return !(ss < 32); }
int nlt_33(signed short ss) { return !(ss < 33); }
int nlt_63(signed short ss) { return !(ss < 63); }
int nlt_64(signed short ss) { return !(ss < 64); }
int nlt_65(signed short ss) { return !(ss < 65); }
int nlt_127(signed short ss) { return !(ss < 127); }
int nlt_128(signed short ss) { return !(ss < 128); }
int nlt_129(signed short ss) { return !(ss < 129); }
int nlt_255(signed short ss) { return !(ss < 255); }
int nlt_256(signed short ss) { return !(ss < 256); }
int nlt_257(signed short ss) { return !(ss < 257); }
int nlt_511(signed short ss) { return !(ss < 511); }
int nlt_512(signed short ss) { return !(ss < 512); }
int nlt_513(signed short ss) { return !(ss < 513); }
int nlt_1023(signed short ss) { return !(ss < 1023); }
int nlt_1024(signed short ss) { return !(ss < 1024); }
int nlt_1025(signed short ss) { return !(ss < 1025); }
int nlt_2047(signed short ss) { return !(ss < 2047); }
int nlt_2048(signed short ss) { return !(ss < 2048); }
int nlt_2049(signed short ss) { return !(ss < 2049); }
int nlt_4095(signed short ss) { return !(ss < 4095); }
int nlt_4096(signed short ss) { return !(ss < 4096); }
int nlt_4097(signed short ss) { return !(ss < 4097); }
int nlt_8191(signed short ss) { return !(ss < 8191); }
int nlt_8192(signed short ss) { return !(ss < 8192); }
int nlt_8193(signed short ss) { return !(ss < 8193); }
int nlt_16383(signed short ss) { return !(ss < 16383); }
int nlt_16384(signed short ss) { return !(ss < 16384); }
int nlt_16385(signed short ss) { return !(ss < 16385); }
int nlt_32767(signed short ss) { return !(ss < 32767); }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(nlt_m32768(ss) == 1);
  my_assert(nlt_m32767(ss) != 1);

  ss = -16384;
  my_assert(nlt_m16385(ss) == 1);
  my_assert(nlt_m16384(ss) == 1);
  my_assert(nlt_m16383(ss) != 1);

  ss = -8192;
  my_assert(nlt_m8193(ss) == 1);
  my_assert(nlt_m8192(ss) == 1);
  my_assert(nlt_m8191(ss) != 1);

  ss = -4096;
  my_assert(nlt_m4097(ss) == 1);
  my_assert(nlt_m4096(ss) == 1);
  my_assert(nlt_m4095(ss) != 1);

  ss = -2048;
  my_assert(nlt_m2049(ss) == 1);
  my_assert(nlt_m2048(ss) == 1);
  my_assert(nlt_m2047(ss) != 1);

  ss = -1024;
  my_assert(nlt_m1025(ss) == 1);
  my_assert(nlt_m1024(ss) == 1);
  my_assert(nlt_m1023(ss) != 1);

  ss = -512;
  my_assert(nlt_m513(ss) == 1);
  my_assert(nlt_m512(ss) == 1);
  my_assert(nlt_m511(ss) != 1);

  ss = -256;
  my_assert(nlt_m257(ss) == 1);
  my_assert(nlt_m256(ss) == 1);
  my_assert(nlt_m255(ss) != 1);

  ss = -128;
  my_assert(nlt_m129(ss) == 1);
  my_assert(nlt_m128(ss) == 1);
  my_assert(nlt_m127(ss) != 1);

  ss = -64;
  my_assert(nlt_m65(ss) == 1);
  my_assert(nlt_m64(ss) == 1);
  my_assert(nlt_m63(ss) != 1);

  ss = -32;
  my_assert(nlt_m33(ss) == 1);
  my_assert(nlt_m32(ss) == 1);
  my_assert(nlt_m31(ss) != 1);

  ss = -16;
  my_assert(nlt_m17(ss) == 1);
  my_assert(nlt_m16(ss) == 1);
  my_assert(nlt_m15(ss) != 1);

  ss = -8;
  my_assert(nlt_m9(ss) == 1);
  my_assert(nlt_m8(ss) == 1);
  my_assert(nlt_m7(ss) != 1);

  ss = -4;
  my_assert(nlt_m5(ss) == 1);
  my_assert(nlt_m4(ss) == 1);
  my_assert(nlt_m3(ss) != 1);

  ss = -2;
  my_assert(nlt_m3(ss) == 1);
  my_assert(nlt_m2(ss) == 1);
  my_assert(nlt_m1(ss) != 1);

  ss = -1;
  my_assert(nlt_m2(ss) == 1);
  my_assert(nlt_m1(ss) == 1);
  my_assert(nlt_00(ss) != 1);

  ss = 0;
  my_assert(nlt_m1(ss) == 1);
  my_assert(nlt_00(ss) == 1);
  my_assert(nlt_01(ss) != 1);

  ss = 1;
  my_assert(nlt_00(ss) == 1);
  my_assert(nlt_01(ss) == 1);
  my_assert(nlt_02(ss) != 1);

  ss = 2;
  my_assert(nlt_01(ss) == 1);
  my_assert(nlt_02(ss) == 1);
  my_assert(nlt_03(ss) != 1);

  ss = 4;
  my_assert(nlt_03(ss) == 1);
  my_assert(nlt_04(ss) == 1);
  my_assert(nlt_05(ss) != 1);

  ss = 8;
  my_assert(nlt_07(ss) == 1);
  my_assert(nlt_08(ss) == 1);
  my_assert(nlt_09(ss) != 1);

  ss = 16;
  my_assert(nlt_15(ss) == 1);
  my_assert(nlt_16(ss) == 1);
  my_assert(nlt_17(ss) != 1);

  ss = 32;
  my_assert(nlt_31(ss) == 1);
  my_assert(nlt_32(ss) == 1);
  my_assert(nlt_33(ss) != 1);

  ss = 64;
  my_assert(nlt_63(ss) == 1);
  my_assert(nlt_64(ss) == 1);
  my_assert(nlt_65(ss) != 1);

  ss = 128;
  my_assert(nlt_127(ss) == 1);
  my_assert(nlt_128(ss) == 1);
  my_assert(nlt_129(ss) != 1);

  ss = 256;
  my_assert(nlt_255(ss) == 1);
  my_assert(nlt_256(ss) == 1);
  my_assert(nlt_257(ss) != 1);

  ss = 512;
  my_assert(nlt_511(ss) == 1);
  my_assert(nlt_512(ss) == 1);
  my_assert(nlt_513(ss) != 1);

  ss = 1024;
  my_assert(nlt_1023(ss) == 1);
  my_assert(nlt_1024(ss) == 1);
  my_assert(nlt_1025(ss) != 1);

  ss = 2048;
  my_assert(nlt_2047(ss) == 1);
  my_assert(nlt_2048(ss) == 1);
  my_assert(nlt_2049(ss) != 1);

  ss = 4096;
  my_assert(nlt_4095(ss) == 1);
  my_assert(nlt_4096(ss) == 1);
  my_assert(nlt_4097(ss) != 1);

  ss = 8192;
  my_assert(nlt_8191(ss) == 1);
  my_assert(nlt_8192(ss) == 1);
  my_assert(nlt_8193(ss) != 1);

  ss = 16384;
  my_assert(nlt_16383(ss) == 1);
  my_assert(nlt_16384(ss) == 1);
  my_assert(nlt_16385(ss) != 1);

  ss = 32767;
  my_assert(nlt_32767(ss) == 1);

  return exit_status;
}
