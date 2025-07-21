

int exit_status;

#include "my_assert.h"

int neq_m32768(signed short ss) { return !(ss == -32768); }
int neq_m32767(signed short ss) { return !(ss == -32767); }
int neq_m16385(signed short ss) { return !(ss == -16385); }
int neq_m16384(signed short ss) { return !(ss == -16384); }
int neq_m16383(signed short ss) { return !(ss == -16383); }
int neq_m8193(signed short ss) { return !(ss == -8193); }
int neq_m8192(signed short ss) { return !(ss == -8192); }
int neq_m8191(signed short ss) { return !(ss == -8191); }
int neq_m4097(signed short ss) { return !(ss == -4097); }
int neq_m4096(signed short ss) { return !(ss == -4096); }
int neq_m4095(signed short ss) { return !(ss == -4095); }
int neq_m2049(signed short ss) { return !(ss == -2049); }
int neq_m2048(signed short ss) { return !(ss == -2048); }
int neq_m2047(signed short ss) { return !(ss == -2047); }
int neq_m1025(signed short ss) { return !(ss == -1025); }
int neq_m1024(signed short ss) { return !(ss == -1024); }
int neq_m1023(signed short ss) { return !(ss == -1023); }
int neq_m513(signed short ss) { return !(ss == -513); }
int neq_m512(signed short ss) { return !(ss == -512); }
int neq_m511(signed short ss) { return !(ss == -511); }
int neq_m257(signed short ss) { return !(ss == -257); }
int neq_m256(signed short ss) { return !(ss == -256); }
int neq_m255(signed short ss) { return !(ss == -255); }
int neq_m129(signed short ss) { return !(ss == -129); }
int neq_m128(signed short ss) { return !(ss == -128); }
int neq_m127(signed short ss) { return !(ss == -127); }
int neq_m65(signed short ss) { return !(ss == -65); }
int neq_m64(signed short ss) { return !(ss == -64); }
int neq_m63(signed short ss) { return !(ss == -63); }
int neq_m33(signed short ss) { return !(ss == -33); }
int neq_m32(signed short ss) { return !(ss == -32); }
int neq_m31(signed short ss) { return !(ss == -31); }
int neq_m17(signed short ss) { return !(ss == -17); }
int neq_m16(signed short ss) { return !(ss == -16); }
int neq_m15(signed short ss) { return !(ss == -15); }
int neq_m9(signed short ss) { return !(ss == -9); }
int neq_m8(signed short ss) { return !(ss == -8); }
int neq_m7(signed short ss) { return !(ss == -7); }
int neq_m5(signed short ss) { return !(ss == -5); }
int neq_m4(signed short ss) { return !(ss == -4); }
int neq_m3(signed short ss) { return !(ss == -3); }
int neq_m2(signed short ss) { return !(ss == -2); }
int neq_m1(signed short ss) { return !(ss == -1); }
int neq_00(signed short ss) { return !(ss == 0); }
int neq_01(signed short ss) { return !(ss == 1); }
int neq_02(signed short ss) { return !(ss == 2); }
int neq_03(signed short ss) { return !(ss == 3); }
int neq_04(signed short ss) { return !(ss == 4); }
int neq_05(signed short ss) { return !(ss == 5); }
int neq_07(signed short ss) { return !(ss == 7); }
int neq_08(signed short ss) { return !(ss == 8); }
int neq_09(signed short ss) { return !(ss == 9); }
int neq_15(signed short ss) { return !(ss == 15); }
int neq_16(signed short ss) { return !(ss == 16); }
int neq_17(signed short ss) { return !(ss == 17); }
int neq_31(signed short ss) { return !(ss == 31); }
int neq_32(signed short ss) { return !(ss == 32); }
int neq_33(signed short ss) { return !(ss == 33); }
int neq_63(signed short ss) { return !(ss == 63); }
int neq_64(signed short ss) { return !(ss == 64); }
int neq_65(signed short ss) { return !(ss == 65); }
int neq_127(signed short ss) { return !(ss == 127); }
int neq_128(signed short ss) { return !(ss == 128); }
int neq_129(signed short ss) { return !(ss == 129); }
int neq_255(signed short ss) { return !(ss == 255); }
int neq_256(signed short ss) { return !(ss == 256); }
int neq_257(signed short ss) { return !(ss == 257); }
int neq_511(signed short ss) { return !(ss == 511); }
int neq_512(signed short ss) { return !(ss == 512); }
int neq_513(signed short ss) { return !(ss == 513); }
int neq_1023(signed short ss) { return !(ss == 1023); }
int neq_1024(signed short ss) { return !(ss == 1024); }
int neq_1025(signed short ss) { return !(ss == 1025); }
int neq_2047(signed short ss) { return !(ss == 2047); }
int neq_2048(signed short ss) { return !(ss == 2048); }
int neq_2049(signed short ss) { return !(ss == 2049); }
int neq_4095(signed short ss) { return !(ss == 4095); }
int neq_4096(signed short ss) { return !(ss == 4096); }
int neq_4097(signed short ss) { return !(ss == 4097); }
int neq_8191(signed short ss) { return !(ss == 8191); }
int neq_8192(signed short ss) { return !(ss == 8192); }
int neq_8193(signed short ss) { return !(ss == 8193); }
int neq_16383(signed short ss) { return !(ss == 16383); }
int neq_16384(signed short ss) { return !(ss == 16384); }
int neq_16385(signed short ss) { return !(ss == 16385); }
int neq_32767(signed short ss) { return !(ss == 32767); }

