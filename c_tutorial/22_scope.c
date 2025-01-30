// 22_scope.c

#include <stdio.h>

/*
If you operate with the same variable name inside and outside of a function, C will treat them as two separate variables; 
One available in the global scope (outside the function) and one available in the local scope (inside the function):

However, you should avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.
In general, you should be careful with global variables, since they can be accessed and modified from any function:

To sum up, use local variables (with good variable names) as much as you can.
This will make your code easier to maintain and better to understand. 
However, you may find global variables when working on existing C programs or while collaborating with others. 
Therefore, it is good to understand how the scope works and how to use it effectively to make sure your code is clear and functional.
*/

// global variables
int x = 5; // global x variable
int y = 5; // global y variable

void my_function(){
    int x = 22; // local x variable
    y++; // modify the global y variable
    printf("x = %d.\n", x); // refers to the local x

}

int main(){
    my_function(); 
    printf("x = %d.\n", x); // refers to the global x 
    printf("y = %d.\n", y); // refers to the global y. As you can see, y has been modified by my_function()!
    return 0;
}

