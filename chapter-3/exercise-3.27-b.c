#include <stdio.h>

int main() {
  int counter = 0, number, smallest, secondSmallest;

  while ( counter < 10 ) {
    printf( "Enter a number: \n" );
    scanf( "%d", &number );

    if ( number < smallest ) {
      secondSmallest = smallest;
      smallest = number;
    }

    if ( number > smallest ) {
      if ( number < secondSmallest ) {
        secondSmallest = number;
      }
    }

    counter++;
  }

  printf("The smallest number is %d\n", smallest );
  printf("The second smallest number is %d\n", secondSmallest );

  return 0;
}
