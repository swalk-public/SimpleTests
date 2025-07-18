

int exit_status;
#include "my_assert.h"

int nne_0000(unsigned short us) { return !(us != 0x0000u); }
int nne_0001(unsigned short us) { return !(us != 0x0001u); }
int nne_0002(unsigned short us) { return !(us != 0x0002u); }

int nne_0003(unsigned short us) { return !(us != 0x0003u); }
int nne_0004(unsigned short us) { return !(us != 0x0004u); }
int nne_0005(unsigned short us) { return !(us != 0x0005u); }

int nne_0007(unsigned short us) { return !(us != 0x0007u); }
int nne_0008(unsigned short us) { return !(us != 0x0008u); }
int nne_0009(unsigned short us) { return !(us != 0x0009u); }

int nne_000f(unsigned short us) { return !(us != 0x000fu); }
int nne_0010(unsigned short us) { return !(us != 0x0010u); }
int nne_0011(unsigned short us) { return !(us != 0x0011u); }

int nne_001f(unsigned short us) { return !(us != 0x001fu); }
int nne_0020(unsigned short us) { return !(us != 0x0020u); }
int nne_0021(unsigned short us) { return !(us != 0x0021u); }

int nne_003f(unsigned short us) { return !(us != 0x003fu); }
int nne_0040(unsigned short us) { return !(us != 0x0040u); }
int nne_0041(unsigned short us) { return !(us != 0x0041u); }

int nne_007f(unsigned short us) { return !(us != 0x007fu); }
int nne_0080(unsigned short us) { return !(us != 0x0080u); }
int nne_0081(unsigned short us) { return !(us != 0x0081u); }

int nne_00ff(unsigned short us) { return !(us != 0x00ffu); }
int nne_0100(unsigned short us) { return !(us != 0x0100u); }
int nne_0101(unsigned short us) { return !(us != 0x0101u); }

int nne_01ff(unsigned short us) { return !(us != 0x01ffu); }
int nne_0200(unsigned short us) { return !(us != 0x0200u); }
int nne_0201(unsigned short us) { return !(us != 0x0201u); }

int nne_03ff(unsigned short us) { return !(us != 0x03ffu); }
int nne_0400(unsigned short us) { return !(us != 0x0400u); }
int nne_0401(unsigned short us) { return !(us != 0x0401u); }

int nne_07ff(unsigned short us) { return !(us != 0x07ffu); }
int nne_0800(unsigned short us) { return !(us != 0x0800u); }
int nne_0801(unsigned short us) { return !(us != 0x0801u); }

int nne_0fff(unsigned short us) { return !(us != 0x0fffu); }
int nne_1000(unsigned short us) { return !(us != 0x1000u); }
int nne_1001(unsigned short us) { return !(us != 0x1001u); }

int nne_1fff(unsigned short us) { return !(us != 0x1fffu); }
int nne_2000(unsigned short us) { return !(us != 0x2000u); }
int nne_2001(unsigned short us) { return !(us != 0x2001u); }

int nne_3fff(unsigned short us) { return !(us != 0x3fffu); }
int nne_4000(unsigned short us) { return !(us != 0x4000u); }
int nne_4001(unsigned short us) { return !(us != 0x4001u); }

int nne_7fff(unsigned short us) { return !(us != 0x7fffu); }
int nne_8000(unsigned short us) { return !(us != 0x8000u); }
int nne_8001(unsigned short us) { return !(us != 0x8001u); }

static unsigned short us;
int main() {
  us = 0x0000;
  my_assert(nne_0000(us) == 1);
  my_assert(nne_0001(us) != 1);

  us = 0x0001;
  my_assert(nne_0000(us) != 1);
  my_assert(nne_0001(us) == 1);
  my_assert(nne_0002(us) != 1);

  us = 0x0002;
  my_assert(nne_0001(us) != 1);
  my_assert(nne_0002(us) == 1);
  my_assert(nne_0003(us) != 1);

  us = 0x0004;
  my_assert(nne_0003(us) != 1);
  my_assert(nne_0004(us) == 1);
  my_assert(nne_0005(us) != 1);

  us = 0x0008;
  my_assert(nne_0007(us) != 1);
  my_assert(nne_0008(us) == 1);
  my_assert(nne_0009(us) != 1);

  us = 0x0010;
  my_assert(nne_000f(us) != 1);
  my_assert(nne_0010(us) == 1);
  my_assert(nne_0011(us) != 1);

  us = 0x0020;
  my_assert(nne_001f(us) != 1);
  my_assert(nne_0020(us) == 1);
  my_assert(nne_0021(us) != 1);

  us = 0x0040;
  my_assert(nne_003f(us) != 1);
  my_assert(nne_0040(us) == 1);
  my_assert(nne_0041(us) != 1);

  us = 0x0080;
  my_assert(nne_007f(us) != 1);
  my_assert(nne_0080(us) == 1);
  my_assert(nne_0081(us) != 1);

  us = 0x0100;
  my_assert(nne_00ff(us) != 1);
  my_assert(nne_0100(us) == 1);
  my_assert(nne_0101(us) != 1);

  us = 0x0200;
  my_assert(nne_01ff(us) != 1);
  my_assert(nne_0200(us) == 1);
  my_assert(nne_0201(us) != 1);

  us = 0x0400;
  my_assert(nne_03ff(us) != 1);
  my_assert(nne_0400(us) == 1);
  my_assert(nne_0401(us) != 1);

  us = 0x0800;
  my_assert(nne_07ff(us) != 1);
  my_assert(nne_0800(us) == 1);
  my_assert(nne_0801(us) != 1);

  us = 0x1000;
  my_assert(nne_0fff(us) != 1);
  my_assert(nne_1000(us) == 1);
  my_assert(nne_1001(us) != 1);

  us = 0x2000;
  my_assert(nne_1fff(us) != 1);
  my_assert(nne_2000(us) == 1);
  my_assert(nne_2001(us) != 1);

  us = 0x4000;
  my_assert(nne_3fff(us) != 1);
  my_assert(nne_4000(us) == 1);
  my_assert(nne_4001(us) != 1);

  us = 0x8000;
  my_assert(nne_7fff(us) != 1);
  my_assert(nne_8000(us) == 1);
  my_assert(nne_8001(us) != 1);

  return exit_status;
}
