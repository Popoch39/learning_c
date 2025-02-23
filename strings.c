#include <stdio.h>
int main() {

  char hello[] = "salut louis ! ";

  int size = sizeof(hello) / sizeof(hello[0]);
  int numb = 10; 
  printf("size of the number %lu\n", sizeof(numb));
  printf("size of the the string is %lu\n", sizeof(hello));
  printf("size of the the first element of the string is %lu\n", sizeof(hello[0]));
  printf("size of the array is %d\n", size);
  int i; 
  for(i = 0; i < size; i++){
    printf("%c\n", hello[i]) ;;
  }
  return 0;
}
