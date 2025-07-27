

int exit_status;
#include "my_assert.h"

int gt_00000000(unsigned int ui) { return ui > 0x00000000u; }
int gt_00000001(unsigned int ui) { return ui > 0x00000001u; }
int gt_00000002(unsigned int ui) { return ui > 0x00000002u; }

int gt_00000003(unsigned int ui) { return ui > 0x00000003u; }
int gt_00000004(unsigned int ui) { return ui > 0x00000004u; }
int gt_00000005(unsigned int ui) { return ui > 0x00000005u; }

int gt_00000007(unsigned int ui) { return ui > 0x00000007u; }
int gt_00000008(unsigned int ui) { return ui > 0x00000008u; }
int gt_00000009(unsigned int ui) { return ui > 0x00000009u; }

int gt_0000000f(unsigned int ui) { return ui > 0x0000000fu; }
int gt_00000010(unsigned int ui) { return ui > 0x00000010u; }
int gt_00000011(unsigned int ui) { return ui > 0x00000011u; }

int gt_0000001f(unsigned int ui) { return ui > 0x0000001fu; }
int gt_00000020(unsigned int ui) { return ui > 0x00000020u; }
int gt_00000021(unsigned int ui) { return ui > 0x00000021u; }

int gt_0000003f(unsigned int ui) { return ui > 0x0000003fu; }
int gt_00000040(unsigned int ui) { return ui > 0x00000040u; }
int gt_00000041(unsigned int ui) { return ui > 0x00000041u; }

int gt_0000007f(unsigned int ui) { return ui > 0x0000007fu; }
int gt_00000080(unsigned int ui) { return ui > 0x00000080u; }
int gt_00000081(unsigned int ui) { return ui > 0x00000081u; }

int gt_000000ff(unsigned int ui) { return ui > 0x000000ffu; }
int gt_00000100(unsigned int ui) { return ui > 0x00000100u; }
int gt_00000101(unsigned int ui) { return ui > 0x00000101u; }

int gt_000001ff(unsigned int ui) { return ui > 0x000001ffu; }
int gt_00000200(unsigned int ui) { return ui > 0x00000200u; }
int gt_00000201(unsigned int ui) { return ui > 0x00000201u; }

int gt_000003ff(unsigned int ui) { return ui > 0x000003ffu; }
int gt_00000400(unsigned int ui) { return ui > 0x00000400u; }
int gt_00000401(unsigned int ui) { return ui > 0x00000401u; }

int gt_000007ff(unsigned int ui) { return ui > 0x000007ffu; }
int gt_00000800(unsigned int ui) { return ui > 0x00000800u; }
int gt_00000801(unsigned int ui) { return ui > 0x00000801u; }

int gt_00000fff(unsigned int ui) { return ui > 0x00000fffu; }
int gt_00001000(unsigned int ui) { return ui > 0x00001000u; }
int gt_00001001(unsigned int ui) { return ui > 0x00001001u; }

int gt_00001fff(unsigned int ui) { return ui > 0x00001fffu; }
int gt_00002000(unsigned int ui) { return ui > 0x00002000u; }
int gt_00002001(unsigned int ui) { return ui > 0x00002001u; }

int gt_00003fff(unsigned int ui) { return ui > 0x00003fffu; }
int gt_00004000(unsigned int ui) { return ui > 0x00004000u; }
int gt_00004001(unsigned int ui) { return ui > 0x00004001u; }

int gt_00007fff(unsigned int ui) { return ui > 0x00007fffu; }
int gt_00008000(unsigned int ui) { return ui > 0x00008000u; }
int gt_00008001(unsigned int ui) { return ui > 0x00008001u; }

int gt_0000ffff(unsigned int ui) { return ui > 0x0000ffffu; }
int gt_00010000(unsigned int ui) { return ui > 0x00010000u; }
int gt_00010001(unsigned int ui) { return ui > 0x00010001u; }

int gt_0001ffff(unsigned int ui) { return ui > 0x0001ffffu; }
int gt_00020000(unsigned int ui) { return ui > 0x00020000u; }
int gt_00020001(unsigned int ui) { return ui > 0x00020001u; }

int gt_0003ffff(unsigned int ui) { return ui > 0x0003ffffu; }
int gt_00040000(unsigned int ui) { return ui > 0x00040000u; }
int gt_00040001(unsigned int ui) { return ui > 0x00040001u; }

int gt_0007ffff(unsigned int ui) { return ui > 0x0007ffffu; }
int gt_00080000(unsigned int ui) { return ui > 0x00080000u; }
int gt_00080001(unsigned int ui) { return ui > 0x00080001u; }

