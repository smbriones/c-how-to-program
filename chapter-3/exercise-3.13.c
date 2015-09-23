// Exercise 3.13
// What does the following program print?

#include <stdio.h>

int main() {
  int x = 1, total = 0, y;

  while ( x <= 10 ) {
    y = x * x;
    printf("%d\n", y );
    total += y;
    ++x;
  }
  printf("Total is %d\n", total );
  return 0;
}

// Prints:
// 1
// 4
// 9
// 16
// 25
// 36
// 49
// 64
// 81
// 100
// Total is 385
