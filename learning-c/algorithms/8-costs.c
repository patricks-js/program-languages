#include <assert.h>

/**
 * Formula: cfinal = cf + (cf * pd) + (cf * tax)
 */

float finalCost(int initialValue)
{
  const float tax = (float)45 / 100;
  const float pd = (float)28 / 100;

  return initialValue + (initialValue * pd) + (initialValue * tax);
}

int main()
{
  assert(finalCost(10000) == 17300.0f);

  return 0;
}