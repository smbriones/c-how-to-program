// Exercises 2.18
// (Comparing Integers) Write a program that asks the user to enter 2 integers,
// obtains the numbers from the user, then prints the larger number followed by
// the words "is larger." If the numbers are equal, print the message "These
// numbers are equal." Use only the single selection form of the if statement
// you learned in this chapter.

#include <stdio.h>

int main() {
  int integer1, integer2;

  printf( "Please enter two integers.\n" );
  scanf( "%d%d", &integer1, &integer2 );

  if ( integer1 > integer2 ) {
    printf( "%d is larger.\n", integer1 );
  }

  if ( integer2 > integer1 ) {
    printf( "%d is larger.\n", integer2 );
  }

  if ( integer1 == integer2 ) {
    printf("These numbers are equal.\n");
  }

  return 0;
}
