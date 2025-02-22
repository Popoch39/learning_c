//https://www.learn-c.org/en/Arrays
#include <limits.h>
#include <stdio.h>
int main() {
  int grades[3];
  int average;

  grades[0] = 500000000;
  grades[1] = 50;
  grades[2] = 50;
  
  // sizeof(grades) is gonna be 12 cause 4bytes by 3 is 12 DUH
  // 8 x 12 == mon array fait 96 bit
  printf("size in bytes of my array %lu\n", sizeof(grades));
  printf("size in of bit my array %lu\n", CHAR_BIT * sizeof(grades));
  int size = sizeof(grades) / sizeof(grades[0]);
  average = (grades[0] + grades[1] + grades[2]) / size;

  printf("the averages grades a are %i\n", average);
  return 0;
}
