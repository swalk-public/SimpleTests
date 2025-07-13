

int exit_status;
#include "my_assert.h"

int eq_00000000(unsigned long ul) { return ul == 0x00000000ul; }
int eq_00000001(unsigned long ul) { return ul == 0x00000001ul; }
int eq_00000002(unsigned long ul) { return ul == 0x00000002ul; }

int eq_00000003(unsigned long ul) { return ul == 0x00000003ul; }
int eq_00000004(unsigned long ul) { return ul == 0x00000004ul; }
int eq_00000005(unsigned long ul) { return ul == 0x00000005ul; }

int eq_00000007(unsigned long ul) { return ul == 0x00000007ul; }
int eq_00000008(unsigned long ul) { return ul == 0x00000008ul; }
int eq_00000009(unsigned long ul) { return ul == 0x00000009ul; }

int eq_0000000f(unsigned long ul) { return ul == 0x0000000ful; }
int eq_00000010(unsigned long ul) { return ul == 0x00000010ul; }
int eq_00000011(unsigned long ul) { return ul == 0x00000011ul; }

int eq_0000001f(unsigned long ul) { return ul == 0x0000001ful; }
int eq_00000020(unsigned long ul) { return ul == 0x00000020ul; }
int eq_00000021(unsigned long ul) { return ul == 0x00000021ul; }

int eq_0000003f(unsigned long ul) { return ul == 0x0000003ful; }
int eq_00000040(unsigned long ul) { return ul == 0x00000040ul; }
int eq_00000041(unsigned long ul) { return ul == 0x00000041ul; }

int eq_0000007f(unsigned long ul) { return ul == 0x0000007ful; }
int eq_00000080(unsigned long ul) { return ul == 0x00000080ul; }
int eq_00000081(unsigned long ul) { return ul == 0x00000081ul; }

int eq_000000ff(unsigned long ul) { return ul == 0x000000fful; }
int eq_00000100(unsigned long ul) { return ul == 0x00000100ul; }
int eq_00000101(unsigned long ul) { return ul == 0x00000101ul; }

int eq_000001ff(unsigned long ul) { return ul == 0x000001fful; }
int eq_00000200(unsigned long ul) { return ul == 0x00000200ul; }
int eq_00000201(unsigned long ul) { return ul == 0x00000201ul; }

int eq_000003ff(unsigned long ul) { return ul == 0x000003fful; }
int eq_00000400(unsigned long ul) { return ul == 0x00000400ul; }
int eq_00000401(unsigned long ul) { return ul == 0x00000401ul; }

int eq_000007ff(unsigned long ul) { return ul == 0x000007fful; }
int eq_00000800(unsigned long ul) { return ul == 0x00000800ul; }
int eq_00000801(unsigned long ul) { return ul == 0x00000801ul; }

int eq_00000fff(unsigned long ul) { return ul == 0x00000ffful; }
int eq_00001000(unsigned long ul) { return ul == 0x00001000ul; }
int eq_00001001(unsigned long ul) { return ul == 0x00001001ul; }

int eq_00001fff(unsigned long ul) { return ul == 0x00001ffful; }
int eq_00002000(unsigned long ul) { return ul == 0x00002000ul; }
int eq_00002001(unsigned long ul) { return ul == 0x00002001ul; }

int eq_00003fff(unsigned long ul) { return ul == 0x00003ffful; }
int eq_00004000(unsigned long ul) { return ul == 0x00004000ul; }
int eq_00004001(unsigned long ul) { return ul == 0x00004001ul; }

int eq_00007fff(unsigned long ul) { return ul == 0x00007ffful; }
int eq_00008000(unsigned long ul) { return ul == 0x00008000ul; }
int eq_00008001(unsigned long ul) { return ul == 0x00008001ul; }

int eq_0000ffff(unsigned long ul) { return ul == 0x0000fffful; }
int eq_00010000(unsigned long ul) { return ul == 0x00010000ul; }
int eq_00010001(unsigned long ul) { return ul == 0x00010001ul; }

int eq_0001ffff(unsigned long ul) { return ul == 0x0001fffful; }
int eq_00020000(unsigned long ul) { return ul == 0x00020000ul; }
int eq_00020001(unsigned long ul) { return ul == 0x00020001ul; }

int eq_0003ffff(unsigned long ul) { return ul == 0x0003fffful; }
int eq_00040000(unsigned long ul) { return ul == 0x00040000ul; }
int eq_00040001(unsigned long ul) { return ul == 0x00040001ul; }

int eq_0007ffff(unsigned long ul) { return ul == 0x0007fffful; }
int eq_00080000(unsigned long ul) { return ul == 0x00080000ul; }
int eq_00080001(unsigned long ul) { return ul == 0x00080001ul; }

