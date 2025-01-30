/*******************************************************************************
W3Schools - C++ Tutorial
21_scope.cpp
https://www.w3schools.com/cpp/cpp_scope.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

// global x
int x = 5;
int y = 5;

void myFunction() {
    // local x
    int x = 1234;
    y++;
    cout << "Local x = " << x << endl;
    
}

int main() {
    cout << "y = " << y << endl;
    myFunction();

    // We can also use x here
    cout << "Global x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}
