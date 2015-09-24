// For exercises 3.17 to 3.21, perform each of these steps:
// 1. Read the problem statement.
// 2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
// 3. Write a C program.
// 4. Test, debug, and execute the C program.
//
// Exercise 3.18
// (Credit Limit Calculator) Develop a C program that will determine if a
// department store customer has exceeded the credit limit on a charge account.
// For each customer the following facts are available:

// a) Account Number
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit

// The program should input each of these facts, calculate the new balance
// (= beginning balance + charges - credits), and determine if the new balance
// exceeds the customer's credit limit. For those whose credit limit is exceeded,
// the program should display the customer's account number, credit limit,
// new balance, and the message "Credit limit exceeded."

// 2. Pseudocode
//    Determine if a customer has exceeded their credit limit
//    While the user has not entered the sentinel
//        Input the customer's account number
//        Input the customer's balance at the beginning of the month
//        Input the customer's total charges for this month
//        Input the customer's total credits for this month
//        Input the customer's credit limit
//        Add the beginning balance to the charges this month and subtract any credits
//        If the new balance is greater than the customer's credit limit
//            Print the customer's account number, credit limit, new balance, and
//            the message "Credit limit exceeded."
//     end while


#include <stdio.h>
#include <stdbool.h>

int main() {
  int accountNumber;
  float beginningBalance, totalCharges, totalCredits, creditLimit, accountBalance;

  while(true) {
    printf( "Enter account number ( -1 to end ): " );
    scanf( "%d", &accountNumber );

    if ( accountNumber == -1 ) {
      return 0;
    }

    printf( "Enter beginning balance: " );
    scanf( "%f", &beginningBalance );
    printf( "Enter total charges: " );
    scanf( "%f", &totalCharges );
    printf( "Enter total credits: " );
    scanf( "%f", &totalCredits );
    printf( "Enter credit limit: " );
    scanf( "%f", &creditLimit );

    accountBalance = beginningBalance + totalCharges - totalCredits;

    if ( accountBalance > creditLimit ) {
      printf( "Account:\t%d\n", accountNumber );
      printf( "Credit Limit:\t%.2f\n", creditLimit );
      printf( "Balance:\t%.2f\n", accountBalance );
      printf( "Credit limit exceeded.\n" );
    }
  }

  return 0;
}
