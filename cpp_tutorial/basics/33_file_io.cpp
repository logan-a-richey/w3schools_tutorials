/*******************************************************************************
W3Schools - C++ Tutorial
33_file_io.cpp
https://chatgpt.com/
2024-12-23
*******************************************************************************/

// The w3schools example was quite minimal. Here is a more thorough example.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");  // Open a file in write mode

    if (!outFile) {  // Check if the file was successfully opened
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Hello, world!" << endl;  // Write a string to the file
    outFile << "This is a C++ file handling example." << endl;
    outFile << "We are writing multiple lines to the file." << endl;

    outFile.close();  // Always close the file after writing

    // Reading from a file
    ifstream inFile("example.txt");  // Open the file in read mode

    if (!inFile) {  // Check if the file was successfully opened
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "Reading the content from 'example.txt':" << endl;
    while (getline(inFile, line)) {  // Read the file line by line
        cout << line << endl;  // Output the line to the console
    }

    inFile.close();  // Always close the file after reading

    return 0;
}

