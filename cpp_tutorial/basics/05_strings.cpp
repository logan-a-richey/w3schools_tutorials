/*******************************************************************************
W3Schools - C++ Tutorial
05_strings.cpp
https://www.w3schools.com/cpp/cpp_strings.asp
2024-12-23
*******************************************************************************/

#include <iostream>
#include <string>
// using namespace std;

int main() {
    // Create string    
    std::string greeting = "Hello!";
    std::cout << greeting << std::endl;    

    // Concatenation
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName + lastName;
    std::cout << "Full Name: " << fullName << std::endl;     

    // Addition and concatenation both use the + operator!
    int x = 10;
    int y = 20;
    int z = x + y;      // z will be 30 (an integer) 
    std::cout << "Integer sum of x and y: " << z << std::endl;

    std::string xStr = "10";
    std::string yStr = "20";
    std::string zStr = xStr + yStr;   // z will be 1020 (a string)
    std::cout << "String concatenation of xStr and yStr: " << zStr << std::endl;

    // Using the length() method 
    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the txt string is: " << txt.length() << std::endl; 

    // Access strings: they really are just an array of characters
    std::string myString = "Hello";
    std::cout << "First character: " << myString[0] << std::endl; // Outputs H
    std::cout << "Second character: " << myString[1] << std::endl; // Outputs e
    std::cout << "Last character: " << myString[myString.length() - 1] << std::endl; // Outputs o

    // Using the at() method
    std::cout << "First character (using at()): " << myString.at(0) << std::endl;  // First character
    std::cout << "Second character (using at()): " << myString.at(1) << std::endl;  // Second character
    std::cout << "Last character (using at()): " << myString.at(myString.length() - 1) << std::endl;  // Last character

    // Modify a character using at()
    myString.at(0) = 'J';
    std::cout << "After modifying the first character: " << myString << std::endl;  // Outputs Jello

    // Escape characters with the \ char
    std::string txt1 = "We are the so-called \"Vikings\" from the north.";
    std::cout << "Escape characters example 1: " << txt1 << std::endl;

    std::string txt2 = "The character \\ is called backslash.";
    std::cout << "Escape characters example 2: " << txt2 << std::endl;

    // String input
    std::string username;
    std::cout << "Enter your name: ";
    std::cin >> username;
    std::cout << "Hello, " << username << std::endl;

    // C-style strings
    char greeting2[] = "Hello";  // C-Style String (an array of characters)
    std::cout << "C-style string: " << greeting2 << std::endl;

    return 0;
}

