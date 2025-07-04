
//
//  or.and.t   Dc, Da, pos1, Db, pos2
//  Dc = {Dc[31:1], Dc[0] or (Da[pos1] and Db[pos2])}  
//
//  Dc31_1 = (Dc & 0xfffffffe)
//  Dc0    = (Dc & 0x1)
//  DaPos1 = ((Da >> pos1) & 1)
//  DbPos2 = ((Db >> pos2) & 1)
//
//  Result:
//  (Dc31_1           | (Dc0        | (DaPos1             & DbPos1)))
//  (Dc & 0xfffffffe) | ((Dc & 0x1) | (((Da >> pos1) & 1U) & ((Db >> pos2) & 1U)))
//
#include <stdio.h>
#include <string.h>

int main() {
  for (unsigned pos1 = 0; pos1 < 32; pos1++) {
    for (unsigned pos2 = 0; pos2 < 32; pos2++) {
      printf("unsigned int or_and_t_%d_%d(unsigned int c, unsigned int a, unsigned int b) {\n", pos1, pos2);
      printf("  return ((c & 0xfffffffeU) | ((c & 0x1U) | (((a >> %uU) & 1U) & ((b >> %uU) & 1U))));\n", pos1, pos2);
      printf("}\n");
    }
  }

  printf("\n#include \"my_assert.h\"\n\n");
  printf("int exit_status = 0;\n\n");
  printf("int main() {\n");

  unsigned int c, b, a;
  for (unsigned pos1 = 0; pos1 < 32; pos1++) {
    for (unsigned pos2 = 0; pos2 < 32; pos2++) {

      c = 0xa5a5a5a5u; a = 0xa5a5a5a5u; b = 0xa5a5a5a5u;
      printf("  my_assert(or_and_t_%u_%u(0x%08xU, 0x%08xU, 0x%08xU) == ", pos1, pos2, c, a, b);
      printf("0x%08xU);\n", ((c & 0xfffffffeU) | ((c & 0x1U) | (((a >> pos1) & 1U) & ((b >> pos2) & 1U)))));

      c = 0xa5a5a5a5u; a = 0xa5a5a5a5u; b = 0x5a5a5a5au;
      printf("  my_assert(or_and_t_%u_%u(0x%08xU, 0x%08xU, 0x%08xU) == ", pos1, pos2, c, a, b);
      printf("0x%08xU);\n", ((c & 0xfffffffeU) | ((c & 0x1U) | (((a >> pos1) & 1U) & ((b >> pos2) & 1U)))));

      c = 0xa5a5a5a5u; a = 0x5a5a5a5au; b = 0xa5a5a5a5u;
      printf("  my_assert(or_and_t_%u_%u(0x%08xU, 0x%08xU, 0x%08xU) == ", pos1, pos2, c, a, b);
      printf("0x%08xU);\n", ((c & 0xfffffffeU) | ((c & 0x1U) | (((a >> pos1) & 1U) & ((b >> pos2) & 1U)))));

      c = 0xa5a5a5a5u; a = 0x5a5a5a5au; b = 0x5a5a5a5au;
      printf("  my_assert(or_and_t_%u_%u(0x%08xU, 0x%08xU, 0x%08xU) == ", pos1, pos2, c, a, b);
      printf("0x%08xU);\n", ((c & 0xfffffffeU) | ((c & 0x1U) | (((a >> pos1) & 1U) & ((b >> pos2) & 1U)))));
    }
  }
  printf("}");

  return 0;
}