int eq_000fffff(unsigned long ul) { return ul == 0x000ffffful; }
int eq_00100000(unsigned long ul) { return ul == 0x00100000ul; }
int eq_00100001(unsigned long ul) { return ul == 0x00100001ul; }

int eq_001fffff(unsigned long ul) { return ul == 0x001ffffful; }
int eq_00200000(unsigned long ul) { return ul == 0x00200000ul; }
int eq_00200001(unsigned long ul) { return ul == 0x00200001ul; }

int eq_003fffff(unsigned long ul) { return ul == 0x003ffffful; }
int eq_00400000(unsigned long ul) { return ul == 0x00400000ul; }
int eq_00400001(unsigned long ul) { return ul == 0x00400001ul; }

int eq_007fffff(unsigned long ul) { return ul == 0x007ffffful; }
int eq_00800000(unsigned long ul) { return ul == 0x00800000ul; }
int eq_00800001(unsigned long ul) { return ul == 0x00800001ul; }

int eq_00ffffff(unsigned long ul) { return ul == 0x00fffffful; }
int eq_01000000(unsigned long ul) { return ul == 0x01000000ul; }
int eq_01000001(unsigned long ul) { return ul == 0x01000001ul; }

int eq_01ffffff(unsigned long ul) { return ul == 0x01fffffful; }
int eq_02000000(unsigned long ul) { return ul == 0x02000000ul; }
int eq_02000001(unsigned long ul) { return ul == 0x02000001ul; }

int eq_03ffffff(unsigned long ul) { return ul == 0x03fffffful; }
int eq_04000000(unsigned long ul) { return ul == 0x04000000ul; }
int eq_04000001(unsigned long ul) { return ul == 0x04000001ul; }

int eq_07ffffff(unsigned long ul) { return ul == 0x07fffffful; }
int eq_08000000(unsigned long ul) { return ul == 0x08000000ul; }
int eq_08000001(unsigned long ul) { return ul == 0x08000001ul; }

int eq_0fffffff(unsigned long ul) { return ul == 0x0ffffffful; }
int eq_10000000(unsigned long ul) { return ul == 0x10000000ul; }
int eq_10000001(unsigned long ul) { return ul == 0x10000001ul; }

int eq_1fffffff(unsigned long ul) { return ul == 0x1ffffffful; }
int eq_20000000(unsigned long ul) { return ul == 0x20000000ul; }
int eq_20000001(unsigned long ul) { return ul == 0x20000001ul; }

int eq_3fffffff(unsigned long ul) { return ul == 0x3ffffffful; }
int eq_40000000(unsigned long ul) { return ul == 0x40000000ul; }
int eq_40000001(unsigned long ul) { return ul == 0x40000001ul; }

int eq_7fffffff(unsigned long ul) { return ul == 0x7ffffffful; }
int eq_80000000(unsigned long ul) { return ul == 0x80000000ul; }
int eq_80000001(unsigned long ul) { return ul == 0x80000001ul; }

