// 07_const_and_define.c

/*
Constants in C:
1. const:
   - A keyword used to declare variables whose values cannot be changed after initialization.
   - Has a specific data type (e.g., int, float, char).

2. #define:
   - A preprocessor directive used to define constants or macros.
   - Does not have a data type and is replaced by the preprocessor before compilation.

Differences:
- `const` uses memory, while `#define` does not.
- `const` is type-checked by the compiler, while `#define` is not.
*/

#include <stdio.h>

#define PI 3.14159   // Define a constant for pi using #define
#define SQUARE(x) ((x) * (x)) // Macro to calculate the square of a number

int main() {
    // Using const to define constants
    const int daysInWeek = 7;
    const float gravity = 9.8;

    // Printing values of #define constants
    printf("Using #define:\n");
    printf("Value of PI: %f\n", PI);
    printf("Square of 5 using macro: %d\n", SQUARE(5));

    // Printing values of const variables
    printf("\nUsing const:\n");
    printf("Number of days in a week: %d\n", daysInWeek);
    printf("Acceleration due to gravity: %.2f m/s^2\n", gravity);

    // Trying to change the value (uncommenting below lines will cause errors):
    // daysInWeek = 8; // Error: assignment of read-only variable
    // PI = 3.14;      // Error: macros cannot be reassigned

    return 0;
}

