// Exercise 3.28
// (Validating User Input) Modify the program in Figure 3.10 to validate its
// inputs. On any input, if the value entered is other than 1 or 2, keep looping
// until the user enters a correct value.

#include <stdio.h>

int main() {
  int number = 0, sum = 0, z = 100;

  while ( z >= 0 ) {
    printf("Enter a number: ");
    scanf("%d", &number );

    if ( number == 1 ) {
      return 0;
    }

    if ( number == 2 ) {
      return 0;

    }
    sum += z;
  }

  return 0;
}
