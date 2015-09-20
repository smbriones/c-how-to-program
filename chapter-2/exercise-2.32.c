// Exercises 2.32
// Body Mass Index Calculator

#include <stdio.h>

int main() {
  int weightInPounds, heightInInches, BMI, height, weight;

  printf( "Enter your weight in pounds: \n" );
  scanf( "%d", &weightInPounds );

  printf( "Enter your height in inches: \n" );
  scanf( "%d", &heightInInches );

  weight = weightInPounds * 703;
  height = heightInInches * heightInInches;

  BMI = weight / height;

  printf( "Your BMI is: %d\n", BMI );

  printf( "BMI Values\n" );
  printf( "Underweight:\tless than 18.5\n" );
  printf( "Normal:\t\tbetween 18.5 and 24.9\n" );
  printf( "Overweight:\tbetween 25 and 29.9\n" );
  printf( "Obese:\t\t30 or greater\n" );

  return 0;
}
