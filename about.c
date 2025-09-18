
#include <stdio.h>

int isBigEndian() {
  int x = 1;
  return (*(char*)&x != 1);
}

int main() {
  printf("This is a %s endian machine.\n", isBigEndian() ? "big" : "little");

  printf("sizeof(unsigned char) = %lu\n", sizeof(unsigned char));
  printf("sizeof(char) = %lu\n", sizeof(char));
  printf("sizeof(signed char) = %lu\n", sizeof(signed char));

  printf("sizeof(unsigned short) = %lu\n", sizeof(unsigned short));
  printf("sizeof(short) = %lu\n", sizeof(short));
  printf("sizeof(signed short) = %lu\n", sizeof(signed short));

  printf("sizeof(unsigned int) = %lu\n", sizeof(unsigned int));
  printf("sizeof(int) = %lu\n", sizeof(int));
  printf("sizeof(signed int) = %lu\n", sizeof(signed int));

  printf("sizeof(unsigned long) = %lu\n", sizeof(unsigned long));
  printf("sizeof(long) = %lu\n", sizeof(long));
  printf("sizeof(signed long) = %lu\n", sizeof(signed long));

  printf("sizeof(unsigned long long) = %lu\n", sizeof(unsigned long long));
  printf("sizeof(long long) = %lu\n", sizeof(long long));
  printf("sizeof(signed long long) = %lu\n", sizeof(signed long long ));

  printf("sizeof(float) = %lu\n", sizeof(float));

  printf("sizeof(double) = %lu\n", sizeof(double));

  printf("sizeof(long double) = %lu\n", sizeof(long double));
}
