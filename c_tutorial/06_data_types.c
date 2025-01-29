// 06_data_types.c

/*
Basic Data Types:
There are many more data types, but the simple ones are as follows:

Data Type   Size            Description and example:
int         2 or 4 bytes    Stores whole numbers, without decimals
float       4 bytes         Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double      8 bytes         Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
char        1 byte          Stores a single character/letter/number, or ASCII values

Basic Format Specifiers
There are different format specifiers for each data type. Here are some of them:

Specifier   Data Type 
%d or %i    int
%f or %F    float
%lf         double
%c          char
%s          string (array of characters)
*/

#include <stdio.h>

int main() {
    // Declare and initialize variables
    int a = 5;             // Whole number
    float b = 1.23f;       // Fractional number (float)
    double c = -3.14;      // Fractional number (double)
    char d = 'd';          // Single character
    char str[] = "Hello!"; // String of characters

    // Print values with appropriate format specifiers
    printf("Integer (a): %d\n", a);       // %d for int
    printf("Float (b): %f\n", b);         // %f for float
    printf("Double (c): %lf\n", c);       // %lf for double
    printf("Character (d): %c\n", d);     // %c for char
    printf("String (str): %s\n", str);    // %s for string

    // Print sizes of each data type
    printf("\nSizes of Data Types:\n");
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu byte\n", sizeof(d));
    printf("Size of string: %zu bytes\n", sizeof(str));

    return 0;
}

