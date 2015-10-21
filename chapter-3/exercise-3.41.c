// Exercise 3.41
// (Multiples of 2 with an Infinite Loop)
// Write a program that keeps printing the multiples of the integer 2, namely
// 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e. you
// should create an infinite loop). What happens when you run this program?

// The infinite loop stops after 31 and causes a seg fault when it runs out
// of memory.

#include <stdio.h>

int main() {
  int counter = 1, multiple;

  while ( counter > 0 ) {
    multiple = counter + counter;

    printf("%d\n", multiple );
    counter = multiple;
  }

  return 0;
}
