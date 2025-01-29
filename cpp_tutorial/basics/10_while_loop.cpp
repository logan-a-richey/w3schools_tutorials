/*******************************************************************************
W3Schools - C++ Tutorial
10_while_loop.cpp
https://www.w3schools.com/cpp/cpp_while_loop.asp
2024-12-23
*******************************************************************************/

#include <iostream>
using namespace std;

// Example of a basic while loop
void while_loop(){
    int i = 0;
    while (i < 5) {
      cout << i << "\n";  // Print numbers from 0 to 4
      i++;
    }
}

// Example of a do-while loop
void do_while_loop(){
    int i = 0;
    do {
        cout << i << "\n";  // Print numbers from 0 to 4
        i++;
    } while (i < 5);
}

// New Year countdown using a while loop
void new_year_countdown(){
    int countdown = 3;
    while (countdown > 0) {
        cout << countdown << "\n";  // Countdown from 3 to 1
        countdown--;
    }
    cout << "Happy New Year!!\n";  // Display Happy New Year at the end
}

// Function to print even numbers up to a certain limit
void even_numbers(){
    int i = 0;
    while (i <= 10) {
        if (i % 2 == 0) {  // Check if the number is even
            cout << i << "\n";
        }
        i++;
    }
}

// Function to reverse a given number
int reverse_number(){
    int numbers = 12345;  // Original number
    int revNumbers = 0;  // Variable to store reversed number

    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;  // Extract the last digit and add it to revNumbers
        numbers /= 10;  // Remove the last digit from the original number
    }
    return revNumbers;  // Return the reversed number
}

// Example of a loop with a specific game (Yatzy)
void yatzy_loop(){
    int dice = 1;
    while (dice <= 6) {
        if (dice < 6) {
            cout << "No Yatzy\n";  // If the dice is not 6, print "No Yatzy"
        } else {
            cout << "Yatzy!\n";  // When the dice is 6, print "Yatzy!"
        }
        dice++;  // Increment the dice value
    } 
}

int main(){
    cout << "--- Loop 1 ---\n";
    while_loop();  // Call the while_loop function
    
    cout << "\n--- Loop 2 ---\n";
    do_while_loop();  // Call the do_while_loop function
    
    cout << "\n--- Loop 3 ---\n";
    new_year_countdown();  // Call the new_year_countdown function
    
    cout << "\n--- Even Numbers ---\n";
    even_numbers();  // Call the even_numbers function

    cout << "\n--- Reversed Number ---\n";
    int reversed = reverse_number();  // Get the reversed number
    cout << "Reversed number: " << reversed << "\n";  // Print the reversed number
    
    cout << "\n--- Yatzy Loop ---\n";
    yatzy_loop();  // Call the yatzy_loop function
    
    return 0;
}

