

int exit_status;
#include "my_assert.h"

int neq_00000000(unsigned long ul) { return !(ul == 0x00000000ul); }
int neq_00000001(unsigned long ul) { return !(ul == 0x00000001ul); }
int neq_00000002(unsigned long ul) { return !(ul == 0x00000002ul); }

int neq_00000003(unsigned long ul) { return !(ul == 0x00000003ul); }
int neq_00000004(unsigned long ul) { return !(ul == 0x00000004ul); }
int neq_00000005(unsigned long ul) { return !(ul == 0x00000005ul); }

int neq_00000007(unsigned long ul) { return !(ul == 0x00000007ul); }
int neq_00000008(unsigned long ul) { return !(ul == 0x00000008ul); }
int neq_00000009(unsigned long ul) { return !(ul == 0x00000009ul); }

int neq_0000000f(unsigned long ul) { return !(ul == 0x0000000ful); }
int neq_00000010(unsigned long ul) { return !(ul == 0x00000010ul); }
int neq_00000011(unsigned long ul) { return !(ul == 0x00000011ul); }

int neq_0000001f(unsigned long ul) { return !(ul == 0x0000001ful); }
int neq_00000020(unsigned long ul) { return !(ul == 0x00000020ul); }
int neq_00000021(unsigned long ul) { return !(ul == 0x00000021ul); }

int neq_0000003f(unsigned long ul) { return !(ul == 0x0000003ful); }
int neq_00000040(unsigned long ul) { return !(ul == 0x00000040ul); }
int neq_00000041(unsigned long ul) { return !(ul == 0x00000041ul); }

int neq_0000007f(unsigned long ul) { return !(ul == 0x0000007ful); }
int neq_00000080(unsigned long ul) { return !(ul == 0x00000080ul); }
int neq_00000081(unsigned long ul) { return !(ul == 0x00000081ul); }

int neq_000000ff(unsigned long ul) { return !(ul == 0x000000fful); }
int neq_00000100(unsigned long ul) { return !(ul == 0x00000100ul); }
int neq_00000101(unsigned long ul) { return !(ul == 0x00000101ul); }

int neq_000001ff(unsigned long ul) { return !(ul == 0x000001fful); }
int neq_00000200(unsigned long ul) { return !(ul == 0x00000200ul); }
int neq_00000201(unsigned long ul) { return !(ul == 0x00000201ul); }

int neq_000003ff(unsigned long ul) { return !(ul == 0x000003fful); }
int neq_00000400(unsigned long ul) { return !(ul == 0x00000400ul); }
int neq_00000401(unsigned long ul) { return !(ul == 0x00000401ul); }

int neq_000007ff(unsigned long ul) { return !(ul == 0x000007fful); }
int neq_00000800(unsigned long ul) { return !(ul == 0x00000800ul); }
int neq_00000801(unsigned long ul) { return !(ul == 0x00000801ul); }

int neq_00000fff(unsigned long ul) { return !(ul == 0x00000ffful); }
int neq_00001000(unsigned long ul) { return !(ul == 0x00001000ul); }
int neq_00001001(unsigned long ul) { return !(ul == 0x00001001ul); }

int neq_00001fff(unsigned long ul) { return !(ul == 0x00001ffful); }
int neq_00002000(unsigned long ul) { return !(ul == 0x00002000ul); }
int neq_00002001(unsigned long ul) { return !(ul == 0x00002001ul); }

int neq_00003fff(unsigned long ul) { return !(ul == 0x00003ffful); }
int neq_00004000(unsigned long ul) { return !(ul == 0x00004000ul); }
int neq_00004001(unsigned long ul) { return !(ul == 0x00004001ul); }

int neq_00007fff(unsigned long ul) { return !(ul == 0x00007ffful); }
int neq_00008000(unsigned long ul) { return !(ul == 0x00008000ul); }
int neq_00008001(unsigned long ul) { return !(ul == 0x00008001ul); }

int neq_0000ffff(unsigned long ul) { return !(ul == 0x0000fffful); }
int neq_00010000(unsigned long ul) { return !(ul == 0x00010000ul); }
int neq_00010001(unsigned long ul) { return !(ul == 0x00010001ul); }

int neq_0001ffff(unsigned long ul) { return !(ul == 0x0001fffful); }
int neq_00020000(unsigned long ul) { return !(ul == 0x00020000ul); }
int neq_00020001(unsigned long ul) { return !(ul == 0x00020001ul); }

int neq_0003ffff(unsigned long ul) { return !(ul == 0x0003fffful); }
int neq_00040000(unsigned long ul) { return !(ul == 0x00040000ul); }
int neq_00040001(unsigned long ul) { return !(ul == 0x00040001ul); }

int neq_0007ffff(unsigned long ul) { return !(ul == 0x0007fffful); }
int neq_00080000(unsigned long ul) { return !(ul == 0x00080000ul); }
int neq_00080001(unsigned long ul) { return !(ul == 0x00080001ul); }

