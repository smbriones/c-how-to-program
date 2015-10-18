// Exercise 3.39
// (Counting 7s)
// Write a program that reads an integer and determines and prints how many
// digits in the integers are 7s.

#include <stdio.h>
int counter = 0;
int a, b, c, d, e, n;

int main() {
  printf( "Input a five-digit integer:\n" );
  scanf("%d", &n );

  a = n % 10;
  b = n / 10 % 10;
  c = n / 100 % 10;
  d = n / 1000 % 10;
  e = n / 10000;

  if ( a == 7 ) {
    counter++;
  }
  if ( b == 7 ) {
    counter++;
  }
  if ( c == 7 ) {
    counter++;
  }
  if ( d == 7 ) {
    counter++;
  }
  if ( e == 7 ) {
    counter++;
  }

  printf( "%d seven(s) in: %d\n", counter, n );

  return 0;
}
