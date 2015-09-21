// GPA Calculator

#include <stdio.h>

int main() {
  int totalGrades;      // Total of grades
  int gradeCount;       // Quantity of grades
  float GPA;            // Grade Point Average

  totalGrades = 0;
  gradeCount = 1;

  while ( totalGrades != -1 ) {
    printf( "Enter the total grades for the student, (enter -1 to end): \n" );
    scanf( "%d", &totalGrades );

    if ( totalGrades != -1 ) {
      printf( "Enter the count of grades for the student: \n");
      scanf( "%d", &gradeCount );
    }

    if ( totalGrades != -1 ) {
      GPA = ( float ) totalGrades / gradeCount;
      printf( "The GPA for that student is: %.2f\n", GPA );
    }
  }

  return 0;
}
