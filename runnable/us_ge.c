

int exit_status;
#include "my_assert.h"

int ge_0000(unsigned int us) { return us >= 0x0000u; }
int ge_0001(unsigned int us) { return us >= 0x0001u; }
int ge_0002(unsigned int us) { return us >= 0x0002u; }

int ge_0003(unsigned int us) { return us >= 0x0003u; }
int ge_0004(unsigned int us) { return us >= 0x0004u; }
int ge_0005(unsigned int us) { return us >= 0x0005u; }

int ge_0007(unsigned int us) { return us >= 0x0007u; }
int ge_0008(unsigned int us) { return us >= 0x0008u; }
int ge_0009(unsigned int us) { return us >= 0x0009u; }

int ge_000f(unsigned int us) { return us >= 0x000fu; }
int ge_0010(unsigned int us) { return us >= 0x0010u; }
int ge_0011(unsigned int us) { return us >= 0x0011u; }

int ge_001f(unsigned int us) { return us >= 0x001fu; }
int ge_0020(unsigned int us) { return us >= 0x0020u; }
int ge_0021(unsigned int us) { return us >= 0x0021u; }

int ge_003f(unsigned int us) { return us >= 0x003fu; }
int ge_0040(unsigned int us) { return us >= 0x0040u; }
int ge_0041(unsigned int us) { return us >= 0x0041u; }

int ge_007f(unsigned int us) { return us >= 0x007fu; }
int ge_0080(unsigned int us) { return us >= 0x0080u; }
int ge_0081(unsigned int us) { return us >= 0x0081u; }

int ge_00ff(unsigned int us) { return us >= 0x00ffu; }
int ge_0100(unsigned int us) { return us >= 0x0100u; }
int ge_0101(unsigned int us) { return us >= 0x0101u; }

int ge_01ff(unsigned int us) { return us >= 0x01ffu; }
int ge_0200(unsigned int us) { return us >= 0x0200u; }
int ge_0201(unsigned int us) { return us >= 0x0201u; }

int ge_03ff(unsigned int us) { return us >= 0x03ffu; }
int ge_0400(unsigned int us) { return us >= 0x0400u; }
int ge_0401(unsigned int us) { return us >= 0x0401u; }

int ge_07ff(unsigned int us) { return us >= 0x07ffu; }
int ge_0800(unsigned int us) { return us >= 0x0800u; }
int ge_0801(unsigned int us) { return us >= 0x0801u; }

int ge_0fff(unsigned int us) { return us >= 0x0fffu; }
int ge_1000(unsigned int us) { return us >= 0x1000u; }
int ge_1001(unsigned int us) { return us >= 0x1001u; }

int ge_1fff(unsigned int us) { return us >= 0x1fffu; }
int ge_2000(unsigned int us) { return us >= 0x2000u; }
int ge_2001(unsigned int us) { return us >= 0x2001u; }

int ge_3fff(unsigned int us) { return us >= 0x3fffu; }
int ge_4000(unsigned int us) { return us >= 0x4000u; }
int ge_4001(unsigned int us) { return us >= 0x4001u; }

int ge_7fff(unsigned int us) { return us >= 0x7fffu; }
int ge_8000(unsigned int us) { return us >= 0x8000u; }
int ge_8001(unsigned int us) { return us >= 0x8001u; }

int ge_ffff(unsigned int us) { return us >= 0xffffu; }

static unsigned int us;
int main() {
  us = 0x0000u;
  my_assert(ge_0000(us) == 1);
  my_assert(ge_0001(us) != 1);

  us = 0x0001u;
  my_assert(ge_0000(us) == 1);
  my_assert(ge_0001(us) == 1);
  my_assert(ge_0002(us) != 1);

  us = 0x0002u;
  my_assert(ge_0001(us) == 1);
  my_assert(ge_0002(us) == 1);
  my_assert(ge_0003(us) != 1);

  us = 0x0004u;
  my_assert(ge_0003(us) == 1);
  my_assert(ge_0004(us) == 1);
  my_assert(ge_0005(us) != 1);

  us = 0x0008u;
  my_assert(ge_0007(us) == 1);
  my_assert(ge_0008(us) == 1);
  my_assert(ge_0009(us) != 1);

  us = 0x0010u;
  my_assert(ge_000f(us) == 1);
  my_assert(ge_0010(us) == 1);
  my_assert(ge_0011(us) != 1);

  us = 0x0020u;
  my_assert(ge_001f(us) == 1);
  my_assert(ge_0020(us) == 1);
  my_assert(ge_0021(us) != 1);

  us = 0x0040u;
  my_assert(ge_003f(us) == 1);
  my_assert(ge_0040(us) == 1);
  my_assert(ge_0041(us) != 1);

  us = 0x0080u;
  my_assert(ge_007f(us) == 1);
  my_assert(ge_0080(us) == 1);
  my_assert(ge_0081(us) != 1);

  us = 0x0100u;
  my_assert(ge_00ff(us) == 1);
  my_assert(ge_0100(us) == 1);
  my_assert(ge_0101(us) != 1);

  us = 0x0200u;
  my_assert(ge_01ff(us) == 1);
  my_assert(ge_0200(us) == 1);
  my_assert(ge_0201(us) != 1);

  us = 0x0400u;
  my_assert(ge_03ff(us) == 1);
  my_assert(ge_0400(us) == 1);
  my_assert(ge_0401(us) != 1);

  us = 0x0800u;
  my_assert(ge_07ff(us) == 1);
  my_assert(ge_0800(us) == 1);
  my_assert(ge_0801(us) != 1);

  us = 0x1000u;
  my_assert(ge_0fff(us) == 1);
  my_assert(ge_1000(us) == 1);
  my_assert(ge_1001(us) != 1);

  us = 0x2000u;
  my_assert(ge_1fff(us) == 1);
  my_assert(ge_2000(us) == 1);
  my_assert(ge_2001(us) != 1);

  us = 0x4000u;
  my_assert(ge_3fff(us) == 1);
  my_assert(ge_4000(us) == 1);
  my_assert(ge_4001(us) != 1);

  us = 0x8000u;
  my_assert(ge_7fff(us) == 1);
  my_assert(ge_8000(us) == 1);
  my_assert(ge_8001(us) != 1);

  us = 0xffffu;
  my_assert(ge_ffff(us) == 1);

  return exit_status;
}
