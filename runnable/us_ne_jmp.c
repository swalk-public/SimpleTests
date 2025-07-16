

int exit_status;
#include "my_assert.h"

int ne_0000(unsigned short us) {
  if (us != 0x0000u)
    return 1;
  else
    return 0;
}
int ne_0001(unsigned short us) {
  if (us != 0x0001u)
    return 1;
  else
    return 0;
}
int ne_0002(unsigned short us) {
  if (us != 0x0002u)
    return 1;
  else
    return 0;
}

int ne_0003(unsigned short us) {
  if (us != 0x0003u)
    return 1;
  else
    return 0;
}
int ne_0004(unsigned short us) {
  if (us != 0x0004u)
    return 1;
  else
    return 0;
}
int ne_0005(unsigned short us) {
  if (us != 0x0005u)
    return 1;
  else
    return 0;
}

int ne_0007(unsigned short us) {
  if (us != 0x0007u)
    return 1;
  else
    return 0;
}
int ne_0008(unsigned short us) {
  if (us != 0x0008u)
    return 1;
  else
    return 0;
}
int ne_0009(unsigned short us) {
  if (us != 0x0009u)
    return 1;
  else
    return 0;
}

int ne_000f(unsigned short us) {
  if (us != 0x000fu)
    return 1;
  else
    return 0;
}
int ne_0010(unsigned short us) {
  if (us != 0x0010u)
    return 1;
  else
    return 0;
}
int ne_0011(unsigned short us) {
  if (us != 0x0011u)
    return 1;
  else
    return 0;
}

int ne_001f(unsigned short us) {
  if (us != 0x001fu)
    return 1;
  else
    return 0;
}
int ne_0020(unsigned short us) {
  if (us != 0x0020u)
    return 1;
  else
    return 0;
}
int ne_0021(unsigned short us) {
  if (us != 0x0021u)
    return 1;
  else
    return 0;
}

int ne_003f(unsigned short us) {
  if (us != 0x003fu)
    return 1;
  else
    return 0;
}
int ne_0040(unsigned short us) {
  if (us != 0x0040u)
    return 1;
  else
    return 0;
}
int ne_0041(unsigned short us) {
  if (us != 0x0041u)
    return 1;
  else
    return 0;
}

int ne_007f(unsigned short us) {
  if (us != 0x007fu)
    return 1;
  else
    return 0;
}
int ne_0080(unsigned short us) {
  if (us != 0x0080u)
    return 1;
  else
    return 0;
}
int ne_0081(unsigned short us) {
  if (us != 0x0081u)
    return 1;
  else
    return 0;
}

int ne_00ff(unsigned short us) {
  if (us != 0x00ffu)
    return 1;
  else
    return 0;
}
int ne_0100(unsigned short us) {
  if (us != 0x0100u)
    return 1;
  else
    return 0;
}
int ne_0101(unsigned short us) {
  if (us != 0x0101u)
    return 1;
  else
    return 0;
}

int ne_01ff(unsigned short us) {
  if (us != 0x01ffu)
    return 1;
  else
    return 0;
}
int ne_0200(unsigned short us) {
  if (us != 0x0200u)
    return 1;
  else
    return 0;
}
int ne_0201(unsigned short us) {
  if (us != 0x0201u)
    return 1;
  else
    return 0;
}

int ne_03ff(unsigned short us) {
  if (us != 0x03ffu)
    return 1;
  else
    return 0;
}
int ne_0400(unsigned short us) {
  if (us != 0x0400u)
    return 1;
  else
    return 0;
}
int ne_0401(unsigned short us) {
  if (us != 0x0401u)
    return 1;
  else
    return 0;
}

int ne_07ff(unsigned short us) {
  if (us != 0x07ffu)
    return 1;
  else
    return 0;
}
int ne_0800(unsigned short us) {
  if (us != 0x0800u)
    return 1;
  else
    return 0;
}
int ne_0801(unsigned short us) {
  if (us != 0x0801u)
    return 1;
  else
    return 0;
}

int ne_0fff(unsigned short us) {
  if (us != 0x0fffu)
    return 1;
  else
    return 0;
}
int ne_1000(unsigned short us) {
  if (us != 0x1000u)
    return 1;
  else
    return 0;
}
int ne_1001(unsigned short us) {
  if (us != 0x1001u)
    return 1;
  else
    return 0;
}

