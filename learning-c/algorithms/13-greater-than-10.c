#include <assert.h>

int greaterThan10(int value)
{
  if (value > 10)
  {
    return 1;
  }
  else
  {
    return 0;
  }

  return -1;
}

int main()
{
  assert(greaterThan10(12) == 1);
  assert(greaterThan10(-5) == 0);
  assert(greaterThan10(2) == 0);
  assert(greaterThan10(1312) == 1);

  return 0;
}