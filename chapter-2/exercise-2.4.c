#include <stdio.h>

int main()
{
  // Exercises 2.4
  // Write a statement (or comment) to accomplish each of the following:
  // a) State that a program will calculate the product of three integers.
  /* Calculate the product of three integers */

  // b) Define the variables x, y, z, and result to be of type int.
  int x, y, z, result;

  // c) Prompt the user to enter three integers.
  printf( "Enter three integers: " );

  // d) Read three integers from the keyboard and store them in the variables x, y, and z.
  scanf( "%d%d%d", &x, &y, &z );

  // e) Compute the product of the three integers contained in variables x, y, and z,
  //    and assign the result to the variable result.
  result = x * y * z;

  // f) Print "The product is" followed by the value of the integer variable result.
  printf( "The product is %d.\n", result );

  return 0;
}
