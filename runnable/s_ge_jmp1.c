

int exit_status;

#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int ge_m32768(signed short ss) {
  if (ss >= -32768)
    return True();
  else
    return False();
}
int ge_m32767(signed short ss) {
  if (ss >= -32767)
    return True();
  else
    return False();
}
int ge_m16385(signed short ss) {
  if (ss >= -16385)
    return True();
  else
    return False();
}
int ge_m16384(signed short ss) {
  if (ss >= -16384)
    return True();
  else
    return False();
}
int ge_m16383(signed short ss) {
  if (ss >= -16383)
    return True();
  else
    return False();
}
int ge_m8193(signed short ss) {
  if (ss >= -8193)
    return True();
  else
    return False();
}
int ge_m8192(signed short ss) {
  if (ss >= -8192)
    return True();
  else
    return False();
}
int ge_m8191(signed short ss) {
  if (ss >= -8191)
    return True();
  else
    return False();
}
int ge_m4097(signed short ss) {
  if (ss >= -4097)
    return True();
  else
    return False();
}
int ge_m4096(signed short ss) {
  if (ss >= -4096)
    return True();
  else
    return False();
}
int ge_m4095(signed short ss) {
  if (ss >= -4095)
    return True();
  else
    return False();
}
int ge_m2049(signed short ss) {
  if (ss >= -2049)
    return True();
  else
    return False();
}
int ge_m2048(signed short ss) {
  if (ss >= -2048)
    return True();
  else
    return False();
}
int ge_m2047(signed short ss) {
  if (ss >= -2047)
    return True();
  else
    return False();
}
int ge_m1025(signed short ss) {
  if (ss >= -1025)
    return True();
  else
    return False();
}
int ge_m1024(signed short ss) {
  if (ss >= -1024)
    return True();
  else
    return False();
}
int ge_m1023(signed short ss) {
  if (ss >= -1023)
    return True();
  else
    return False();
}
int ge_m513(signed short ss) {
  if (ss >= -513)
    return True();
  else
    return False();
}
int ge_m512(signed short ss) {
  if (ss >= -512)
    return True();
  else
    return False();
}
int ge_m511(signed short ss) {
  if (ss >= -511)
    return True();
  else
    return False();
}
int ge_m257(signed short ss) {
  if (ss >= -257)
    return True();
  else
    return False();
}
int ge_m256(signed short ss) {
  if (ss >= -256)
    return True();
  else
    return False();
}
int ge_m255(signed short ss) {
  if (ss >= -255)
    return True();
  else
    return False();
}
int ge_m129(signed short ss) {
  if (ss >= -129)
    return True();
  else
    return False();
}
int ge_m128(signed short ss) {
  if (ss >= -128)
    return True();
  else
    return False();
}
int ge_m127(signed short ss) {
  if (ss >= -127)
    return True();
  else
    return False();
}
int ge_m65(signed short ss) {
  if (ss >= -65)
    return True();
  else
    return False();
}
int ge_m64(signed short ss) {
  if (ss >= -64)
    return True();
  else
    return False();
}
int ge_m63(signed short ss) {
  if (ss >= -63)
    return True();
  else
    return False();
}
int ge_m33(signed short ss) {
  if (ss >= -33)
    return True();
  else
    return False();
}
int ge_m32(signed short ss) {
  if (ss >= -32)
    return True();
  else
    return False();
}
int ge_m31(signed short ss) {
  if (ss >= -31)
    return True();
  else
    return False();
}
int ge_m17(signed short ss) {
  if (ss >= -17)
    return True();
  else
    return False();
}
int ge_m16(signed short ss) {
  if (ss >= -16)
    return True();
  else
    return False();
}
int ge_m15(signed short ss) {
  if (ss >= -15)
    return True();
  else
    return False();
}
int ge_m9(signed short ss) {
  if (ss >= -9)
    return True();
  else
    return False();
}
int ge_m8(signed short ss) {
  if (ss >= -8)
    return True();
  else
    return False();
}
int ge_m7(signed short ss) {
  if (ss >= -7)
    return True();
  else
    return False();
}
int ge_m5(signed short ss) {
  if (ss >= -5)
    return True();
  else
    return False();
}
int ge_m4(signed short ss) {
  if (ss >= -4)
    return True();
  else
    return False();
}
int ge_m3(signed short ss) {
  if (ss >= -3)
    return True();
  else
    return False();
}
int ge_m2(signed short ss) {
  if (ss >= -2)
    return True();
  else
    return False();
}
int ge_m1(signed short ss) {
  if (ss >= -1)
    return True();
  else
    return False();
}
int ge_00(signed short ss) {
  if (ss >= 0)
    return True();
  else
    return False();
}
int ge_01(signed short ss) {
  if (ss >= 1)
    return True();
  else
    return False();
}
int ge_02(signed short ss) {
  if (ss >= 2)
    return True();
  else
    return False();
}
int ge_03(signed short ss) {
  if (ss >= 3)
    return True();
  else
    return False();
}
int ge_04(signed short ss) {
  if (ss >= 4)
    return True();
  else
    return False();
}
int ge_05(signed short ss) {
  if (ss >= 5)
    return True();
  else
    return False();
}
int ge_07(signed short ss) {
  if (ss >= 7)
    return True();
  else
    return False();
}
int ge_08(signed short ss) {
  if (ss >= 8)
    return True();
  else
    return False();
}
int ge_09(signed short ss) {
  if (ss >= 9)
    return True();
  else
    return False();
}
int ge_15(signed short ss) {
  if (ss >= 15)
    return True();
  else
    return False();
}
int ge_16(signed short ss) {
  if (ss >= 16)
    return True();
  else
    return False();
}
int ge_17(signed short ss) {
  if (ss >= 17)
    return True();
  else
    return False();
}
int ge_31(signed short ss) {
  if (ss >= 31)
    return True();
  else
    return False();
}
int ge_32(signed short ss) {
  if (ss >= 32)
    return True();
  else
    return False();
}
int ge_33(signed short ss) {
  if (ss >= 33)
    return True();
  else
    return False();
}
int ge_63(signed short ss) {
  if (ss >= 63)
    return True();
  else
    return False();
}
int ge_64(signed short ss) {
  if (ss >= 64)
    return True();
  else
    return False();
}
int ge_65(signed short ss) {
  if (ss >= 65)
    return True();
  else
    return False();
}
int ge_127(signed short ss) {
  if (ss >= 127)
    return True();
  else
    return False();
}
int ge_128(signed short ss) {
  if (ss >= 128)
    return True();
  else
    return False();
}
int ge_129(signed short ss) {
  if (ss >= 129)
    return True();
  else
    return False();
}
int ge_255(signed short ss) {
  if (ss >= 255)
    return True();
  else
    return False();
}
int ge_256(signed short ss) {
  if (ss >= 256)
    return True();
  else
    return False();
}
int ge_257(signed short ss) {
  if (ss >= 257)
    return True();
  else
    return False();
}
int ge_511(signed short ss) {
  if (ss >= 511)
    return True();
  else
    return False();
}
int ge_512(signed short ss) {
  if (ss >= 512)
    return True();
  else
    return False();
}
int ge_513(signed short ss) {
  if (ss >= 513)
    return True();
  else
    return False();
}
int ge_1023(signed short ss) {
  if (ss >= 1023)
    return True();
  else
    return False();
}
int ge_1024(signed short ss) {
  if (ss >= 1024)
    return True();
  else
    return False();
}
int ge_1025(signed short ss) {
  if (ss >= 1025)
    return True();
  else
    return False();
}
int ge_2047(signed short ss) {
  if (ss >= 2047)
    return True();
  else
    return False();
}
int ge_2048(signed short ss) {
  if (ss >= 2048)
    return True();
  else
    return False();
}
int ge_2049(signed short ss) {
  if (ss >= 2049)
    return True();
  else
    return False();
}
int ge_4095(signed short ss) {
  if (ss >= 4095)
    return True();
  else
    return False();
}
int ge_4096(signed short ss) {
  if (ss >= 4096)
    return True();
  else
    return False();
}
int ge_4097(signed short ss) {
  if (ss >= 4097)
    return True();
  else
    return False();
}
int ge_8191(signed short ss) {
  if (ss >= 8191)
    return True();
  else
    return False();
}
int ge_8192(signed short ss) {
  if (ss >= 8192)
    return True();
  else
    return False();
}
int ge_8193(signed short ss) {
  if (ss >= 8193)
    return True();
  else
    return False();
}
int ge_16383(signed short ss) {
  if (ss >= 16383)
    return True();
  else
    return False();
}
int ge_16384(signed short ss) {
  if (ss >= 16384)
    return True();
  else
    return False();
}
int ge_16385(signed short ss) {
  if (ss >= 16385)
    return True();
  else
    return False();
}
int ge_32767(signed short ss) {
  if (ss >= 32767)
    return True();
  else
    return False();
}

