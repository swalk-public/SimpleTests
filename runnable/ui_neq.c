

int exit_status;
#include "my_assert.h"

int neq_00000000(unsigned int ui) { return !(ui == 0x00000000u); }
int neq_00000001(unsigned int ui) { return !(ui == 0x00000001u); }
int neq_00000002(unsigned int ui) { return !(ui == 0x00000002u); }

int neq_00000003(unsigned int ui) { return !(ui == 0x00000003u); }
int neq_00000004(unsigned int ui) { return !(ui == 0x00000004u); }
int neq_00000005(unsigned int ui) { return !(ui == 0x00000005u); }

int neq_00000007(unsigned int ui) { return !(ui == 0x00000007u); }
int neq_00000008(unsigned int ui) { return !(ui == 0x00000008u); }
int neq_00000009(unsigned int ui) { return !(ui == 0x00000009u); }

int neq_0000000f(unsigned int ui) { return !(ui == 0x0000000fu); }
int neq_00000010(unsigned int ui) { return !(ui == 0x00000010u); }
int neq_00000011(unsigned int ui) { return !(ui == 0x00000011u); }

int neq_0000001f(unsigned int ui) { return !(ui == 0x0000001fu); }
int neq_00000020(unsigned int ui) { return !(ui == 0x00000020u); }
int neq_00000021(unsigned int ui) { return !(ui == 0x00000021u); }

int neq_0000003f(unsigned int ui) { return !(ui == 0x0000003fu); }
int neq_00000040(unsigned int ui) { return !(ui == 0x00000040u); }
int neq_00000041(unsigned int ui) { return !(ui == 0x00000041u); }

int neq_0000007f(unsigned int ui) { return !(ui == 0x0000007fu); }
int neq_00000080(unsigned int ui) { return !(ui == 0x00000080u); }
int neq_00000081(unsigned int ui) { return !(ui == 0x00000081u); }

int neq_000000ff(unsigned int ui) { return !(ui == 0x000000ffu); }
int neq_00000100(unsigned int ui) { return !(ui == 0x00000100u); }
int neq_00000101(unsigned int ui) { return !(ui == 0x00000101u); }

int neq_000001ff(unsigned int ui) { return !(ui == 0x000001ffu); }
int neq_00000200(unsigned int ui) { return !(ui == 0x00000200u); }
int neq_00000201(unsigned int ui) { return !(ui == 0x00000201u); }

int neq_000003ff(unsigned int ui) { return !(ui == 0x000003ffu); }
int neq_00000400(unsigned int ui) { return !(ui == 0x00000400u); }
int neq_00000401(unsigned int ui) { return !(ui == 0x00000401u); }

int neq_000007ff(unsigned int ui) { return !(ui == 0x000007ffu); }
int neq_00000800(unsigned int ui) { return !(ui == 0x00000800u); }
int neq_00000801(unsigned int ui) { return !(ui == 0x00000801u); }

int neq_00000fff(unsigned int ui) { return !(ui == 0x00000fffu); }
int neq_00001000(unsigned int ui) { return !(ui == 0x00001000u); }
int neq_00001001(unsigned int ui) { return !(ui == 0x00001001u); }

int neq_00001fff(unsigned int ui) { return !(ui == 0x00001fffu); }
int neq_00002000(unsigned int ui) { return !(ui == 0x00002000u); }
int neq_00002001(unsigned int ui) { return !(ui == 0x00002001u); }

int neq_00003fff(unsigned int ui) { return !(ui == 0x00003fffu); }
int neq_00004000(unsigned int ui) { return !(ui == 0x00004000u); }
int neq_00004001(unsigned int ui) { return !(ui == 0x00004001u); }

int neq_00007fff(unsigned int ui) { return !(ui == 0x00007fffu); }
int neq_00008000(unsigned int ui) { return !(ui == 0x00008000u); }
int neq_00008001(unsigned int ui) { return !(ui == 0x00008001u); }

int neq_0000ffff(unsigned int ui) { return !(ui == 0x0000ffffu); }
int neq_00010000(unsigned int ui) { return !(ui == 0x00010000u); }
int neq_00010001(unsigned int ui) { return !(ui == 0x00010001u); }

int neq_0001ffff(unsigned int ui) { return !(ui == 0x0001ffffu); }
int neq_00020000(unsigned int ui) { return !(ui == 0x00020000u); }
int neq_00020001(unsigned int ui) { return !(ui == 0x00020001u); }

int neq_0003ffff(unsigned int ui) { return !(ui == 0x0003ffffu); }
int neq_00040000(unsigned int ui) { return !(ui == 0x00040000u); }
int neq_00040001(unsigned int ui) { return !(ui == 0x00040001u); }

