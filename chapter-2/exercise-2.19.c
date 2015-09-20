// Exercises 2.19
// (Arithmetic, Largest value and Smallest Value) Write a program that inputs
// three different integers from the keyboard, then prints the sum, the average,
// the product, the smallest, and the largest of these numbers. Use only the
// single selection form of the if statement you learned in this chapter. The
// screen dialog should appear as follows:
//
// Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include <stdio.h>

int main() {
  int x, y, z, sum, average, product;

  printf( "Input three different integers: ");
  scanf( "%d%d%d", &x, &y, &z );

  sum = x + y + z;
  printf("Sum is %d\n", sum );

  average = (x + y + z ) / 3;
  printf("Average is %d\n", average );

  product = x * y * z;
  printf("Product is %d\n", product );

  if ( x < y ) {
    if ( x < z ) {
      printf("Smallest is %d\n", x );
    }
  }

  if ( y < x ) {
    if ( y < z ) {
      printf("Smallest is %d\n", y );
    }
  }

  if ( z < x ) {
    if ( z < y ) {
      printf("Smallest is %d\n", z );
    }
  }

  if ( x > y ) {
    if ( x > z ) {
      printf("Largest is %d\n", x );
    }
  }

  if ( y > x ) {
    if ( y > z ) {
      printf("Largest is %d\n", y );
    }
  }

  if ( z > x ) {
    if ( z > y ) {
      printf("Largest is %d\n", z );
    }
  }
  
  return 0;
}
