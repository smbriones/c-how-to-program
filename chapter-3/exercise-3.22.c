// Exercise 3.22
// (Predecrementing vs. Postdecrementing) Write a program that demonstrates the difference between predecrementing and
// postdecrementing using the decrement operator --.

#include <stdio.h>

int main() {
  int x;

  x = 5;
  printf( "Predecrementing 5: \n" );
  printf( "%d\n", x );
  printf( "%d\n", --x );
  printf( "%d\n", x );

  x = 5;
  printf( "Postdecrementing 5: \n" );
  printf( "%d\n", x );
  printf( "%d\n", x-- );
  printf( "%d\n", x );

  return 0;
}
