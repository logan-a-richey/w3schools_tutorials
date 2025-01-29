/*******************************************************************************
W3Schools - C++ Tutorial
14_structs_and_enums.cpp
https://www.w3schools.com/cpp/cpp_structs.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

void struct_example_01(){
    // Create a structure variable called myStructure
    struct {
        int myNum;
        string myString;
    } myStructure;

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << "Example 1:\n";
    cout << "myNum: " << myStructure.myNum << "\n";
    cout << "myString: " << myStructure.myString << "\n";
}

void struct_example_02(){
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << "Example 2:\n";
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
}

// An enum is a special type that represents a group of constants (unchangeable values).
void enum_example_01(){
    enum Level {
        LOW = 5,
        MEDIUM, // default: 6
        HIGH    // default: 7
    }; 

    // Assign a value to the enum variable
    Level myVar = MEDIUM;

    // Using a switch-case statement to display different levels
    cout << "myVar = " << myVar << endl;

    switch (myVar) {
        case LOW:
            cout << "Low Level\n";
            break;
        case MEDIUM:
            cout << "Medium level\n";
            break;
        case HIGH:
            cout << "High level\n";
            break;
        default:
            cout << "Unknown level\n";
            break;
    }
}

int main() {
    cout << "--- struct example 01 ---\n";        
    struct_example_01();
    
    cout << "\n--- struct example 02 ---\n";    
    struct_example_02();
    
    cout << "\n--- enum example 01 ---\n";    
    enum_example_01();

    return 0;
}

