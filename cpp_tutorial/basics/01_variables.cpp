/*******************************************************************************
W3Schools - C++ Tutorial
01_variables.cpp
https://www.w3schools.com/cpp/cpp_variables.asp
2024-12-21
*******************************************************************************/

#include <iostream>

int example_00() {
    // demonstrating simple data types
    bool my_bool = true;
    int my_int = 5;
    double my_double = 3.14;
    char my_char = 'A';
    std::string my_string = "Hello";
    
    int x = 5; int y = 6;
    int sum = x + y;

    int a, b, c;
    a = b = c = 50;
    std::cout << "a+b+c = " << a+b+c << std::endl;

    const int my_const_int = 10;
    //my_const_int  = 15; // error; we cannot change const value.
    //const is most commonly seen in functions, when we don't want to accidentally mutate a value
    
    std::cout << "my_bool = " << my_bool << std::endl;
    std::cout << "my_int = " << my_int << std::endl;
    std::cout << "my_double = " << my_double << std::endl;
    std::cout  << "my_char = " << my_char << std::endl;
    std::cout << "my_string = " << my_string << std::endl;
    std::cout << "sum = " << sum << std::endl;
    return 0;
}
int example_01() {
    // practical example using student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';
    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "Student Age: " << studentAge << std::endl;
    std::cout << "Student Fee: " << studentFee << std::endl;
    std::cout << "Student Grade: " << studentGrade << std::endl;
    return 0;
}

int example_02() {
    // practical example using rectangle
    int length = 4;
    int width = 6;
    int area;
    int perimeter;
    
    area = length * width;
    perimeter = (length + width) * 2;
    
    std::cout << "area = " << area << std::endl;
    std::cout << "perimeter = " << area << std::endl;

    return 0;
}


int main() {
    // demonstrating characting different types of variables and printing them.
    
    std::cout << "--- Example 00 ---" << std::endl;    
    example_00();
    std::cout << std::endl;
    
    std::cout << "--- Example 01 ---" << std::endl;
    example_01();
    std::cout << std::endl;
    
    std::cout << "--- Example 02 ---" << std::endl;    
    example_02();
    std::cout << std::endl;
    
    return 0;
}

