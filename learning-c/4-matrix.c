#include <stdio.h>

int main()
{
  int matrixA[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {8, 9, 0}};

  int matrixB[2][2];

  matrixB[0][0] = 1;
  matrixB[0][1] = 2;
  matrixB[1][0] = 3;
  matrixB[1][1] = 4;

  printf("Value 2x0 matrix A: %d\n", matrixA[2][0]);
  printf("Value 1x0 matrix B: %d\n", matrixB[1][0]);

  return 0;
}