/*******************************************************************************
W3Schools - C++ Tutorial
29_inheritance_multilevel.cpp
https://www.w3schools.com/cpp/cpp_inheritance_multilevel.asp
2024-12-23
*******************************************************************************/

/*
A class can also be derived from one class, which is already derived from another class.
In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).
*/

#include <iostream>

// Base class (parent)
class MyClass {
public:
    void myFunction() {
        std::cout << "Some content in parent class." << std::endl;
    }
};

// Derived class (child)
class MyChild : public MyClass {
};

// Derived class (grandchild)
class MyGrandChild : public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}

