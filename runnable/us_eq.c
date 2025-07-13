

int exit_status;
#include "my_assert.h"

int eq_0000(unsigned short us) { return us == 0x0000u; }
int eq_0001(unsigned short us) { return us == 0x0001u; }
int eq_0002(unsigned short us) { return us == 0x0002u; }

int eq_0003(unsigned short us) { return us == 0x0003u; }
int eq_0004(unsigned short us) { return us == 0x0004u; }
int eq_0005(unsigned short us) { return us == 0x0005u; }

int eq_0007(unsigned short us) { return us == 0x0007u; }
int eq_0008(unsigned short us) { return us == 0x0008u; }
int eq_0009(unsigned short us) { return us == 0x0009u; }

int eq_000f(unsigned short us) { return us == 0x000fu; }
int eq_0010(unsigned short us) { return us == 0x0010u; }
int eq_0011(unsigned short us) { return us == 0x0011u; }

int eq_001f(unsigned short us) { return us == 0x001fu; }
int eq_0020(unsigned short us) { return us == 0x0020u; }
int eq_0021(unsigned short us) { return us == 0x0021u; }

int eq_003f(unsigned short us) { return us == 0x003fu; }
int eq_0040(unsigned short us) { return us == 0x0040u; }
int eq_0041(unsigned short us) { return us == 0x0041u; }

int eq_007f(unsigned short us) { return us == 0x007fu; }
int eq_0080(unsigned short us) { return us == 0x0080u; }
int eq_0081(unsigned short us) { return us == 0x0081u; }

int eq_00ff(unsigned short us) { return us == 0x00ffu; }
int eq_0100(unsigned short us) { return us == 0x0100u; }
int eq_0101(unsigned short us) { return us == 0x0101u; }

int eq_01ff(unsigned short us) { return us == 0x01ffu; }
int eq_0200(unsigned short us) { return us == 0x0200u; }
int eq_0201(unsigned short us) { return us == 0x0201u; }

int eq_03ff(unsigned short us) { return us == 0x03ffu; }
int eq_0400(unsigned short us) { return us == 0x0400u; }
int eq_0401(unsigned short us) { return us == 0x0401u; }

int eq_07ff(unsigned short us) { return us == 0x07ffu; }
int eq_0800(unsigned short us) { return us == 0x0800u; }
int eq_0801(unsigned short us) { return us == 0x0801u; }

int eq_0fff(unsigned short us) { return us == 0x0fffu; }
int eq_1000(unsigned short us) { return us == 0x1000u; }
int eq_1001(unsigned short us) { return us == 0x1001u; }

int eq_1fff(unsigned short us) { return us == 0x1fffu; }
int eq_2000(unsigned short us) { return us == 0x2000u; }
int eq_2001(unsigned short us) { return us == 0x2001u; }

int eq_3fff(unsigned short us) { return us == 0x3fffu; }
int eq_4000(unsigned short us) { return us == 0x4000u; }
int eq_4001(unsigned short us) { return us == 0x4001u; }

int eq_7fff(unsigned short us) { return us == 0x7fffu; }
int eq_8000(unsigned short us) { return us == 0x8000u; }
int eq_8001(unsigned short us) { return us == 0x8001u; }

static unsigned short us;
int main() {
  us = 0x0000;
  my_assert(eq_0000(us) == 1);
  my_assert(eq_0001(us) != 1);

  us = 0x0001;
  my_assert(eq_0000(us) != 1);
  my_assert(eq_0001(us) == 1);
  my_assert(eq_0002(us) != 1);

  us = 0x0002;
  my_assert(eq_0001(us) != 1);
  my_assert(eq_0002(us) == 1);
  my_assert(eq_0003(us) != 1);

  us = 0x0004;
  my_assert(eq_0003(us) != 1);
  my_assert(eq_0004(us) == 1);
  my_assert(eq_0005(us) != 1);

  us = 0x0008;
  my_assert(eq_0007(us) != 1);
  my_assert(eq_0008(us) == 1);
  my_assert(eq_0009(us) != 1);

  us = 0x0010;
  my_assert(eq_000f(us) != 1);
  my_assert(eq_0010(us) == 1);
  my_assert(eq_0011(us) != 1);

  us = 0x0020;
  my_assert(eq_001f(us) != 1);
  my_assert(eq_0020(us) == 1);
  my_assert(eq_0021(us) != 1);

  us = 0x0040;
  my_assert(eq_003f(us) != 1);
  my_assert(eq_0040(us) == 1);
  my_assert(eq_0041(us) != 1);

  us = 0x0080;
  my_assert(eq_007f(us) != 1);
  my_assert(eq_0080(us) == 1);
  my_assert(eq_0081(us) != 1);

  us = 0x0100;
  my_assert(eq_00ff(us) != 1);
  my_assert(eq_0100(us) == 1);
  my_assert(eq_0101(us) != 1);

  us = 0x0200;
  my_assert(eq_01ff(us) != 1);
  my_assert(eq_0200(us) == 1);
  my_assert(eq_0201(us) != 1);

  us = 0x0400;
  my_assert(eq_03ff(us) != 1);
  my_assert(eq_0400(us) == 1);
  my_assert(eq_0401(us) != 1);

  us = 0x0800;
  my_assert(eq_07ff(us) != 1);
  my_assert(eq_0800(us) == 1);
  my_assert(eq_0801(us) != 1);

  us = 0x1000;
  my_assert(eq_0fff(us) != 1);
  my_assert(eq_1000(us) == 1);
  my_assert(eq_1001(us) != 1);

  us = 0x2000;
  my_assert(eq_1fff(us) != 1);
  my_assert(eq_2000(us) == 1);
  my_assert(eq_2001(us) != 1);

  us = 0x4000;
  my_assert(eq_3fff(us) != 1);
  my_assert(eq_4000(us) == 1);
  my_assert(eq_4001(us) != 1);

  us = 0x8000;
  my_assert(eq_7fff(us) != 1);
  my_assert(eq_8000(us) == 1);
  my_assert(eq_8001(us) != 1);

  return exit_status;
}
