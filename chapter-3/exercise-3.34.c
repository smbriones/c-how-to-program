// Exercise 3.34
// (Hollow Square of Asterisks) Modify the program you wrote in 3.33 so that it
// prints a hollow square.
// 0123        line       side = 4
// ****         0
// *  *         1
// *  *         2
// ****         3         side - 1

#include <stdio.h>

int main() {
  int line = 0, side, stars;

  printf("What size is your square?\n");
  scanf("%d", &side );

  while (line < side) {
    stars = 0;
    while (stars < side) {
      if ( line == 0 || line == side - 1 || stars == 0 || stars == side - 1 ) {
        printf("*");
      } else {
        printf(" ");
      }
      stars++;
    }
    printf("\n");
    line++;
  }

  return 0;
}
