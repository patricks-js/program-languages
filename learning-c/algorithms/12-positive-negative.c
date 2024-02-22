#include <assert.h>

int isPositive(int value)
{
  if (value == 0)
  {
    return -1;
  }
  else if (value > 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  assert(isPositive(100) == 1);
  assert(isPositive(0) == -1);
  assert(isPositive(-100) == 0);

  return 0;
}