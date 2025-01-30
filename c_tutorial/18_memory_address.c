// 18_memory_address.c

#include <stdio.h>

int main(){
    /*
    When a variable is created in C, a memory address is assigned to the variable.
    The memory address is the location of where the variable is stored on the computer.
    When we assign a value to the variable, it is stored in this memory address.
    To access it, use the reference operator (&), and the result represents where the variable is stored:
    */
    
    int myAge = 43;
    printf("value:   %d\n", myAge);
    printf("address: %p\n", &myAge); // Outputs 0x7ffe5367e044
    
    /*
    Note: The memory address is in hexadecimal form (0x..). 
    You will probably not get the same result in your program, 
    as this depends on where the variable is stored on your computer.
    
    You should also note that &myAge is often called a "pointer". 
    A pointer basically stores the memory address of a variable as its value. 
    To print pointer values, we use the %p format specifier.
    
    We will learn much more about pointers in the next chapter.
    
    Pointers are important in C, because they allow us to manipulate the data in the computer's memory - 
    this can reduce the code and improve the performance.
    Pointers are one of the things that make C and C++ stand out from weaker programming languages, like Python and Java.
    */

    return 0;
}

