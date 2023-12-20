#include <stdio.h>

int main()
{
  int arr[5] = {4, 67, 24, 78, 1};

  long arrSize = sizeof(arr);

  int arrLength = arrSize / sizeof(arr[0]);

  printf("Total byte value: %lu\n", arrSize);
  printf("Array length: %d\n", arrLength);

  return 0;
}