/*******************************************************************************
W3Schools - C++ Tutorial
07_booleans.cpp
https://www.w3schools.com/cpp/cpp_booleans.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

int tutorial(){
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false) 

    int x = 10;
    int y = 9;
    cout << (x > y); // returns 1 (true), because 10 is higher than 9
    cout << (10 > 9); // returns 1 (true), because 10 is higher than 9 
    cout << (x == 10);  // returns 1 (true), because the value of x is equal to 10 
    cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15 

    return 0;
}

int example(){
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
      cout << "Old enough to vote!";
    } else {
      cout << "Not old enough to vote.";
    }

    // Outputs: Old enough to vote! 
    return 0;
}

int main(){
    tutorial();
    example();
    return 0;
}

