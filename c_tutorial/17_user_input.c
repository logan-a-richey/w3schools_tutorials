// 17_user_input.c

/*
The scanf() function takes two arguments: 
    (1) the format specifier of the variable (%d in the example above) 
    (2) and the reference operator (&myNum), which stores the memory address of the variable.

The scanf() function also allow multiple inputs (an integer and a character in example_02().

Note: When working with strings in scanf(), you must specify the size of the string/array 
(we used a very high number, 30 in our example, but atleast then we are certain it will 
store enough characters for the first name), and you don't have to use the reference operator (&).

See the following problematic code:
`
char fullName[30];

printf("Type your full name: \n");
scanf("%s", &fullName);

printf("Hello %s", fullName);

// Type your full name: John Doe
// Hello John
`

From the example above, you would expect the program to print "John Doe", but it only prints "John".

That's why, when working with strings, we often use the fgets() function to read a line of text. 
Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:

Use the scanf() function to get a single word as input, and use fgets() for multiple words.
*/

#include <stdio.h>

int example_01(); // simple scanf usage
int example_02(); // scanf with multiple inputs
int example_03(); // reading a single word with scanf
int example_04(); // reading full name with fgets

int main(){
    printf("*** Example 01: ***\n");
    example_01();
    printf("\n");
    
    printf("*** Example 02: ***\n");
    example_02();
    printf("\n");
    
    printf("*** Example 03: ***\n");
    example_03();
    printf("\n");
    
    printf("*** Example 04: ***\n");
    example_04();
    printf("\n");
    
    return 0;
}

int example_01(){
    // Create an integer variable that will store the number we get from the user
    int myNum;
    
    // Ask the user to type a number
    printf("Type a number: \n");
    
    // Get and save the number the user types
    scanf("%d", &myNum);
    
    // Output the number the user typed
    printf("Your number is: %d\n", myNum);

    return 0;
}

int example_02(){
    // Create an int and a char variable
    int myNum;
    char myChar;
    
    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");
    
    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &myChar);
    
    // Print the number
    printf("Your number is: %d\n", myNum);
    
    // Print the character
    printf("Your character is: %c\n", myChar);
    return 0;
}

int example_03(){
    // Create a string
    char firstName[30];
    
    // Ask the user to input some text
    printf("Enter your first name: \n");
    
    // Get and save the text (single word)
    scanf("%s", firstName);
    
    // Output the text
    printf("Hello %s\n", firstName);
    return 0;
}

int example_04(){
    char fullName[30];
    
    // Consume the leftover newline character from the previous scanf
    getchar();  // This clears the newline character in the input buffer

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin); // Now read the full name with spaces

    printf("Hello %s\n", fullName);
    
    return 0;
}

