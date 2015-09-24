// For exercises 3.17 to 3.21, perform each of these steps:
// 1. Read the problem statement.
// 2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
// 3. Write a C program.
// 4. Test, debug, and execute the C program.
//
// Exercise 3.19
// (Sales Commission Calculator) One large chemical company pays its salespeople
// on a commission basis. The salespeople recieve $200 per week plus 9% of their
// gross sales for that week. For example, a salesperson who sells $5000 worth
// of chemicals in a week, recieves $200 plus 9% of $5000, or a total of $650.
// Develop a program that will input each salesperson's gross sales for last week
// and will calculate and display that salesperson's earnings. Process one
// salesperson's figures at a time.

// 2. Pseudocode
//    Calculate salespeople's total earnings for the week
//    While the sentinel has not been entered by the user
//      Input salesperson's gross sales for last week
//      Calculate 9% of gross sales
//      Add $200 to 9% of gross sales
//      Print earnings
//    end while

#include <stdio.h>
#include <stdbool.h>

int main() {
  float sales, commission, earnings;

  while(true) {
    printf( "Enter sales in dollars ( -1 to end ): " );
    scanf( "%f", &sales );

    if ( sales == -1 ) {
      return 0;
    }

    commission = sales / 100 * 9;
    earnings = commission + 200;

    printf( "Salary is %.2f\n", earnings );
  }

  return 0;
}
