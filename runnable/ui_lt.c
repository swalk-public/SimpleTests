

int exit_status;
#include "my_assert.h"

int lt_00000000(unsigned int ui) { return ui < 0x00000000u; }
int lt_00000001(unsigned int ui) { return ui < 0x00000001u; }
int lt_00000002(unsigned int ui) { return ui < 0x00000002u; }

int lt_00000003(unsigned int ui) { return ui < 0x00000003u; }
int lt_00000004(unsigned int ui) { return ui < 0x00000004u; }
int lt_00000005(unsigned int ui) { return ui < 0x00000005u; }

int lt_00000007(unsigned int ui) { return ui < 0x00000007u; }
int lt_00000008(unsigned int ui) { return ui < 0x00000008u; }
int lt_00000009(unsigned int ui) { return ui < 0x00000009u; }

int lt_0000000f(unsigned int ui) { return ui < 0x0000000fu; }
int lt_00000010(unsigned int ui) { return ui < 0x00000010u; }
int lt_00000011(unsigned int ui) { return ui < 0x00000011u; }

int lt_0000001f(unsigned int ui) { return ui < 0x0000001fu; }
int lt_00000020(unsigned int ui) { return ui < 0x00000020u; }
int lt_00000021(unsigned int ui) { return ui < 0x00000021u; }

int lt_0000003f(unsigned int ui) { return ui < 0x0000003fu; }
int lt_00000040(unsigned int ui) { return ui < 0x00000040u; }
int lt_00000041(unsigned int ui) { return ui < 0x00000041u; }

int lt_0000007f(unsigned int ui) { return ui < 0x0000007fu; }
int lt_00000080(unsigned int ui) { return ui < 0x00000080u; }
int lt_00000081(unsigned int ui) { return ui < 0x00000081u; }

int lt_000000ff(unsigned int ui) { return ui < 0x000000ffu; }
int lt_00000100(unsigned int ui) { return ui < 0x00000100u; }
int lt_00000101(unsigned int ui) { return ui < 0x00000101u; }

int lt_000001ff(unsigned int ui) { return ui < 0x000001ffu; }
int lt_00000200(unsigned int ui) { return ui < 0x00000200u; }
int lt_00000201(unsigned int ui) { return ui < 0x00000201u; }

int lt_000003ff(unsigned int ui) { return ui < 0x000003ffu; }
int lt_00000400(unsigned int ui) { return ui < 0x00000400u; }
int lt_00000401(unsigned int ui) { return ui < 0x00000401u; }

int lt_000007ff(unsigned int ui) { return ui < 0x000007ffu; }
int lt_00000800(unsigned int ui) { return ui < 0x00000800u; }
int lt_00000801(unsigned int ui) { return ui < 0x00000801u; }

int lt_00000fff(unsigned int ui) { return ui < 0x00000fffu; }
int lt_00001000(unsigned int ui) { return ui < 0x00001000u; }
int lt_00001001(unsigned int ui) { return ui < 0x00001001u; }

int lt_00001fff(unsigned int ui) { return ui < 0x00001fffu; }
int lt_00002000(unsigned int ui) { return ui < 0x00002000u; }
int lt_00002001(unsigned int ui) { return ui < 0x00002001u; }

int lt_00003fff(unsigned int ui) { return ui < 0x00003fffu; }
int lt_00004000(unsigned int ui) { return ui < 0x00004000u; }
int lt_00004001(unsigned int ui) { return ui < 0x00004001u; }

int lt_00007fff(unsigned int ui) { return ui < 0x00007fffu; }
int lt_00008000(unsigned int ui) { return ui < 0x00008000u; }
int lt_00008001(unsigned int ui) { return ui < 0x00008001u; }

int lt_0000ffff(unsigned int ui) { return ui < 0x0000ffffu; }
int lt_00010000(unsigned int ui) { return ui < 0x00010000u; }
int lt_00010001(unsigned int ui) { return ui < 0x00010001u; }

int lt_0001ffff(unsigned int ui) { return ui < 0x0001ffffu; }
int lt_00020000(unsigned int ui) { return ui < 0x00020000u; }
int lt_00020001(unsigned int ui) { return ui < 0x00020001u; }

int lt_0003ffff(unsigned int ui) { return ui < 0x0003ffffu; }
int lt_00040000(unsigned int ui) { return ui < 0x00040000u; }
int lt_00040001(unsigned int ui) { return ui < 0x00040001u; }

int lt_0007ffff(unsigned int ui) { return ui < 0x0007ffffu; }
int lt_00080000(unsigned int ui) { return ui < 0x00080000u; }
int lt_00080001(unsigned int ui) { return ui < 0x00080001u; }

