// Exercise 3.44
// (Sides of a Triangle) Write a program that reads three nonzero float values
// and determines and prints if they could represent the sides of a triangle.

#include <stdio.h>

int main() {
  float x, y, z;
  int num;

  printf( "Enter first value: \n" );
  scanf( "%f", &x );
  printf( "Enter second value: \n" );
  scanf( "%f", &y );
  printf( "Enter third value: \n" );
  scanf( "%f", &z );

  if ( x == y && x == z && z == y ) {
    printf( "Could be a triangle!\n" );
  } else {
    printf( "Not an equilateral triangle.\n" );
  }

  return 0;
}
