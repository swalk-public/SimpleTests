

int exit_status;

#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int ne_m32768(signed short ss) {
  if (ss != -32768)
    return True();
  else
    return False();
}
int ne_m32767(signed short ss) {
  if (ss != -32767)
    return True();
  else
    return False();
}
int ne_m16385(signed short ss) {
  if (ss != -16385)
    return True();
  else
    return False();
}
int ne_m16384(signed short ss) {
  if (ss != -16384)
    return True();
  else
    return False();
}
int ne_m16383(signed short ss) {
  if (ss != -16383)
    return True();
  else
    return False();
}
int ne_m8193(signed short ss) {
  if (ss != -8193)
    return True();
  else
    return False();
}
int ne_m8192(signed short ss) {
  if (ss != -8192)
    return True();
  else
    return False();
}
int ne_m8191(signed short ss) {
  if (ss != -8191)
    return True();
  else
    return False();
}
int ne_m4097(signed short ss) {
  if (ss != -4097)
    return True();
  else
    return False();
}
int ne_m4096(signed short ss) {
  if (ss != -4096)
    return True();
  else
    return False();
}
int ne_m4095(signed short ss) {
  if (ss != -4095)
    return True();
  else
    return False();
}
int ne_m2049(signed short ss) {
  if (ss != -2049)
    return True();
  else
    return False();
}
int ne_m2048(signed short ss) {
  if (ss != -2048)
    return True();
  else
    return False();
}
int ne_m2047(signed short ss) {
  if (ss != -2047)
    return True();
  else
    return False();
}
int ne_m1025(signed short ss) {
  if (ss != -1025)
    return True();
  else
    return False();
}
int ne_m1024(signed short ss) {
  if (ss != -1024)
    return True();
  else
    return False();
}
int ne_m1023(signed short ss) {
  if (ss != -1023)
    return True();
  else
    return False();
}
int ne_m513(signed short ss) {
  if (ss != -513)
    return True();
  else
    return False();
}
int ne_m512(signed short ss) {
  if (ss != -512)
    return True();
  else
    return False();
}
int ne_m511(signed short ss) {
  if (ss != -511)
    return True();
  else
    return False();
}
int ne_m257(signed short ss) {
  if (ss != -257)
    return True();
  else
    return False();
}
int ne_m256(signed short ss) {
  if (ss != -256)
    return True();
  else
    return False();
}
int ne_m255(signed short ss) {
  if (ss != -255)
    return True();
  else
    return False();
}
int ne_m129(signed short ss) {
  if (ss != -129)
    return True();
  else
    return False();
}
int ne_m128(signed short ss) {
  if (ss != -128)
    return True();
  else
    return False();
}
int ne_m127(signed short ss) {
  if (ss != -127)
    return True();
  else
    return False();
}
int ne_m65(signed short ss) {
  if (ss != -65)
    return True();
  else
    return False();
}
int ne_m64(signed short ss) {
  if (ss != -64)
    return True();
  else
    return False();
}
int ne_m63(signed short ss) {
  if (ss != -63)
    return True();
  else
    return False();
}
int ne_m33(signed short ss) {
  if (ss != -33)
    return True();
  else
    return False();
}
int ne_m32(signed short ss) {
  if (ss != -32)
    return True();
  else
    return False();
}
int ne_m31(signed short ss) {
  if (ss != -31)
    return True();
  else
    return False();
}
int ne_m17(signed short ss) {
  if (ss != -17)
    return True();
  else
    return False();
}
int ne_m16(signed short ss) {
  if (ss != -16)
    return True();
  else
    return False();
}
int ne_m15(signed short ss) {
  if (ss != -15)
    return True();
  else
    return False();
}
int ne_m9(signed short ss) {
  if (ss != -9)
    return True();
  else
    return False();
}
int ne_m8(signed short ss) {
  if (ss != -8)
    return True();
  else
    return False();
}
int ne_m7(signed short ss) {
  if (ss != -7)
    return True();
  else
    return False();
}
int ne_m5(signed short ss) {
  if (ss != -5)
    return True();
  else
    return False();
}
int ne_m4(signed short ss) {
  if (ss != -4)
    return True();
  else
    return False();
}
int ne_m3(signed short ss) {
  if (ss != -3)
    return True();
  else
    return False();
}
int ne_m2(signed short ss) {
  if (ss != -2)
    return True();
  else
    return False();
}
int ne_m1(signed short ss) {
  if (ss != -1)
    return True();
  else
    return False();
}
int ne_00(signed short ss) {
  if (ss != 0)
    return True();
  else
    return False();
}
int ne_01(signed short ss) {
  if (ss != 1)
    return True();
  else
    return False();
}
int ne_02(signed short ss) {
  if (ss != 2)
    return True();
  else
    return False();
}
int ne_03(signed short ss) {
  if (ss != 3)
    return True();
  else
    return False();
}
int ne_04(signed short ss) {
  if (ss != 4)
    return True();
  else
    return False();
}
int ne_05(signed short ss) {
  if (ss != 5)
    return True();
  else
    return False();
}
int ne_07(signed short ss) {
  if (ss != 7)
    return True();
  else
    return False();
}
int ne_08(signed short ss) {
  if (ss != 8)
    return True();
  else
    return False();
}
int ne_09(signed short ss) {
  if (ss != 9)
    return True();
  else
    return False();
}
int ne_15(signed short ss) {
  if (ss != 15)
    return True();
  else
    return False();
}
int ne_16(signed short ss) {
  if (ss != 16)
    return True();
  else
    return False();
}
int ne_17(signed short ss) {
  if (ss != 17)
    return True();
  else
    return False();
}
int ne_31(signed short ss) {
  if (ss != 31)
    return True();
  else
    return False();
}
int ne_32(signed short ss) {
  if (ss != 32)
    return True();
  else
    return False();
}
int ne_33(signed short ss) {
  if (ss != 33)
    return True();
  else
    return False();
}
int ne_63(signed short ss) {
  if (ss != 63)
    return True();
  else
    return False();
}
int ne_64(signed short ss) {
  if (ss != 64)
    return True();
  else
    return False();
}
int ne_65(signed short ss) {
  if (ss != 65)
    return True();
  else
    return False();
}
int ne_127(signed short ss) {
  if (ss != 127)
    return True();
  else
    return False();
}
int ne_128(signed short ss) {
  if (ss != 128)
    return True();
  else
    return False();
}
int ne_129(signed short ss) {
  if (ss != 129)
    return True();
  else
    return False();
}
int ne_255(signed short ss) {
  if (ss != 255)
    return True();
  else
    return False();
}
int ne_256(signed short ss) {
  if (ss != 256)
    return True();
  else
    return False();
}
int ne_257(signed short ss) {
  if (ss != 257)
    return True();
  else
    return False();
}
int ne_511(signed short ss) {
  if (ss != 511)
    return True();
  else
    return False();
}
int ne_512(signed short ss) {
  if (ss != 512)
    return True();
  else
    return False();
}
int ne_513(signed short ss) {
  if (ss != 513)
    return True();
  else
    return False();
}
int ne_1023(signed short ss) {
  if (ss != 1023)
    return True();
  else
    return False();
}
int ne_1024(signed short ss) {
  if (ss != 1024)
    return True();
  else
    return False();
}
int ne_1025(signed short ss) {
  if (ss != 1025)
    return True();
  else
    return False();
}
int ne_2047(signed short ss) {
  if (ss != 2047)
    return True();
  else
    return False();
}
int ne_2048(signed short ss) {
  if (ss != 2048)
    return True();
  else
    return False();
}
int ne_2049(signed short ss) {
  if (ss != 2049)
    return True();
  else
    return False();
}
int ne_4095(signed short ss) {
  if (ss != 4095)
    return True();
  else
    return False();
}
int ne_4096(signed short ss) {
  if (ss != 4096)
    return True();
  else
    return False();
}
int ne_4097(signed short ss) {
  if (ss != 4097)
    return True();
  else
    return False();
}
int ne_8191(signed short ss) {
  if (ss != 8191)
    return True();
  else
    return False();
}
int ne_8192(signed short ss) {
  if (ss != 8192)
    return True();
  else
    return False();
}
int ne_8193(signed short ss) {
  if (ss != 8193)
    return True();
  else
    return False();
}
int ne_16383(signed short ss) {
  if (ss != 16383)
    return True();
  else
    return False();
}
int ne_16384(signed short ss) {
  if (ss != 16384)
    return True();
  else
    return False();
}
int ne_16385(signed short ss) {
  if (ss != 16385)
    return True();
  else
    return False();
}
int ne_32767(signed short ss) {
  if (ss != 32767)
    return True();
  else
    return False();
}

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
