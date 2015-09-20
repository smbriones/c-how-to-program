// Exercises 2.21
// (Odd or Even) Write a program that reads an integer and determines and prints
// whether it is odd or even. [Hint: Use the remainder operator. Any even number
// is a multiple of two. Any multiple of two leaves a remainder of zero when
// divided by 2.]

#include <stdio.h>

int main() {
  int number;

  printf( "Enter an integer: \n" );
  scanf( "%d", &number );

  if ( number % 2 == 0 ) {
    printf( "%d is an even number.\n", number );
  } else {
    printf( "%d is an odd number. \n", number );
  }

  return 0;
}
