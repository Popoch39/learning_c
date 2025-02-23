#include <stdio.h>
#include <string.h>

int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int len = strlen(alphabet);
  printf("length of the string %d\n", len);
  printf("size of the string %lu\n", sizeof(alphabet));
  return 0;
}
