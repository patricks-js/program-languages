#include <assert.h>

int days_per_month(int months)
{
  return months * 30;
}

int main()
{
  assert(days_per_month(7) == 210);
  assert(days_per_month(12) == 360);

  return 0;
}