int lt_000fffff(unsigned int ui) { return ui < 0x000fffffu; }
int lt_00100000(unsigned int ui) { return ui < 0x00100000u; }
int lt_00100001(unsigned int ui) { return ui < 0x00100001u; }

int lt_001fffff(unsigned int ui) { return ui < 0x001fffffu; }
int lt_00200000(unsigned int ui) { return ui < 0x00200000u; }
int lt_00200001(unsigned int ui) { return ui < 0x00200001u; }

int lt_003fffff(unsigned int ui) { return ui < 0x003fffffu; }
int lt_00400000(unsigned int ui) { return ui < 0x00400000u; }
int lt_00400001(unsigned int ui) { return ui < 0x00400001u; }

int lt_007fffff(unsigned int ui) { return ui < 0x007fffffu; }
int lt_00800000(unsigned int ui) { return ui < 0x00800000u; }
int lt_00800001(unsigned int ui) { return ui < 0x00800001u; }

int lt_00ffffff(unsigned int ui) { return ui < 0x00ffffffu; }
int lt_01000000(unsigned int ui) { return ui < 0x01000000u; }
int lt_01000001(unsigned int ui) { return ui < 0x01000001u; }

int lt_01ffffff(unsigned int ui) { return ui < 0x01ffffffu; }
int lt_02000000(unsigned int ui) { return ui < 0x02000000u; }
int lt_02000001(unsigned int ui) { return ui < 0x02000001u; }

int lt_03ffffff(unsigned int ui) { return ui < 0x03ffffffu; }
int lt_04000000(unsigned int ui) { return ui < 0x04000000u; }
int lt_04000001(unsigned int ui) { return ui < 0x04000001u; }

int lt_07ffffff(unsigned int ui) { return ui < 0x07ffffffu; }
int lt_08000000(unsigned int ui) { return ui < 0x08000000u; }
int lt_08000001(unsigned int ui) { return ui < 0x08000001u; }

int lt_0fffffff(unsigned int ui) { return ui < 0x0fffffffu; }
int lt_10000000(unsigned int ui) { return ui < 0x10000000u; }
int lt_10000001(unsigned int ui) { return ui < 0x10000001u; }

int lt_1fffffff(unsigned int ui) { return ui < 0x1fffffffu; }
int lt_20000000(unsigned int ui) { return ui < 0x20000000u; }
int lt_20000001(unsigned int ui) { return ui < 0x20000001u; }

int lt_3fffffff(unsigned int ui) { return ui < 0x3fffffffu; }
int lt_40000000(unsigned int ui) { return ui < 0x40000000u; }
int lt_40000001(unsigned int ui) { return ui < 0x40000001u; }

int lt_7fffffff(unsigned int ui) { return ui < 0x7fffffffu; }
int lt_80000000(unsigned int ui) { return ui < 0x80000000u; }
int lt_80000001(unsigned int ui) { return ui < 0x80000001u; }

int lt_ffffffff(unsigned int ui) { return ui < 0xffffffffu; }

