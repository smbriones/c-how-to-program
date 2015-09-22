// Exercise 3.3
// Write a single C statement to accomplish each of the following:

a) Assign the sum of x and y to z and increment the value of x by 1 after the
   calculation.

   z = x++ + y;


b) Multiply the variable product by 2 using the *= operator.

   product *= 2;


c) Multiply the variable product by 2 using the = and * operators.

   product = product * 2;


d) Test if the value of the variable count is greater than 10. If it is, print
   "Count is greater than 10".

   if ( count > 10 ) {
     printf( "Count is greater than 10.\n" );
   }


e) Decrement the variable x by 1, then subtract it from the variable total.

   total -= --x;


f) Add the variable x to the variable total then decrement x by 1.

   total += x--;


g) Calculate the remainder after q is divided by divisor and assign the result
   to q. Write this statement in two different ways.

   q = q % divisor;
   q %= divisor;


h) Print the value 123.4567 with 2 digits of precision. What value is printed?

   printf( "%.2f", 123.4567 ); // 123.45 is displayed


i) Print the floating-point value 3.14159 with three digits to the right of the
   decimal point. What value is printed?

   printf("%.3f", 3.14159 ); // 3.142 is printed
