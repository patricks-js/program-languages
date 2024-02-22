#include <assert.h>
#include <stdio.h>

float salary_adjust(float salary, float tax)
{
  return (salary * tax) + salary;
}

int main()
{
  assert(salary_adjust(1000.0f, 0.15f) == 1150.0f);

  return 0;
}
