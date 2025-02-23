#include <stdio.h>
int main() {

  int myAge = 25;
  int * ptr = &myAge;

  printf("le pointer de la variable my age : %p\n", ptr);
    
  return 0;
}
