

int exit_status;
#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int le_0000(unsigned int us) {
  if (us <= 0x0000u)
    return True();
  else
    return False();
}
int le_0001(unsigned int us) {
  if (us <= 0x0001u)
    return True();
  else
    return False();
}
int le_0002(unsigned int us) {
  if (us <= 0x0002u)
    return True();
  else
    return False();
}

int le_0003(unsigned int us) {
  if (us <= 0x0003u)
    return True();
  else
    return False();
}
int le_0004(unsigned int us) {
  if (us <= 0x0004u)
    return True();
  else
    return False();
}
int le_0005(unsigned int us) {
  if (us <= 0x0005u)
    return True();
  else
    return False();
}

int le_0007(unsigned int us) {
  if (us <= 0x0007u)
    return True();
  else
    return False();
}
int le_0008(unsigned int us) {
  if (us <= 0x0008u)
    return True();
  else
    return False();
}
int le_0009(unsigned int us) {
  if (us <= 0x0009u)
    return True();
  else
    return False();
}

int le_000f(unsigned int us) {
  if (us <= 0x000fu)
    return True();
  else
    return False();
}
int le_0010(unsigned int us) {
  if (us <= 0x0010u)
    return True();
  else
    return False();
}
int le_0011(unsigned int us) {
  if (us <= 0x0011u)
    return True();
  else
    return False();
}

int le_001f(unsigned int us) {
  if (us <= 0x001fu)
    return True();
  else
    return False();
}
int le_0020(unsigned int us) {
  if (us <= 0x0020u)
    return True();
  else
    return False();
}
int le_0021(unsigned int us) {
  if (us <= 0x0021u)
    return True();
  else
    return False();
}

int le_003f(unsigned int us) {
  if (us <= 0x003fu)
    return True();
  else
    return False();
}
int le_0040(unsigned int us) {
  if (us <= 0x0040u)
    return True();
  else
    return False();
}
int le_0041(unsigned int us) {
  if (us <= 0x0041u)
    return True();
  else
    return False();
}

int le_007f(unsigned int us) {
  if (us <= 0x007fu)
    return True();
  else
    return False();
}
int le_0080(unsigned int us) {
  if (us <= 0x0080u)
    return True();
  else
    return False();
}
int le_0081(unsigned int us) {
  if (us <= 0x0081u)
    return True();
  else
    return False();
}

int le_00ff(unsigned int us) {
  if (us <= 0x00ffu)
    return True();
  else
    return False();
}
int le_0100(unsigned int us) {
  if (us <= 0x0100u)
    return True();
  else
    return False();
}
int le_0101(unsigned int us) {
  if (us <= 0x0101u)
    return True();
  else
    return False();
}

int le_01ff(unsigned int us) {
  if (us <= 0x01ffu)
    return True();
  else
    return False();
}
int le_0200(unsigned int us) {
  if (us <= 0x0200u)
    return True();
  else
    return False();
}
int le_0201(unsigned int us) {
  if (us <= 0x0201u)
    return True();
  else
    return False();
}

int le_03ff(unsigned int us) {
  if (us <= 0x03ffu)
    return True();
  else
    return False();
}
int le_0400(unsigned int us) {
  if (us <= 0x0400u)
    return True();
  else
    return False();
}
int le_0401(unsigned int us) {
  if (us <= 0x0401u)
    return True();
  else
    return False();
}

int le_07ff(unsigned int us) {
  if (us <= 0x07ffu)
    return True();
  else
    return False();
}
int le_0800(unsigned int us) {
  if (us <= 0x0800u)
    return True();
  else
    return False();
}
int le_0801(unsigned int us) {
  if (us <= 0x0801u)
    return True();
  else
    return False();
}

int le_0fff(unsigned int us) {
  if (us <= 0x0fffu)
    return True();
  else
    return False();
}
int le_1000(unsigned int us) {
  if (us <= 0x1000u)
    return True();
  else
    return False();
}
int le_1001(unsigned int us) {
  if (us <= 0x1001u)
    return True();
  else
    return False();
}

