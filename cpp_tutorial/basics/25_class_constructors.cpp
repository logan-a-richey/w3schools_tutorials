/*******************************************************************************
W3Schools - C++ Tutorial
25_class_constructors.cpp
https://www.w3schools.com/cpp/cpp_constructors.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

class Car {             // The class
    public:             // Access specifier
        string brand;   // Attribute
        string model;   // Attribute
        int year;       // Attribute
        Car(string x, string y, int z); // Constructor declaration
    
    void print_self(){
        cout << brand << ", " << model << ", " << year << endl;
    }
};

// Constructor definition outside the class
Car::Car(string x="Tesla", string y="Model X", int z=2024) {
    brand = x;
    model = y;
    year = z;
}

int main() {
    // Create Car objects and call the constructor with different values
    Car car1("BMW", "X5", 1999);
    Car car2("Ford", "Mustang", 1969);
    Car car3; // car3() is interpreted as a function call. Usually, we do not default every param! Special case!

    // Print values
    car1.print_self();
    car2.print_self();
    car3.print_self();
    return 0;
}
