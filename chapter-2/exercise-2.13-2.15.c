// Exercises 2.13 - 2.15
//
// 2.13
// Which, if any of the following C statements contain variables whose values
// are replaced?

a)  scanf( "%d%d%d%d%d", &b, &c, &d, &e, &f ); // this one
b)  p = i + j + k + 7;
c)  printf( "Values are replaced" );
d)  printf( "a = 5" );

// 2.14
// Given the equation y = ax^3 + 7, which of the following, if any, are correct
// C statements for this equation?

a)  y = a * x * x * x + 7;
b)  y = a * x * x * ( x + 7 );
c)  y = ( a * x ) * x * ( x + 7);
d)  y = ( a * x ) * x * x + 7;
e)  y = a * ( x * x * x ) + 7; // correct
f)  y = a * x * ( x * x + 7 );

// 2.15
// State the order of evaluation of the operators in each of the following C
// statements and show the value of x after each statement is performed.

a)  x = 7 + 3 * 6 / 2 - 1;
    #1: 3 * 6 = 18
    #2: 18 / 2 = 9
    #3: 7 + 9 = 16
    #4: 16 - 1 = 15
    #5: x = 15

b)  x = 2 % 2 + 2 * 2 - 2 / 2;
    #1: 2 % 2 = 0
    #2: 2 * 2 = 4
    #3: 2 / 2 = 1
    #4: 0 + 4 = 4
    #5: 4 - 1 = 3
    #6: x = 3

c)  x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );
    #1: 9 x 3 = 27
    #2: 27 / 3 = 9
    #3: 3 + 9 = 12
    #4: 3 x 9 = 27
    #5: 27 x 12 = 324
    #6: x = 324
