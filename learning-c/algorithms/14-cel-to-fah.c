#include <assert.h>

int toFahrenheit(int celsius)
{
  return 32 + (celsius / 5) * 9;
}

int toCelsius(int fahrenheit)
{
  return ((fahrenheit - 32) / 9) * 5;
}

int main()
{
  int celsius = 100;
  int fahrenheit = 212;

  assert(celsius == toCelsius(fahrenheit));
  assert(fahrenheit == toFahrenheit(celsius));

  return 0;
}
