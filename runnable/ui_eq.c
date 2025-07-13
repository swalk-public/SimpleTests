

int exit_status;
#include "my_assert.h"

int eq_00000000(unsigned int ui) { return ui == 0x00000000u; }
int eq_00000001(unsigned int ui) { return ui == 0x00000001u; }
int eq_00000002(unsigned int ui) { return ui == 0x00000002u; }

int eq_00000003(unsigned int ui) { return ui == 0x00000003u; }
int eq_00000004(unsigned int ui) { return ui == 0x00000004u; }
int eq_00000005(unsigned int ui) { return ui == 0x00000005u; }

int eq_00000007(unsigned int ui) { return ui == 0x00000007u; }
int eq_00000008(unsigned int ui) { return ui == 0x00000008u; }
int eq_00000009(unsigned int ui) { return ui == 0x00000009u; }

int eq_0000000f(unsigned int ui) { return ui == 0x0000000fu; }
int eq_00000010(unsigned int ui) { return ui == 0x00000010u; }
int eq_00000011(unsigned int ui) { return ui == 0x00000011u; }

int eq_0000001f(unsigned int ui) { return ui == 0x0000001fu; }
int eq_00000020(unsigned int ui) { return ui == 0x00000020u; }
int eq_00000021(unsigned int ui) { return ui == 0x00000021u; }

int eq_0000003f(unsigned int ui) { return ui == 0x0000003fu; }
int eq_00000040(unsigned int ui) { return ui == 0x00000040u; }
int eq_00000041(unsigned int ui) { return ui == 0x00000041u; }

int eq_0000007f(unsigned int ui) { return ui == 0x0000007fu; }
int eq_00000080(unsigned int ui) { return ui == 0x00000080u; }
int eq_00000081(unsigned int ui) { return ui == 0x00000081u; }

int eq_000000ff(unsigned int ui) { return ui == 0x000000ffu; }
int eq_00000100(unsigned int ui) { return ui == 0x00000100u; }
int eq_00000101(unsigned int ui) { return ui == 0x00000101u; }

int eq_000001ff(unsigned int ui) { return ui == 0x000001ffu; }
int eq_00000200(unsigned int ui) { return ui == 0x00000200u; }
int eq_00000201(unsigned int ui) { return ui == 0x00000201u; }

int eq_000003ff(unsigned int ui) { return ui == 0x000003ffu; }
int eq_00000400(unsigned int ui) { return ui == 0x00000400u; }
int eq_00000401(unsigned int ui) { return ui == 0x00000401u; }

int eq_000007ff(unsigned int ui) { return ui == 0x000007ffu; }
int eq_00000800(unsigned int ui) { return ui == 0x00000800u; }
int eq_00000801(unsigned int ui) { return ui == 0x00000801u; }

int eq_00000fff(unsigned int ui) { return ui == 0x00000fffu; }
int eq_00001000(unsigned int ui) { return ui == 0x00001000u; }
int eq_00001001(unsigned int ui) { return ui == 0x00001001u; }

int eq_00001fff(unsigned int ui) { return ui == 0x00001fffu; }
int eq_00002000(unsigned int ui) { return ui == 0x00002000u; }
int eq_00002001(unsigned int ui) { return ui == 0x00002001u; }

int eq_00003fff(unsigned int ui) { return ui == 0x00003fffu; }
int eq_00004000(unsigned int ui) { return ui == 0x00004000u; }
int eq_00004001(unsigned int ui) { return ui == 0x00004001u; }

int eq_00007fff(unsigned int ui) { return ui == 0x00007fffu; }
int eq_00008000(unsigned int ui) { return ui == 0x00008000u; }
int eq_00008001(unsigned int ui) { return ui == 0x00008001u; }

int eq_0000ffff(unsigned int ui) { return ui == 0x0000ffffu; }
int eq_00010000(unsigned int ui) { return ui == 0x00010000u; }
int eq_00010001(unsigned int ui) { return ui == 0x00010001u; }

int eq_0001ffff(unsigned int ui) { return ui == 0x0001ffffu; }
int eq_00020000(unsigned int ui) { return ui == 0x00020000u; }
int eq_00020001(unsigned int ui) { return ui == 0x00020001u; }

int eq_0003ffff(unsigned int ui) { return ui == 0x0003ffffu; }
int eq_00040000(unsigned int ui) { return ui == 0x00040000u; }
int eq_00040001(unsigned int ui) { return ui == 0x00040001u; }

int eq_0007ffff(unsigned int ui) { return ui == 0x0007ffffu; }
int eq_00080000(unsigned int ui) { return ui == 0x00080000u; }
int eq_00080001(unsigned int ui) { return ui == 0x00080001u; }

