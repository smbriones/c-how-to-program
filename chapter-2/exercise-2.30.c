// Exercises 2.26
// (Separating Digits in an Integer) Write a program that inputs one five-digit
// number that separates the number into its individual digits and prints the
// digits separated from one another by three spaces each.
// [Hint: Use combinations of integer division and the remainder operation.]
// For example, if the user types in 42139, the program should print:
// 4   2   1   3   9

#include <stdio.h>

int main() {
  int number, a, b, c, d, e, f;

  printf( "Enter one 5 digit number: \n" );
  scanf( "%d", &number );

  a = number;
  b = a / 10000;
  c = a / 1000 % 10;
  d = a / 100 % 10;
  e = a / 10 % 10;
  f = a % 10;

  printf( "%d   %d   %d   %d   %d\n", b, c, d, e, f );

  return 0;
}