static unsigned long ul;
int main() {
  ul = 0x00000000ul;
  my_assert(eq_00000000(ul) == 1);
  my_assert(eq_00000001(ul) != 1);

  ul = 0x00000001ul;
  my_assert(eq_00000000(ul) != 1);
  my_assert(eq_00000001(ul) == 1);
  my_assert(eq_00000002(ul) != 1);

  ul = 0x00000002ul;
  my_assert(eq_00000001(ul) != 1);
  my_assert(eq_00000002(ul) == 1);
  my_assert(eq_00000003(ul) != 1);

  ul = 0x00000004ul;
  my_assert(eq_00000003(ul) != 1);
  my_assert(eq_00000004(ul) == 1);
  my_assert(eq_00000005(ul) != 1);

  ul = 0x00000008ul;
  my_assert(eq_00000007(ul) != 1);
  my_assert(eq_00000008(ul) == 1);
  my_assert(eq_00000009(ul) != 1);

  ul = 0x00000010ul;
  my_assert(eq_0000000f(ul) != 1);
  my_assert(eq_00000010(ul) == 1);
  my_assert(eq_00000011(ul) != 1);

  ul = 0x00000020ul;
  my_assert(eq_0000001f(ul) != 1);
  my_assert(eq_00000020(ul) == 1);
  my_assert(eq_00000021(ul) != 1);

  ul = 0x00000040ul;
  my_assert(eq_0000003f(ul) != 1);
  my_assert(eq_00000040(ul) == 1);
  my_assert(eq_00000041(ul) != 1);

  ul = 0x00000080ul;
  my_assert(eq_0000007f(ul) != 1);
  my_assert(eq_00000080(ul) == 1);
  my_assert(eq_00000081(ul) != 1);

  ul = 0x00000100ul;
  my_assert(eq_000000ff(ul) != 1);
  my_assert(eq_00000100(ul) == 1);
  my_assert(eq_00000101(ul) != 1);

  ul = 0x00000200ul;
  my_assert(eq_000001ff(ul) != 1);
  my_assert(eq_00000200(ul) == 1);
  my_assert(eq_00000201(ul) != 1);

  ul = 0x00000400ul;
  my_assert(eq_000003ff(ul) != 1);
  my_assert(eq_00000400(ul) == 1);
  my_assert(eq_00000401(ul) != 1);

  ul = 0x00000800ul;
  my_assert(eq_000007ff(ul) != 1);
  my_assert(eq_00000800(ul) == 1);
  my_assert(eq_00000801(ul) != 1);

  ul = 0x00001000ul;
  my_assert(eq_00000fff(ul) != 1);
  my_assert(eq_00001000(ul) == 1);
  my_assert(eq_00001001(ul) != 1);

  ul = 0x00002000ul;
  my_assert(eq_00001fff(ul) != 1);
  my_assert(eq_00002000(ul) == 1);
  my_assert(eq_00002001(ul) != 1);

  ul = 0x00004000ul;
  my_assert(eq_00003fff(ul) != 1);
  my_assert(eq_00004000(ul) == 1);
  my_assert(eq_00004001(ul) != 1);

  ul = 0x00008000ul;
  my_assert(eq_00007fff(ul) != 1);
  my_assert(eq_00008000(ul) == 1);
  my_assert(eq_00008001(ul) != 1);

  ul = 0x00010000ul;
  my_assert(eq_0000ffff(ul) != 1);
  my_assert(eq_00010000(ul) == 1);
  my_assert(eq_00010001(ul) != 1);

  ul = 0x00020000ul;
  my_assert(eq_0001ffff(ul) != 1);
  my_assert(eq_00020000(ul) == 1);
  my_assert(eq_00020001(ul) != 1);

  ul = 0x00040000ul;
  my_assert(eq_0003ffff(ul) != 1);
  my_assert(eq_00040000(ul) == 1);
  my_assert(eq_00040001(ul) != 1);

  ul = 0x00080000ul;
  my_assert(eq_0007ffff(ul) != 1);
  my_assert(eq_00080000(ul) == 1);
  my_assert(eq_00080001(ul) != 1);

  ul = 0x00100000ul;
  my_assert(eq_000fffff(ul) != 1);
  my_assert(eq_00100000(ul) == 1);
  my_assert(eq_00100001(ul) != 1);

  ul = 0x00200000ul;
  my_assert(eq_001fffff(ul) != 1);
  my_assert(eq_00200000(ul) == 1);
  my_assert(eq_00200001(ul) != 1);

  ul = 0x00400000ul;
  my_assert(eq_003fffff(ul) != 1);
  my_assert(eq_00400000(ul) == 1);
  my_assert(eq_00400001(ul) != 1);

  ul = 0x00800000ul;
  my_assert(eq_007fffff(ul) != 1);
  my_assert(eq_00800000(ul) == 1);
  my_assert(eq_00800001(ul) != 1);

  ul = 0x01000000ul;
  my_assert(eq_00ffffff(ul) != 1);
  my_assert(eq_01000000(ul) == 1);
  my_assert(eq_01000001(ul) != 1);

  ul = 0x02000000ul;
  my_assert(eq_01ffffff(ul) != 1);
  my_assert(eq_02000000(ul) == 1);
  my_assert(eq_02000001(ul) != 1);

  ul = 0x04000000ul;
  my_assert(eq_03ffffff(ul) != 1);
  my_assert(eq_04000000(ul) == 1);
  my_assert(eq_04000001(ul) != 1);

  ul = 0x08000000ul;
  my_assert(eq_07ffffff(ul) != 1);
  my_assert(eq_08000000(ul) == 1);
  my_assert(eq_08000001(ul) != 1);

  ul = 0x10000000ul;
  my_assert(eq_0fffffff(ul) != 1);
  my_assert(eq_10000000(ul) == 1);
  my_assert(eq_10000001(ul) != 1);

  ul = 0x20000000ul;
  my_assert(eq_1fffffff(ul) != 1);
  my_assert(eq_20000000(ul) == 1);
  my_assert(eq_20000001(ul) != 1);

  ul = 0x40000000ul;
  my_assert(eq_3fffffff(ul) != 1);
  my_assert(eq_40000000(ul) == 1);
  my_assert(eq_40000001(ul) != 1);

  ul = 0x80000000ul;
  my_assert(eq_7fffffff(ul) != 1);
  my_assert(eq_80000000(ul) == 1);
  my_assert(eq_80000001(ul) != 1);

  return exit_status;
}
