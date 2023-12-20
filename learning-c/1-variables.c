#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main()
{
  /**
   * Primitibe data types
   * * Integers - 68, 9, -12, 0 (4 bytes)
   * * Float points - 5.6, 13.234, -7.0 (4 bytes)
   * * Characters - 'a', '*', '4' (1 byte) // ! Invalid chars 'ab', '143'
   * * Strings - "Hello", "12312", "Lorem Ipsum" // ? String have no text size limitations
   * * Unsigned (type) - only positives integers
   */

  // Interger
  int age = 20;

  // Float
  float height = 1.73f;
  float weight = 78.32f;

  // Char
  char at = '@';

  printf("Int - %d\n", age);      // Use %d for print integer numbers
  printf("Float - %f\n", height); // Use %f for print float point numbers
  printf("Float - %f\n", weight);
  printf("Char - %c\n", at); // Use %c for print characteres

  return 0;
}