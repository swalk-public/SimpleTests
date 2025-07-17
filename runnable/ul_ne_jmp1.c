

int exit_status;
#include "my_assert.h"

int True(void) { return 1; }
int False(void) { return 0; }

int ne_00000000(unsigned long ul) {
  if (ul != 0x00000000ul)
    return True();
  else
    return False();
}
int ne_00000001(unsigned long ul) {
  if (ul != 0x00000001ul)
    return True();
  else
    return False();
}
int ne_00000002(unsigned long ul) {
  if (ul != 0x00000002ul)
    return True();
  else
    return False();
}

int ne_00000003(unsigned long ul) {
  if (ul != 0x00000003ul)
    return True();
  else
    return False();
}
int ne_00000004(unsigned long ul) {
  if (ul != 0x00000004ul)
    return True();
  else
    return False();
}
int ne_00000005(unsigned long ul) {
  if (ul != 0x00000005ul)
    return True();
  else
    return False();
}

int ne_00000007(unsigned long ul) {
  if (ul != 0x00000007ul)
    return True();
  else
    return False();
}
int ne_00000008(unsigned long ul) {
  if (ul != 0x00000008ul)
    return True();
  else
    return False();
}
int ne_00000009(unsigned long ul) {
  if (ul != 0x00000009ul)
    return True();
  else
    return False();
}

int ne_0000000f(unsigned long ul) {
  if (ul != 0x0000000ful)
    return True();
  else
    return False();
}
int ne_00000010(unsigned long ul) {
  if (ul != 0x00000010ul)
    return True();
  else
    return False();
}
int ne_00000011(unsigned long ul) {
  if (ul != 0x00000011ul)
    return True();
  else
    return False();
}

int ne_0000001f(unsigned long ul) {
  if (ul != 0x0000001ful)
    return True();
  else
    return False();
}
int ne_00000020(unsigned long ul) {
  if (ul != 0x00000020ul)
    return True();
  else
    return False();
}
int ne_00000021(unsigned long ul) {
  if (ul != 0x00000021ul)
    return True();
  else
    return False();
}

int ne_0000003f(unsigned long ul) {
  if (ul != 0x0000003ful)
    return True();
  else
    return False();
}
int ne_00000040(unsigned long ul) {
  if (ul != 0x00000040ul)
    return True();
  else
    return False();
}
int ne_00000041(unsigned long ul) {
  if (ul != 0x00000041ul)
    return True();
  else
    return False();
}

int ne_0000007f(unsigned long ul) {
  if (ul != 0x0000007ful)
    return True();
  else
    return False();
}
int ne_00000080(unsigned long ul) {
  if (ul != 0x00000080ul)
    return True();
  else
    return False();
}
int ne_00000081(unsigned long ul) {
  if (ul != 0x00000081ul)
    return True();
  else
    return False();
}

int ne_000000ff(unsigned long ul) {
  if (ul != 0x000000fful)
    return True();
  else
    return False();
}
int ne_00000100(unsigned long ul) {
  if (ul != 0x00000100ul)
    return True();
  else
    return False();
}
int ne_00000101(unsigned long ul) {
  if (ul != 0x00000101ul)
    return True();
  else
    return False();
}

int ne_000001ff(unsigned long ul) {
  if (ul != 0x000001fful)
    return True();
  else
    return False();
}
int ne_00000200(unsigned long ul) {
  if (ul != 0x00000200ul)
    return True();
  else
    return False();
}
int ne_00000201(unsigned long ul) {
  if (ul != 0x00000201ul)
    return True();
  else
    return False();
}

int ne_000003ff(unsigned long ul) {
  if (ul != 0x000003fful)
    return True();
  else
    return False();
}
int ne_00000400(unsigned long ul) {
  if (ul != 0x00000400ul)
    return True();
  else
    return False();
}
int ne_00000401(unsigned long ul) {
  if (ul != 0x00000401ul)
    return True();
  else
    return False();
}

int ne_000007ff(unsigned long ul) {
  if (ul != 0x000007fful)
    return True();
  else
    return False();
}
int ne_00000800(unsigned long ul) {
  if (ul != 0x00000800ul)
    return True();
  else
    return False();
}
int ne_00000801(unsigned long ul) {
  if (ul != 0x00000801ul)
    return True();
  else
    return False();
}

int ne_00000fff(unsigned long ul) {
  if (ul != 0x00000ffful)
    return True();
  else
    return False();
}
int ne_00001000(unsigned long ul) {
  if (ul != 0x00001000ul)
    return True();
  else
    return False();
}
int ne_00001001(unsigned long ul) {
  if (ul != 0x00001001ul)
    return True();
  else
    return False();
}

