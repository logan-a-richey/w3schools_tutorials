/*******************************************************************************
W3Schools - C++ Tutorial
13_arrays_and_vectors.cpp
https://www.w3schools.com/cpp/cpp_arrays.asp
2024-12-23
*******************************************************************************/

#include <iostream>
#include <string>  // To use string data type
#include <vector>  // Required for vector usage
using namespace std;

void tutorial_01() {
    // Example of a fixed-size array with 3 elements
    string cars[] = {"Volvo", "BMW", "Ford"};
    cout << "Fixed-size array with 3 elements:\n";
    for (int i = 0; i < 3; i++) {
        cout << cars[i] << " ";
    }
    cout << "\n\n";

    // Another way to declare a fixed-size array
    string cars2[3] = {"Volvo", "BMW", "Ford"};
    cout << "Another fixed-size array with 3 elements:\n";
    for (int i = 0; i < 3; i++) {
        cout << cars2[i] << " ";
    }
    cout << "\n\n";

    // A fixed-size array with 5 elements, assigning values individually
    string cars3[5];
    cars3[0] = "Volvo";
    cars3[1] = "BMW";
    cars3[2] = "Ford";
    cars3[3] = "Mazda";
    cars3[4] = "Tesla";
    cout << "Fixed-size array with 5 elements (assigned individually):\n";
    for (int i = 0; i < 5; i++) {
        cout << cars3[i] << " ";
    }
    cout << "\n\n";

    // Example of dynamic-size array using a vector
    vector<string> cars_vector = {"Volvo", "BMW", "Ford"};
    cout << "Vector (dynamic-size array) with 3 elements:\n";
    for (const string& car : cars_vector) {
        cout << car << " ";
    }
    cout << "\n";

    // Adding another element to the vector
    cars_vector.push_back("Tesla");
    cout << "After adding another element to the vector:\n";
    for (const string& car : cars_vector) {
        cout << car << " ";
    }
    cout << "\n\n";

    // Using sizeof to get the size of a fixed-size array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << "Size of fixed-size array 'myNumbers' in bytes: " << sizeof(myNumbers) << " bytes\n";
    cout << "Number of elements in 'myNumbers' array: " << sizeof(myNumbers) / sizeof(myNumbers[0]) << "\n";
}

// Real-life Example 1: Calculate the average age from an array
void real_life_example_01() {
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};  // Array of ages

    float avg, sum = 0;
    int length = sizeof(ages) / sizeof(ages[0]);  // Calculate length of the array

    // Calculate the sum of all ages
    for (int age : ages) {
        sum += age;
    }

    // Calculate the average
    avg = sum / length;

    cout << "The average age is: " << avg << "\n"; 
}

// Real-life Example 2: Find the lowest age from the array
void real_life_example_02() {
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};  // Array of ages

    int lowestAge = ages[0];  // Initialize lowest age with the first element

    // Loop through the array to find the lowest age
    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;  // Update if a smaller age is found
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n"; 
}

// Multi-dimensional Array Example: A 3D array
void arrays_multi_example() {
    string letters[2][2][2] = {
        { { "A", "B" }, { "C", "D" } },
        { { "E", "F" }, { "G", "H" } }
    };

    // Nested loops to iterate through the 3D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters[i][j][k] << "\n";  // Print each letter
            }
        }
    }
}

void print_board(char board[4][4]) {
    // Print the game board with rows and columns
    cout << "\nSimple battleship GUI:\n";
    cout << "    0   1   2   3\n";
    for (int i = 0; i < 4; i++) {
        cout << i << "   ";  // Row number
        for (int j = 0; j < 4; j++) {
            cout << board[i][j] << "   ";  // Print each cell
        }
        cout << "\n";
    }
    cout << "\n";
}

void battleship_game() {
    // Define a 4x4 grid for the game where "1" represents a ship
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };

    // Create a board to track guesses (initialized with '?')
    char board[4][4] = {
        { '?', '?', '?', '?' },
        { '?', '?', '?', '?' },
        { '?', '?', '?', '?' },
        { '?', '?', '?', '?' }
    };

    int hits = 0;  // Counter for hits
    int numberOfTurns = 0;  // Counter for turns

    // Continue until all ships are hit
    while (hits < 4) {
        int row, column;

        // Print the current board
        print_board(board);

        cout << "Selecting coordinates\n";

        // Ask the player for row and column
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship is at the selected position
        if (ships[row][column]) {
            // If a ship is hit, set the value to 0 (indicating no ship) and mark as 'H' for hit
            ships[row][column] = 0;
            board[row][column] = 'H';  // Mark the hit position on the board
            hits++;  // Increment the hit counter
            cout << "Hit! " << (4 - hits) << " ships left.\n\n";
        } else {
            // Mark as 'M' for miss if no ship is found
            board[row][column] = 'M';
            cout << "Miss\n\n";  // If no ship is found
        }

        numberOfTurns++;  // Increment the turn counter
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns\n";
}

int main() {
    // Calling different functions to test array functionality
    cout << "--- array syntax and functionality ---\n";    
    tutorial_01();
    
    // Test average age calculation
    cout << "\n--- age calculation example ---\n";   
    real_life_example_01();

    // Test finding the lowest age
    cout << "\n--- find lowest age example ---\n";   
    real_life_example_02();

    // Test multi-dimensional array printing
    cout << "\n--- multi-dimensional array ---\n";  
    arrays_multi_example();

    // Start battleship game
    cout << "\n--- battleship game ---\n";  
    battleship_game();

    return 0;
}

