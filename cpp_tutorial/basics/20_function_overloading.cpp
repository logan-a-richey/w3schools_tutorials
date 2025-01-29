/*******************************************************************************
W3Schools - C++ Tutorial
20_function_overloading.cpp
https://www.w3schools.com/cpp/cpp_function_overloading.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

// One would think this would cause an error since we defined the same function 3 different ways:
// However, the g++ compiler is smart and use the right one when appropriate.
// This is called function overloading.

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
