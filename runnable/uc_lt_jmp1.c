

int exit_status;

#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int lt_00(unsigned char uc) {
  if (uc < 0x00)
    return True();
  else
    return False();
}
int lt_01(unsigned char uc) {
  if (uc < 0x01)
    return True();
  else
    return False();
}
int lt_02(unsigned char uc) {
  if (uc < 0x02)
    return True();
  else
    return False();
}

int lt_03(unsigned char uc) {
  if (uc < 0x03)
    return True();
  else
    return False();
}
int lt_04(unsigned char uc) {
  if (uc < 0x04)
    return True();
  else
    return False();
}
int lt_05(unsigned char uc) {
  if (uc < 0x05)
    return True();
  else
    return False();
}

int lt_07(unsigned char uc) {
  if (uc < 0x07)
    return True();
  else
    return False();
}
int lt_08(unsigned char uc) {
  if (uc < 0x08)
    return True();
  else
    return False();
}
int lt_09(unsigned char uc) {
  if (uc < 0x09)
    return True();
  else
    return False();
}

int lt_0f(unsigned char uc) {
  if (uc < 0x0f)
    return True();
  else
    return False();
}
int lt_10(unsigned char uc) {
  if (uc < 0x10)
    return True();
  else
    return False();
}
int lt_11(unsigned char uc) {
  if (uc < 0x11)
    return True();
  else
    return False();
}

int lt_1f(unsigned char uc) {
  if (uc < 0x1f)
    return True();
  else
    return False();
}
int lt_20(unsigned char uc) {
  if (uc < 0x20)
    return True();
  else
    return False();
}
int lt_21(unsigned char uc) {
  if (uc < 0x21)
    return True();
  else
    return False();
}

int lt_3f(unsigned char uc) {
  if (uc < 0x3f)
    return True();
  else
    return False();
}
int lt_40(unsigned char uc) {
  if (uc < 0x40)
    return True();
  else
    return False();
}
int lt_41(unsigned char uc) {
  if (uc < 0x41)
    return True();
  else
    return False();
}

int lt_7f(unsigned char uc) {
  if (uc < 0x7f)
    return True();
  else
    return False();
}
int lt_80(unsigned char uc) {
  if (uc < 0x80)
    return True();
  else
    return False();
}
int lt_81(unsigned char uc) {
  if (uc < 0x81)
    return True();
  else
    return False();
}

int lt_ff(unsigned char uc) {
  if (uc < 0xff)
    return True();
  else
    return False();
}

static unsigned char uc;
int main() {
  uc = 0x00;
  my_assert(lt_00(uc) != 1);
  my_assert(lt_01(uc) == 1);

  uc = 0x01;
  my_assert(lt_00(uc) != 1);
  my_assert(lt_01(uc) != 1);
  my_assert(lt_02(uc) == 1);

  uc = 0x02;
  my_assert(lt_01(uc) != 1);
  my_assert(lt_02(uc) != 1);
  my_assert(lt_03(uc) == 1);

  uc = 0x04;
  my_assert(lt_03(uc) != 1);
  my_assert(lt_04(uc) != 1);
  my_assert(lt_05(uc) == 1);

  uc = 0x08;
  my_assert(lt_07(uc) != 1);
  my_assert(lt_08(uc) != 1);
  my_assert(lt_09(uc) == 1);

  uc = 0x10;
  my_assert(lt_0f(uc) != 1);
  my_assert(lt_10(uc) != 1);
  my_assert(lt_11(uc) == 1);

  uc = 0x20;
  my_assert(lt_1f(uc) != 1);
  my_assert(lt_20(uc) != 1);
  my_assert(lt_21(uc) == 1);

  uc = 0x40;
  my_assert(lt_3f(uc) != 1);
  my_assert(lt_40(uc) != 1);
  my_assert(lt_41(uc) == 1);

  uc = 0x80;
  my_assert(lt_7f(uc) != 1);
  my_assert(lt_80(uc) != 1);
  my_assert(lt_81(uc) == 1);

  uc = 0xff;
  my_assert(lt_ff(uc) != 1);

  return exit_status;
}
