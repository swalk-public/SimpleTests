

int exit_status;
#include "my_assert.h"

int nlt_0000(unsigned int us) { return !(us < 0x0000u); }
int nlt_0001(unsigned int us) { return !(us < 0x0001u); }
int nlt_0002(unsigned int us) { return !(us < 0x0002u); }

int nlt_0003(unsigned int us) { return !(us < 0x0003u); }
int nlt_0004(unsigned int us) { return !(us < 0x0004u); }
int nlt_0005(unsigned int us) { return !(us < 0x0005u); }

int nlt_0007(unsigned int us) { return !(us < 0x0007u); }
int nlt_0008(unsigned int us) { return !(us < 0x0008u); }
int nlt_0009(unsigned int us) { return !(us < 0x0009u); }

int nlt_000f(unsigned int us) { return !(us < 0x000fu); }
int nlt_0010(unsigned int us) { return !(us < 0x0010u); }
int nlt_0011(unsigned int us) { return !(us < 0x0011u); }

int nlt_001f(unsigned int us) { return !(us < 0x001fu); }
int nlt_0020(unsigned int us) { return !(us < 0x0020u); }
int nlt_0021(unsigned int us) { return !(us < 0x0021u); }

int nlt_003f(unsigned int us) { return !(us < 0x003fu); }
int nlt_0040(unsigned int us) { return !(us < 0x0040u); }
int nlt_0041(unsigned int us) { return !(us < 0x0041u); }

int nlt_007f(unsigned int us) { return !(us < 0x007fu); }
int nlt_0080(unsigned int us) { return !(us < 0x0080u); }
int nlt_0081(unsigned int us) { return !(us < 0x0081u); }

int nlt_00ff(unsigned int us) { return !(us < 0x00ffu); }
int nlt_0100(unsigned int us) { return !(us < 0x0100u); }
int nlt_0101(unsigned int us) { return !(us < 0x0101u); }

int nlt_01ff(unsigned int us) { return !(us < 0x01ffu); }
int nlt_0200(unsigned int us) { return !(us < 0x0200u); }
int nlt_0201(unsigned int us) { return !(us < 0x0201u); }

int nlt_03ff(unsigned int us) { return !(us < 0x03ffu); }
int nlt_0400(unsigned int us) { return !(us < 0x0400u); }
int nlt_0401(unsigned int us) { return !(us < 0x0401u); }

int nlt_07ff(unsigned int us) { return !(us < 0x07ffu); }
int nlt_0800(unsigned int us) { return !(us < 0x0800u); }
int nlt_0801(unsigned int us) { return !(us < 0x0801u); }

int nlt_0fff(unsigned int us) { return !(us < 0x0fffu); }
int nlt_1000(unsigned int us) { return !(us < 0x1000u); }
int nlt_1001(unsigned int us) { return !(us < 0x1001u); }

int nlt_1fff(unsigned int us) { return !(us < 0x1fffu); }
int nlt_2000(unsigned int us) { return !(us < 0x2000u); }
int nlt_2001(unsigned int us) { return !(us < 0x2001u); }

int nlt_3fff(unsigned int us) { return !(us < 0x3fffu); }
int nlt_4000(unsigned int us) { return !(us < 0x4000u); }
int nlt_4001(unsigned int us) { return !(us < 0x4001u); }

int nlt_7fff(unsigned int us) { return !(us < 0x7fffu); }
int nlt_8000(unsigned int us) { return !(us < 0x8000u); }
int nlt_8001(unsigned int us) { return !(us < 0x8001u); }

int nlt_ffff(unsigned int us) { return !(us < 0xffffu); }

static unsigned int us;
int main() {
  us = 0x0000u;
  my_assert(nlt_0000(us) == 1);
  my_assert(nlt_0001(us) != 1);

  us = 0x0001u;
  my_assert(nlt_0000(us) == 1);
  my_assert(nlt_0001(us) == 1);
  my_assert(nlt_0002(us) != 1);

  us = 0x0002u;
  my_assert(nlt_0001(us) == 1);
  my_assert(nlt_0002(us) == 1);
  my_assert(nlt_0003(us) != 1);

  us = 0x0004u;
  my_assert(nlt_0003(us) == 1);
  my_assert(nlt_0004(us) == 1);
  my_assert(nlt_0005(us) != 1);

  us = 0x0008u;
  my_assert(nlt_0007(us) == 1);
  my_assert(nlt_0008(us) == 1);
  my_assert(nlt_0009(us) != 1);

  us = 0x0010u;
  my_assert(nlt_000f(us) == 1);
  my_assert(nlt_0010(us) == 1);
  my_assert(nlt_0011(us) != 1);

  us = 0x0020u;
  my_assert(nlt_001f(us) == 1);
  my_assert(nlt_0020(us) == 1);
  my_assert(nlt_0021(us) != 1);

  us = 0x0040u;
  my_assert(nlt_003f(us) == 1);
  my_assert(nlt_0040(us) == 1);
  my_assert(nlt_0041(us) != 1);

  us = 0x0080u;
  my_assert(nlt_007f(us) == 1);
  my_assert(nlt_0080(us) == 1);
  my_assert(nlt_0081(us) != 1);

  us = 0x0100u;
  my_assert(nlt_00ff(us) == 1);
  my_assert(nlt_0100(us) == 1);
  my_assert(nlt_0101(us) != 1);

  us = 0x0200u;
  my_assert(nlt_01ff(us) == 1);
  my_assert(nlt_0200(us) == 1);
  my_assert(nlt_0201(us) != 1);

  us = 0x0400u;
  my_assert(nlt_03ff(us) == 1);
  my_assert(nlt_0400(us) == 1);
  my_assert(nlt_0401(us) != 1);

  us = 0x0800u;
  my_assert(nlt_07ff(us) == 1);
  my_assert(nlt_0800(us) == 1);
  my_assert(nlt_0801(us) != 1);

  us = 0x1000u;
  my_assert(nlt_0fff(us) == 1);
  my_assert(nlt_1000(us) == 1);
  my_assert(nlt_1001(us) != 1);

  us = 0x2000u;
  my_assert(nlt_1fff(us) == 1);
  my_assert(nlt_2000(us) == 1);
  my_assert(nlt_2001(us) != 1);

  us = 0x4000u;
  my_assert(nlt_3fff(us) == 1);
  my_assert(nlt_4000(us) == 1);
  my_assert(nlt_4001(us) != 1);

  us = 0x8000u;
  my_assert(nlt_7fff(us) == 1);
  my_assert(nlt_8000(us) == 1);
  my_assert(nlt_8001(us) != 1);

  us = 0xffffu;
  my_assert(nlt_ffff(us) == 1);

  return exit_status;
}
