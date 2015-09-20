// Exercises 2.17
// (Printing values with printf) Write a program that prints the numbers 1 to 4
// on the same line. Write the program using the following methods:

// a) Using one printf statement with no conversion specifiers.
// b) Using one printf statement with four conversion specifiers.
// c) Using four printf statements.

#include <stdio.h>

int main() {
  int x, y, z, a;

  // a
  printf( "1, 2, 3, 4\n" );

  x = 1;
  y = 2;
  z = 3;
  a = 4;

  // b
  printf( "%d, %d, %d, %d\n", x, y, z, a );

  // c
  printf("1, ");
  printf("2, ");
  printf("3, ");
  printf("4\n");

  return 0;
}
