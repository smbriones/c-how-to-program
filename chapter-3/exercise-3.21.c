// For exercises 3.17 to 3.21, perform each of these steps:
// 1. Read the problem statement.
// 2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
// 3. Write a C program.
// 4. Test, debug, and execute the C program.
//
// Exercise 3.20
// (Salary Calculator) Develop a program that will determine the gross pay for
// each of several employees. The company pays "straight time" for the first 40
// hours worked by each employee and "time-and-a-half" for all hours worked in
// excess of 40 hours. You're given a list of the employees of the company, the
// number of hours each employee worked last week and the hourly rate of each
// employee. Your program should input this information for each employee, and
// should determine and display the employee's gross pay.
//
// 2. Pseudocode
//    Calculate weekly salaries for employees
//    While the user has not entered the sentinel
//      Input the hours worked
//      Input salary rate of the worker
//      If hours worked is greater than 40
//        Calculate time-and-a-half for any hours over 40
//      Print salary for employee
//    end while

#include <stdio.h>
#include <stdbool.h>

int main() {
  float hours, rate, salary, overtime, overtimePay;

  while (true) {
    printf( "Enter number of hours worked (-1 to end): " );
    scanf( "%f", &hours );
    if ( hours == -1 ) {
      return 0;
    }
    printf( "Enter hourly rate of the worker ($00.00): ");
    scanf( "%f", &rate );

    salary = hours * rate;
    if ( hours <= 40 ) {
      printf( "Salary is %.2f\n", salary );
    }

    if ( hours > 40 ) {
      overtime = hours - 40;
      overtimePay = overtime * rate / 2;
      salary = salary + overtimePay;
      printf( "Salary is %.2f\n", salary );
    }
  }

  return 0;
}
