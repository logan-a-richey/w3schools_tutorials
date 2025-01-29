/*******************************************************************************
W3Schools - C++ Tutorial
16_pointers.cpp
https://www.w3schools.com/cpp/cpp_pointers.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

void creating_pointers(){
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << "Value of food: " << food << "\n";

    // Output the memory address of food (e.g., 0x6dfed4)
    cout << "Memory address of food: " << &food << "\n";

    // Output the memory address of food with the pointer
    cout << "Memory address of food using pointer: " << ptr << "\n";
}

void deref_pointers(){
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

    // Output the memory address of food with the pointer
    cout << "Memory address using pointer: " << ptr << "\n";

    // Dereference: Output the value of food using the pointer (Pizza)
    cout << "Value of food using pointer: " << *ptr << "\n";
}

void mofiying_pointers(){
    // You can also change the pointer's value. But note that this will also change the value of the original variable:
    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << "Initial food: " << food << "\n";

    // Output the memory address of food
    cout << "Memory address of food: " << &food << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << "Value using pointer: " << *ptr << "\n";

    // Change the value of the pointer (modify the value of the original variable)
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << "New value using pointer: " << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << "New food: " << food << "\n";
}

int main(){
    creating_pointers();
    cout << endl;
    
    deref_pointers();
    cout << endl;
    
    mofiying_pointers();
    return 0;
}

