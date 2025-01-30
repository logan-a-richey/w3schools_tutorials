// 25_math_functions.c

/*
    You can use math functions by including the math.h libary.
    For a more extensive list, see:
    https://www.w3schools.com/c/c_ref_math.php
*/

#include <stdio.h>
#include <math.h>

int main(){
    // square root
    printf("%f", sqrt(16));
    printf("\n");

    // round up to nearest integer
    printf("%f", ceil(1.4));
    printf("\n");
    
    // round down to nearest integer
    printf("%f", floor(1.4));
    printf("\n");
    
    // example: raise 4 to the 3rd power
    printf("%f", pow(4, 3));
    printf("\n");

    return 0;
}