static signed short ss;
int main() {
  ss = -32768;
  my_assert(neq_m32768(ss) != 1);
  my_assert(neq_m32767(ss) == 1);

  ss = -16384;
  my_assert(neq_m16385(ss) == 1);
  my_assert(neq_m16384(ss) != 1);
  my_assert(neq_m16383(ss) == 1);

  ss = -8192;
  my_assert(neq_m8193(ss) == 1);
  my_assert(neq_m8192(ss) != 1);
  my_assert(neq_m8191(ss) == 1);

  ss = -4096;
  my_assert(neq_m4097(ss) == 1);
  my_assert(neq_m4096(ss) != 1);
  my_assert(neq_m4095(ss) == 1);

  ss = -2048;
  my_assert(neq_m2049(ss) == 1);
  my_assert(neq_m2048(ss) != 1);
  my_assert(neq_m2047(ss) == 1);

  ss = -1024;
  my_assert(neq_m1025(ss) == 1);
  my_assert(neq_m1024(ss) != 1);
  my_assert(neq_m1023(ss) == 1);

  ss = -512;
  my_assert(neq_m513(ss) == 1);
  my_assert(neq_m512(ss) != 1);
  my_assert(neq_m511(ss) == 1);

  ss = -256;
  my_assert(neq_m257(ss) == 1);
  my_assert(neq_m256(ss) != 1);
  my_assert(neq_m255(ss) == 1);

  ss = -128;
  my_assert(neq_m129(ss) == 1);
  my_assert(neq_m128(ss) != 1);
  my_assert(neq_m127(ss) == 1);

  ss = -64;
  my_assert(neq_m65(ss) == 1);
  my_assert(neq_m64(ss) != 1);
  my_assert(neq_m63(ss) == 1);

  ss = -32;
  my_assert(neq_m33(ss) == 1);
  my_assert(neq_m32(ss) != 1);
  my_assert(neq_m31(ss) == 1);

  ss = -16;
  my_assert(neq_m17(ss) == 1);
  my_assert(neq_m16(ss) != 1);
  my_assert(neq_m15(ss) == 1);

  ss = -8;
  my_assert(neq_m9(ss) == 1);
  my_assert(neq_m8(ss) != 1);
  my_assert(neq_m7(ss) == 1);

  ss = -4;
  my_assert(neq_m5(ss) == 1);
  my_assert(neq_m4(ss) != 1);
  my_assert(neq_m3(ss) == 1);

  ss = -2;
  my_assert(neq_m3(ss) == 1);
  my_assert(neq_m2(ss) != 1);
  my_assert(neq_m1(ss) == 1);

  ss = -1;
  my_assert(neq_m2(ss) == 1);
  my_assert(neq_m1(ss) != 1);
  my_assert(neq_00(ss) == 1);

  ss = 0;
  my_assert(neq_m1(ss) == 1);
  my_assert(neq_00(ss) != 1);
  my_assert(neq_01(ss) == 1);

  ss = 1;
  my_assert(neq_00(ss) == 1);
  my_assert(neq_01(ss) != 1);
  my_assert(neq_02(ss) == 1);

  ss = 2;
  my_assert(neq_01(ss) == 1);
  my_assert(neq_02(ss) != 1);
  my_assert(neq_03(ss) == 1);

  ss = 4;
  my_assert(neq_03(ss) == 1);
  my_assert(neq_04(ss) != 1);
  my_assert(neq_05(ss) == 1);

  ss = 8;
  my_assert(neq_07(ss) == 1);
  my_assert(neq_08(ss) != 1);
  my_assert(neq_09(ss) == 1);

  ss = 16;
  my_assert(neq_15(ss) == 1);
  my_assert(neq_16(ss) != 1);
  my_assert(neq_17(ss) == 1);

  ss = 32;
  my_assert(neq_31(ss) == 1);
  my_assert(neq_32(ss) != 1);
  my_assert(neq_33(ss) == 1);

  ss = 64;
  my_assert(neq_63(ss) == 1);
  my_assert(neq_64(ss) != 1);
  my_assert(neq_65(ss) == 1);

  ss = 128;
  my_assert(neq_127(ss) == 1);
  my_assert(neq_128(ss) != 1);
  my_assert(neq_129(ss) == 1);

  ss = 256;
  my_assert(neq_255(ss) == 1);
  my_assert(neq_256(ss) != 1);
  my_assert(neq_257(ss) == 1);

  ss = 512;
  my_assert(neq_511(ss) == 1);
  my_assert(neq_512(ss) != 1);
  my_assert(neq_513(ss) == 1);

  ss = 1024;
  my_assert(neq_1023(ss) == 1);
  my_assert(neq_1024(ss) != 1);
  my_assert(neq_1025(ss) == 1);

  ss = 2048;
  my_assert(neq_2047(ss) == 1);
  my_assert(neq_2048(ss) != 1);
  my_assert(neq_2049(ss) == 1);

  ss = 4096;
  my_assert(neq_4095(ss) == 1);
  my_assert(neq_4096(ss) != 1);
  my_assert(neq_4097(ss) == 1);

  ss = 8192;
  my_assert(neq_8191(ss) == 1);
  my_assert(neq_8192(ss) != 1);
  my_assert(neq_8193(ss) == 1);

  ss = 16384;
  my_assert(neq_16383(ss) == 1);
  my_assert(neq_16384(ss) != 1);
  my_assert(neq_16385(ss) == 1);

  ss = 32767;
  my_assert(neq_32767(ss) != 1);

  return exit_status;
}
