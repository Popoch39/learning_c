#include <stdio.h>
#define EXIT_SUCCESS 0
int main(int argc, char *argv[]) {

  char useInput[50];
  printf("type a string: \n");
  scanf("%s", useInput);

  printf("Hello %s\n", useInput);
  return EXIT_SUCCESS;

}
