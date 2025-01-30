/*******************************************************************************
W3Schools - C++ Tutorial
02_user_input.cpp
https://www.w3schools.com/cpp/cpp_user_input.asp
2024-12-22
*******************************************************************************/

#include <iostream>
#include <regex>
#include <string>

int simple_cin_test() {
    int x, a,b,c;
        
    std::cout << "Enter an integer value for int x: ";    
    std::cin >> x;

    std::cout << "Enter integer values for  a, b, c: (seperated by a whitespace): ";    
    std::cin >> a >> b >> c;

    std::cout << "x = " << x << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}

int complex_cin_test_with_err_checking() {
    std::string input;
    int x, a, b, c;

    // Input for x
    std::cout << "Enter an integer value for int x: ";
    std::getline(std::cin, input);

    // Regular expression to check for a valid integer (including optional leading '-' for negative numbers)
    std::regex integer_regex("^-?\\d+$");

    // Check if the input is a valid integer
    if (std::regex_match(input, integer_regex)) {
        x = std::stoi(input);  // Convert the valid input string to an integer
    } else {
        std::cerr << "Invalid input! Please enter a valid integer for x." << std::endl;
        return 1;
    }

    // Input for a, b, and c
    std::cout << "Enter integer values for a, b, c (separated by whitespace): ";
    std::getline(std::cin, input);  // Read the entire line for a, b, c

    // Regex match on 3 valid integers, separated by spaces
    std::regex multiple_integers_regex("^\\s*-?\\d+\\s+-?\\d+\\s+-?\\d+\\s*$");
    if (std::regex_match(input, multiple_integers_regex)) {
        // Use a stringstream to extract the integers from the string
        std::istringstream stream(input);
        stream >> a >> b >> c;
    } else {
        std::cerr << "Invalid input! Please enter valid integers for a, b, and c." << std::endl;
        return 1;
    }

    // Output the values
    std::cout << "x = " << x << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}

int main(){
    // demonstrating how to use std::cin in C++:
    
    //simple_cin_test();
    complex_cin_test_with_err_checking();
    
    return 0;
}


