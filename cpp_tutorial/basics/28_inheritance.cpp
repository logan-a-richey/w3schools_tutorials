/*******************************************************************************
W3Schools - C++ Tutorial
28_inheritance.cpp
https://www.w3schools.com/cpp/cpp_encapsulation.asp
2024-12-23
*******************************************************************************/

/*
In C++, it is possible to inherit attributes and methods from one class to another.
We group the "inheritance concept" into two categories:

 i.) derived class (child) - the class that inherits from another class
ii.) base class (parent) - the class being inherited from

To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods
from the Vehicle class (parent):
*/

#include <iostream>

// Base class
class Vehicle {
    public:
        std::string brand = "Ford";
        void honk() {
            std::cout << "Tuut, tuut! \n" ;
        }
};

// Derived class
class Car: public Vehicle {
    public:
        std::string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    std::cout << myCar.brand + " " + myCar.model << std::endl;
    return 0;
} 

/*
Why And When To Use "Inheritance"?
It is useful for code reusability: reuse attributes and methods of an existing class
when you create a new class.
*/
