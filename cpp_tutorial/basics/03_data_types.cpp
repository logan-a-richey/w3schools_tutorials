/*******************************************************************************
W3Schools - C++ Tutorial
03_data_types.cpp
https://www.w3schools.com/cpp/cpp_data_types.asp
2024-12-22
*******************************************************************************/

#include <iostream>

/*
Basic data types:
boolean 1 byte 	        Stores true or false values
char 	1 byte 	        Stores a single character/letter/number, or ASCII values
int 	2 or 4 bytes 	Stores whole numbers, without decimals
float 	4 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double 	8 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
*/

int tutorial(){
    int var1 = 5;               // Integer (whole number)
    float var2 = 5.99;     // Floating point number
    double var3 = 9.98;   // Floating point number
    char var4 = 'D';         // Character
    bool var5 = true;       // Boolean
    std::string var6 = "Hello";     // String 
    
    std::cout << "var1 = " << var1 << std::endl;
    std::cout << "var2 = " << var2 << std::endl;
    std::cout << "var3 = " << var3 << std::endl;
    std::cout << "var4 = " << var4 << std::endl;
    std::cout << "var5 = " << var5 << std::endl;
    std::cout << "var6 = " << var6 << std::endl;

    return 0;
}

int real_life_example(){
    // Create variables of different data types
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    std::cout << "Number of items: " << items << std::endl;
    std::cout << "Cost per item: " << cost_per_item << currency << std::endl;
    std::cout << "Total cost = " << total_cost << currency << std::endl;

    return 0;
}

int main(){
    // demonstrating basic data types
    
    std::cout << "--- Example 00 ---" << std::endl;      
    tutorial();
    std::cout << std::endl;

    std::cout << "--- Example 01 ---" << std::endl;    
    real_life_example();
    std::cout << std::endl;
    
    return 0;
}


