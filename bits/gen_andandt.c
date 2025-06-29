
//
//  and.and.t   Dc, Da, pos1, Db, pos2
//  Dc = {Dc[31:1], Dc[0] and (Da[pos1] and Db[pos2])}  
//
//  Dc31_1 = (Dc & 0xfffffffe)
//  Dc0    = (Dc & 0x1)
//  DaPos1 = ((Da >> pos1) & 1)
//  DbPos2 = ((Db >> pos2) & 1)
//
//  Result:
//  (Dc31_1           | (Dc0        & (DaPos1             & DbPos1)))
//  (Dc & 0xfffffffe) | ((Dc & 0x1) & (((Da >> pos1) & 1) & ((Db >> pos2) & 1)))
//
#include <stdio.h>

int main() {
  for (int pos1 = 0; pos1 < 32; pos1++) {
    for (int pos2 = 0; pos2 < 32; pos2++) {
      printf("unsigned int and_and_t_%d_%d(unsigned c, unsigned a, unsigned b) {\n", pos1, pos2);
      printf("  return ((c & 0xfffffffe) | ((c & 0x1) & (((a >> %d) & 1) & ((b >> %d) & 1))));\n", pos1, pos2);
      printf("}\n");
    }
  }

  printf("\n#include \"my_assert.h\"\n\n");
  printf("int exit_status = 0;\n\n");
  printf("int main() {\n");

  unsigned c, b, a;
  for (int pos1 = 0; pos1 < 32; pos1++) {
    for (int pos2 = 0; pos2 < 32; pos2++) {

      c = 0xa5a5a5a5; a = 0xa5a5a5a5; b = 0xa5a5a5a5;
      printf("  my_assert(and_and_t_%d_%d(0x%08x, 0x%08x, 0x%08x) == ", pos1, pos2, c, b, a);
      printf("0x%08x);\n", ((c & 0xfffffffe) | ((c & 0x1) & (((a >> pos1) & 1) & ((b >> pos2) & 1)))));

      c = 0xa5a5a5a5; a = 0xa5a5a5a5; b = 0x5a5a5a5a;
      printf("  my_assert(and_and_t_%d_%d(0x%08x, 0x%08x, 0x%08x) == ", pos1, pos2, c, b, a);
      printf("0x%08x);\n", ((c & 0xfffffffe) | ((c & 0x1) & (((a >> pos1) & 1) & ((b >> pos2) & 1)))));

      c = 0xa5a5a5a5; a = 0x5a5a5a5a; b = 0xa5a5a5a5;
      printf("  my_assert(and_and_t_%d_%d(0x%08x, 0x%08x, 0x%08x) == ", pos1, pos2, c, b, a);
      printf("0x%08x);\n", ((c & 0xfffffffe) | ((c & 0x1) & (((a >> pos1) & 1) & ((b >> pos2) & 1)))));

      c = 0xa5a5a5a5; a = 0x5a5a5a5a; b = 0x5a5a5a5a;
      printf("  my_assert(and_and_t_%d_%d(0x%08x, 0x%08x, 0x%08x) == ", pos1, pos2, c, b, a);
      printf("0x%08x);\n", ((c & 0xfffffffe) | ((c & 0x1) & (((a >> pos1) & 1) & ((b >> pos2) & 1)))));

    }
  }
  printf("}");

}

