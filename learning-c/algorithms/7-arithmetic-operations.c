#include <assert.h>

int sum(int num1, int num2)
{
  return num1 + num2;
}

int sub(int num1, int num2)
{
  return num1 - num2;
}

int mult(int num1, int num2)
{
  return num1 * num2;
}

int div(int num1, int num2)
{
  return num1 / num2;
}

int main()
{

  int num = 10;

  assert(12 == sum(num, 2));
  assert(8 == sub(num, 2));
  assert(20 == mult(num, 2));
  assert(5 == div(num, 2));

  return 0;
}