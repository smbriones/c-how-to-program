// Exercises 2.16
// (Arithmetic) Write a program that asks the user to enter two numbers, obtains
// them from the user and prints their sum, product, difference, quotient, and
// remainder.

#include <stdio.h>

int main()
{
  int x, y, sum, product, difference, quotient, remainder;

  printf( "Please enter two numbers.\n" );
  scanf( "%d%d", &x, &y );

  sum = x + y;
  printf( "The sum of %d and %d is %d.\n", x, y, sum );

  product = x * y;
  printf( "The product is %d.\n", product );

  difference = x - y;
  printf( "The difference of %d and %d is %d.\n", x, y, difference );

  quotient = x / y;
  printf( "The quotient is %d.\n", quotient );

  remainder = x % y;
  printf( "The remainder of %d and %d is %d.\n", x, y, remainder);

  return 0;
}
