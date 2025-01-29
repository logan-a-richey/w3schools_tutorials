// 05_variables.c

/*
General syntax of defining variables:

type variableName = value; 

Basic data types in C:

- bool (added in C23):
  - Boolean type: [false, true]
  - Print: %d
  - Size: 1 (exact)

- char:
  - Smallest addressable unit, can be signed or unsigned
  - Print: %c
  - Range: [CHAR_MIN, CHAR_MAX]
  - Size: ≥8 bits

- signed char:
  - Guaranteed to be signed, range: [-127, +127]
  - Print: %c
  - Size: ≥8 bits

- unsigned char:
  - Guaranteed to be unsigned, range: [0, 255]
  - Print: %c
  - Size: ≥8 bits

- short, short int, signed short, signed short int:
  - Short signed integer, range: [-32767, +32767]
  - Print: %hi or %hd
  - Size: ≥16 bits

- unsigned short, unsigned short int:
  - Short unsigned integer, range: [0, 65535]
  - Print: %hu
  - Size: ≥16 bits

- int, signed, signed int:
  - Basic signed integer, range: [-32767, +32767]
  - Print: %i or %d
  - Size: ≥16 bits

- unsigned, unsigned int:
  - Basic unsigned integer, range: [0, 65535]
  - Print: %u
  - Size: ≥16 bits

- long, long int, signed long, signed long int:
  - Long signed integer, range: [-2147483648, +2147483647]
  - Print: %li or %ld
  - Size: ≥32 bits

- unsigned long, unsigned long int:
  - Long unsigned integer, range: [0, 4294967295]
  - Print: %lu
  - Size: ≥32 bits

- long long, long long int, signed long long, signed long long int:
  - Long long signed integer, range: [-9223372036854775807, +9223372036854775807]
  - Print: %lli or %lld
  - Size: ≥64 bits

- unsigned long long, unsigned long long int:
  - Long long unsigned integer, range: [0, 18446744073709551615]
  - Print: %llu
  - Size: ≥64 bits

- float:
  - Single-precision floating-point
  - Print: %f, %F, %g, %G, %e, %E, %a, %A
  - Size: Platform-specific, typically 32 bits

- double:
  - Double-precision floating-point
  - Print: %lf, %lF, %lg, %lG, %le, %lE, %la, %lA
  - Size: Platform-specific, typically 64 bits

- long double:
  - Extended precision floating-point
  - Print: Platform-dependent
  - Size: Platform-specific, typically 80-128 bits
*/

#include <stdio.h>
#include <stdbool.h>    // for bool
#include <limits.h>     // For integer limits
#include <float.h>      // For floating-point limits

int print_limits();
int print_variables();

int main() {
    printf("*** Example 01: Printing limits: ***\n");
    print_limits();
    printf("\n");
    printf("*** xample 02: Printing variabes: ***\n");
    print_variables();

    return 0;
}

int print_limits(){
    // bool
    bool booleanValue = true;
    printf("bool: %d, size: %zu bytes\n", booleanValue, sizeof(booleanValue));

    // char
    printf("char: [%d, %d], size: %zu bytes\n", CHAR_MIN, CHAR_MAX, sizeof(char));

    // signed char
    printf("signed char: [%d, %d], size: %zu bytes\n", SCHAR_MIN, SCHAR_MAX, sizeof(signed char));

    // unsigned char
    printf("unsigned char: [0, %u], size: %zu bytes\n", UCHAR_MAX, sizeof(unsigned char));

    // short
    printf("short: [%d, %d], size: %zu bytes\n", SHRT_MIN, SHRT_MAX, sizeof(short));

    // unsigned short
    printf("unsigned short: [0, %u], size: %zu bytes\n", USHRT_MAX, sizeof(unsigned short));

    // int
    printf("int: [%d, %d], size: %zu bytes\n", INT_MIN, INT_MAX, sizeof(int));

    // unsigned int
    printf("unsigned int: [0, %u], size: %zu bytes\n", UINT_MAX, sizeof(unsigned int));

    // long
    printf("long: [%ld, %ld], size: %zu bytes\n", LONG_MIN, LONG_MAX, sizeof(long));

    // unsigned long
    printf("unsigned long: [0, %lu], size: %zu bytes\n", ULONG_MAX, sizeof(unsigned long));

    // long long
    printf("long long: [%lld, %lld], size: %zu bytes\n", LLONG_MIN, LLONG_MAX, sizeof(long long));

    // unsigned long long
    printf("unsigned long long: [0, %llu], size: %zu bytes\n", ULLONG_MAX, sizeof(unsigned long long));

    // float
    printf("float: [%e, %e], size: %zu bytes\n", FLT_MIN, FLT_MAX, sizeof(float));

    // double
    printf("double: [%e, %e], size: %zu bytes\n", DBL_MIN, DBL_MAX, sizeof(double));

    // long double
    printf("long double: [%Le, %Le], size: %zu bytes\n", LDBL_MIN, LDBL_MAX, sizeof(long double));

    return 0;
}

int print_variables(){
    // bool (C23)
    bool booleanValue = true;
    printf("bool: %d\n", booleanValue);

    // char
    char charValue = 'A';
    printf("char: %c\n", charValue);

    // signed char
    signed char signedCharValue = -100;
    printf("signed char: %d\n", signedCharValue);

    // unsigned char
    unsigned char unsignedCharValue = 200;
    printf("unsigned char: %u\n", unsignedCharValue);

    // short
    short shortValue = -32000;
    printf("short: %hd\n", shortValue);

    // unsigned short
    unsigned short unsignedShortValue = 65000;
    printf("unsigned short: %hu\n", unsignedShortValue);

    // int
    int intValue = -2147483647;
    printf("int: %d\n", intValue);

    // unsigned int
    unsigned int unsignedIntValue = 4294967295U;
    printf("unsigned int: %u\n", unsignedIntValue);

    // long
    long longValue = -2147483648L;
    printf("long: %ld\n", longValue);

    // unsigned long
    unsigned long unsignedLongValue = 4294967295UL;
    printf("unsigned long: %lu\n", unsignedLongValue);

    // long long
    long long longLongValue = -9223372036854775807LL;
    printf("long long: %lld\n", longLongValue);

    // unsigned long long
    unsigned long long unsignedLongLongValue = 18446744073709551615ULL;
    printf("unsigned long long: %llu\n", unsignedLongLongValue);

    // float
    float floatValue = 3.14f;
    printf("float: %f\n", floatValue);

    // double
    double doubleValue = 3.141592653589793;
    printf("double: %lf\n", doubleValue);

    // long double
    long double longDoubleValue = 3.141592653589793238L;
    printf("long double: %Lf\n", longDoubleValue);

    return 0;
}

