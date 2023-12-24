#include <stdio.h>

static int sum(int number)
{
  static int count = 0;
  count += number;
  return count;
}

int main()
{
  printf("%d\n", sum(2));
  printf("%d\n", sum(5));
  printf("%d\n", sum(7));
  printf("%d\n", sum(19));
  printf("%d\n", sum(5));
  printf("%d\n", sum(45));

  return 0;
}