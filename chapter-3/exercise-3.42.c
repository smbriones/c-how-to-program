// Exercise 3.42
// (Diameter, Circumference and Area of a Circle)
// Write a program that reads the radius of a circle (as a float value) and
// computes and prints the diameter, the circumference and the area. Use the
// value 3.14159 for π.

#include <stdio.h>

int main() {
  float pi = 3.14159, radius, diameter, circumference, area;

  printf( "Enter the radius of the circle:\n" );
  scanf( "%f", &radius );

  diameter = radius * 2;
  printf( "The diameter is %f\n", diameter  );

  circumference = 2 * pi * radius;
  printf( "The circumference is %f\n", circumference );

  area = pi * (radius * radius);
  printf( "The area is %f\n", area );

  return 0;
}