int eq_000fffff(unsigned int ui) { return ui == 0x000fffffu; }
int eq_00100000(unsigned int ui) { return ui == 0x00100000u; }
int eq_00100001(unsigned int ui) { return ui == 0x00100001u; }

int eq_001fffff(unsigned int ui) { return ui == 0x001fffffu; }
int eq_00200000(unsigned int ui) { return ui == 0x00200000u; }
int eq_00200001(unsigned int ui) { return ui == 0x00200001u; }

int eq_003fffff(unsigned int ui) { return ui == 0x003fffffu; }
int eq_00400000(unsigned int ui) { return ui == 0x00400000u; }
int eq_00400001(unsigned int ui) { return ui == 0x00400001u; }

int eq_007fffff(unsigned int ui) { return ui == 0x007fffffu; }
int eq_00800000(unsigned int ui) { return ui == 0x00800000u; }
int eq_00800001(unsigned int ui) { return ui == 0x00800001u; }

int eq_00ffffff(unsigned int ui) { return ui == 0x00ffffffu; }
int eq_01000000(unsigned int ui) { return ui == 0x01000000u; }
int eq_01000001(unsigned int ui) { return ui == 0x01000001u; }

int eq_01ffffff(unsigned int ui) { return ui == 0x01ffffffu; }
int eq_02000000(unsigned int ui) { return ui == 0x02000000u; }
int eq_02000001(unsigned int ui) { return ui == 0x02000001u; }

int eq_03ffffff(unsigned int ui) { return ui == 0x03ffffffu; }
int eq_04000000(unsigned int ui) { return ui == 0x04000000u; }
int eq_04000001(unsigned int ui) { return ui == 0x04000001u; }

int eq_07ffffff(unsigned int ui) { return ui == 0x07ffffffu; }
int eq_08000000(unsigned int ui) { return ui == 0x08000000u; }
int eq_08000001(unsigned int ui) { return ui == 0x08000001u; }

int eq_0fffffff(unsigned int ui) { return ui == 0x0fffffffu; }
int eq_10000000(unsigned int ui) { return ui == 0x10000000u; }
int eq_10000001(unsigned int ui) { return ui == 0x10000001u; }

int eq_1fffffff(unsigned int ui) { return ui == 0x1fffffffu; }
int eq_20000000(unsigned int ui) { return ui == 0x20000000u; }
int eq_20000001(unsigned int ui) { return ui == 0x20000001u; }

int eq_3fffffff(unsigned int ui) { return ui == 0x3fffffffu; }
int eq_40000000(unsigned int ui) { return ui == 0x40000000u; }
int eq_40000001(unsigned int ui) { return ui == 0x40000001u; }

int eq_7fffffff(unsigned int ui) { return ui == 0x7fffffffu; }
int eq_80000000(unsigned int ui) { return ui == 0x80000000u; }
int eq_80000001(unsigned int ui) { return ui == 0x80000001u; }

