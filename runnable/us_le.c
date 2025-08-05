

int exit_status;
#include "my_assert.h"

int le_0000(unsigned int us) { return us <= 0x0000u; }
int le_0001(unsigned int us) { return us <= 0x0001u; }
int le_0002(unsigned int us) { return us <= 0x0002u; }

int le_0003(unsigned int us) { return us <= 0x0003u; }
int le_0004(unsigned int us) { return us <= 0x0004u; }
int le_0005(unsigned int us) { return us <= 0x0005u; }

int le_0007(unsigned int us) { return us <= 0x0007u; }
int le_0008(unsigned int us) { return us <= 0x0008u; }
int le_0009(unsigned int us) { return us <= 0x0009u; }

int le_000f(unsigned int us) { return us <= 0x000fu; }
int le_0010(unsigned int us) { return us <= 0x0010u; }
int le_0011(unsigned int us) { return us <= 0x0011u; }

int le_001f(unsigned int us) { return us <= 0x001fu; }
int le_0020(unsigned int us) { return us <= 0x0020u; }
int le_0021(unsigned int us) { return us <= 0x0021u; }

int le_003f(unsigned int us) { return us <= 0x003fu; }
int le_0040(unsigned int us) { return us <= 0x0040u; }
int le_0041(unsigned int us) { return us <= 0x0041u; }

int le_007f(unsigned int us) { return us <= 0x007fu; }
int le_0080(unsigned int us) { return us <= 0x0080u; }
int le_0081(unsigned int us) { return us <= 0x0081u; }

int le_00ff(unsigned int us) { return us <= 0x00ffu; }
int le_0100(unsigned int us) { return us <= 0x0100u; }
int le_0101(unsigned int us) { return us <= 0x0101u; }

int le_01ff(unsigned int us) { return us <= 0x01ffu; }
int le_0200(unsigned int us) { return us <= 0x0200u; }
int le_0201(unsigned int us) { return us <= 0x0201u; }

int le_03ff(unsigned int us) { return us <= 0x03ffu; }
int le_0400(unsigned int us) { return us <= 0x0400u; }
int le_0401(unsigned int us) { return us <= 0x0401u; }

int le_07ff(unsigned int us) { return us <= 0x07ffu; }
int le_0800(unsigned int us) { return us <= 0x0800u; }
int le_0801(unsigned int us) { return us <= 0x0801u; }

int le_0fff(unsigned int us) { return us <= 0x0fffu; }
int le_1000(unsigned int us) { return us <= 0x1000u; }
int le_1001(unsigned int us) { return us <= 0x1001u; }

int le_1fff(unsigned int us) { return us <= 0x1fffu; }
int le_2000(unsigned int us) { return us <= 0x2000u; }
int le_2001(unsigned int us) { return us <= 0x2001u; }

int le_3fff(unsigned int us) { return us <= 0x3fffu; }
int le_4000(unsigned int us) { return us <= 0x4000u; }
int le_4001(unsigned int us) { return us <= 0x4001u; }

int le_7fff(unsigned int us) { return us <= 0x7fffu; }
int le_8000(unsigned int us) { return us <= 0x8000u; }
int le_8001(unsigned int us) { return us <= 0x8001u; }

int le_ffff(unsigned int us) { return us <= 0xffffu; }

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
