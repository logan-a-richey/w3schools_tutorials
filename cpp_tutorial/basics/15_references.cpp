/*******************************************************************************
W3Schools - C++ Tutorial
15_references.cpp
https://www.w3schools.com/cpp/cpp_references.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

int main(){    
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food
    
    cout << food << endl;   // Outputs Pizza
    cout << meal << endl;   // Outputs Pizza
    cout << &food << endl;  // Outputs 0x6dfed4 (example memory address)
    return 0;
}
