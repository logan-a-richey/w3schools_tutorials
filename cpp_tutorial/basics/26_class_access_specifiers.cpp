/*******************************************************************************
W3Schools - C++ Tutorial
26_class_access_specifiers.cpp
https://chatgpt.com/
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

class MyClass {
    public:         // Public access specifier
        int x;      // Public attribute
    private:        // Private access specifier
        int y;      // Private attribute
};

int main() {
    MyClass myObj;
    myObj.x = 25;   // Allowed (public)
    //myObj.y = 50;   // Not allowed (private)
    cout << myObj.x << endl;
    return 0;
}
