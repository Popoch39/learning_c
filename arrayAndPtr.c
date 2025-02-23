#include <stdio.h>
#include <string.h>
int main() {

  char louis[20] = "Louis salut";

  int len = strlen(louis);
  int i;
  for(i = 0; i < len; i++) {
    printf("size of char %lu\n", sizeof(*(louis + i)));
    printf("%c\n", *(louis + i));
  }
  return 0; 
}
