#include <stdio.h>
#include <assert.h>

//
// Função que retorna o valor da área
//
int area(int side1, int side2)
{
  return side1 * side2;
}

//
// testes
//
int main()
{
  assert(27 == area(3, 9));
  return 0;
}