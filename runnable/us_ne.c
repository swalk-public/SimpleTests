

int exit_status;
#include "my_assert.h"

int ne_0000(unsigned short us) { return us != 0x0000; }
int ne_0001(unsigned short us) { return us != 0x0001; }
int ne_0002(unsigned short us) { return us != 0x0002; }

int ne_0003(unsigned short us) { return us != 0x0003; }
int ne_0004(unsigned short us) { return us != 0x0004; }
int ne_0005(unsigned short us) { return us != 0x0005; }

int ne_0007(unsigned short us) { return us != 0x0007; }
int ne_0008(unsigned short us) { return us != 0x0008; }
int ne_0009(unsigned short us) { return us != 0x0009; }

int ne_000f(unsigned short us) { return us != 0x000f; }
int ne_0010(unsigned short us) { return us != 0x0010; }
int ne_0011(unsigned short us) { return us != 0x0011; }

int ne_001f(unsigned short us) { return us != 0x001f; }
int ne_0020(unsigned short us) { return us != 0x0020; }
int ne_0021(unsigned short us) { return us != 0x0021; }

int ne_003f(unsigned short us) { return us != 0x003f; }
int ne_0040(unsigned short us) { return us != 0x0040; }
int ne_0041(unsigned short us) { return us != 0x0041; }

int ne_007f(unsigned short us) { return us != 0x007f; }
int ne_0080(unsigned short us) { return us != 0x0080; }
int ne_0081(unsigned short us) { return us != 0x0081; }

int ne_00ff(unsigned short us) { return us != 0x00ff; }
int ne_0100(unsigned short us) { return us != 0x0100; }
int ne_0101(unsigned short us) { return us != 0x0101; }

int ne_01ff(unsigned short us) { return us != 0x01ff; }
int ne_0200(unsigned short us) { return us != 0x0200; }
int ne_0201(unsigned short us) { return us != 0x0201; }

int ne_03ff(unsigned short us) { return us != 0x03ff; }
int ne_0400(unsigned short us) { return us != 0x0400; }
int ne_0401(unsigned short us) { return us != 0x0401; }

int ne_07ff(unsigned short us) { return us != 0x07ff; }
int ne_0800(unsigned short us) { return us != 0x0800; }
int ne_0801(unsigned short us) { return us != 0x0801; }

int ne_0fff(unsigned short us) { return us != 0x0fff; }
int ne_1000(unsigned short us) { return us != 0x1000; }
int ne_1001(unsigned short us) { return us != 0x1001; }

int ne_1fff(unsigned short us) { return us != 0x1fff; }
int ne_2000(unsigned short us) { return us != 0x2000; }
int ne_2001(unsigned short us) { return us != 0x2001; }

int ne_3fff(unsigned short us) { return us != 0x3fff; }
int ne_4000(unsigned short us) { return us != 0x4000; }
int ne_4001(unsigned short us) { return us != 0x4001; }

int ne_7fff(unsigned short us) { return us != 0x7fff; }
int ne_8000(unsigned short us) { return us != 0x8000; }
int ne_8001(unsigned short us) { return us != 0x8001; }

static unsigned short us;
int main() {
  us = 0x0000;
  my_assert(ne_0000(us) != 1);
  my_assert(ne_0001(us) == 1);

  us = 0x0001;
  my_assert(ne_0000(us) == 1);
  my_assert(ne_0001(us) != 1);
  my_assert(ne_0002(us) == 1);

  us = 0x0002;
  my_assert(ne_0001(us) == 1);
  my_assert(ne_0002(us) != 1);
  my_assert(ne_0003(us) == 1);

  us = 0x0004;
  my_assert(ne_0003(us) == 1);
  my_assert(ne_0004(us) != 1);
  my_assert(ne_0005(us) == 1);

  us = 0x0008;
  my_assert(ne_0007(us) == 1);
  my_assert(ne_0008(us) != 1);
  my_assert(ne_0009(us) == 1);

  us = 0x0010;
  my_assert(ne_000f(us) == 1);
  my_assert(ne_0010(us) != 1);
  my_assert(ne_0011(us) == 1);

  us = 0x0020;
  my_assert(ne_001f(us) == 1);
  my_assert(ne_0020(us) != 1);
  my_assert(ne_0021(us) == 1);

  us = 0x0040;
  my_assert(ne_003f(us) == 1);
  my_assert(ne_0040(us) != 1);
  my_assert(ne_0041(us) == 1);

  us = 0x0080;
  my_assert(ne_007f(us) == 1);
  my_assert(ne_0080(us) != 1);
  my_assert(ne_0081(us) == 1);

  us = 0x0100;
  my_assert(ne_00ff(us) == 1);
  my_assert(ne_0100(us) != 1);
  my_assert(ne_0101(us) == 1);

  us = 0x0200;
  my_assert(ne_01ff(us) == 1);
  my_assert(ne_0200(us) != 1);
  my_assert(ne_0201(us) == 1);

  us = 0x0400;
  my_assert(ne_03ff(us) == 1);
  my_assert(ne_0400(us) != 1);
  my_assert(ne_0401(us) == 1);

  us = 0x0800;
  my_assert(ne_07ff(us) == 1);
  my_assert(ne_0800(us) != 1);
  my_assert(ne_0801(us) == 1);

  us = 0x1000;
  my_assert(ne_0fff(us) == 1);
  my_assert(ne_1000(us) != 1);
  my_assert(ne_1001(us) == 1);

  us = 0x2000;
  my_assert(ne_1fff(us) == 1);
  my_assert(ne_2000(us) != 1);
  my_assert(ne_2001(us) == 1);

  us = 0x4000;
  my_assert(ne_3fff(us) == 1);
  my_assert(ne_4000(us) != 1);
  my_assert(ne_4001(us) == 1);

  us = 0x8000;
  my_assert(ne_7fff(us) == 1);
  my_assert(ne_8000(us) != 1);
  my_assert(ne_8001(us) == 1);

  return exit_status;
}
