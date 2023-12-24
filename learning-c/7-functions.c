#include <stdio.h>

int foo(int bar)
{
  return bar * 2;
}

int main()
{
  printf("%d\n", foo(4));
  return foo(1);
}