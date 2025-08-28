

int exit_status;
#include "my_assert.h"

int ngt_0000(unsigned int us) { return !(us > 0x0000u); }
int ngt_0001(unsigned int us) { return !(us > 0x0001u); }
int ngt_0002(unsigned int us) { return !(us > 0x0002u); }

int ngt_0003(unsigned int us) { return !(us > 0x0003u); }
int ngt_0004(unsigned int us) { return !(us > 0x0004u); }
int ngt_0005(unsigned int us) { return !(us > 0x0005u); }

int ngt_0007(unsigned int us) { return !(us > 0x0007u); }
int ngt_0008(unsigned int us) { return !(us > 0x0008u); }
int ngt_0009(unsigned int us) { return !(us > 0x0009u); }

int ngt_000f(unsigned int us) { return !(us > 0x000fu); }
int ngt_0010(unsigned int us) { return !(us > 0x0010u); }
int ngt_0011(unsigned int us) { return !(us > 0x0011u); }

int ngt_001f(unsigned int us) { return !(us > 0x001fu); }
int ngt_0020(unsigned int us) { return !(us > 0x0020u); }
int ngt_0021(unsigned int us) { return !(us > 0x0021u); }

int ngt_003f(unsigned int us) { return !(us > 0x003fu); }
int ngt_0040(unsigned int us) { return !(us > 0x0040u); }
int ngt_0041(unsigned int us) { return !(us > 0x0041u); }

int ngt_007f(unsigned int us) { return !(us > 0x007fu); }
int ngt_0080(unsigned int us) { return !(us > 0x0080u); }
int ngt_0081(unsigned int us) { return !(us > 0x0081u); }

int ngt_00ff(unsigned int us) { return !(us > 0x00ffu); }
int ngt_0100(unsigned int us) { return !(us > 0x0100u); }
int ngt_0101(unsigned int us) { return !(us > 0x0101u); }

int ngt_01ff(unsigned int us) { return !(us > 0x01ffu); }
int ngt_0200(unsigned int us) { return !(us > 0x0200u); }
int ngt_0201(unsigned int us) { return !(us > 0x0201u); }

int ngt_03ff(unsigned int us) { return !(us > 0x03ffu); }
int ngt_0400(unsigned int us) { return !(us > 0x0400u); }
int ngt_0401(unsigned int us) { return !(us > 0x0401u); }

int ngt_07ff(unsigned int us) { return !(us > 0x07ffu); }
int ngt_0800(unsigned int us) { return !(us > 0x0800u); }
int ngt_0801(unsigned int us) { return !(us > 0x0801u); }

int ngt_0fff(unsigned int us) { return !(us > 0x0fffu); }
int ngt_1000(unsigned int us) { return !(us > 0x1000u); }
int ngt_1001(unsigned int us) { return !(us > 0x1001u); }

int ngt_1fff(unsigned int us) { return !(us > 0x1fffu); }
int ngt_2000(unsigned int us) { return !(us > 0x2000u); }
int ngt_2001(unsigned int us) { return !(us > 0x2001u); }

int ngt_3fff(unsigned int us) { return !(us > 0x3fffu); }
int ngt_4000(unsigned int us) { return !(us > 0x4000u); }
int ngt_4001(unsigned int us) { return !(us > 0x4001u); }

int ngt_7fff(unsigned int us) { return !(us > 0x7fffu); }
int ngt_8000(unsigned int us) { return !(us > 0x8000u); }
int ngt_8001(unsigned int us) { return !(us > 0x8001u); }

int ngt_ffff(unsigned int us) { return !(us > 0xffffu); }

static unsigned int us;
int main() {
  us = 0x0000u;
  my_assert(ngt_0000(us) == 1);
  my_assert(ngt_0001(us) == 1);

  us = 0x0001u;
  my_assert(ngt_0000(us) != 1);
  my_assert(ngt_0001(us) == 1);
  my_assert(ngt_0002(us) == 1);

  us = 0x0002u;
  my_assert(ngt_0001(us) != 1);
  my_assert(ngt_0002(us) == 1);
  my_assert(ngt_0003(us) == 1);

  us = 0x0004u;
  my_assert(ngt_0003(us) != 1);
  my_assert(ngt_0004(us) == 1);
  my_assert(ngt_0005(us) == 1);

  us = 0x0008u;
  my_assert(ngt_0007(us) != 1);
  my_assert(ngt_0008(us) == 1);
  my_assert(ngt_0009(us) == 1);

  us = 0x0010u;
  my_assert(ngt_000f(us) != 1);
  my_assert(ngt_0010(us) == 1);
  my_assert(ngt_0011(us) == 1);

  us = 0x0020u;
  my_assert(ngt_001f(us) != 1);
  my_assert(ngt_0020(us) == 1);
  my_assert(ngt_0021(us) == 1);

  us = 0x0040u;
  my_assert(ngt_003f(us) != 1);
  my_assert(ngt_0040(us) == 1);
  my_assert(ngt_0041(us) == 1);

  us = 0x0080u;
  my_assert(ngt_007f(us) != 1);
  my_assert(ngt_0080(us) == 1);
  my_assert(ngt_0081(us) == 1);

  us = 0x0100u;
  my_assert(ngt_00ff(us) != 1);
  my_assert(ngt_0100(us) == 1);
  my_assert(ngt_0101(us) == 1);

  us = 0x0200u;
  my_assert(ngt_01ff(us) != 1);
  my_assert(ngt_0200(us) == 1);
  my_assert(ngt_0201(us) == 1);

  us = 0x0400u;
  my_assert(ngt_03ff(us) != 1);
  my_assert(ngt_0400(us) == 1);
  my_assert(ngt_0401(us) == 1);

  us = 0x0800u;
  my_assert(ngt_07ff(us) != 1);
  my_assert(ngt_0800(us) == 1);
  my_assert(ngt_0801(us) == 1);

  us = 0x1000u;
  my_assert(ngt_0fff(us) != 1);
  my_assert(ngt_1000(us) == 1);
  my_assert(ngt_1001(us) == 1);

  us = 0x2000u;
  my_assert(ngt_1fff(us) != 1);
  my_assert(ngt_2000(us) == 1);
  my_assert(ngt_2001(us) == 1);

  us = 0x4000u;
  my_assert(ngt_3fff(us) != 1);
  my_assert(ngt_4000(us) == 1);
  my_assert(ngt_4001(us) == 1);

  us = 0x8000u;
  my_assert(ngt_7fff(us) != 1);
  my_assert(ngt_8000(us) == 1);
  my_assert(ngt_8001(us) == 1);

  us = 0xffffu;
  my_assert(ngt_ffff(us) == 1);

  return exit_status;
}
