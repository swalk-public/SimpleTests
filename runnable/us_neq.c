

int exit_status;
#include "my_assert.h"

int neq_0000(unsigned short us) { return !(us == 0x0000); }
int neq_0001(unsigned short us) { return !(us == 0x0001); }
int neq_0002(unsigned short us) { return !(us == 0x0002); }

int neq_0003(unsigned short us) { return !(us == 0x0003); }
int neq_0004(unsigned short us) { return !(us == 0x0004); }
int neq_0005(unsigned short us) { return !(us == 0x0005); }

int neq_0007(unsigned short us) { return !(us == 0x0007); }
int neq_0008(unsigned short us) { return !(us == 0x0008); }
int neq_0009(unsigned short us) { return !(us == 0x0009); }

int neq_000f(unsigned short us) { return !(us == 0x000f); }
int neq_0010(unsigned short us) { return !(us == 0x0010); }
int neq_0011(unsigned short us) { return !(us == 0x0011); }

int neq_001f(unsigned short us) { return !(us == 0x001f); }
int neq_0020(unsigned short us) { return !(us == 0x0020); }
int neq_0021(unsigned short us) { return !(us == 0x0021); }

int neq_003f(unsigned short us) { return !(us == 0x003f); }
int neq_0040(unsigned short us) { return !(us == 0x0040); }
int neq_0041(unsigned short us) { return !(us == 0x0041); }

int neq_007f(unsigned short us) { return !(us == 0x007f); }
int neq_0080(unsigned short us) { return !(us == 0x0080); }
int neq_0081(unsigned short us) { return !(us == 0x0081); }

int neq_00ff(unsigned short us) { return !(us == 0x00ff); }
int neq_0100(unsigned short us) { return !(us == 0x0100); }
int neq_0101(unsigned short us) { return !(us == 0x0101); }

int neq_01ff(unsigned short us) { return !(us == 0x01ff); }
int neq_0200(unsigned short us) { return !(us == 0x0200); }
int neq_0201(unsigned short us) { return !(us == 0x0201); }

int neq_03ff(unsigned short us) { return !(us == 0x03ff); }
int neq_0400(unsigned short us) { return !(us == 0x0400); }
int neq_0401(unsigned short us) { return !(us == 0x0401); }

int neq_07ff(unsigned short us) { return !(us == 0x07ff); }
int neq_0800(unsigned short us) { return !(us == 0x0800); }
int neq_0801(unsigned short us) { return !(us == 0x0801); }

int neq_0fff(unsigned short us) { return !(us == 0x0fff); }
int neq_1000(unsigned short us) { return !(us == 0x1000); }
int neq_1001(unsigned short us) { return !(us == 0x1001); }

int neq_1fff(unsigned short us) { return !(us == 0x1fff); }
int neq_2000(unsigned short us) { return !(us == 0x2000); }
int neq_2001(unsigned short us) { return !(us == 0x2001); }

int neq_3fff(unsigned short us) { return !(us == 0x3fff); }
int neq_4000(unsigned short us) { return !(us == 0x4000); }
int neq_4001(unsigned short us) { return !(us == 0x4001); }

int neq_7fff(unsigned short us) { return !(us == 0x7fff); }
int neq_8000(unsigned short us) { return !(us == 0x8000); }
int neq_8001(unsigned short us) { return !(us == 0x8001); }

static unsigned short us;
int main() {
  us = 0x0000;
  my_assert(neq_0000(us) != 1);
  my_assert(neq_0001(us) == 1);

  us = 0x0001;
  my_assert(neq_0000(us) == 1);
  my_assert(neq_0001(us) != 1);
  my_assert(neq_0002(us) == 1);

  us = 0x0002;
  my_assert(neq_0001(us) == 1);
  my_assert(neq_0002(us) != 1);
  my_assert(neq_0003(us) == 1);

  us = 0x0004;
  my_assert(neq_0003(us) == 1);
  my_assert(neq_0004(us) != 1);
  my_assert(neq_0005(us) == 1);

  us = 0x0008;
  my_assert(neq_0007(us) == 1);
  my_assert(neq_0008(us) != 1);
  my_assert(neq_0009(us) == 1);

  us = 0x0010;
  my_assert(neq_000f(us) == 1);
  my_assert(neq_0010(us) != 1);
  my_assert(neq_0011(us) == 1);

  us = 0x0020;
  my_assert(neq_001f(us) == 1);
  my_assert(neq_0020(us) != 1);
  my_assert(neq_0021(us) == 1);

  us = 0x0040;
  my_assert(neq_003f(us) == 1);
  my_assert(neq_0040(us) != 1);
  my_assert(neq_0041(us) == 1);

  us = 0x0080;
  my_assert(neq_007f(us) == 1);
  my_assert(neq_0080(us) != 1);
  my_assert(neq_0081(us) == 1);

  us = 0x0100;
  my_assert(neq_00ff(us) == 1);
  my_assert(neq_0100(us) != 1);
  my_assert(neq_0101(us) == 1);

  us = 0x0200;
  my_assert(neq_01ff(us) == 1);
  my_assert(neq_0200(us) != 1);
  my_assert(neq_0201(us) == 1);

  us = 0x0400;
  my_assert(neq_03ff(us) == 1);
  my_assert(neq_0400(us) != 1);
  my_assert(neq_0401(us) == 1);

  us = 0x0800;
  my_assert(neq_07ff(us) == 1);
  my_assert(neq_0800(us) != 1);
  my_assert(neq_0801(us) == 1);

  us = 0x1000;
  my_assert(neq_0fff(us) == 1);
  my_assert(neq_1000(us) != 1);
  my_assert(neq_1001(us) == 1);

  us = 0x2000;
  my_assert(neq_1fff(us) == 1);
  my_assert(neq_2000(us) != 1);
  my_assert(neq_2001(us) == 1);

  us = 0x4000;
  my_assert(neq_3fff(us) == 1);
  my_assert(neq_4000(us) != 1);
  my_assert(neq_4001(us) == 1);

  us = 0x8000;
  my_assert(neq_7fff(us) == 1);
  my_assert(neq_8000(us) != 1);
  my_assert(neq_8001(us) == 1);

  return exit_status;
}