static unsigned int ui;
int main() {
  ui = 0x00000000u;
  my_assert(eq_00000000(ui) == 1);
  my_assert(eq_00000001(ui) != 1);

  ui = 0x00000001u;
  my_assert(eq_00000000(ui) != 1);
  my_assert(eq_00000001(ui) == 1);
  my_assert(eq_00000002(ui) != 1);

  ui = 0x00000002u;
  my_assert(eq_00000001(ui) != 1);
  my_assert(eq_00000002(ui) == 1);
  my_assert(eq_00000003(ui) != 1);

  ui = 0x00000004u;
  my_assert(eq_00000003(ui) != 1);
  my_assert(eq_00000004(ui) == 1);
  my_assert(eq_00000005(ui) != 1);

  ui = 0x00000008u;
  my_assert(eq_00000007(ui) != 1);
  my_assert(eq_00000008(ui) == 1);
  my_assert(eq_00000009(ui) != 1);

  ui = 0x00000010u;
  my_assert(eq_0000000f(ui) != 1);
  my_assert(eq_00000010(ui) == 1);
  my_assert(eq_00000011(ui) != 1);

  ui = 0x00000020u;
  my_assert(eq_0000001f(ui) != 1);
  my_assert(eq_00000020(ui) == 1);
  my_assert(eq_00000021(ui) != 1);

  ui = 0x00000040u;
  my_assert(eq_0000003f(ui) != 1);
  my_assert(eq_00000040(ui) == 1);
  my_assert(eq_00000041(ui) != 1);

  ui = 0x00000080u;
  my_assert(eq_0000007f(ui) != 1);
  my_assert(eq_00000080(ui) == 1);
  my_assert(eq_00000081(ui) != 1);

  ui = 0x00000100u;
  my_assert(eq_000000ff(ui) != 1);
  my_assert(eq_00000100(ui) == 1);
  my_assert(eq_00000101(ui) != 1);

  ui = 0x00000200u;
  my_assert(eq_000001ff(ui) != 1);
  my_assert(eq_00000200(ui) == 1);
  my_assert(eq_00000201(ui) != 1);

  ui = 0x00000400u;
  my_assert(eq_000003ff(ui) != 1);
  my_assert(eq_00000400(ui) == 1);
  my_assert(eq_00000401(ui) != 1);

  ui = 0x00000800u;
  my_assert(eq_000007ff(ui) != 1);
  my_assert(eq_00000800(ui) == 1);
  my_assert(eq_00000801(ui) != 1);

  ui = 0x00001000u;
  my_assert(eq_00000fff(ui) != 1);
  my_assert(eq_00001000(ui) == 1);
  my_assert(eq_00001001(ui) != 1);

  ui = 0x00002000u;
  my_assert(eq_00001fff(ui) != 1);
  my_assert(eq_00002000(ui) == 1);
  my_assert(eq_00002001(ui) != 1);

  ui = 0x00004000u;
  my_assert(eq_00003fff(ui) != 1);
  my_assert(eq_00004000(ui) == 1);
  my_assert(eq_00004001(ui) != 1);

  ui = 0x00008000u;
  my_assert(eq_00007fff(ui) != 1);
  my_assert(eq_00008000(ui) == 1);
  my_assert(eq_00008001(ui) != 1);

  ui = 0x00010000u;
  my_assert(eq_0000ffff(ui) != 1);
  my_assert(eq_00010000(ui) == 1);
  my_assert(eq_00010001(ui) != 1);

  ui = 0x00020000u;
  my_assert(eq_0001ffff(ui) != 1);
  my_assert(eq_00020000(ui) == 1);
  my_assert(eq_00020001(ui) != 1);

  ui = 0x00040000u;
  my_assert(eq_0003ffff(ui) != 1);
  my_assert(eq_00040000(ui) == 1);
  my_assert(eq_00040001(ui) != 1);

  ui = 0x00080000u;
  my_assert(eq_0007ffff(ui) != 1);
  my_assert(eq_00080000(ui) == 1);
  my_assert(eq_00080001(ui) != 1);

  ui = 0x00100000u;
  my_assert(eq_000fffff(ui) != 1);
  my_assert(eq_00100000(ui) == 1);
  my_assert(eq_00100001(ui) != 1);

  ui = 0x00200000u;
  my_assert(eq_001fffff(ui) != 1);
  my_assert(eq_00200000(ui) == 1);
  my_assert(eq_00200001(ui) != 1);

  ui = 0x00400000u;
  my_assert(eq_003fffff(ui) != 1);
  my_assert(eq_00400000(ui) == 1);
  my_assert(eq_00400001(ui) != 1);

  ui = 0x00800000u;
  my_assert(eq_007fffff(ui) != 1);
  my_assert(eq_00800000(ui) == 1);
  my_assert(eq_00800001(ui) != 1);

  ui = 0x01000000u;
  my_assert(eq_00ffffff(ui) != 1);
  my_assert(eq_01000000(ui) == 1);
  my_assert(eq_01000001(ui) != 1);

  ui = 0x02000000u;
  my_assert(eq_01ffffff(ui) != 1);
  my_assert(eq_02000000(ui) == 1);
  my_assert(eq_02000001(ui) != 1);

  ui = 0x04000000u;
  my_assert(eq_03ffffff(ui) != 1);
  my_assert(eq_04000000(ui) == 1);
  my_assert(eq_04000001(ui) != 1);

  ui = 0x08000000u;
  my_assert(eq_07ffffff(ui) != 1);
  my_assert(eq_08000000(ui) == 1);
  my_assert(eq_08000001(ui) != 1);

  ui = 0x10000000u;
  my_assert(eq_0fffffff(ui) != 1);
  my_assert(eq_10000000(ui) == 1);
  my_assert(eq_10000001(ui) != 1);

  ui = 0x20000000u;
  my_assert(eq_1fffffff(ui) != 1);
  my_assert(eq_20000000(ui) == 1);
  my_assert(eq_20000001(ui) != 1);

  ui = 0x40000000u;
  my_assert(eq_3fffffff(ui) != 1);
  my_assert(eq_40000000(ui) == 1);
  my_assert(eq_40000001(ui) != 1);

  ui = 0x80000000u;
  my_assert(eq_7fffffff(ui) != 1);
  my_assert(eq_80000000(ui) == 1);
  my_assert(eq_80000001(ui) != 1);

  return exit_status;
}
