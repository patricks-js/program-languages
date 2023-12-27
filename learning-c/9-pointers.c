#include <stdio.h>

int main()
{
  int a = 1;
  // * Integer named "a" is set to 1

  int *p_a = &a;
  // * Integer pointer named "p_a" (pointer to "a") is set to the address of "a";

  int b = *p_a;
  // * Integer named "b" is set to the thing pointed to by "p_a"

  a += 1;
  *p_a += 1;

  printf("%d\n", a);
  printf("%d\n", *p_a);
  printf("%d\n", b);

  return 0;
}