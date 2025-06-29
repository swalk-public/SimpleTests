
#include <stdio.h>
#include "inum.h"

int main() {
  for (int i = 0; i < sizeof(inum)/sizeof(unsigned int); i++) {
    printf("inum[%d] = 0x%08x\n", i, inum[i]);
  }
}

