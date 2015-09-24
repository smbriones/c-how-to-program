// For exercises 3.17 to 3.21, perform each of these steps:
// 1. Read the problem statement.
// 2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
// 3. Write a C program.
// 4. Test, debug, and execute the C program.
//
// Exercise 3.20
// (Interest Calculator) The simple interest on a loan is calculated by the
// formula: interest = principal * rate * days / 365;
// The preceding formula assumes that rate is the annual interest rate, and
// therefore includes the division by 365 (days). Develop a program that will
// input pricipal, rate, and days for several loans, and will calculate and
// display the simple interest for each loan, using the preceding formula.

// 2. Pseudocode
//    Calculate the interest charge of a given loan
//    While the user has not entered the sentinel
//        Input the loan principal
//        Input the interest rate
//        Input the term of the loan in days
//        Print the interest charge
//    end while

#include <stdio.h>
#include <stdbool.h>

int main() {
  int days;
  float principal, rate, interest;

  while(true) {
    printf( "Enter the loan principal (-1 to end): " );
    scanf("%f", &principal );
    if ( principal == -1 ) {
      return 0;
    }
    printf("Enter interest rate: ");
    scanf("%f", &rate );
    printf( "Enter term of the loan in days: " );
    scanf("%d", &days );

    interest = principal * rate * days / 365;
    printf("The interest charge is $%.2f\n", interest );
  }

  return 0;
}
