/*******************************************************************************
W3Schools - C++ Tutorial
27_encapsulation.cpp
https://www.w3schools.com/cpp/cpp_encapsulation.asp
2024-12-23
*******************************************************************************/

/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/

#include <iostream>

class Employee {
    private:
        // Private attribute
        int salary;

    public:
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    std::cout << myObj.getSalary() << std::endl;
    return 0;
} 

/*
It is considered good practice to declare your class attributes as private (as often as you can).
Encapsulation ensures better control of your data, because you (or others) 
can change one part of the code without affecting other parts.
Increased security of data.
*/

