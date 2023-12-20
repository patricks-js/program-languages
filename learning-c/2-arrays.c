#include <stdio.h>

int main()
{
  int numbers[6] = {1, 2, 3, 4, 5, 6};

  char characteres[3];

  characteres[0] = 'a';
  characteres[1] = 'b';
  characteres[2] = 'c';

  printf("%d\n", numbers[3]);
  printf("%c\n", characteres[2]);

  return 0;
}