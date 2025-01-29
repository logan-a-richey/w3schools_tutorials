/*******************************************************************************
W3Schools - C++ Tutorial
06_math.cpp
https://www.w3schools.com/cpp/cpp_math.asp
2024-12-23
*******************************************************************************/

#include <iostream>
#include <cmath>  // Correct header for math functions

int main() {
    std::cout << "Max of 5 and 10: " << std::max(5, 10) << std::endl;     // Maximum of two numbers
    std::cout << "Min of 5 and 10: " << std::min(5, 10) << std::endl;     // Minimum of two numbers
    std::cout << "Square root of 64: " << std::sqrt(64) << std::endl;     // Square root
    std::cout << "Round of 2.6: " << std::round(2.6) << std::endl;        // Round to nearest integer
    std::cout << "Logarithm of 2 (base e): " << std::log(2) << std::endl; // Natural log (base e) of 2

    return 0;
}

/*
The <cmath> library has many functions that allow you to perform mathematical tasks on numbers.

abs(x) 	         Returns the absolute value of x
acos(x) 	     Returns the arccosine of x, in radians
acosh(x) 	     Returns the hyperbolic arccosine of x
asin(x) 	     Returns the arcsine of x, in radians
asinh(x) 	     Returns the hyperbolic arcsine of x
atan(x) 	     Returns the arctangent of x as a numeric value between -PI/2 and PI/2 radians
atan2(y, x)      Returns the angle theta from the conversion of rectangular coordinates (x, y) to polar coordinates (r, theta)
atanh(x) 	     Returns the hyperbolic arctangent of x
cbrt(x) 	     Returns the cube root of x
ceil(x) 	     Returns the value of x rounded up to its nearest integer
copysign(x, y) 	 Returns the first floating point x with the sign of the second floating point y
cos(x) 	         Returns the cosine of x (x is in radians)
cosh(x) 	     Returns the hyperbolic cosine of x
exp(x) 	         Returns the value of Ex
exp2(x) 	     Returns the value of 2x
expm1(x) 	     Returns ex-1
erf(x) 	         Returns the value of the error function at x
erfc(x) 	     Returns the value of the complementary error function at x
fabs(x) 	     Returns the absolute value of a floating x
fdim(x) 	     Returns the positive difference between x and y
floor(x) 	     Returns the value of x rounded down to its nearest integer
fma(x, y, z) 	 Returns x*y+z without losing precision
fmax(x, y) 	     Returns the highest value of a floating x and y
fmin(x, y) 	     Returns the lowest value of a floating x and y
fmod(x, y) 	     Returns the floating point remainder of x/y
frexp(x, y) 	 With x expressed as m*2n, returns the value of m (a value between 0.5 and 1.0) and writes the value of n to the memory at the pointer y
hypot(x, y) 	 Returns sqrt(x2 +y2) without intermediate overflow or underflow
ilogb(x) 	     Returns the integer part of the floating-point base logarithm of x
ldexp(x, y) 	 Returns x*2y
lgamma(x) 	     Returns the logarithm of the absolute value of the gamma function at x
llrint(x) 	     Rounds x to a nearby integer and returns the result as a long long integer
llround(x) 	     Rounds x to the nearest integer and returns the result as a long long integer
log(x) 	         Returns the natural logarithm of x
log10(x) 	     Returns the base 10 logarithm of x
log1p(x) 	     Returns the natural logarithm of x+1
log2(x) 	     Returns the base 2 logarithm of the absolute value of x
logb(x) 	     Returns the floating-point base logarithm of the absolute value of x
lrint(x) 	     Rounds x to a nearby integer and returns the result as a long integer
lround(x) 	     Rounds x to the nearest integer and returns the result as a long integer
modf(x, y) 	     Returns the decimal part of x and writes the integer part to the memory at the pointer y
nan(s) 	         Returns a NaN (Not a Number) value
nearbyint(x) 	 Returns x rounded to a nearby integer
nextafter(x, y)  Returns the closest floating point number to x in the direction of y
nexttoward(x, y) Returns the closest floating point number to x in the direction of y
pow(x, y) 	     Returns the value of x to the power of y
remainder(x, y)  Return the remainder of x/y rounded to the nearest integer
remquo(x, y, z)  Calculates x/y rounded to the nearest integer, writes the result to the memory at the pointer z and returns the remainder.
rint(x) 	     Returns x rounded to a nearby integer
round(x) 	     Returns x rounded to the nearest integer
scalbln(x, y) 	 Returns x*Ry (R is usually 2)
scalbn(x, y) 	 Returns x*Ry (R is usually 2)
sin(x) 	         Returns the sine of x (x is in radians)
sinh(x) 	     Returns the hyperbolic sine of x
sqrt(x) 	     Returns the square root of x
tan(x) 	         Returns the tangent of x (x is in radians)
tanh(x) 	     Returns the hyperbolic tangent of x
tgamma(x) 	     Returns the value of the gamma function at x
trunc(x) 	     Returns the integer part of x
*/ 