int gt_000fffff(unsigned int ui) { return ui > 0x000fffffu; }
int gt_00100000(unsigned int ui) { return ui > 0x00100000u; }
int gt_00100001(unsigned int ui) { return ui > 0x00100001u; }

int gt_001fffff(unsigned int ui) { return ui > 0x001fffffu; }
int gt_00200000(unsigned int ui) { return ui > 0x00200000u; }
int gt_00200001(unsigned int ui) { return ui > 0x00200001u; }

int gt_003fffff(unsigned int ui) { return ui > 0x003fffffu; }
int gt_00400000(unsigned int ui) { return ui > 0x00400000u; }
int gt_00400001(unsigned int ui) { return ui > 0x00400001u; }

int gt_007fffff(unsigned int ui) { return ui > 0x007fffffu; }
int gt_00800000(unsigned int ui) { return ui > 0x00800000u; }
int gt_00800001(unsigned int ui) { return ui > 0x00800001u; }

int gt_00ffffff(unsigned int ui) { return ui > 0x00ffffffu; }
int gt_01000000(unsigned int ui) { return ui > 0x01000000u; }
int gt_01000001(unsigned int ui) { return ui > 0x01000001u; }

int gt_01ffffff(unsigned int ui) { return ui > 0x01ffffffu; }
int gt_02000000(unsigned int ui) { return ui > 0x02000000u; }
int gt_02000001(unsigned int ui) { return ui > 0x02000001u; }

int gt_03ffffff(unsigned int ui) { return ui > 0x03ffffffu; }
int gt_04000000(unsigned int ui) { return ui > 0x04000000u; }
int gt_04000001(unsigned int ui) { return ui > 0x04000001u; }

int gt_07ffffff(unsigned int ui) { return ui > 0x07ffffffu; }
int gt_08000000(unsigned int ui) { return ui > 0x08000000u; }
int gt_08000001(unsigned int ui) { return ui > 0x08000001u; }

int gt_0fffffff(unsigned int ui) { return ui > 0x0fffffffu; }
int gt_10000000(unsigned int ui) { return ui > 0x10000000u; }
int gt_10000001(unsigned int ui) { return ui > 0x10000001u; }

int gt_1fffffff(unsigned int ui) { return ui > 0x1fffffffu; }
int gt_20000000(unsigned int ui) { return ui > 0x20000000u; }
int gt_20000001(unsigned int ui) { return ui > 0x20000001u; }

int gt_3fffffff(unsigned int ui) { return ui > 0x3fffffffu; }
int gt_40000000(unsigned int ui) { return ui > 0x40000000u; }
int gt_40000001(unsigned int ui) { return ui > 0x40000001u; }

int gt_7fffffff(unsigned int ui) { return ui > 0x7fffffffu; }
int gt_80000000(unsigned int ui) { return ui > 0x80000000u; }
int gt_80000001(unsigned int ui) { return ui > 0x80000001u; }

int gt_ffffffff(unsigned int ui) { return ui > 0xffffffffu; }

