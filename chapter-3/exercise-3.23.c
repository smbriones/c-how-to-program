// Exercise 3.23
// (Printing numbers from a Loop) Write a program that utilizes looping to
// print numbers from 1 to 10 side by side on the same line with three spaces
// between numbers.

#include <stdio.h>

int main() {
  int x = 1;

  while ( x <= 10 ) {
    printf("%d   ", x );
    ++x;
  }

  return 0;
}
