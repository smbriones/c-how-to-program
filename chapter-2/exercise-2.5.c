// Exercises 2.5
// Using the statements you wrote in Exercise 2.4, write a complete program that calculates
// the product of three integers.

#include <stdio.h>

int main() {
  int x, y, z, result;

  printf( "Enter three integers: " );
  scanf("%d%d%d", &x, &y, &z );

  // I prefer this, but the book shows the above version.
  // printf( "Enter first integer: " );
  // scanf( "%d", &x );
  //
  // printf( "Enter second integer: " );
  // scanf( "%d", &y );
  //
  // printf( "Enter third integer: " );
  // scanf( "%d", &z );

  result = x * y * z;

  printf( "The product is %d.\n", result );

  return 0;
}
