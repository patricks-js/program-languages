#include <stdio.h>
#include <assert.h>

int prev(int num)
{
  return num - 1;
}

int next(int num)
{
  return num + 1;
}

int main()
{

  //
  // Testes
  //
  assert(9 == prev(10));
  assert(11 == next(10));

  return 0;
}