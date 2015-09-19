#include <stdio.h>

int main()
{
  // Exercises 2.3
  // Write a single C statement to accomplish each of the following:
  // a) Define the variables c, thisVariable, q76354, and number to be of type int.
  int c, thisVariable, q76354, number;
  int a; // defined for exercise c.

  // b) Prompt the user to enter an integer. End your prompting message with a colon
  //    followed by a space and leave the cursor positioned after the space.
  printf( "Enter an integer: " );

  // c) Read an integer from the keyboard and store the value entered in integer
  //    variable a.
  scanf("%d", &a);
  // scanf("%d", &number); added to temporarily make exercise d work.

  // d) If 'number' is not equal to 7, print "The variable number is not equal to 7."
  if (number != 7) {
    printf( "The variable %d is not equal to 7.\n", number );
  }

  // e) Print the message "This is a C program." on one line.
  printf( "This is a C program.\n" );

  // f) Print the message "This is a C program." on two lines so that the first line ends with C.
  printf( "This is a C\nprogram.\n" );

  // g) Print the message "This is a C program." with each word on a separate line.
  printf( "This\nis\na\nC\nprogram.\n" );

  // h) Print the message "This is a C program." with each word separated by tabs.
  printf( "This\tis\ta\tC\tprogram.\n" );
  
  return 0;
}
