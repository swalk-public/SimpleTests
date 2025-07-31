

int exit_status;
#include "my_assert.h"

int lt_0000(unsigned int us) { return us < 0x0000u; }
int lt_0001(unsigned int us) { return us < 0x0001u; }
int lt_0002(unsigned int us) { return us < 0x0002u; }

int lt_0003(unsigned int us) { return us < 0x0003u; }
int lt_0004(unsigned int us) { return us < 0x0004u; }
int lt_0005(unsigned int us) { return us < 0x0005u; }

int lt_0007(unsigned int us) { return us < 0x0007u; }
int lt_0008(unsigned int us) { return us < 0x0008u; }
int lt_0009(unsigned int us) { return us < 0x0009u; }

int lt_000f(unsigned int us) { return us < 0x000fu; }
int lt_0010(unsigned int us) { return us < 0x0010u; }
int lt_0011(unsigned int us) { return us < 0x0011u; }

int lt_001f(unsigned int us) { return us < 0x001fu; }
int lt_0020(unsigned int us) { return us < 0x0020u; }
int lt_0021(unsigned int us) { return us < 0x0021u; }

int lt_003f(unsigned int us) { return us < 0x003fu; }
int lt_0040(unsigned int us) { return us < 0x0040u; }
int lt_0041(unsigned int us) { return us < 0x0041u; }

int lt_007f(unsigned int us) { return us < 0x007fu; }
int lt_0080(unsigned int us) { return us < 0x0080u; }
int lt_0081(unsigned int us) { return us < 0x0081u; }

int lt_00ff(unsigned int us) { return us < 0x00ffu; }
int lt_0100(unsigned int us) { return us < 0x0100u; }
int lt_0101(unsigned int us) { return us < 0x0101u; }

int lt_01ff(unsigned int us) { return us < 0x01ffu; }
int lt_0200(unsigned int us) { return us < 0x0200u; }
int lt_0201(unsigned int us) { return us < 0x0201u; }

int lt_03ff(unsigned int us) { return us < 0x03ffu; }
int lt_0400(unsigned int us) { return us < 0x0400u; }
int lt_0401(unsigned int us) { return us < 0x0401u; }

int lt_07ff(unsigned int us) { return us < 0x07ffu; }
int lt_0800(unsigned int us) { return us < 0x0800u; }
int lt_0801(unsigned int us) { return us < 0x0801u; }

int lt_0fff(unsigned int us) { return us < 0x0fffu; }
int lt_1000(unsigned int us) { return us < 0x1000u; }
int lt_1001(unsigned int us) { return us < 0x1001u; }

int lt_1fff(unsigned int us) { return us < 0x1fffu; }
int lt_2000(unsigned int us) { return us < 0x2000u; }
int lt_2001(unsigned int us) { return us < 0x2001u; }

int lt_3fff(unsigned int us) { return us < 0x3fffu; }
int lt_4000(unsigned int us) { return us < 0x4000u; }
int lt_4001(unsigned int us) { return us < 0x4001u; }

int lt_7fff(unsigned int us) { return us < 0x7fffu; }
int lt_8000(unsigned int us) { return us < 0x8000u; }
int lt_8001(unsigned int us) { return us < 0x8001u; }

int lt_ffff(unsigned int us) { return us < 0xffffu; }

static unsigned int us;
int main() {
  us = 0x0000u;
  my_assert(lt_0000(us) != 1);
  my_assert(lt_0001(us) == 1);

  us = 0x0001u;
  my_assert(lt_0000(us) != 1);
  my_assert(lt_0001(us) != 1);
  my_assert(lt_0002(us) == 1);

  us = 0x0002u;
  my_assert(lt_0001(us) != 1);
  my_assert(lt_0002(us) != 1);
  my_assert(lt_0003(us) == 1);

  us = 0x0004u;
  my_assert(lt_0003(us) != 1);
  my_assert(lt_0004(us) != 1);
  my_assert(lt_0005(us) == 1);

  us = 0x0008u;
  my_assert(lt_0007(us) != 1);
  my_assert(lt_0008(us) != 1);
  my_assert(lt_0009(us) == 1);

  us = 0x0010u;
  my_assert(lt_000f(us) != 1);
  my_assert(lt_0010(us) != 1);
  my_assert(lt_0011(us) == 1);

  us = 0x0020u;
  my_assert(lt_001f(us) != 1);
  my_assert(lt_0020(us) != 1);
  my_assert(lt_0021(us) == 1);

  us = 0x0040u;
  my_assert(lt_003f(us) != 1);
  my_assert(lt_0040(us) != 1);
  my_assert(lt_0041(us) == 1);

  us = 0x0080u;
  my_assert(lt_007f(us) != 1);
  my_assert(lt_0080(us) != 1);
  my_assert(lt_0081(us) == 1);

  us = 0x0100u;
  my_assert(lt_00ff(us) != 1);
  my_assert(lt_0100(us) != 1);
  my_assert(lt_0101(us) == 1);

  us = 0x0200u;
  my_assert(lt_01ff(us) != 1);
  my_assert(lt_0200(us) != 1);
  my_assert(lt_0201(us) == 1);

  us = 0x0400u;
  my_assert(lt_03ff(us) != 1);
  my_assert(lt_0400(us) != 1);
  my_assert(lt_0401(us) == 1);

  us = 0x0800u;
  my_assert(lt_07ff(us) != 1);
  my_assert(lt_0800(us) != 1);
  my_assert(lt_0801(us) == 1);

  us = 0x1000u;
  my_assert(lt_0fff(us) != 1);
  my_assert(lt_1000(us) != 1);
  my_assert(lt_1001(us) == 1);

  us = 0x2000u;
  my_assert(lt_1fff(us) != 1);
  my_assert(lt_2000(us) != 1);
  my_assert(lt_2001(us) == 1);

  us = 0x4000u;
  my_assert(lt_3fff(us) != 1);
  my_assert(lt_4000(us) != 1);
  my_assert(lt_4001(us) == 1);

  us = 0x8000u;
  my_assert(lt_7fff(us) != 1);
  my_assert(lt_8000(us) != 1);
  my_assert(lt_8001(us) == 1);

  us = 0xffffu;
  my_assert(lt_ffff(us) != 1);

  return exit_status;
}
