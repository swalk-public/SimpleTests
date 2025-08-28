

int exit_status;
#include "my_assert.h"

int nle_0000(unsigned int us) { return !(us <= 0x0000u); }
int nle_0001(unsigned int us) { return !(us <= 0x0001u); }
int nle_0002(unsigned int us) { return !(us <= 0x0002u); }

int nle_0003(unsigned int us) { return !(us <= 0x0003u); }
int nle_0004(unsigned int us) { return !(us <= 0x0004u); }
int nle_0005(unsigned int us) { return !(us <= 0x0005u); }

int nle_0007(unsigned int us) { return !(us <= 0x0007u); }
int nle_0008(unsigned int us) { return !(us <= 0x0008u); }
int nle_0009(unsigned int us) { return !(us <= 0x0009u); }

int nle_000f(unsigned int us) { return !(us <= 0x000fu); }
int nle_0010(unsigned int us) { return !(us <= 0x0010u); }
int nle_0011(unsigned int us) { return !(us <= 0x0011u); }

int nle_001f(unsigned int us) { return !(us <= 0x001fu); }
int nle_0020(unsigned int us) { return !(us <= 0x0020u); }
int nle_0021(unsigned int us) { return !(us <= 0x0021u); }

int nle_003f(unsigned int us) { return !(us <= 0x003fu); }
int nle_0040(unsigned int us) { return !(us <= 0x0040u); }
int nle_0041(unsigned int us) { return !(us <= 0x0041u); }

int nle_007f(unsigned int us) { return !(us <= 0x007fu); }
int nle_0080(unsigned int us) { return !(us <= 0x0080u); }
int nle_0081(unsigned int us) { return !(us <= 0x0081u); }

int nle_00ff(unsigned int us) { return !(us <= 0x00ffu); }
int nle_0100(unsigned int us) { return !(us <= 0x0100u); }
int nle_0101(unsigned int us) { return !(us <= 0x0101u); }

int nle_01ff(unsigned int us) { return !(us <= 0x01ffu); }
int nle_0200(unsigned int us) { return !(us <= 0x0200u); }
int nle_0201(unsigned int us) { return !(us <= 0x0201u); }

int nle_03ff(unsigned int us) { return !(us <= 0x03ffu); }
int nle_0400(unsigned int us) { return !(us <= 0x0400u); }
int nle_0401(unsigned int us) { return !(us <= 0x0401u); }

int nle_07ff(unsigned int us) { return !(us <= 0x07ffu); }
int nle_0800(unsigned int us) { return !(us <= 0x0800u); }
int nle_0801(unsigned int us) { return !(us <= 0x0801u); }

int nle_0fff(unsigned int us) { return !(us <= 0x0fffu); }
int nle_1000(unsigned int us) { return !(us <= 0x1000u); }
int nle_1001(unsigned int us) { return !(us <= 0x1001u); }

int nle_1fff(unsigned int us) { return !(us <= 0x1fffu); }
int nle_2000(unsigned int us) { return !(us <= 0x2000u); }
int nle_2001(unsigned int us) { return !(us <= 0x2001u); }

int nle_3fff(unsigned int us) { return !(us <= 0x3fffu); }
int nle_4000(unsigned int us) { return !(us <= 0x4000u); }
int nle_4001(unsigned int us) { return !(us <= 0x4001u); }

int nle_7fff(unsigned int us) { return !(us <= 0x7fffu); }
int nle_8000(unsigned int us) { return !(us <= 0x8000u); }
int nle_8001(unsigned int us) { return !(us <= 0x8001u); }

int nle_ffff(unsigned int us) { return !(us <= 0xffffu); }

static unsigned int us;
int main() {
  us = 0x0000u;
  my_assert(nle_0000(us) != 1);
  my_assert(nle_0001(us) != 1);

  us = 0x0001u;
  my_assert(nle_0000(us) == 1);
  my_assert(nle_0001(us) != 1);
  my_assert(nle_0002(us) != 1);

  us = 0x0002u;
  my_assert(nle_0001(us) == 1);
  my_assert(nle_0002(us) != 1);
  my_assert(nle_0003(us) != 1);

  us = 0x0004u;
  my_assert(nle_0003(us) == 1);
  my_assert(nle_0004(us) != 1);
  my_assert(nle_0005(us) != 1);

  us = 0x0008u;
  my_assert(nle_0007(us) == 1);
  my_assert(nle_0008(us) != 1);
  my_assert(nle_0009(us) != 1);

  us = 0x0010u;
  my_assert(nle_000f(us) == 1);
  my_assert(nle_0010(us) != 1);
  my_assert(nle_0011(us) != 1);

  us = 0x0020u;
  my_assert(nle_001f(us) == 1);
  my_assert(nle_0020(us) != 1);
  my_assert(nle_0021(us) != 1);

  us = 0x0040u;
  my_assert(nle_003f(us) == 1);
  my_assert(nle_0040(us) != 1);
  my_assert(nle_0041(us) != 1);

  us = 0x0080u;
  my_assert(nle_007f(us) == 1);
  my_assert(nle_0080(us) != 1);
  my_assert(nle_0081(us) != 1);

  us = 0x0100u;
  my_assert(nle_00ff(us) == 1);
  my_assert(nle_0100(us) != 1);
  my_assert(nle_0101(us) != 1);

  us = 0x0200u;
  my_assert(nle_01ff(us) == 1);
  my_assert(nle_0200(us) != 1);
  my_assert(nle_0201(us) != 1);

  us = 0x0400u;
  my_assert(nle_03ff(us) == 1);
  my_assert(nle_0400(us) != 1);
  my_assert(nle_0401(us) != 1);

  us = 0x0800u;
  my_assert(nle_07ff(us) == 1);
  my_assert(nle_0800(us) != 1);
  my_assert(nle_0801(us) != 1);

  us = 0x1000u;
  my_assert(nle_0fff(us) == 1);
  my_assert(nle_1000(us) != 1);
  my_assert(nle_1001(us) != 1);

  us = 0x2000u;
  my_assert(nle_1fff(us) == 1);
  my_assert(nle_2000(us) != 1);
  my_assert(nle_2001(us) != 1);

  us = 0x4000u;
  my_assert(nle_3fff(us) == 1);
  my_assert(nle_4000(us) != 1);
  my_assert(nle_4001(us) != 1);

  us = 0x8000u;
  my_assert(nle_7fff(us) == 1);
  my_assert(nle_8000(us) != 1);
  my_assert(nle_8001(us) != 1);

  us = 0xffffu;
  my_assert(nle_ffff(us) != 1);

  return exit_status;
}