int ne_1fff(unsigned short us) {
  if (us != 0x1fffu)
    return 1;
  else
    return 0;
}
int ne_2000(unsigned short us) {
  if (us != 0x2000u)
    return 1;
  else
    return 0;
}
int ne_2001(unsigned short us) {
  if (us != 0x2001u)
    return 1;
  else
    return 0;
}

int ne_3fff(unsigned short us) {
  if (us != 0x3fffu)
    return 1;
  else
    return 0;
}
int ne_4000(unsigned short us) {
  if (us != 0x4000u)
    return 1;
  else
    return 0;
}
int ne_4001(unsigned short us) {
  if (us != 0x4001u)
    return 1;
  else
    return 0;
}

int ne_7fff(unsigned short us) {
  if (us != 0x7fffu)
    return 1;
  else
    return 0;
}
int ne_8000(unsigned short us) {
  if (us != 0x8000u)
    return 1;
  else
    return 0;
}
int ne_8001(unsigned short us) {
  if (us != 0x8001u)
    return 1;
  else
    return 0;
}

int ne_ffff(unsigned short us) {
  if (us != 0xffffu)
    return 1;
  else
    return 0;
}

static unsigned short us;
int main() {
  us = 0x0000u;
  my_assert(ne_0000(us) != 1);
  my_assert(ne_0001(us) == 1);

  us = 0x0001u;
  my_assert(ne_0000(us) == 1);
  my_assert(ne_0001(us) != 1);
  my_assert(ne_0002(us) == 1);

  us = 0x0002u;
  my_assert(ne_0001(us) == 1);
  my_assert(ne_0002(us) != 1);
  my_assert(ne_0003(us) == 1);

  us = 0x0004u;
  my_assert(ne_0003(us) == 1);
  my_assert(ne_0004(us) != 1);
  my_assert(ne_0005(us) == 1);

  us = 0x0008u;
  my_assert(ne_0007(us) == 1);
  my_assert(ne_0008(us) != 1);
  my_assert(ne_0009(us) == 1);

  us = 0x0010u;
  my_assert(ne_000f(us) == 1);
  my_assert(ne_0010(us) != 1);
  my_assert(ne_0011(us) == 1);

  us = 0x0020u;
  my_assert(ne_001f(us) == 1);
  my_assert(ne_0020(us) != 1);
  my_assert(ne_0021(us) == 1);

  us = 0x0040u;
  my_assert(ne_003f(us) == 1);
  my_assert(ne_0040(us) != 1);
  my_assert(ne_0041(us) == 1);

  us = 0x0080u;
  my_assert(ne_007f(us) == 1);
  my_assert(ne_0080(us) != 1);
  my_assert(ne_0081(us) == 1);

  us = 0x0100u;
  my_assert(ne_00ff(us) == 1);
  my_assert(ne_0100(us) != 1);
  my_assert(ne_0101(us) == 1);

  us = 0x0200u;
  my_assert(ne_01ff(us) == 1);
  my_assert(ne_0200(us) != 1);
  my_assert(ne_0201(us) == 1);

  us = 0x0400u;
  my_assert(ne_03ff(us) == 1);
  my_assert(ne_0400(us) != 1);
  my_assert(ne_0401(us) == 1);

  us = 0x0800u;
  my_assert(ne_07ff(us) == 1);
  my_assert(ne_0800(us) != 1);
  my_assert(ne_0801(us) == 1);

  us = 0x1000u;
  my_assert(ne_0fff(us) == 1);
  my_assert(ne_1000(us) != 1);
  my_assert(ne_1001(us) == 1);

  us = 0x2000u;
  my_assert(ne_1fff(us) == 1);
  my_assert(ne_2000(us) != 1);
  my_assert(ne_2001(us) == 1);

  us = 0x4000u;
  my_assert(ne_3fff(us) == 1);
  my_assert(ne_4000(us) != 1);
  my_assert(ne_4001(us) == 1);

  us = 0x8000u;
  my_assert(ne_7fff(us) == 1);
  my_assert(ne_8000(us) != 1);
  my_assert(ne_8001(us) == 1);

  us = 0xffffu;
  my_assert(ne_ffff(us) != 1);

  return exit_status;
}