int neq_000fffff(unsigned long ul) { return !(ul == 0x000ffffful); }
int neq_00100000(unsigned long ul) { return !(ul == 0x00100000ul); }
int neq_00100001(unsigned long ul) { return !(ul == 0x00100001ul); }

int neq_001fffff(unsigned long ul) { return !(ul == 0x001ffffful); }
int neq_00200000(unsigned long ul) { return !(ul == 0x00200000ul); }
int neq_00200001(unsigned long ul) { return !(ul == 0x00200001ul); }

int neq_003fffff(unsigned long ul) { return !(ul == 0x003ffffful); }
int neq_00400000(unsigned long ul) { return !(ul == 0x00400000ul); }
int neq_00400001(unsigned long ul) { return !(ul == 0x00400001ul); }

int neq_007fffff(unsigned long ul) { return !(ul == 0x007ffffful); }
int neq_00800000(unsigned long ul) { return !(ul == 0x00800000ul); }
int neq_00800001(unsigned long ul) { return !(ul == 0x00800001ul); }

int neq_00ffffff(unsigned long ul) { return !(ul == 0x00fffffful); }
int neq_01000000(unsigned long ul) { return !(ul == 0x01000000ul); }
int neq_01000001(unsigned long ul) { return !(ul == 0x01000001ul); }

int neq_01ffffff(unsigned long ul) { return !(ul == 0x01fffffful); }
int neq_02000000(unsigned long ul) { return !(ul == 0x02000000ul); }
int neq_02000001(unsigned long ul) { return !(ul == 0x02000001ul); }

int neq_03ffffff(unsigned long ul) { return !(ul == 0x03fffffful); }
int neq_04000000(unsigned long ul) { return !(ul == 0x04000000ul); }
int neq_04000001(unsigned long ul) { return !(ul == 0x04000001ul); }

int neq_07ffffff(unsigned long ul) { return !(ul == 0x07fffffful); }
int neq_08000000(unsigned long ul) { return !(ul == 0x08000000ul); }
int neq_08000001(unsigned long ul) { return !(ul == 0x08000001ul); }

int neq_0fffffff(unsigned long ul) { return !(ul == 0x0ffffffful); }
int neq_10000000(unsigned long ul) { return !(ul == 0x10000000ul); }
int neq_10000001(unsigned long ul) { return !(ul == 0x10000001ul); }

int neq_1fffffff(unsigned long ul) { return !(ul == 0x1ffffffful); }
int neq_20000000(unsigned long ul) { return !(ul == 0x20000000ul); }
int neq_20000001(unsigned long ul) { return !(ul == 0x20000001ul); }

int neq_3fffffff(unsigned long ul) { return !(ul == 0x3ffffffful); }
int neq_40000000(unsigned long ul) { return !(ul == 0x40000000ul); }
int neq_40000001(unsigned long ul) { return !(ul == 0x40000001ul); }

int neq_7fffffff(unsigned long ul) { return !(ul == 0x7ffffffful); }
int neq_80000000(unsigned long ul) { return !(ul == 0x80000000ul); }
int neq_80000001(unsigned long ul) { return !(ul == 0x80000001ul); }

