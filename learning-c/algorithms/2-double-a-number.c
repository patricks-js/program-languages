#include <assert.h>
#include <stdio.h>

int double_a_number(int num)
{
  return num * 2;
}

int main()
{
  assert(double_a_number(5) == 10);
  assert(double_a_number(6) == 12);
  assert(double_a_number(2) == 4);
  assert(double_a_number(1) == 2);

  return 0;
}