static unsigned int ui;
int main() {
  ui = 0x00000000u;
  my_assert(gt_00000000(ui) != 1);
  my_assert(gt_00000001(ui) != 1);

  ui = 0x00000001u;
  my_assert(gt_00000000(ui) == 1);
  my_assert(gt_00000001(ui) != 1);
  my_assert(gt_00000002(ui) != 1);

  ui = 0x00000002u;
  my_assert(gt_00000001(ui) == 1);
  my_assert(gt_00000002(ui) != 1);
  my_assert(gt_00000003(ui) != 1);

  ui = 0x00000004u;
  my_assert(gt_00000003(ui) == 1);
  my_assert(gt_00000004(ui) != 1);
  my_assert(gt_00000005(ui) != 1);

  ui = 0x00000008u;
  my_assert(gt_00000007(ui) == 1);
  my_assert(gt_00000008(ui) != 1);
  my_assert(gt_00000009(ui) != 1);

  ui = 0x00000010u;
  my_assert(gt_0000000f(ui) == 1);
  my_assert(gt_00000010(ui) != 1);
  my_assert(gt_00000011(ui) != 1);

  ui = 0x00000020u;
  my_assert(gt_0000001f(ui) == 1);
  my_assert(gt_00000020(ui) != 1);
  my_assert(gt_00000021(ui) != 1);

  ui = 0x00000040u;
  my_assert(gt_0000003f(ui) == 1);
  my_assert(gt_00000040(ui) != 1);
  my_assert(gt_00000041(ui) != 1);

  ui = 0x00000080u;
  my_assert(gt_0000007f(ui) == 1);
  my_assert(gt_00000080(ui) != 1);
  my_assert(gt_00000081(ui) != 1);

  ui = 0x00000100u;
  my_assert(gt_000000ff(ui) == 1);
  my_assert(gt_00000100(ui) != 1);
  my_assert(gt_00000101(ui) != 1);

  ui = 0x00000200u;
  my_assert(gt_000001ff(ui) == 1);
  my_assert(gt_00000200(ui) != 1);
  my_assert(gt_00000201(ui) != 1);

  ui = 0x00000400u;
  my_assert(gt_000003ff(ui) == 1);
  my_assert(gt_00000400(ui) != 1);
  my_assert(gt_00000401(ui) != 1);

  ui = 0x00000800u;
  my_assert(gt_000007ff(ui) == 1);
  my_assert(gt_00000800(ui) != 1);
  my_assert(gt_00000801(ui) != 1);

  ui = 0x00001000u;
  my_assert(gt_00000fff(ui) == 1);
  my_assert(gt_00001000(ui) != 1);
  my_assert(gt_00001001(ui) != 1);

  ui = 0x00002000u;
  my_assert(gt_00001fff(ui) == 1);
  my_assert(gt_00002000(ui) != 1);
  my_assert(gt_00002001(ui) != 1);

  ui = 0x00004000u;
  my_assert(gt_00003fff(ui) == 1);
  my_assert(gt_00004000(ui) != 1);
  my_assert(gt_00004001(ui) != 1);

  ui = 0x00008000u;
  my_assert(gt_00007fff(ui) == 1);
  my_assert(gt_00008000(ui) != 1);
  my_assert(gt_00008001(ui) != 1);

  ui = 0x00010000u;
  my_assert(gt_0000ffff(ui) == 1);
  my_assert(gt_00010000(ui) != 1);
  my_assert(gt_00010001(ui) != 1);

  ui = 0x00020000u;
  my_assert(gt_0001ffff(ui) == 1);
  my_assert(gt_00020000(ui) != 1);
  my_assert(gt_00020001(ui) != 1);

  ui = 0x00040000u;
  my_assert(gt_0003ffff(ui) == 1);
  my_assert(gt_00040000(ui) != 1);
  my_assert(gt_00040001(ui) != 1);

  ui = 0x00080000u;
  my_assert(gt_0007ffff(ui) == 1);
  my_assert(gt_00080000(ui) != 1);
  my_assert(gt_00080001(ui) != 1);

  ui = 0x00100000u;
  my_assert(gt_000fffff(ui) == 1);
  my_assert(gt_00100000(ui) != 1);
  my_assert(gt_00100001(ui) != 1);

  ui = 0x00200000u;
  my_assert(gt_001fffff(ui) == 1);
  my_assert(gt_00200000(ui) != 1);
  my_assert(gt_00200001(ui) != 1);

  ui = 0x00400000u;
  my_assert(gt_003fffff(ui) == 1);
  my_assert(gt_00400000(ui) != 1);
  my_assert(gt_00400001(ui) != 1);

  ui = 0x00800000u;
  my_assert(gt_007fffff(ui) == 1);
  my_assert(gt_00800000(ui) != 1);
  my_assert(gt_00800001(ui) != 1);

  ui = 0x01000000u;
  my_assert(gt_00ffffff(ui) == 1);
  my_assert(gt_01000000(ui) != 1);
  my_assert(gt_01000001(ui) != 1);

  ui = 0x02000000u;
  my_assert(gt_01ffffff(ui) == 1);
  my_assert(gt_02000000(ui) != 1);
  my_assert(gt_02000001(ui) != 1);

  ui = 0x04000000u;
  my_assert(gt_03ffffff(ui) == 1);
  my_assert(gt_04000000(ui) != 1);
  my_assert(gt_04000001(ui) != 1);

  ui = 0x08000000u;
  my_assert(gt_07ffffff(ui) == 1);
  my_assert(gt_08000000(ui) != 1);
  my_assert(gt_08000001(ui) != 1);

  ui = 0x10000000u;
  my_assert(gt_0fffffff(ui) == 1);
  my_assert(gt_10000000(ui) != 1);
  my_assert(gt_10000001(ui) != 1);

  ui = 0x20000000u;
  my_assert(gt_1fffffff(ui) == 1);
  my_assert(gt_20000000(ui) != 1);
  my_assert(gt_20000001(ui) != 1);

  ui = 0x40000000u;
  my_assert(gt_3fffffff(ui) == 1);
  my_assert(gt_40000000(ui) != 1);
  my_assert(gt_40000001(ui) != 1);

  ui = 0x80000000u;
  my_assert(gt_7fffffff(ui) == 1);
  my_assert(gt_80000000(ui) != 1);
  my_assert(gt_80000001(ui) != 1);

  ui = 0xffffffffu;
  my_assert(gt_ffffffff(ui) != 1);

  return exit_status;
}
