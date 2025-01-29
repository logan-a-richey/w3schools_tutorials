// 30_enums.c

/*
Why And When To Use Enums?
Enums are used to give names to constants, which makes the code easier to read and maintain.
Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.
*/

#include <stdio.h>

// Define an enum for levels
enum Level {
    LOW = 5,
    MEDIUM,    // 6
    HIGH       // 7
};

int main() {
    // Create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;

    // Print the enum variable (which will output the integer value)
    printf("The value of myVar: %d\n", myVar);  // Outputs: 6

    // Using an enum in a switch statement
    switch (myVar) {
        case LOW:
            printf("Low Level\n");
            break;
        case MEDIUM:
            printf("Medium Level\n");
            break;
        case HIGH:
            printf("High Level\n");
            break;
        default:
            printf("Unknown Level\n");
            break;
    }

    return 0;
}

