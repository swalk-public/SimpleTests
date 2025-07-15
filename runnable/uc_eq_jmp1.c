

int exit_status;
#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int eq_00(unsigned char uc) {
  if (uc == 0x00u)
    return True();
  else
    return False();
}
int eq_01(unsigned char uc) {
  if (uc == 0x01u)
    return True();
  else
    return False();
}
int eq_02(unsigned char uc) {
  if (uc == 0x02u)
    return True();
  else
    return False();
}

int eq_03(unsigned char uc) {
  if (uc == 0x03u)
    return True();
  else
    return False();
}
int eq_04(unsigned char uc) {
  if (uc == 0x04u)
    return True();
  else
    return False();
}
int eq_05(unsigned char uc) {
  if (uc == 0x05u)
    return True();
  else
    return False();
}

int eq_07(unsigned char uc) {
  if (uc == 0x07u)
    return True();
  else
    return False();
}
int eq_08(unsigned char uc) {
  if (uc == 0x08u)
    return True();
  else
    return False();
}
int eq_09(unsigned char uc) {
  if (uc == 0x09u)
    return True();
  else
    return False();
}

int eq_0f(unsigned char uc) {
  if (uc == 0x0fu)
    return True();
  else
    return False();
}
int eq_10(unsigned char uc) {
  if (uc == 0x10u)
    return True();
  else
    return False();
}
int eq_11(unsigned char uc) {
  if (uc == 0x11u)
    return True();
  else
    return False();
}

int eq_1f(unsigned char uc) {
  if (uc == 0x1fu)
    return True();
  else
    return False();
}
int eq_20(unsigned char uc) {
  if (uc == 0x20u)
    return True();
  else
    return False();
}
int eq_21(unsigned char uc) {
  if (uc == 0x21u)
    return True();
  else
    return False();
}

int eq_3f(unsigned char uc) {
  if (uc == 0x3fu)
    return True();
  else
    return False();
}
int eq_40(unsigned char uc) {
  if (uc == 0x40u)
    return True();
  else
    return False();
}
int eq_41(unsigned char uc) {
  if (uc == 0x41u)
    return True();
  else
    return False();
}

int eq_7f(unsigned char uc) {
  if (uc == 0x7fu)
    return True();
  else
    return False();
}
int eq_80(unsigned char uc) {
  if (uc == 0x80u)
    return True();
  else
    return False();
}
int eq_81(unsigned char uc) {
  if (uc == 0x81u)
    return True();
  else
    return False();
}

int eq_ff(unsigned char uc) {
  if (uc == 0xffu)
    return True();
  else
    return False();
}

static unsigned char uc;
int main() {
  uc = 0x00u;
  my_assert(eq_00(uc) == 1);
  my_assert(eq_01(uc) != 1);

  uc = 0x01u;
  my_assert(eq_00(uc) != 1);
  my_assert(eq_01(uc) == 1);
  my_assert(eq_02(uc) != 1);

  uc = 0x02u;
  my_assert(eq_01(uc) != 1);
  my_assert(eq_02(uc) == 1);
  my_assert(eq_03(uc) != 1);

  uc = 0x04u;
  my_assert(eq_03(uc) != 1);
  my_assert(eq_04(uc) == 1);
  my_assert(eq_05(uc) != 1);

  uc = 0x08u;
  my_assert(eq_07(uc) != 1);
  my_assert(eq_08(uc) == 1);
  my_assert(eq_09(uc) != 1);

  uc = 0x10u;
  my_assert(eq_0f(uc) != 1);
  my_assert(eq_10(uc) == 1);
  my_assert(eq_11(uc) != 1);

  uc = 0x20u;
  my_assert(eq_1f(uc) != 1);
  my_assert(eq_20(uc) == 1);
  my_assert(eq_21(uc) != 1);

  uc = 0x40u;
  my_assert(eq_3f(uc) != 1);
  my_assert(eq_40(uc) == 1);
  my_assert(eq_41(uc) != 1);

  uc = 0x80u;
  my_assert(eq_7f(uc) != 1);
  my_assert(eq_80(uc) == 1);
  my_assert(eq_81(uc) != 1);

  uc = 0xffu;
  my_assert(eq_ff(uc) == 1);

  return exit_status;
}