int neq_0007ffff(unsigned int ui) { return !(ui == 0x0007ffffu); }
int neq_00080000(unsigned int ui) { return !(ui == 0x00080000u); }
int neq_00080001(unsigned int ui) { return !(ui == 0x00080001u); }

int neq_000fffff(unsigned int ui) { return !(ui == 0x000fffffu); }
int neq_00100000(unsigned int ui) { return !(ui == 0x00100000u); }
int neq_00100001(unsigned int ui) { return !(ui == 0x00100001u); }

int neq_001fffff(unsigned int ui) { return !(ui == 0x001fffffu); }
int neq_00200000(unsigned int ui) { return !(ui == 0x00200000u); }
int neq_00200001(unsigned int ui) { return !(ui == 0x00200001u); }

int neq_003fffff(unsigned int ui) { return !(ui == 0x003fffffu); }
int neq_00400000(unsigned int ui) { return !(ui == 0x00400000u); }
int neq_00400001(unsigned int ui) { return !(ui == 0x00400001u); }

int neq_007fffff(unsigned int ui) { return !(ui == 0x007fffffu); }
int neq_00800000(unsigned int ui) { return !(ui == 0x00800000u); }
int neq_00800001(unsigned int ui) { return !(ui == 0x00800001u); }

int neq_00ffffff(unsigned int ui) { return !(ui == 0x00ffffffu); }
int neq_01000000(unsigned int ui) { return !(ui == 0x01000000u); }
int neq_01000001(unsigned int ui) { return !(ui == 0x01000001u); }

int neq_01ffffff(unsigned int ui) { return !(ui == 0x01ffffffu); }
int neq_02000000(unsigned int ui) { return !(ui == 0x02000000u); }
int neq_02000001(unsigned int ui) { return !(ui == 0x02000001u); }

int neq_03ffffff(unsigned int ui) { return !(ui == 0x03ffffffu); }
int neq_04000000(unsigned int ui) { return !(ui == 0x04000000u); }
int neq_04000001(unsigned int ui) { return !(ui == 0x04000001u); }

int neq_07ffffff(unsigned int ui) { return !(ui == 0x07ffffffu); }
int neq_08000000(unsigned int ui) { return !(ui == 0x08000000u); }
int neq_08000001(unsigned int ui) { return !(ui == 0x08000001u); }

int neq_0fffffff(unsigned int ui) { return !(ui == 0x0fffffffu); }
int neq_10000000(unsigned int ui) { return !(ui == 0x10000000u); }
int neq_10000001(unsigned int ui) { return !(ui == 0x10000001u); }

int neq_1fffffff(unsigned int ui) { return !(ui == 0x1fffffffu); }
int neq_20000000(unsigned int ui) { return !(ui == 0x20000000u); }
int neq_20000001(unsigned int ui) { return !(ui == 0x20000001u); }

int neq_3fffffff(unsigned int ui) { return !(ui == 0x3fffffffu); }
int neq_40000000(unsigned int ui) { return !(ui == 0x40000000u); }
int neq_40000001(unsigned int ui) { return !(ui == 0x40000001u); }

int neq_7fffffff(unsigned int ui) { return !(ui == 0x7fffffffu); }
int neq_80000000(unsigned int ui) { return !(ui == 0x80000000u); }
int neq_80000001(unsigned int ui) { return !(ui == 0x80000001u); }