static unsigned long ul;
int main() {
  ul = 0x00000000ul;
  my_assert(neq_00000000(ul) != 1);
  my_assert(neq_00000001(ul) == 1);

  ul = 0x00000001ul;
  my_assert(neq_00000000(ul) == 1);
  my_assert(neq_00000001(ul) != 1);
  my_assert(neq_00000002(ul) == 1);

  ul = 0x00000002ul;
  my_assert(neq_00000001(ul) == 1);
  my_assert(neq_00000002(ul) != 1);
  my_assert(neq_00000003(ul) == 1);

  ul = 0x00000004ul;
  my_assert(neq_00000003(ul) == 1);
  my_assert(neq_00000004(ul) != 1);
  my_assert(neq_00000005(ul) == 1);

  ul = 0x00000008ul;
  my_assert(neq_00000007(ul) == 1);
  my_assert(neq_00000008(ul) != 1);
  my_assert(neq_00000009(ul) == 1);

  ul = 0x00000010ul;
  my_assert(neq_0000000f(ul) == 1);
  my_assert(neq_00000010(ul) != 1);
  my_assert(neq_00000011(ul) == 1);

  ul = 0x00000020ul;
  my_assert(neq_0000001f(ul) == 1);
  my_assert(neq_00000020(ul) != 1);
  my_assert(neq_00000021(ul) == 1);

  ul = 0x00000040ul;
  my_assert(neq_0000003f(ul) == 1);
  my_assert(neq_00000040(ul) != 1);
  my_assert(neq_00000041(ul) == 1);

  ul = 0x00000080ul;
  my_assert(neq_0000007f(ul) == 1);
  my_assert(neq_00000080(ul) != 1);
  my_assert(neq_00000081(ul) == 1);

  ul = 0x00000100ul;
  my_assert(neq_000000ff(ul) == 1);
  my_assert(neq_00000100(ul) != 1);
  my_assert(neq_00000101(ul) == 1);

  ul = 0x00000200ul;
  my_assert(neq_000001ff(ul) == 1);
  my_assert(neq_00000200(ul) != 1);
  my_assert(neq_00000201(ul) == 1);

  ul = 0x00000400ul;
  my_assert(neq_000003ff(ul) == 1);
  my_assert(neq_00000400(ul) != 1);
  my_assert(neq_00000401(ul) == 1);

  ul = 0x00000800ul;
  my_assert(neq_000007ff(ul) == 1);
  my_assert(neq_00000800(ul) != 1);
  my_assert(neq_00000801(ul) == 1);

  ul = 0x00001000ul;
  my_assert(neq_00000fff(ul) == 1);
  my_assert(neq_00001000(ul) != 1);
  my_assert(neq_00001001(ul) == 1);

  ul = 0x00002000ul;
  my_assert(neq_00001fff(ul) == 1);
  my_assert(neq_00002000(ul) != 1);
  my_assert(neq_00002001(ul) == 1);

  ul = 0x00004000ul;
  my_assert(neq_00003fff(ul) == 1);
  my_assert(neq_00004000(ul) != 1);
  my_assert(neq_00004001(ul) == 1);

  ul = 0x00008000ul;
  my_assert(neq_00007fff(ul) == 1);
  my_assert(neq_00008000(ul) != 1);
  my_assert(neq_00008001(ul) == 1);

  ul = 0x00010000ul;
  my_assert(neq_0000ffff(ul) == 1);
  my_assert(neq_00010000(ul) != 1);
  my_assert(neq_00010001(ul) == 1);

  ul = 0x00020000ul;
  my_assert(neq_0001ffff(ul) == 1);
  my_assert(neq_00020000(ul) != 1);
  my_assert(neq_00020001(ul) == 1);

  ul = 0x00040000ul;
  my_assert(neq_0003ffff(ul) == 1);
  my_assert(neq_00040000(ul) != 1);
  my_assert(neq_00040001(ul) == 1);

  ul = 0x00080000ul;
  my_assert(neq_0007ffff(ul) == 1);
  my_assert(neq_00080000(ul) != 1);
  my_assert(neq_00080001(ul) == 1);

  ul = 0x00100000ul;
  my_assert(neq_000fffff(ul) == 1);
  my_assert(neq_00100000(ul) != 1);
  my_assert(neq_00100001(ul) == 1);

  ul = 0x00200000ul;
  my_assert(neq_001fffff(ul) == 1);
  my_assert(neq_00200000(ul) != 1);
  my_assert(neq_00200001(ul) == 1);

  ul = 0x00400000ul;
  my_assert(neq_003fffff(ul) == 1);
  my_assert(neq_00400000(ul) != 1);
  my_assert(neq_00400001(ul) == 1);

  ul = 0x00800000ul;
  my_assert(neq_007fffff(ul) == 1);
  my_assert(neq_00800000(ul) != 1);
  my_assert(neq_00800001(ul) == 1);

  ul = 0x01000000ul;
  my_assert(neq_00ffffff(ul) == 1);
  my_assert(neq_01000000(ul) != 1);
  my_assert(neq_01000001(ul) == 1);

  ul = 0x02000000ul;
  my_assert(neq_01ffffff(ul) == 1);
  my_assert(neq_02000000(ul) != 1);
  my_assert(neq_02000001(ul) == 1);

  ul = 0x04000000ul;
  my_assert(neq_03ffffff(ul) == 1);
  my_assert(neq_04000000(ul) != 1);
  my_assert(neq_04000001(ul) == 1);

  ul = 0x08000000ul;
  my_assert(neq_07ffffff(ul) == 1);
  my_assert(neq_08000000(ul) != 1);
  my_assert(neq_08000001(ul) == 1);

  ul = 0x10000000ul;
  my_assert(neq_0fffffff(ul) == 1);
  my_assert(neq_10000000(ul) != 1);
  my_assert(neq_10000001(ul) == 1);

  ul = 0x20000000ul;
  my_assert(neq_1fffffff(ul) == 1);
  my_assert(neq_20000000(ul) != 1);
  my_assert(neq_20000001(ul) == 1);

  ul = 0x40000000ul;
  my_assert(neq_3fffffff(ul) == 1);
  my_assert(neq_40000000(ul) != 1);
  my_assert(neq_40000001(ul) == 1);

  ul = 0x80000000ul;
  my_assert(neq_7fffffff(ul) == 1);
  my_assert(neq_80000000(ul) != 1);
  my_assert(neq_80000001(ul) == 1);

  return exit_status;
}
