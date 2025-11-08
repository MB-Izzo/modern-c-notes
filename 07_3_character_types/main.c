#include <stdio.h>
int main()
{
  int len = 0;
  printf("enter a string: ");
  while (getchar() != '\n') {
    len++;
  }
  printf("len of inputted string is: %d", len);
  return 1;
}
