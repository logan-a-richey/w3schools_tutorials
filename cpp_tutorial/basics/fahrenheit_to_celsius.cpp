/*******************************************************************************
W3Schools - C++ Tutorial
fahrenheit_to_celsius.cpp
https://www.w3schools.com/cpp/cpp_function_reallife.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  // Set a fahrenheit value
  float f_value = 98.8;

  // Call the function with the fahrenheit value
  float result = toCelsius(f_value);

  // Print the fahrenheit value
  cout << "Fahrenheit: " << f_value << "\n";

  // Print the result
  cout << "Convert Fahrenheit to Celsius: " << result << "\n";

  return 0;
} 