int ne_00001fff(unsigned long ul) {
  if (ul != 0x00001ffful)
    return True();
  else
    return False();
}
int ne_00002000(unsigned long ul) {
  if (ul != 0x00002000ul)
    return True();
  else
    return False();
}
int ne_00002001(unsigned long ul) {
  if (ul != 0x00002001ul)
    return True();
  else
    return False();
}

int ne_00003fff(unsigned long ul) {
  if (ul != 0x00003ffful)
    return True();
  else
    return False();
}
int ne_00004000(unsigned long ul) {
  if (ul != 0x00004000ul)
    return True();
  else
    return False();
}
int ne_00004001(unsigned long ul) {
  if (ul != 0x00004001ul)
    return True();
  else
    return False();
}

int ne_00007fff(unsigned long ul) {
  if (ul != 0x00007ffful)
    return True();
  else
    return False();
}
int ne_00008000(unsigned long ul) {
  if (ul != 0x00008000ul)
    return True();
  else
    return False();
}
int ne_00008001(unsigned long ul) {
  if (ul != 0x00008001ul)
    return True();
  else
    return False();
}

int ne_0000ffff(unsigned long ul) {
  if (ul != 0x0000fffful)
    return True();
  else
    return False();
}
int ne_00010000(unsigned long ul) {
  if (ul != 0x00010000ul)
    return True();
  else
    return False();
}
int ne_00010001(unsigned long ul) {
  if (ul != 0x00010001ul)
    return True();
  else
    return False();
}

int ne_0001ffff(unsigned long ul) {
  if (ul != 0x0001fffful)
    return True();
  else
    return False();
}
int ne_00020000(unsigned long ul) {
  if (ul != 0x00020000ul)
    return True();
  else
    return False();
}
int ne_00020001(unsigned long ul) {
  if (ul != 0x00020001ul)
    return True();
  else
    return False();
}

int ne_0003ffff(unsigned long ul) {
  if (ul != 0x0003fffful)
    return True();
  else
    return False();
}
int ne_00040000(unsigned long ul) {
  if (ul != 0x00040000ul)
    return True();
  else
    return False();
}
int ne_00040001(unsigned long ul) {
  if (ul != 0x00040001ul)
    return True();
  else
    return False();
}

int ne_0007ffff(unsigned long ul) {
  if (ul != 0x0007fffful)
    return True();
  else
    return False();
}
int ne_00080000(unsigned long ul) {
  if (ul != 0x00080000ul)
    return True();
  else
    return False();
}
int ne_00080001(unsigned long ul) {
  if (ul != 0x00080001ul)
    return True();
  else
    return False();
}

int ne_000fffff(unsigned long ul) {
  if (ul != 0x000ffffful)
    return True();
  else
    return False();
}
int ne_00100000(unsigned long ul) {
  if (ul != 0x00100000ul)
    return True();
  else
    return False();
}
int ne_00100001(unsigned long ul) {
  if (ul != 0x00100001ul)
    return True();
  else
    return False();
}

int ne_001fffff(unsigned long ul) {
  if (ul != 0x001ffffful)
    return True();
  else
    return False();
}
int ne_00200000(unsigned long ul) {
  if (ul != 0x00200000ul)
    return True();
  else
    return False();
}
int ne_00200001(unsigned long ul) {
  if (ul != 0x00200001ul)
    return True();
  else
    return False();
}

int ne_003fffff(unsigned long ul) {
  if (ul != 0x003ffffful)
    return True();
  else
    return False();
}
int ne_00400000(unsigned long ul) {
  if (ul != 0x00400000ul)
    return True();
  else
    return False();
}
int ne_00400001(unsigned long ul) {
  if (ul != 0x00400001ul)
    return True();
  else
    return False();
}

int ne_007fffff(unsigned long ul) {
  if (ul != 0x007ffffful)
    return True();
  else
    return False();
}
int ne_00800000(unsigned long ul) {
  if (ul != 0x00800000ul)
    return True();
  else
    return False();
}
int ne_00800001(unsigned long ul) {
  if (ul != 0x00800001ul)
    return True();
  else
    return False();
}

int ne_00ffffff(unsigned long ul) {
  if (ul != 0x00fffffful)
    return True();
  else
    return False();
}
int ne_01000000(unsigned long ul) {
  if (ul != 0x01000000ul)
    return True();
  else
    return False();
}
int ne_01000001(unsigned long ul) {
  if (ul != 0x01000001ul)
    return True();
  else
    return False();
}

