/*******************************************************************************
W3Schools - C++ Tutorial
08_if_else.cpp
https://www.w3schools.com/cpp/cpp_conditions_reallife.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

// Example 01: Checking door code
void ex01(int doorCode) {
    if (doorCode == 1337) {
      cout << "Correct code.\nThe door is now open.\n";
    } else {
      cout << "Wrong code.\nThe door remains closed.\n";
    } 
}

// Example 02: Checking if a number is positive, negative or zero
void ex02(int myNum) {
    if (myNum > 0) {
      cout << "The value is a positive number.\n";
    } else if (myNum < 0) {
      cout << "The value is a negative number.\n";
    } else {
      cout << "The value is 0.\n";
    } 
}

// Example 03: Checking if someone is old enough to vote
void ex03(int myAge, int votingAge) {
    if (myAge >= votingAge) {
      cout << "Old enough to vote!\n";
    } else {
      cout << "Not old enough to vote.\n";
    } 
}

// Example 04: Checking if a number is even or odd
void ex04(int myNum) {
    if (myNum % 2 == 0) {
      cout << myNum << " is even.\n";
    } else {
      cout << myNum << " is odd.\n";
    } 
}

int main() {
    int doorCode = 1337;
    int myNum = 10;
    int myAge = 25;
    int votingAge = 18;

    cout << "--- Example 01 ---\n";
    // Pass door code for checking
    ex01(doorCode);  
    
    cout << "\n--- Example 02 ---\n";
    // Pass number to check if positive, negative, or zero
    ex02(myNum);     
    
    cout << "\n--- Example 03 ---\n";
    // Pass age and voting age to check eligibility
    ex03(myAge, votingAge);  
    
    cout << "\n--- Example 04 ---\n";
    // Pass number to check if even or odd
    ex04(myNum);     

    return 0;
}

