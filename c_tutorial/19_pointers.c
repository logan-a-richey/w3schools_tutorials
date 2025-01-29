// 19_pointers.c

#include <stdio.h>

int example_01(); // intro to pointers
int example_02(); // pointers and arrays

int main(){
    printf("*** Example 01 ***\n");
    example_01();
    printf("\n");

    printf("*** Example 02 ***\n");
    example_02();
    printf("\n");

    return 0;
}

int example_01(){
    /*
    You learned from the previous chapter, that we can get the memory address of a variable with the reference operator &:
    A pointer is a variable that stores the memory address of another variable as its value.
    A pointer variable points to a data type (like int) of the same type, and is created with the * operator.
    The address of the variable you are working with is assigned to the pointer:
    */
    int myAge = 43; // an int variable
    int* ptr = &myAge; // a pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x ...)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x ...)
    printf("%p\n", ptr);

    /*
    Example explained:
    Create a pointer variable with the name ptr, that points to an int variable (myAge). 
    Note that the type of the pointer has to match the type of the variable you're working with (int in our example).
    Use the & operator to store the memory address of the myAge variable, and assign it to the pointer.
    Now, ptr holds the value of myAge's memory address.
    */

    /*
    Dereference:
    In the example above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).
    You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):
    */
    
    printf("%d\n", *ptr); // dereference: output the value of myAge with the pointer. outputs 43
    
    /*
    Note that the * sign can be confusing here, as it does two different things in our code:

    When used in declaration (int* ptr), it creates a pointer variable.
    When not used in declaration, it acts as a dereference operator.
    */

    return 0;
}

int example_02(){
    int myNumbers[4] = {25, 50, 75, 100};
    
    // Print the memory address of each element
    for (int i = 0; i < 4; i++){
        printf("%p\n", &myNumbers[i]);  // Corrected the typo here from 'myNumberse' to 'myNumbers'
    }

    /* Outputs: 
    0x7ffe70f9d8f0
    0x7ffe70f9d8f4
    0x7ffe70f9d8f8
    0x7ffe70f9d8fc
    */

    // Note that the last number of each of the elements' memory address is different, with an addition of 4. 
    // It is because the size of an int type is typically 4 bytes, remember:
    int myInt;
    printf("%lu\n", sizeof(myInt)); // Outputs 4
    // So from the "memory address example" above, you can see that the compiler reserves 4 bytes of memory for each array element, 
    // which means that the entire array takes up 16 bytes (4 * 4) of memory storage:
    printf("%lu\n", sizeof(myNumbers)); // Outputs 16, or 4*4

    /* How Are Pointers Related to Arrays:
    Ok, so what's the relationship between pointers and arrays? Well, in C, the name of an array, is actually a pointer to the first element of the array.
    Confused? Let's try to understand this better, and use our "memory address example" above again.
    The memory address of the first element is the same as the name of the array:
    */
    
    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers);

    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);
    
    // This basically means that we can work with arrays through pointers!
    // How? Since myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access it:
    
    // Get the value of the first element in myNumbers
    printf("%d\n", *myNumbers);
    
    // To access the rest of the elements in myNumbers, you can increment the pointer/array (+1, +2, etc):
    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));

    // Get the value of the third element in myNumbers
    printf("%d\n", *(myNumbers + 2));

    // and so on..
    // and thus, we can use a For loop to loop through the values:
    int *ptr = myNumbers;

    for (int i = 0; i < 4; i++){
        printf("%d\n", *(ptr + i));
    }

    // It is also possible to change the value of array elements with pointers:
    // Change the value of the first element to 13
    *myNumbers = 13;
    
    // Change the value of the second element to 17
    *(myNumbers + 1) = 17;

    // Get the value of the first element
    printf("%d\n", *myNumbers);

    // Get the value of the second element
    printf("%d\n", *(myNumbers + 1));
    
    /*
    This way of working with arrays might seem a bit excessive. 
    Especially with simple arrays like in the examples above. 
    However, for large arrays, it can be much more efficient to access and manipulate arrays with pointers.

    It is also considered faster and easier to access two-dimensional arrays with pointers.
    And since strings are actually arrays, you can also use pointers to access strings.
    For now, it's great that you know how this works. 
    But like we specified in the previous chapter; 
    pointers must be handled with care, since it is possible to overwrite other data stored in memory.
    */

    return 0;
}