int ne_01ffffff(unsigned long ul) {
  if (ul != 0x01fffffful)
    return True();
  else
    return False();
}
int ne_02000000(unsigned long ul) {
  if (ul != 0x02000000ul)
    return True();
  else
    return False();
}
int ne_02000001(unsigned long ul) {
  if (ul != 0x02000001ul)
    return True();
  else
    return False();
}

int ne_03ffffff(unsigned long ul) {
  if (ul != 0x03fffffful)
    return True();
  else
    return False();
}
int ne_04000000(unsigned long ul) {
  if (ul != 0x04000000ul)
    return True();
  else
    return False();
}
int ne_04000001(unsigned long ul) {
  if (ul != 0x04000001ul)
    return True();
  else
    return False();
}

int ne_07ffffff(unsigned long ul) {
  if (ul != 0x07fffffful)
    return True();
  else
    return False();
}
int ne_08000000(unsigned long ul) {
  if (ul != 0x08000000ul)
    return True();
  else
    return False();
}
int ne_08000001(unsigned long ul) {
  if (ul != 0x08000001ul)
    return True();
  else
    return False();
}

int ne_0fffffff(unsigned long ul) {
  if (ul != 0x0ffffffful)
    return True();
  else
    return False();
}
int ne_10000000(unsigned long ul) {
  if (ul != 0x10000000ul)
    return True();
  else
    return False();
}
int ne_10000001(unsigned long ul) {
  if (ul != 0x10000001ul)
    return True();
  else
    return False();
}

int ne_1fffffff(unsigned long ul) {
  if (ul != 0x1ffffffful)
    return True();
  else
    return False();
}
int ne_20000000(unsigned long ul) {
  if (ul != 0x20000000ul)
    return True();
  else
    return False();
}
int ne_20000001(unsigned long ul) {
  if (ul != 0x20000001ul)
    return True();
  else
    return False();
}

int ne_3fffffff(unsigned long ul) {
  if (ul != 0x3ffffffful)
    return True();
  else
    return False();
}
int ne_40000000(unsigned long ul) {
  if (ul != 0x40000000ul)
    return True();
  else
    return False();
}
int ne_40000001(unsigned long ul) {
  if (ul != 0x40000001ul)
    return True();
  else
    return False();
}

int ne_7fffffff(unsigned long ul) {
  if (ul != 0x7ffffffful)
    return True();
  else
    return False();
}
int ne_80000000(unsigned long ul) {
  if (ul != 0x80000000ul)
    return True();
  else
    return False();
}
int ne_80000001(unsigned long ul) {
  if (ul != 0x80000001ul)
    return True();
  else
    return False();
}

int ne_ffffffff(unsigned long ul) {
  if (ul != 0xfffffffful)
    return True();
  else
    return False();
}

