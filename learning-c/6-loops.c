#include <stdio.h>

int main()
{
  for (int i = 0; i < 10; i++)
  {
    if (i == 9)
    {
      break;
    }

    printf("%d\n", i);
  }

  int j = 0;

  while (j < 10)
  {
    j++;

    if (j == 7)
    {
      continue;
    }
    printf("%d\n", j);
  }

  return 0;
}