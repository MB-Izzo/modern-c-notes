#include <stdio.h>

#define SIZE_X 3
#define SIZE_Y 2

int main() {
  int md[3][3] = {[0][0] = 1}; // row major order
  // [row0][col1], [row0][col2], [row1][col1] etc

  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      printf("row: %d, col: %d: , value: %d\n", row, col, md[row][col]);
    }
  }

  const int map_size_x = 3;
  const int map_size_y = 2;
  int gameMap[SIZE_Y][SIZE_X] = {{1, 1, 0}, 
                                 {1, 0, 1}};

  for (int y = 0; y < map_size_y; y++) {
    for (int x = 0; x < map_size_x; x++) {
      printf("y %d, x %d, value: %d\n", y, x, gameMap[y][x]);
    }
  }
  return 0;
}
