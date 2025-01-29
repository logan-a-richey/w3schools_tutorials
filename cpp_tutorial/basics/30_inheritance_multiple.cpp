/*******************************************************************************
W3Schools - C++ Tutorial
30_inheritance_multiple.cpp
https://www.w3schools.com/cpp/cpp_inheritance_multiple.asp
2024-12-23
*******************************************************************************/

/*
A class can also be derived from more than one base class, using a comma-separated list:
*/

#include <iostream>

// Base class
class MyClass {
public:
    void myFunction() {
        std::cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
public:
    void myOtherFunction() {
        std::cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}

