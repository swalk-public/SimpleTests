

int exit_status;
#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int ne_00(unsigned char uc) {
  if (uc != 0x00u)
    return True();
  else
    return False();
}
int ne_01(unsigned char uc) {
  if (uc != 0x01u)
    return True();
  else
    return False();
}
int ne_02(unsigned char uc) {
  if (uc != 0x02u)
    return True();
  else
    return False();
}

int ne_03(unsigned char uc) {
  if (uc != 0x03u)
    return True();
  else
    return False();
}
int ne_04(unsigned char uc) {
  if (uc != 0x04u)
    return True();
  else
    return False();
}
int ne_05(unsigned char uc) {
  if (uc != 0x05u)
    return True();
  else
    return False();
}

int ne_07(unsigned char uc) {
  if (uc != 0x07u)
    return True();
  else
    return False();
}
int ne_08(unsigned char uc) {
  if (uc != 0x08u)
    return True();
  else
    return False();
}
int ne_09(unsigned char uc) {
  if (uc != 0x09u)
    return True();
  else
    return False();
}

int ne_0f(unsigned char uc) {
  if (uc != 0x0fu)
    return True();
  else
    return False();
}
int ne_10(unsigned char uc) {
  if (uc != 0x10u)
    return True();
  else
    return False();
}
int ne_11(unsigned char uc) {
  if (uc != 0x11u)
    return True();
  else
    return False();
}

int ne_1f(unsigned char uc) {
  if (uc != 0x1fu)
    return True();
  else
    return False();
}
int ne_20(unsigned char uc) {
  if (uc != 0x20u)
    return True();
  else
    return False();
}
int ne_21(unsigned char uc) {
  if (uc != 0x21u)
    return True();
  else
    return False();
}

int ne_3f(unsigned char uc) {
  if (uc != 0x3fu)
    return True();
  else
    return False();
}
int ne_40(unsigned char uc) {
  if (uc != 0x40u)
    return True();
  else
    return False();
}
int ne_41(unsigned char uc) {
  if (uc != 0x41u)
    return True();
  else
    return False();
}

int ne_7f(unsigned char uc) {
  if (uc != 0x7fu)
    return True();
  else
    return False();
}
int ne_80(unsigned char uc) {
  if (uc != 0x80u)
    return True();
  else
    return False();
}
int ne_81(unsigned char uc) {
  if (uc != 0x81u)
    return True();
  else
    return False();
}

int ne_ff(unsigned char uc) {
  if (uc != 0xffu)
    return True();
  else
    return False();
}

static unsigned char uc;
int main() {
  uc = 0x00u;
  my_assert(ne_00(uc) != 1);
  my_assert(ne_01(uc) == 1);

  uc = 0x01u;
  my_assert(ne_00(uc) == 1);
  my_assert(ne_01(uc) != 1);
  my_assert(ne_02(uc) == 1);

  uc = 0x02u;
  my_assert(ne_01(uc) == 1);
  my_assert(ne_02(uc) != 1);
  my_assert(ne_03(uc) == 1);

  uc = 0x04u;
  my_assert(ne_03(uc) == 1);
  my_assert(ne_04(uc) != 1);
  my_assert(ne_05(uc) == 1);

  uc = 0x08u;
  my_assert(ne_07(uc) == 1);
  my_assert(ne_08(uc) != 1);
  my_assert(ne_09(uc) == 1);

  uc = 0x10u;
  my_assert(ne_0f(uc) == 1);
  my_assert(ne_10(uc) != 1);
  my_assert(ne_11(uc) == 1);

  uc = 0x20u;
  my_assert(ne_1f(uc) == 1);
  my_assert(ne_20(uc) != 1);
  my_assert(ne_21(uc) == 1);

  uc = 0x40u;
  my_assert(ne_3f(uc) == 1);
  my_assert(ne_40(uc) != 1);
  my_assert(ne_41(uc) == 1);

  uc = 0x80u;
  my_assert(ne_7f(uc) == 1);
  my_assert(ne_80(uc) != 1);
  my_assert(ne_81(uc) == 1);

  uc = 0xffu;
  my_assert(ne_ff(uc) != 1);

  return exit_status;
}
