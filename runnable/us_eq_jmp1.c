

int exit_status;
#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int eq_0000(unsigned short us) {
  if (us == 0x0000u)
    return True();
  else
    return False();
}
int eq_0001(unsigned short us) {
  if (us == 0x0001u)
    return True();
  else
    return False();
}
int eq_0002(unsigned short us) {
  if (us == 0x0002u)
    return True();
  else
    return False();
}

int eq_0003(unsigned short us) {
  if (us == 0x0003u)
    return True();
  else
    return False();
}
int eq_0004(unsigned short us) {
  if (us == 0x0004u)
    return True();
  else
    return False();
}
int eq_0005(unsigned short us) {
  if (us == 0x0005u)
    return True();
  else
    return False();
}

int eq_0007(unsigned short us) {
  if (us == 0x0007u)
    return True();
  else
    return False();
}
int eq_0008(unsigned short us) {
  if (us == 0x0008u)
    return True();
  else
    return False();
}
int eq_0009(unsigned short us) {
  if (us == 0x0009u)
    return True();
  else
    return False();
}

int eq_000f(unsigned short us) {
  if (us == 0x000fu)
    return True();
  else
    return False();
}
int eq_0010(unsigned short us) {
  if (us == 0x0010u)
    return True();
  else
    return False();
}
int eq_0011(unsigned short us) {
  if (us == 0x0011u)
    return True();
  else
    return False();
}

int eq_001f(unsigned short us) {
  if (us == 0x001fu)
    return True();
  else
    return False();
}
int eq_0020(unsigned short us) {
  if (us == 0x0020u)
    return True();
  else
    return False();
}
int eq_0021(unsigned short us) {
  if (us == 0x0021u)
    return True();
  else
    return False();
}

int eq_003f(unsigned short us) {
  if (us == 0x003fu)
    return True();
  else
    return False();
}
int eq_0040(unsigned short us) {
  if (us == 0x0040u)
    return True();
  else
    return False();
}
int eq_0041(unsigned short us) {
  if (us == 0x0041u)
    return True();
  else
    return False();
}

int eq_007f(unsigned short us) {
  if (us == 0x007fu)
    return True();
  else
    return False();
}
int eq_0080(unsigned short us) {
  if (us == 0x0080u)
    return True();
  else
    return False();
}
int eq_0081(unsigned short us) {
  if (us == 0x0081u)
    return True();
  else
    return False();
}

int eq_00ff(unsigned short us) {
  if (us == 0x00ffu)
    return True();
  else
    return False();
}
int eq_0100(unsigned short us) {
  if (us == 0x0100u)
    return True();
  else
    return False();
}
int eq_0101(unsigned short us) {
  if (us == 0x0101u)
    return True();
  else
    return False();
}

int eq_01ff(unsigned short us) {
  if (us == 0x01ffu)
    return True();
  else
    return False();
}
int eq_0200(unsigned short us) {
  if (us == 0x0200u)
    return True();
  else
    return False();
}
int eq_0201(unsigned short us) {
  if (us == 0x0201u)
    return True();
  else
    return False();
}

int eq_03ff(unsigned short us) {
  if (us == 0x03ffu)
    return True();
  else
    return False();
}
int eq_0400(unsigned short us) {
  if (us == 0x0400u)
    return True();
  else
    return False();
}
int eq_0401(unsigned short us) {
  if (us == 0x0401u)
    return True();
  else
    return False();
}

int eq_07ff(unsigned short us) {
  if (us == 0x07ffu)
    return True();
  else
    return False();
}
int eq_0800(unsigned short us) {
  if (us == 0x0800u)
    return True();
  else
    return False();
}
int eq_0801(unsigned short us) {
  if (us == 0x0801u)
    return True();
  else
    return False();
}

int eq_0fff(unsigned short us) {
  if (us == 0x0fffu)
    return True();
  else
    return False();
}
int eq_1000(unsigned short us) {
  if (us == 0x1000u)
    return True();
  else
    return False();
}
int eq_1001(unsigned short us) {
  if (us == 0x1001u)
    return True();
  else
    return False();
}