static unsigned int ui;
int main() {
  ui = 0x00000000u;
  my_assert(neq_00000000(ui) != 1);
  my_assert(neq_00000001(ui) == 1);

  ui = 0x00000001u;
  my_assert(neq_00000000(ui) == 1);
  my_assert(neq_00000001(ui) != 1);
  my_assert(neq_00000002(ui) == 1);

  ui = 0x00000002u;
  my_assert(neq_00000001(ui) == 1);
  my_assert(neq_00000002(ui) != 1);
  my_assert(neq_00000003(ui) == 1);

  ui = 0x00000004u;
  my_assert(neq_00000003(ui) == 1);
  my_assert(neq_00000004(ui) != 1);
  my_assert(neq_00000005(ui) == 1);

  ui = 0x00000008u;
  my_assert(neq_00000007(ui) == 1);
  my_assert(neq_00000008(ui) != 1);
  my_assert(neq_00000009(ui) == 1);

  ui = 0x00000010u;
  my_assert(neq_0000000f(ui) == 1);
  my_assert(neq_00000010(ui) != 1);
  my_assert(neq_00000011(ui) == 1);

  ui = 0x00000020u;
  my_assert(neq_0000001f(ui) == 1);
  my_assert(neq_00000020(ui) != 1);
  my_assert(neq_00000021(ui) == 1);

  ui = 0x00000040u;
  my_assert(neq_0000003f(ui) == 1);
  my_assert(neq_00000040(ui) != 1);
  my_assert(neq_00000041(ui) == 1);

  ui = 0x00000080u;
  my_assert(neq_0000007f(ui) == 1);
  my_assert(neq_00000080(ui) != 1);
  my_assert(neq_00000081(ui) == 1);

  ui = 0x00000100u;
  my_assert(neq_000000ff(ui) == 1);
  my_assert(neq_00000100(ui) != 1);
  my_assert(neq_00000101(ui) == 1);

  ui = 0x00000200u;
  my_assert(neq_000001ff(ui) == 1);
  my_assert(neq_00000200(ui) != 1);
  my_assert(neq_00000201(ui) == 1);

  ui = 0x00000400u;
  my_assert(neq_000003ff(ui) == 1);
  my_assert(neq_00000400(ui) != 1);
  my_assert(neq_00000401(ui) == 1);

  ui = 0x00000800u;
  my_assert(neq_000007ff(ui) == 1);
  my_assert(neq_00000800(ui) != 1);
  my_assert(neq_00000801(ui) == 1);

  ui = 0x00001000u;
  my_assert(neq_00000fff(ui) == 1);
  my_assert(neq_00001000(ui) != 1);
  my_assert(neq_00001001(ui) == 1);

  ui = 0x00002000u;
  my_assert(neq_00001fff(ui) == 1);
  my_assert(neq_00002000(ui) != 1);
  my_assert(neq_00002001(ui) == 1);

  ui = 0x00004000u;
  my_assert(neq_00003fff(ui) == 1);
  my_assert(neq_00004000(ui) != 1);
  my_assert(neq_00004001(ui) == 1);

  ui = 0x00008000u;
  my_assert(neq_00007fff(ui) == 1);
  my_assert(neq_00008000(ui) != 1);
  my_assert(neq_00008001(ui) == 1);

  ui = 0x00010000u;
  my_assert(neq_0000ffff(ui) == 1);
  my_assert(neq_00010000(ui) != 1);
  my_assert(neq_00010001(ui) == 1);

  ui = 0x00020000u;
  my_assert(neq_0001ffff(ui) == 1);
  my_assert(neq_00020000(ui) != 1);
  my_assert(neq_00020001(ui) == 1);

  ui = 0x00040000u;
  my_assert(neq_0003ffff(ui) == 1);
  my_assert(neq_00040000(ui) != 1);
  my_assert(neq_00040001(ui) == 1);

  ui = 0x00080000u;
  my_assert(neq_0007ffff(ui) == 1);
  my_assert(neq_00080000(ui) != 1);
  my_assert(neq_00080001(ui) == 1);

  ui = 0x00100000u;
  my_assert(neq_000fffff(ui) == 1);
  my_assert(neq_00100000(ui) != 1);
  my_assert(neq_00100001(ui) == 1);

  ui = 0x00200000u;
  my_assert(neq_001fffff(ui) == 1);
  my_assert(neq_00200000(ui) != 1);
  my_assert(neq_00200001(ui) == 1);

  ui = 0x00400000u;
  my_assert(neq_003fffff(ui) == 1);
  my_assert(neq_00400000(ui) != 1);
  my_assert(neq_00400001(ui) == 1);

  ui = 0x00800000u;
  my_assert(neq_007fffff(ui) == 1);
  my_assert(neq_00800000(ui) != 1);
  my_assert(neq_00800001(ui) == 1);

  ui = 0x01000000u;
  my_assert(neq_00ffffff(ui) == 1);
  my_assert(neq_01000000(ui) != 1);
  my_assert(neq_01000001(ui) == 1);

  ui = 0x02000000u;
  my_assert(neq_01ffffff(ui) == 1);
  my_assert(neq_02000000(ui) != 1);
  my_assert(neq_02000001(ui) == 1);

  ui = 0x04000000u;
  my_assert(neq_03ffffff(ui) == 1);
  my_assert(neq_04000000(ui) != 1);
  my_assert(neq_04000001(ui) == 1);

  ui = 0x08000000u;
  my_assert(neq_07ffffff(ui) == 1);
  my_assert(neq_08000000(ui) != 1);
  my_assert(neq_08000001(ui) == 1);

  ui = 0x10000000u;
  my_assert(neq_0fffffff(ui) == 1);
  my_assert(neq_10000000(ui) != 1);
  my_assert(neq_10000001(ui) == 1);

  ui = 0x20000000u;
  my_assert(neq_1fffffff(ui) == 1);
  my_assert(neq_20000000(ui) != 1);
  my_assert(neq_20000001(ui) == 1);

  ui = 0x40000000u;
  my_assert(neq_3fffffff(ui) == 1);
  my_assert(neq_40000000(ui) != 1);
  my_assert(neq_40000001(ui) == 1);

  ui = 0x80000000u;
  my_assert(neq_7fffffff(ui) == 1);
  my_assert(neq_80000000(ui) != 1);
  my_assert(neq_80000001(ui) == 1);

  return exit_status;
}
