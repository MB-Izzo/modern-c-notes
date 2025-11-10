#include <stdio.h>

#define SIZE 2

int main() {
  int a[SIZE] = {8, 3};
  int b = a[0]; // = 8
  
  int* c = &a[0]; // address of element 0, same as a
  int* d = a; // address of element 0
  
  int** e = &d; // pointer to address of d

  printf("%d, %d, %d, %d\n", b, *c, *d, **e);

  int sum = 0;
  for (int i = 0; i < SIZE; i++) {
    sum += *(a+i); //same as a[i]
  }
  printf("sum: %d\n", sum);

  int sum2 = 0;
  for (; c < a+SIZE;) { // could be a while.
    sum2 += *c++; 
  }
  printf("sum2: %d\n", sum2);

  int sum3 = 0;
  for (int* o = a; o < a+SIZE; o++)
  {
    sum3 += *o;
  }
  printf("sum3: %d", sum3);

  return 0;
}