int le_1fff(unsigned int us) {
  if (us <= 0x1fffu)
    return True();
  else
    return False();
}
int le_2000(unsigned int us) {
  if (us <= 0x2000u)
    return True();
  else
    return False();
}
int le_2001(unsigned int us) {
  if (us <= 0x2001u)
    return True();
  else
    return False();
}

int le_3fff(unsigned int us) {
  if (us <= 0x3fffu)
    return True();
  else
    return False();
}
int le_4000(unsigned int us) {
  if (us <= 0x4000u)
    return True();
  else
    return False();
}
int le_4001(unsigned int us) {
  if (us <= 0x4001u)
    return True();
  else
    return False();
}

int le_7fff(unsigned int us) {
  if (us <= 0x7fffu)
    return True();
  else
    return False();
}
int le_8000(unsigned int us) {
  if (us <= 0x8000u)
    return True();
  else
    return False();
}
int le_8001(unsigned int us) {
  if (us <= 0x8001u)
    return True();
  else
    return False();
}

int le_ffff(unsigned int us) {
  if (us <= 0xffffu)
    return True();
  else
    return False();
}

static unsigned int us;
int main() {
  us = 0x0000u;
  my_assert(le_0000(us) == 1);
  my_assert(le_0001(us) == 1);

  us = 0x0001u;
  my_assert(le_0000(us) != 1);
  my_assert(le_0001(us) == 1);
  my_assert(le_0002(us) == 1);

  us = 0x0002u;
  my_assert(le_0001(us) != 1);
  my_assert(le_0002(us) == 1);
  my_assert(le_0003(us) == 1);

  us = 0x0004u;
  my_assert(le_0003(us) != 1);
  my_assert(le_0004(us) == 1);
  my_assert(le_0005(us) == 1);

  us = 0x0008u;
  my_assert(le_0007(us) != 1);
  my_assert(le_0008(us) == 1);
  my_assert(le_0009(us) == 1);

  us = 0x0010u;
  my_assert(le_000f(us) != 1);
  my_assert(le_0010(us) == 1);
  my_assert(le_0011(us) == 1);

  us = 0x0020u;
  my_assert(le_001f(us) != 1);
  my_assert(le_0020(us) == 1);
  my_assert(le_0021(us) == 1);

  us = 0x0040u;
  my_assert(le_003f(us) != 1);
  my_assert(le_0040(us) == 1);
  my_assert(le_0041(us) == 1);

  us = 0x0080u;
  my_assert(le_007f(us) != 1);
  my_assert(le_0080(us) == 1);
  my_assert(le_0081(us) == 1);

  us = 0x0100u;
  my_assert(le_00ff(us) != 1);
  my_assert(le_0100(us) == 1);
  my_assert(le_0101(us) == 1);

  us = 0x0200u;
  my_assert(le_01ff(us) != 1);
  my_assert(le_0200(us) == 1);
  my_assert(le_0201(us) == 1);

  us = 0x0400u;
  my_assert(le_03ff(us) != 1);
  my_assert(le_0400(us) == 1);
  my_assert(le_0401(us) == 1);

  us = 0x0800u;
  my_assert(le_07ff(us) != 1);
  my_assert(le_0800(us) == 1);
  my_assert(le_0801(us) == 1);

  us = 0x1000u;
  my_assert(le_0fff(us) != 1);
  my_assert(le_1000(us) == 1);
  my_assert(le_1001(us) == 1);

  us = 0x2000u;
  my_assert(le_1fff(us) != 1);
  my_assert(le_2000(us) == 1);
  my_assert(le_2001(us) == 1);

  us = 0x4000u;
  my_assert(le_3fff(us) != 1);
  my_assert(le_4000(us) == 1);
  my_assert(le_4001(us) == 1);

  us = 0x8000u;
  my_assert(le_7fff(us) != 1);
  my_assert(le_8000(us) == 1);
  my_assert(le_8001(us) == 1);

  us = 0xffffu;
  my_assert(le_ffff(us) == 1);

  return exit_status;
}
