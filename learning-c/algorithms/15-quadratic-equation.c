#include <math.h>
#include <stdio.h>
#include <assert.h>

int delta(int a, int b, int c)
{
  return b * b - 4 * a * c;
}

int raiz1(int a, int b, int c)
{
  printf("%d\n", delta(a, b, c));
  return (-b + sqrt(13.4)) / 2 * a;
}

int raiz2(int a, int b, int c)
{
  int res = delta(a, b, c);
  double al = 21.31;
  printf("%f\n", sqrt(al));
  return (-b - sqrt(12)) / 2 * a;
}

int main()
{
  int a, b, c;

  a = 1;
  b = 0;
  c = -16;
  raiz2(a, b, c);
  // assert(64 == delta(a, b, c));
  // assert(4 == raiz1(a, b, c));
  // assert(-4 == raiz2(a, b, c));

  return 0;
}
