#include <assert.h>

float simple_interest(int capital, float tax, int term)
{
  float interest = capital * tax * term;

  return interest;
}

int main()
{
  assert(simple_interest(16000, 0.04, 4) == 2560);

  return 0;
}