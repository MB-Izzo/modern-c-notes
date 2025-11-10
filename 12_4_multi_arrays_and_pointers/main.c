#include <stdio.h>

#define COL 3
#define ROW 2

int main() {
  int md[ROW][COL] = {[0][0] = 1, [1][0] = 4};

  int rowToIterate = 1;
  int *p = md[rowToIterate]; // pointer to first row, same as md[1][0]
  // *p = md[0/1] is different from md as you will see on 2nd example.

  printf("iterating over row \n");
  // iterate through specific row
  for (; p < md[rowToIterate] + COL; p++) {
    printf("iterating over %d\n", *p);
  }
  printf("\n");

  printf("iterating over col \n");
  // Process a column
  int (*r)[COL]; // pointer to int array of size COL(3)
  for (r = &md[0]; r < &md[ROW]; r++) {
    printf("iterating over col 1: %d\n", (*r)[0]);
    // *r is an entire row, so (*r)[0] gets the first column value.

    // we must put the () because compiler would interpret
    // *r[0] as *(r[0])  which is like r[0] (which is an address)
    // This is what the book says, however when I do this it still
    // works so I'm not sure why.
    // printf("iterating over col 1 addresses: %p\n", *(r[0]));
    // printf("iterating over col 1: %d\n", *r[0]);
  }
  printf("\n");

  // same thing, different syntax! since &md[0] and md are the same.
  // They both point to int array of size COL.
  for (r = md; r < md + ROW; r++) {
    printf("iterating over col 1: %d\n", (*r)[0]);
  }
  return 0;
}
