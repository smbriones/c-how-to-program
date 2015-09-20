// Exercises 2.20
// (Diameter, Circumference and Area of a Circle) Write a program that reads in
// the radius of a circle and prints the circle's diameter, circumference and
// area. Use the constant value 3.14159 for π. Perform each of these calculations
// inside the printf statement(s) and use the conversion specifier %f.
//
// [Note: In this chapter, we have discussed only integer constants and variables
// In Chapter 3 we'll discuss floating-point numbers, i.e., values that can have
// decimal points.]

#include <stdio.h>

int main() {
  int radius, diameter;
  double constantValue, circumference, area;

  printf( "Radius of the circle: \n" );
  scanf( "%d", &radius );

  diameter = radius * 2;
  printf( "The diameter is %d\n", diameter );

  constantValue = 3.14159;
  circumference = constantValue * diameter;
  printf( "The circumference is %f\n", circumference );

  area = constantValue * radius * radius;
  printf("The area of the circle is %f\n", area );

  return 0;
}
