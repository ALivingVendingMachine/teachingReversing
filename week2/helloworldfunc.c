#include <stdio.h>

int printHello() {
  printf("Hello world!\n");
  return 1;
}

int main() { // This is the only good way to write functions.
  int a = 1 + 2;
  a = a + printHello();
  return a;
}