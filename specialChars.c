#include <stdio.h>
int main() {
  char txt[] = "we are called \"vikings\" ! ";
  char al[] = "it\'s alright";
  char bs[] = "un petit \0 test";
  printf("%s\n", txt);
  printf("%s\n", al);
  printf("%s\n", bs);
  return 0;
}
