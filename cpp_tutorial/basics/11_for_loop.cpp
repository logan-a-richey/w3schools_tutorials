/*******************************************************************************
W3Schools - C++ Tutorial
11_for_loop.cpp
https://www.w3schools.com/cpp/cpp_for_loop.asp
2024-12-23
*******************************************************************************/

#include <iostream>
#include <iomanip> // For std::setw
using namespace std;

void loop_1_to_10() {
    for (int i = 1; i <= 10; i++) {
        cout << i << "\n";
    }
}

void loop_1_to_10_evens() {
    for (int i = 0; i <= 10; i += 2) {
        cout << i << "\n";
    }
}

void nested_loops() {
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }
}

void for_each_loop() {
    /*
        for (type variableName : arrayName) {
            // code block to be executed
        }
    */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }
}

void print_table() {
    // Create a 12x12 table initialized with zeros
    // Table is 13x13 because index 0 will be for headers
    int table[13][13] = {0};

    // Fill in the first row and column with numbers 1 to 12
    for (int i = 1; i <= 12; i++) {
        table[0][i] = i;
        table[i][0] = i;
    }

    // Fill in the table with multiplication values
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 12; j++) {
            table[i][j] = i * j;
        }
    }

    // Print the header row
    cout << "    |";
    for (int i = 1; i <= 12; i++) {
        cout << " " << setw(3) << i; // Set width to 3 characters for alignment
    }
    cout << endl;

    // Print the separator line
    cout << "----+";
    for (int i = 1; i <= 12; i++) {
        cout << "----"; // Set width to 4 characters for separator
    }
    cout << endl;

    // Print each row of the table
    for (int i = 1; i <= 12; i++) {
        cout << setw(3) << i << " |"; // Print the row header (row number)
        for (int j = 1; j <= 12; j++) {
            cout << " " << setw(3) << table[i][j]; // Print the multiplication result
        }
        cout << endl;
    }
}

int main() {
    // Demonstrating for loops
    
    cout << "--- Loop 1 to 10 ---\n";
    loop_1_to_10();

    cout << "\n--- Loop 1 to 10 Evens ---\n";
    loop_1_to_10_evens();

    cout << "\n--- Nested Loops ---\n";
    nested_loops();

    cout << "\n--- For-Each Loop ---\n";
    for_each_loop();

    cout << "\n--- Multiplication Table ---\n";
    print_table();

    return 0;
}

