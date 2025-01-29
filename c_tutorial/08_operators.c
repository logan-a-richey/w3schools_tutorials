// 08_basic_operators.c

/*
Basic Operators in C:
1. Arithmetic operators:
   - + (Addition)
   - - (Subtraction)
   - * (Multiplication)
   - / (Division)
   - % (Modulus)

2. Increment and Decrement:
   - ++ (Increment)
   - -- (Decrement)
*/

#include <stdio.h>

int main() {
    // Declare and initialize variables
    int x = 10, y = 3;
    int sum, diff, product, quotient, remainder;

    // Arithmetic operations
    sum = x + y;             // Addition
    diff = x - y;            // Subtraction
    product = x * y;         // Multiplication
    quotient = x / y;        // Division (integer division)
    remainder = x % y;       // Modulus (remainder)

    // Print results of arithmetic operations
    printf("Arithmetic Operations:\n");
    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, diff);
    printf("%d * %d = %d\n", x, y, product);
    printf("%d / %d = %d\n", x, y, quotient);
    printf("%d %% %d = %d\n", x, y, remainder); // %% to print %

    // Increment and Decrement
    printf("\nIncrement and Decrement:\n");
    printf("Initial value of x: %d\n", x);
    printf("Post-increment (x++): %d\n", x++); // Print x, then increment
    printf("Value of x after post-increment: %d\n", x);
    printf("Pre-increment (++x): %d\n", ++x); // Increment first, then print

    printf("\nInitial value of y: %d\n", y);
    printf("Post-decrement (y--): %d\n", y--); // Print y, then decrement
    printf("Value of y after post-decrement: %d\n", y);
    printf("Pre-decrement (--y): %d\n", --y); // Decrement first, then print

    return 0;
}