static unsigned int ui;
int main() {
  ui = 0x00000000u;
  my_assert(lt_00000000(ui) != 1);
  my_assert(lt_00000001(ui) == 1);

  ui = 0x00000001u;
  my_assert(lt_00000000(ui) != 1);
  my_assert(lt_00000001(ui) != 1);
  my_assert(lt_00000002(ui) == 1);

  ui = 0x00000002u;
  my_assert(lt_00000001(ui) != 1);
  my_assert(lt_00000002(ui) != 1);
  my_assert(lt_00000003(ui) == 1);

  ui = 0x00000004u;
  my_assert(lt_00000003(ui) != 1);
  my_assert(lt_00000004(ui) != 1);
  my_assert(lt_00000005(ui) == 1);

  ui = 0x00000008u;
  my_assert(lt_00000007(ui) != 1);
  my_assert(lt_00000008(ui) != 1);
  my_assert(lt_00000009(ui) == 1);

  ui = 0x00000010u;
  my_assert(lt_0000000f(ui) != 1);
  my_assert(lt_00000010(ui) != 1);
  my_assert(lt_00000011(ui) == 1);

  ui = 0x00000020u;
  my_assert(lt_0000001f(ui) != 1);
  my_assert(lt_00000020(ui) != 1);
  my_assert(lt_00000021(ui) == 1);

  ui = 0x00000040u;
  my_assert(lt_0000003f(ui) != 1);
  my_assert(lt_00000040(ui) != 1);
  my_assert(lt_00000041(ui) == 1);

  ui = 0x00000080u;
  my_assert(lt_0000007f(ui) != 1);
  my_assert(lt_00000080(ui) != 1);
  my_assert(lt_00000081(ui) == 1);

  ui = 0x00000100u;
  my_assert(lt_000000ff(ui) != 1);
  my_assert(lt_00000100(ui) != 1);
  my_assert(lt_00000101(ui) == 1);

  ui = 0x00000200u;
  my_assert(lt_000001ff(ui) != 1);
  my_assert(lt_00000200(ui) != 1);
  my_assert(lt_00000201(ui) == 1);

  ui = 0x00000400u;
  my_assert(lt_000003ff(ui) != 1);
  my_assert(lt_00000400(ui) != 1);
  my_assert(lt_00000401(ui) == 1);

  ui = 0x00000800u;
  my_assert(lt_000007ff(ui) != 1);
  my_assert(lt_00000800(ui) != 1);
  my_assert(lt_00000801(ui) == 1);

  ui = 0x00001000u;
  my_assert(lt_00000fff(ui) != 1);
  my_assert(lt_00001000(ui) != 1);
  my_assert(lt_00001001(ui) == 1);

  ui = 0x00002000u;
  my_assert(lt_00001fff(ui) != 1);
  my_assert(lt_00002000(ui) != 1);
  my_assert(lt_00002001(ui) == 1);

  ui = 0x00004000u;
  my_assert(lt_00003fff(ui) != 1);
  my_assert(lt_00004000(ui) != 1);
  my_assert(lt_00004001(ui) == 1);

  ui = 0x00008000u;
  my_assert(lt_00007fff(ui) != 1);
  my_assert(lt_00008000(ui) != 1);
  my_assert(lt_00008001(ui) == 1);

  ui = 0x00010000u;
  my_assert(lt_0000ffff(ui) != 1);
  my_assert(lt_00010000(ui) != 1);
  my_assert(lt_00010001(ui) == 1);

  ui = 0x00020000u;
  my_assert(lt_0001ffff(ui) != 1);
  my_assert(lt_00020000(ui) != 1);
  my_assert(lt_00020001(ui) == 1);

  ui = 0x00040000u;
  my_assert(lt_0003ffff(ui) != 1);
  my_assert(lt_00040000(ui) != 1);
  my_assert(lt_00040001(ui) == 1);

  ui = 0x00080000u;
  my_assert(lt_0007ffff(ui) != 1);
  my_assert(lt_00080000(ui) != 1);
  my_assert(lt_00080001(ui) == 1);

  ui = 0x00100000u;
  my_assert(lt_000fffff(ui) != 1);
  my_assert(lt_00100000(ui) != 1);
  my_assert(lt_00100001(ui) == 1);

  ui = 0x00200000u;
  my_assert(lt_001fffff(ui) != 1);
  my_assert(lt_00200000(ui) != 1);
  my_assert(lt_00200001(ui) == 1);

  ui = 0x00400000u;
  my_assert(lt_003fffff(ui) != 1);
  my_assert(lt_00400000(ui) != 1);
  my_assert(lt_00400001(ui) == 1);

  ui = 0x00800000u;
  my_assert(lt_007fffff(ui) != 1);
  my_assert(lt_00800000(ui) != 1);
  my_assert(lt_00800001(ui) == 1);

  ui = 0x01000000u;
  my_assert(lt_00ffffff(ui) != 1);
  my_assert(lt_01000000(ui) != 1);
  my_assert(lt_01000001(ui) == 1);

  ui = 0x02000000u;
  my_assert(lt_01ffffff(ui) != 1);
  my_assert(lt_02000000(ui) != 1);
  my_assert(lt_02000001(ui) == 1);

  ui = 0x04000000u;
  my_assert(lt_03ffffff(ui) != 1);
  my_assert(lt_04000000(ui) != 1);
  my_assert(lt_04000001(ui) == 1);

  ui = 0x08000000u;
  my_assert(lt_07ffffff(ui) != 1);
  my_assert(lt_08000000(ui) != 1);
  my_assert(lt_08000001(ui) == 1);

  ui = 0x10000000u;
  my_assert(lt_0fffffff(ui) != 1);
  my_assert(lt_10000000(ui) != 1);
  my_assert(lt_10000001(ui) == 1);

  ui = 0x20000000u;
  my_assert(lt_1fffffff(ui) != 1);
  my_assert(lt_20000000(ui) != 1);
  my_assert(lt_20000001(ui) == 1);

  ui = 0x40000000u;
  my_assert(lt_3fffffff(ui) != 1);
  my_assert(lt_40000000(ui) != 1);
  my_assert(lt_40000001(ui) == 1);

  ui = 0x80000000u;
  my_assert(lt_7fffffff(ui) != 1);
  my_assert(lt_80000000(ui) != 1);
  my_assert(lt_80000001(ui) == 1);

  ui = 0xffffffffu;
  my_assert(lt_ffffffff(ui) != 1);

  return exit_status;
}
