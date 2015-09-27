// Exercise 3.27
// (Find the two Largest Numbers) Using an approach similar to Exercise 3.24,
// find the two largest values of the ten numbers.
// [Note: You may input each number only once.]

#include <stdio.h>

int main() {
  int counter = 0, number = 0, largest = 0, secondLargest = 0;

  while ( counter < 10 ) {
    printf( "Enter a number: \n" );
    scanf( "%d", &number );

    if ( number > largest ) {
      secondLargest = largest;
      largest = number;
    }

    if ( number < largest ) {
      if ( number > secondLargest ) {
        secondLargest = number;
      }
    }

    counter++;
  }

  printf( "The largest number is %d\n", largest );
  printf( "The second largest number is %d\n", secondLargest );

  return 0;
}