static unsigned long ul;
int main() {
  ul = 0x00000000ul;
  my_assert(ne_00000000(ul) != 1);
  my_assert(ne_00000001(ul) == 1);

  ul = 0x00000001ul;
  my_assert(ne_00000000(ul) == 1);
  my_assert(ne_00000001(ul) != 1);
  my_assert(ne_00000002(ul) == 1);

  ul = 0x00000002ul;
  my_assert(ne_00000001(ul) == 1);
  my_assert(ne_00000002(ul) != 1);
  my_assert(ne_00000003(ul) == 1);

  ul = 0x00000004ul;
  my_assert(ne_00000003(ul) == 1);
  my_assert(ne_00000004(ul) != 1);
  my_assert(ne_00000005(ul) == 1);

  ul = 0x00000008ul;
  my_assert(ne_00000007(ul) == 1);
  my_assert(ne_00000008(ul) != 1);
  my_assert(ne_00000009(ul) == 1);

  ul = 0x00000010ul;
  my_assert(ne_0000000f(ul) == 1);
  my_assert(ne_00000010(ul) != 1);
  my_assert(ne_00000011(ul) == 1);

  ul = 0x00000020ul;
  my_assert(ne_0000001f(ul) == 1);
  my_assert(ne_00000020(ul) != 1);
  my_assert(ne_00000021(ul) == 1);

  ul = 0x00000040ul;
  my_assert(ne_0000003f(ul) == 1);
  my_assert(ne_00000040(ul) != 1);
  my_assert(ne_00000041(ul) == 1);

  ul = 0x00000080ul;
  my_assert(ne_0000007f(ul) == 1);
  my_assert(ne_00000080(ul) != 1);
  my_assert(ne_00000081(ul) == 1);

  ul = 0x00000100ul;
  my_assert(ne_000000ff(ul) == 1);
  my_assert(ne_00000100(ul) != 1);
  my_assert(ne_00000101(ul) == 1);

  ul = 0x00000200ul;
  my_assert(ne_000001ff(ul) == 1);
  my_assert(ne_00000200(ul) != 1);
  my_assert(ne_00000201(ul) == 1);

  ul = 0x00000400ul;
  my_assert(ne_000003ff(ul) == 1);
  my_assert(ne_00000400(ul) != 1);
  my_assert(ne_00000401(ul) == 1);

  ul = 0x00000800ul;
  my_assert(ne_000007ff(ul) == 1);
  my_assert(ne_00000800(ul) != 1);
  my_assert(ne_00000801(ul) == 1);

  ul = 0x00001000ul;
  my_assert(ne_00000fff(ul) == 1);
  my_assert(ne_00001000(ul) != 1);
  my_assert(ne_00001001(ul) == 1);

  ul = 0x00002000ul;
  my_assert(ne_00001fff(ul) == 1);
  my_assert(ne_00002000(ul) != 1);
  my_assert(ne_00002001(ul) == 1);

  ul = 0x00004000ul;
  my_assert(ne_00003fff(ul) == 1);
  my_assert(ne_00004000(ul) != 1);
  my_assert(ne_00004001(ul) == 1);

  ul = 0x00008000ul;
  my_assert(ne_00007fff(ul) == 1);
  my_assert(ne_00008000(ul) != 1);
  my_assert(ne_00008001(ul) == 1);

  ul = 0x00010000ul;
  my_assert(ne_0000ffff(ul) == 1);
  my_assert(ne_00010000(ul) != 1);
  my_assert(ne_00010001(ul) == 1);

  ul = 0x00020000ul;
  my_assert(ne_0001ffff(ul) == 1);
  my_assert(ne_00020000(ul) != 1);
  my_assert(ne_00020001(ul) == 1);

  ul = 0x00040000ul;
  my_assert(ne_0003ffff(ul) == 1);
  my_assert(ne_00040000(ul) != 1);
  my_assert(ne_00040001(ul) == 1);

  ul = 0x00080000ul;
  my_assert(ne_0007ffff(ul) == 1);
  my_assert(ne_00080000(ul) != 1);
  my_assert(ne_00080001(ul) == 1);

  ul = 0x00100000ul;
  my_assert(ne_000fffff(ul) == 1);
  my_assert(ne_00100000(ul) != 1);
  my_assert(ne_00100001(ul) == 1);

  ul = 0x00200000ul;
  my_assert(ne_001fffff(ul) == 1);
  my_assert(ne_00200000(ul) != 1);
  my_assert(ne_00200001(ul) == 1);

  ul = 0x00400000ul;
  my_assert(ne_003fffff(ul) == 1);
  my_assert(ne_00400000(ul) != 1);
  my_assert(ne_00400001(ul) == 1);

  ul = 0x00800000ul;
  my_assert(ne_007fffff(ul) == 1);
  my_assert(ne_00800000(ul) != 1);
  my_assert(ne_00800001(ul) == 1);

  ul = 0x01000000ul;
  my_assert(ne_00ffffff(ul) == 1);
  my_assert(ne_01000000(ul) != 1);
  my_assert(ne_01000001(ul) == 1);

  ul = 0x02000000ul;
  my_assert(ne_01ffffff(ul) == 1);
  my_assert(ne_02000000(ul) != 1);
  my_assert(ne_02000001(ul) == 1);

  ul = 0x04000000ul;
  my_assert(ne_03ffffff(ul) == 1);
  my_assert(ne_04000000(ul) != 1);
  my_assert(ne_04000001(ul) == 1);

  ul = 0x08000000ul;
  my_assert(ne_07ffffff(ul) == 1);
  my_assert(ne_08000000(ul) != 1);
  my_assert(ne_08000001(ul) == 1);

  ul = 0x10000000ul;
  my_assert(ne_0fffffff(ul) == 1);
  my_assert(ne_10000000(ul) != 1);
  my_assert(ne_10000001(ul) == 1);

  ul = 0x20000000ul;
  my_assert(ne_1fffffff(ul) == 1);
  my_assert(ne_20000000(ul) != 1);
  my_assert(ne_20000001(ul) == 1);

  ul = 0x40000000ul;
  my_assert(ne_3fffffff(ul) == 1);
  my_assert(ne_40000000(ul) != 1);
  my_assert(ne_40000001(ul) == 1);

  ul = 0x80000000ul;
  my_assert(ne_7fffffff(ul) == 1);
  my_assert(ne_80000000(ul) != 1);
  my_assert(ne_80000001(ul) == 1);

  ul = 0xfffffffful;
  my_assert(ne_ffffffff(ul) != 1);

  return exit_status;
}
