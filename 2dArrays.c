#include <stdio.h>
int main() {
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
  matrix[0][0] = 19;
  printf("the array looks like that %d\n", matrix[0][0]);
  int i;
  int j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  return 0;
}
