// Exercise 3.26
// (Tabular Output) Write a program that utilizes looping to produce the
// following table of values.
// A      A+2     A+4     A+6
// 3      5       7       9
// 6      8       10      12
// 9      11      13      15
// 12     14      16      18
// 15     17      19      21

#include <stdio.h>

int main() {
  int n = 3, two = 2, four = 4, six = 6, a, b, c;

  printf("A\tA+2\tA+4\tA+6\n");

  while ( n <= 15 ) {
    printf("%d\t", n );
    a = n + two;
    printf("%d\t", a );
    b = n + four;
    printf("%d\t", b );
    c = n + six;
    printf("%d\n", c );
    n += 3;
  }

  return 0;
}
