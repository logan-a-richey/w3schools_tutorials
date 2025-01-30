/*******************************************************************************
W3Schools - C++ Tutorial
24_class_methods.cpp
https://www.w3schools.com/cpp/cpp_class_methods.asp
2024-12-23
*******************************************************************************/

#include <iostream>

using namespace std;

// Car blueprint
class Car {
    public:
        int speed(int maxSpeed);
};

// define Car function outside of car. This could even be in its own file.
int Car::speed(int maxSpeed) {
    return maxSpeed;
}

// Run program
int main() {
    // Create an object of Car
    Car myObj;
    
    // Call the method with an argument
    cout << myObj.speed(200) << endl; 
    return 0;
}
