// 16_strings.c

#include <stdio.h>
#include <string.h> // for strlen() and string functions

int example_01(); // intro to strings
int example_02(); // special characters
int example_03(); // string functions

int main(){
    printf("*** Example 01 ***\n");
    example_01();
    
    printf("\n*** Example 02 ***\n");
    example_02();
    
    printf("\n*** Example 03 ***\n");
    example_03();
    
    return 0;
}

int example_01(){
    // Creating and printing a string
    char greetings[] = "Hello world!";
    printf("%s\n", greetings); // prints "Hello world!"

    // Accessing string by index
    printf("greetings[0] = %c\n", greetings[0]); // returns 'H'

    // Modifying string by index
    greetings[0] = 'J';
    printf("%s\n", greetings); // now prints "Jello world!"
    
    // Loop through a string
    char car_name[] = "Volvo"; 
    int len = strlen(car_name); // Use strlen instead of sizeof
    for (int i = 0; i < len; ++i) {
        printf("%c\n", car_name[i]);
    }

    // Another way of creating strings: literally an array of characters:
    char verbose_greeting[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", verbose_greeting);

    // Practical usage of a string:
    char message[] = "Good to see you,";
    char fname[] = "John";
    printf("%s %s!\n", message, fname); // Prints "Good to see you, John!"
    return 0;
}

int example_02(){
    // handling escape characters
    char txt[100];
    strcpy(txt, "We are the so-called \"Vikings\" from the north.");
    printf("%s\n", txt);
    
    strcpy(txt, "It\'s alright.");
    printf("%s\n", txt);
    
    strcpy(txt, "The character \\ is called backslash.");
    printf("%s\n", txt);
    
    /* Other escape characters include: '\n', '\t', '\0' */

    return 0;
}

int example_03(){
    // using strlen()
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is: %zu\n", strlen(alphabet));  // Corrected to %zu
    printf("Size is %zu\n", sizeof(alphabet));    // Corrected to %zu

    // difference between strlen() and sizeof()
    char alphabet2[50] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    printf("Length is %zu\n", strlen(alphabet2));  // Corrected to %zu
    printf("Size is %zu\n", sizeof(alphabet2));    // Corrected to %zu
    
    // string concatenation
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2); // concat str2 to str1. result is stored in str1.
    printf("%s\n", str1); // outputs "Hello World!"

    // copy strings
    char str3[20] = "Hello World!";
    char str4[20];

    strcpy(str4, str1); // Corrected the function and fixed the target array
    printf("%s\n", str4);

    // compare strings
    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "Hi";

    printf("%d\n", strcmp(str5, str6)); 
    printf("%d\n", strcmp(str5, str7));
    
    return 0;
}

