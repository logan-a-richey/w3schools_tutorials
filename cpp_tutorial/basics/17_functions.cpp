/*******************************************************************************
W3Schools - C++ Tutorial
17_functions.cpp
https://www.w3schools.com/cpp/cpp_functions.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

// You will often see C++ programs that have function declaration above main(), and function definition below main().
// This will make the code better organized and easier to read:

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!\n";
}

// I just got executed!
// I just got executed!
// I just got executed!