int eq_1fff(unsigned short us) {
  if (us == 0x1fffu)
    return True();
  else
    return False();
}
int eq_2000(unsigned short us) {
  if (us == 0x2000u)
    return True();
  else
    return False();
}
int eq_2001(unsigned short us) {
  if (us == 0x2001u)
    return True();
  else
    return False();
}

int eq_3fff(unsigned short us) {
  if (us == 0x3fffu)
    return True();
  else
    return False();
}
int eq_4000(unsigned short us) {
  if (us == 0x4000u)
    return True();
  else
    return False();
}
int eq_4001(unsigned short us) {
  if (us == 0x4001u)
    return True();
  else
    return False();
}

int eq_7fff(unsigned short us) {
  if (us == 0x7fffu)
    return True();
  else
    return False();
}
int eq_8000(unsigned short us) {
  if (us == 0x8000u)
    return True();
  else
    return False();
}
int eq_8001(unsigned short us) {
  if (us == 0x8001u)
    return True();
  else
    return False();
}

int eq_ffff(unsigned short us) {
  if (us == 0xffffu)
    return True();
  else
    return False();
}

static unsigned short us;
int main() {
  us = 0x0000u;
  my_assert(eq_0000(us) == 1);
  my_assert(eq_0001(us) != 1);

  us = 0x0001u;
  my_assert(eq_0000(us) != 1);
  my_assert(eq_0001(us) == 1);
  my_assert(eq_0002(us) != 1);

  us = 0x0002u;
  my_assert(eq_0001(us) != 1);
  my_assert(eq_0002(us) == 1);
  my_assert(eq_0003(us) != 1);

  us = 0x0004u;
  my_assert(eq_0003(us) != 1);
  my_assert(eq_0004(us) == 1);
  my_assert(eq_0005(us) != 1);

  us = 0x0008u;
  my_assert(eq_0007(us) != 1);
  my_assert(eq_0008(us) == 1);
  my_assert(eq_0009(us) != 1);

  us = 0x0010u;
  my_assert(eq_000f(us) != 1);
  my_assert(eq_0010(us) == 1);
  my_assert(eq_0011(us) != 1);

  us = 0x0020u;
  my_assert(eq_001f(us) != 1);
  my_assert(eq_0020(us) == 1);
  my_assert(eq_0021(us) != 1);

  us = 0x0040u;
  my_assert(eq_003f(us) != 1);
  my_assert(eq_0040(us) == 1);
  my_assert(eq_0041(us) != 1);

  us = 0x0080u;
  my_assert(eq_007f(us) != 1);
  my_assert(eq_0080(us) == 1);
  my_assert(eq_0081(us) != 1);

  us = 0x0100u;
  my_assert(eq_00ff(us) != 1);
  my_assert(eq_0100(us) == 1);
  my_assert(eq_0101(us) != 1);

  us = 0x0200u;
  my_assert(eq_01ff(us) != 1);
  my_assert(eq_0200(us) == 1);
  my_assert(eq_0201(us) != 1);

  us = 0x0400u;
  my_assert(eq_03ff(us) != 1);
  my_assert(eq_0400(us) == 1);
  my_assert(eq_0401(us) != 1);

  us = 0x0800u;
  my_assert(eq_07ff(us) != 1);
  my_assert(eq_0800(us) == 1);
  my_assert(eq_0801(us) != 1);

  us = 0x1000u;
  my_assert(eq_0fff(us) != 1);
  my_assert(eq_1000(us) == 1);
  my_assert(eq_1001(us) != 1);

  us = 0x2000u;
  my_assert(eq_1fff(us) != 1);
  my_assert(eq_2000(us) == 1);
  my_assert(eq_2001(us) != 1);

  us = 0x4000u;
  my_assert(eq_3fff(us) != 1);
  my_assert(eq_4000(us) == 1);
  my_assert(eq_4001(us) != 1);

  us = 0x8000u;
  my_assert(eq_7fff(us) != 1);
  my_assert(eq_8000(us) == 1);
  my_assert(eq_8001(us) != 1);

  us = 0xffffu;
  my_assert(eq_ffff(us) == 1);

  return exit_status;
}