static signed short ss;
int main() {
  ss = -32768;
  my_assert(ge_m32768(ss) == 1);
  my_assert(ge_m32767(ss) != 1);

  ss = -16384;
  my_assert(ge_m16385(ss) == 1);
  my_assert(ge_m16384(ss) == 1);
  my_assert(ge_m16383(ss) != 1);

  ss = -8192;
  my_assert(ge_m8193(ss) == 1);
  my_assert(ge_m8192(ss) == 1);
  my_assert(ge_m8191(ss) != 1);

  ss = -4096;
  my_assert(ge_m4097(ss) == 1);
  my_assert(ge_m4096(ss) == 1);
  my_assert(ge_m4095(ss) != 1);

  ss = -2048;
  my_assert(ge_m2049(ss) == 1);
  my_assert(ge_m2048(ss) == 1);
  my_assert(ge_m2047(ss) != 1);

  ss = -1024;
  my_assert(ge_m1025(ss) == 1);
  my_assert(ge_m1024(ss) == 1);
  my_assert(ge_m1023(ss) != 1);

  ss = -512;
  my_assert(ge_m513(ss) == 1);
  my_assert(ge_m512(ss) == 1);
  my_assert(ge_m511(ss) != 1);

  ss = -256;
  my_assert(ge_m257(ss) == 1);
  my_assert(ge_m256(ss) == 1);
  my_assert(ge_m255(ss) != 1);

  ss = -128;
  my_assert(ge_m129(ss) == 1);
  my_assert(ge_m128(ss) == 1);
  my_assert(ge_m127(ss) != 1);

  ss = -64;
  my_assert(ge_m65(ss) == 1);
  my_assert(ge_m64(ss) == 1);
  my_assert(ge_m63(ss) != 1);

  ss = -32;
  my_assert(ge_m33(ss) == 1);
  my_assert(ge_m32(ss) == 1);
  my_assert(ge_m31(ss) != 1);

  ss = -16;
  my_assert(ge_m17(ss) == 1);
  my_assert(ge_m16(ss) == 1);
  my_assert(ge_m15(ss) != 1);

  ss = -8;
  my_assert(ge_m9(ss) == 1);
  my_assert(ge_m8(ss) == 1);
  my_assert(ge_m7(ss) != 1);

  ss = -4;
  my_assert(ge_m5(ss) == 1);
  my_assert(ge_m4(ss) == 1);
  my_assert(ge_m3(ss) != 1);

  ss = -2;
  my_assert(ge_m3(ss) == 1);
  my_assert(ge_m2(ss) == 1);
  my_assert(ge_m1(ss) != 1);

  ss = -1;
  my_assert(ge_m2(ss) == 1);
  my_assert(ge_m1(ss) == 1);
  my_assert(ge_00(ss) != 1);

  ss = 0;
  my_assert(ge_m1(ss) == 1);
  my_assert(ge_00(ss) == 1);
  my_assert(ge_01(ss) != 1);

  ss = 1;
  my_assert(ge_00(ss) == 1);
  my_assert(ge_01(ss) == 1);
  my_assert(ge_02(ss) != 1);

  ss = 2;
  my_assert(ge_01(ss) == 1);
  my_assert(ge_02(ss) == 1);
  my_assert(ge_03(ss) != 1);

  ss = 4;
  my_assert(ge_03(ss) == 1);
  my_assert(ge_04(ss) == 1);
  my_assert(ge_05(ss) != 1);

  ss = 8;
  my_assert(ge_07(ss) == 1);
  my_assert(ge_08(ss) == 1);
  my_assert(ge_09(ss) != 1);

  ss = 16;
  my_assert(ge_15(ss) == 1);
  my_assert(ge_16(ss) == 1);
  my_assert(ge_17(ss) != 1);

  ss = 32;
  my_assert(ge_31(ss) == 1);
  my_assert(ge_32(ss) == 1);
  my_assert(ge_33(ss) != 1);

  ss = 64;
  my_assert(ge_63(ss) == 1);
  my_assert(ge_64(ss) == 1);
  my_assert(ge_65(ss) != 1);

  ss = 128;
  my_assert(ge_127(ss) == 1);
  my_assert(ge_128(ss) == 1);
  my_assert(ge_129(ss) != 1);

  ss = 256;
  my_assert(ge_255(ss) == 1);
  my_assert(ge_256(ss) == 1);
  my_assert(ge_257(ss) != 1);

  ss = 512;
  my_assert(ge_511(ss) == 1);
  my_assert(ge_512(ss) == 1);
  my_assert(ge_513(ss) != 1);

  ss = 1024;
  my_assert(ge_1023(ss) == 1);
  my_assert(ge_1024(ss) == 1);
  my_assert(ge_1025(ss) != 1);

  ss = 2048;
  my_assert(ge_2047(ss) == 1);
  my_assert(ge_2048(ss) == 1);
  my_assert(ge_2049(ss) != 1);

  ss = 4096;
  my_assert(ge_4095(ss) == 1);
  my_assert(ge_4096(ss) == 1);
  my_assert(ge_4097(ss) != 1);

  ss = 8192;
  my_assert(ge_8191(ss) == 1);
  my_assert(ge_8192(ss) == 1);
  my_assert(ge_8193(ss) != 1);

  ss = 16384;
  my_assert(ge_16383(ss) == 1);
  my_assert(ge_16384(ss) == 1);
  my_assert(ge_16385(ss) != 1);

  ss = 32767;
  my_assert(ge_32767(ss) == 1);

  return exit_status;
}
