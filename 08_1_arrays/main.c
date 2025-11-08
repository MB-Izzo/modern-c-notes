#include <stdio.h>
int main() {
  int a[10] = {1, 2, 3, 4,
               5, 6}; // other are 0 if initializer is shorter than the array.
  int b[] = {1, 2, 3}; // no need to specify len(3) if initializer.
  
  int c[15] = { [2] = 29, [9] = 7, [14] = 48}; // designators

  int d[] = { [24] = 0 }; // then d len is 25 (because theres index24)

  size_t lenOfA = sizeof(a) / sizeof(a[0]);
  // int sizeOfA = sizeof(a) / sizeof(int);
  printf("size of a is: %lu", lenOfA);
  return 0;
}
