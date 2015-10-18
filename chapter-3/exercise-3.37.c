// Exercise 3.37
// (How Fast is Your Computer?)
// How can you determine how fast your own computer really operates? Write a
// program with a while loop that counts from 1 to 300,000,000 by 1s. Every
// time the count reaches a multiple of 100,000,000, print that number on the
// screen. Use your watch to time how long each 100 million repetitions of the
// loop takes.

#include <stdio.h>

int main() {
  int i = 0;
  int x = 100000000;
  int y = 200000000;
  int z = 300000000;

  while ( i <= z ) {
    if ( i == x ) {
      printf("%d\n", x );
    }
    if ( i == y ) {
      printf("%d\n", y );
    }
    if ( i == z) {
      printf("%d\n", z );
    }
    i++;
  }

  return 0;
}
