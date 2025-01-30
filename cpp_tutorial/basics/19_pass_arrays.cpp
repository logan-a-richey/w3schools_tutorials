/*******************************************************************************
W3Schools - C++ Tutorial
19_pass_arrays.cpp
https://www.w3schools.com/cpp/cpp_function_array.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
} 
