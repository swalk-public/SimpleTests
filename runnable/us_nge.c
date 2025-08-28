

int exit_status;
#include "my_assert.h"

int nge_0000(unsigned int us) { return !(us >= 0x0000u); }
int nge_0001(unsigned int us) { return !(us >= 0x0001u); }
int nge_0002(unsigned int us) { return !(us >= 0x0002u); }

int nge_0003(unsigned int us) { return !(us >= 0x0003u); }
int nge_0004(unsigned int us) { return !(us >= 0x0004u); }
int nge_0005(unsigned int us) { return !(us >= 0x0005u); }

int nge_0007(unsigned int us) { return !(us >= 0x0007u); }
int nge_0008(unsigned int us) { return !(us >= 0x0008u); }
int nge_0009(unsigned int us) { return !(us >= 0x0009u); }

int nge_000f(unsigned int us) { return !(us >= 0x000fu); }
int nge_0010(unsigned int us) { return !(us >= 0x0010u); }
int nge_0011(unsigned int us) { return !(us >= 0x0011u); }

int nge_001f(unsigned int us) { return !(us >= 0x001fu); }
int nge_0020(unsigned int us) { return !(us >= 0x0020u); }
int nge_0021(unsigned int us) { return !(us >= 0x0021u); }

int nge_003f(unsigned int us) { return !(us >= 0x003fu); }
int nge_0040(unsigned int us) { return !(us >= 0x0040u); }
int nge_0041(unsigned int us) { return !(us >= 0x0041u); }

int nge_007f(unsigned int us) { return !(us >= 0x007fu); }
int nge_0080(unsigned int us) { return !(us >= 0x0080u); }
int nge_0081(unsigned int us) { return !(us >= 0x0081u); }

int nge_00ff(unsigned int us) { return !(us >= 0x00ffu); }
int nge_0100(unsigned int us) { return !(us >= 0x0100u); }
int nge_0101(unsigned int us) { return !(us >= 0x0101u); }

int nge_01ff(unsigned int us) { return !(us >= 0x01ffu); }
int nge_0200(unsigned int us) { return !(us >= 0x0200u); }
int nge_0201(unsigned int us) { return !(us >= 0x0201u); }

int nge_03ff(unsigned int us) { return !(us >= 0x03ffu); }
int nge_0400(unsigned int us) { return !(us >= 0x0400u); }
int nge_0401(unsigned int us) { return !(us >= 0x0401u); }

int nge_07ff(unsigned int us) { return !(us >= 0x07ffu); }
int nge_0800(unsigned int us) { return !(us >= 0x0800u); }
int nge_0801(unsigned int us) { return !(us >= 0x0801u); }

int nge_0fff(unsigned int us) { return !(us >= 0x0fffu); }
int nge_1000(unsigned int us) { return !(us >= 0x1000u); }
int nge_1001(unsigned int us) { return !(us >= 0x1001u); }

int nge_1fff(unsigned int us) { return !(us >= 0x1fffu); }
int nge_2000(unsigned int us) { return !(us >= 0x2000u); }
int nge_2001(unsigned int us) { return !(us >= 0x2001u); }

int nge_3fff(unsigned int us) { return !(us >= 0x3fffu); }
int nge_4000(unsigned int us) { return !(us >= 0x4000u); }
int nge_4001(unsigned int us) { return !(us >= 0x4001u); }

int nge_7fff(unsigned int us) { return !(us >= 0x7fffu); }
int nge_8000(unsigned int us) { return !(us >= 0x8000u); }
int nge_8001(unsigned int us) { return !(us >= 0x8001u); }

int nge_ffff(unsigned int us) { return !(us >= 0xffffu); }

static unsigned int us;
int main() {
  us = 0x0000u;
  my_assert(nge_0000(us) != 1);
  my_assert(nge_0001(us) == 1);

  us = 0x0001u;
  my_assert(nge_0000(us) != 1);
  my_assert(nge_0001(us) != 1);
  my_assert(nge_0002(us) == 1);

  us = 0x0002u;
  my_assert(nge_0001(us) != 1);
  my_assert(nge_0002(us) != 1);
  my_assert(nge_0003(us) == 1);

  us = 0x0004u;
  my_assert(nge_0003(us) != 1);
  my_assert(nge_0004(us) != 1);
  my_assert(nge_0005(us) == 1);

  us = 0x0008u;
  my_assert(nge_0007(us) != 1);
  my_assert(nge_0008(us) != 1);
  my_assert(nge_0009(us) == 1);

  us = 0x0010u;
  my_assert(nge_000f(us) != 1);
  my_assert(nge_0010(us) != 1);
  my_assert(nge_0011(us) == 1);

  us = 0x0020u;
  my_assert(nge_001f(us) != 1);
  my_assert(nge_0020(us) != 1);
  my_assert(nge_0021(us) == 1);

  us = 0x0040u;
  my_assert(nge_003f(us) != 1);
  my_assert(nge_0040(us) != 1);
  my_assert(nge_0041(us) == 1);

  us = 0x0080u;
  my_assert(nge_007f(us) != 1);
  my_assert(nge_0080(us) != 1);
  my_assert(nge_0081(us) == 1);

  us = 0x0100u;
  my_assert(nge_00ff(us) != 1);
  my_assert(nge_0100(us) != 1);
  my_assert(nge_0101(us) == 1);

  us = 0x0200u;
  my_assert(nge_01ff(us) != 1);
  my_assert(nge_0200(us) != 1);
  my_assert(nge_0201(us) == 1);

  us = 0x0400u;
  my_assert(nge_03ff(us) != 1);
  my_assert(nge_0400(us) != 1);
  my_assert(nge_0401(us) == 1);

  us = 0x0800u;
  my_assert(nge_07ff(us) != 1);
  my_assert(nge_0800(us) != 1);
  my_assert(nge_0801(us) == 1);

  us = 0x1000u;
  my_assert(nge_0fff(us) != 1);
  my_assert(nge_1000(us) != 1);
  my_assert(nge_1001(us) == 1);

  us = 0x2000u;
  my_assert(nge_1fff(us) != 1);
  my_assert(nge_2000(us) != 1);
  my_assert(nge_2001(us) == 1);

  us = 0x4000u;
  my_assert(nge_3fff(us) != 1);
  my_assert(nge_4000(us) != 1);
  my_assert(nge_4001(us) == 1);

  us = 0x8000u;
  my_assert(nge_7fff(us) != 1);
  my_assert(nge_8000(us) != 1);
  my_assert(nge_8001(us) == 1);

  us = 0xffffu;
  my_assert(nge_ffff(us) != 1);

  return exit_status;
}
