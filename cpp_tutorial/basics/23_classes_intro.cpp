/*******************************************************************************
W3Schools - C++ Tutorial
23_classes_intro.cpp
https://www.w3schools.com/cpp/cpp_classes.asp
2024-12-23
*******************************************************************************/

#include <iostream>

// Create a Car class with some attributes
class Car {
    public:
        std::string brand;     
        std::string model;
        int year;
};

int main() {
    // Create an object of Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Print attribute values
    std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << std::endl;
    std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << std::endl;
    return 0;
}
