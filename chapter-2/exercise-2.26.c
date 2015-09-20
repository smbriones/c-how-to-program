// Exercises 2.26
// (Multiples) Write a program that reads in two integers and determines and
// prints if the first is a multiple of the second. [Hint: Use the remainder
// operator.]

#include <stdio.h>

int main() {
  int num1, num2;

  printf( "Enter two numbers: \n" );
  scanf( "%d%d", &num1, &num2 );

  if ( num2 % num1 == 0 ) {
    printf( "%d is a multiple of %d\n", num2, num1 );
  } else {
    printf( "%d is not a multiple of %d\n", num2, num1 );
  }

  return 0;
}
