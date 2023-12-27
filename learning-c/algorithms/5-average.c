#include <assert.h>

int average(int val1, int val2, int val3)
{
  return (val1 + val2 + val3) / 3;
}

int main()
{
  assert(7 == average(6, 7, 8));
  assert(9 == average(10, 10, 7));

  return 0;
}