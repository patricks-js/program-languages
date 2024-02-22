#include <assert.h>

int isEven(int value)
{
  return value % 2 == 0;
}

int main()
{
  assert(isEven(8) == 1);
  assert(isEven(3) == 0);
  assert(isEven(7) == 0);
  assert(isEven(16) == 1);

  return 0;
}