/*******************************************************************************
W3Schools - C++ Tutorial
18_function_params.cpp
https://www.w3schools.com/cpp/cpp_function_param.asp
2024-12-23
*******************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

// Function Declarations
void greet_name_and_age(string fname, int age);  // Takes a name and age as parameters
void greet(string name);                 // Function to greet a person by name
void greet_country(string country = "Unknown"); // Function to greet a country, default to "Unknown"
void swap_nums(int &x, int &y);
void modify_string(std::string &my_string);

// Main function
int main() {
    // Calling greet with names
    greet("Jenny");
    greet("Anja");
    cout << endl;
    
    // Calling myFunction with a name and age
    greet_name_and_age("Liam", 3);
    greet_name_and_age("Jenny", 14);
    greet_name_and_age("Anja", 30);
    cout << endl;

    // Calling greet_country with different countries, default is used if no country is given
    greet_country("Sweden");
    greet_country("India");
    greet_country();  // Uses default value
    greet_country("USA");
    cout << endl;

    // Swap numbers
    int num1, num2;
    num1 = 3;
    num2 = 4;
    printf("Before: num1 = %d, num2 = %d\n",num1,num2);
    swap_nums(num1, num2);
    printf("After: num1 = %d, num2 = %d\n",num1,num2);
    cout << endl;

    // Modify string
    std::string partial_string = "Hello";
    std::cout << "Before: " << partial_string << std::endl;
    modify_string(partial_string);
    //printf("Before: %s\n", partial_string.c_str() );
    std::cout << "Before: " << partial_string << std::endl;
    cout << endl;

    return 0;
}

// Function Definitions
void greet(string name) {
    cout << "Hello " << name << "!\n";
}

void greet_name_and_age(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
}

void greet_country(string country) {
    cout << "Hello from " << country << "!\n";
}

void swap_nums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

void modify_string(std::string &my_string){
    my_string += " World!";
}

































