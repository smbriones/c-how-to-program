// Exercise 3.5
// Combine the statements that you wrote in Exercise 3.4 into a program that
// calculates the sum of integers from 1 to 10. Use the while statement to
// loop through the calculation and increment statements. The loop should
// terminate when the value of x becomes 11.

#include <stdio.h>

int main() {
  int sum, x;

  sum = 0;
  x = 1;

  while ( x <= 10 ) {
    sum += x;
    ++x;
  }

  printf( "The sum is: %d\n", sum );

  return 0;
}
