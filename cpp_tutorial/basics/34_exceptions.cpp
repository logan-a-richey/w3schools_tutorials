/*******************************************************************************
W3Schools - C++ Tutorial
34_exceptions.cpp
https://www.w3schools.com/cpp/cpp_exceptions.asp
Date: 2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

// Function demonstrating exception handling for age validation
void handleAgeValidation() {
    try {
        int age = 15; // Example age value

        if (age >= 18) {
            cout << "Access granted - You are old enough." << endl;
        } else {
            throw 505; // Throw an exception for insufficient age
        }
    } catch (int errorCode) { // Catch the thrown exception
        cout << "Access denied - You must be at least 18 years old. Error code: "
             << errorCode << endl;
    }
}

// Function demonstrating multiple types of exceptions
void handleVariousExceptions() {
    try {
        int choice;
        cout << "Enter a number: ";
        cin >> choice;

        // Throw exceptions based on user input
        if (choice == 1) {
            throw "Error: Invalid choice!"; // String exception
        } else if (choice == 2) {
            throw 404; // Integer exception
        } else if (choice == 3) {
            throw 3.14; // Double exception
        } else {
            cout << "No errors - You entered a valid choice." << endl;
        }
    } catch (const char* msg) { // Catch string exceptions
        cout << "Caught a string exception: " << msg << endl;
    } catch (int errorCode) { // Catch integer exceptions
        cout << "Caught an integer exception. Error code: " << errorCode << endl;
    } catch (double value) { // Catch double exceptions
        cout << "Caught a double exception with value: " << value << endl;
    } catch (...) { // Catch any other exceptions
        cout << "An unexpected error occurred." << endl;
    }
}

int main() {
    // Run exception handling examples
    handleAgeValidation();
    handleVariousExceptions();

    return 0;
}

