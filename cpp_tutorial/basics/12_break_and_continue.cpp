/*******************************************************************************
W3Schools - C++ Tutorial
12_break_and_continue.cpp
https://www.w3schools.com/cpp/cpp_break.asp
2024-12-23
*******************************************************************************/

#include <iostream> // Required for input/output
using namespace std;

void test_01(){
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break; // Exit the loop when i is 4
        }
        cout << i << "\n";
    } 
}

void test_02(){
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // Skip this iteration when i is 4
        }
        cout << i << "\n";
    } 
}

void test_03(){
    int i = 0;
    while (i < 10) {
        cout << i << "\n";
        i++;
        if (i == 4) {
            break; // Exit the loop when i is 4
        }
    } 
}

void test_04(){
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++; 
            continue; // Skip the rest of the loop when i is 4
        }
        cout << i << "\n";
        i++;
    } 
}

int main(){
    // Testing each of the functions
    cout << "--- For loop break ---\n";
    test_01();
    
    cout << "\n--- For loop continue ---\n";
    test_02();
    
    cout << "\n--- While loop break ---\n";
    test_03();
    
    cout << "\n--- While loop continue ---\n";
    test_04();

    return 0;
}

