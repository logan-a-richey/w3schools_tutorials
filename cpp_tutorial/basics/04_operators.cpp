/*******************************************************************************
W3Schools - C++ Tutorial
04_operators.cpp
https://www.w3schools.com/cpp/cpp_operators.asp
2024-12-23
*******************************************************************************/

#include <iostream>

int tutorial_00(){
    /*
        Basic operations:
        + (addition)
        - (subtraction)
        * (multiplicatio)
        / (division)
        % (modulo)
        ++ (increment by 1)
        -- (decrement by 1)
        = (assignment)
    */

    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400) 
    
    std::cout << "Sum1: " << sum1 << std::endl;
    std::cout << "Sum2: " << sum2 << std::endl;
    std::cout << "Sum3: " << sum3 << std::endl;

    return 0;
}

int tutorial_01(){ 
    /*
        Assignment operators
        = (assignment)
        += (add value to)
        -= (subtract value to)
        *= (mutliply value by)
        /= (divide value by)
        %= (modulo value by)
        &= (bitwise AND value assign)
        |= (bitwise OR value assign)
        ^= (bitwise XOR value assign)
        >>= (right shift and assign)
        <<= (left shift and assign)
    */
    
    int x = 10; 
    x += 5;   // 10 + 5 = 15
    x -= 3;   // 15 - 3 = 12
    x *= 2;   // 12 * 2 = 24
    x /= 4;   // 24 / 4 = 6
    x %= 4;   // 6 % 4 = 2

    std::cout << "x after various assignments: " << x << std::endl;

    return 0;
}

int tutorial_02(){
    // Comparison operators
    /*
        == (equal to)
        != (not equal to)
        >  (greater than)
        <  (less than)
        >= (greater than or equal to)
        <= (less than or equal to)
    */

    int a = 5, b = 10;

    std::cout << "a == b: " << (a == b) << std::endl;  // false (0)
    std::cout << "a != b: " << (a != b) << std::endl;  // true (1)
    std::cout << "a > b: " << (a > b) << std::endl;    // false (0)
    std::cout << "a < b: " << (a < b) << std::endl;    // true (1)
    std::cout << "a >= b: " << (a >= b) << std::endl;  // false (0)
    std::cout << "a <= b: " << (a <= b) << std::endl;  // true (1)

    return 0;
}

int tutorial_03(){
    // Logical operators
    /*
        && (logical AND)
        || (logical OR)
        !  (logical NOT)
    */
    
    bool x = true;
    bool y = false;

    std::cout << "x && y: " << (x && y) << std::endl;  // false (0)
    std::cout << "x || y: " << (x || y) << std::endl;  // true (1)
    std::cout << "!x: " << (!x) << std::endl;          // false (0)
    std::cout << "!y: " << (!y) << std::endl;          // true (1)

    return 0;
}

int main(){
    // Call the tutorial functions
    std::cout << "Tutorial 00 (Arithmetic Operators):\n";
    tutorial_00();
    
    std::cout << "\nTutorial 01 (Assignment Operators):\n";
    tutorial_01();
    
    std::cout << "\nTutorial 02 (Comparison Operators):\n";
    tutorial_02();
    
    std::cout << "\nTutorial 03 (Logical Operators):\n";
    tutorial_03();
    
    return 0;
}

