// 31_memory_management.c

/*
In C, you have to manage memory yourself. 
It is a complicated task, but is also quite powerful when used correctly. 
Properly managing the computer memory optimizes the performance of the program, 
so it is useful that you know how to release memory when it is no longer required and only use as little as necessary for the task.

In previous chapters, you learned about memory addresses and pointers.
Both have an importance when it comes to memory management, since it is possible to work directly with memory through pointers.
But be careful; pointers must be handled with care, since it is possible to damage data stored in other memory addresses.

Memory management is the process of handling how much memory a program uses through allocation, reallocation, and deallocation 
(often referred to as "freeing"). We will introduce each of these topics in the following chapters.
*/

#include <stdio.h>
#include <stdlib.h> // Include for malloc(), calloc(), realloc(), free()

// Function declarations
int allocate_memory();
int access_memory();
int reallocate_memory();
int deallocate_memory();
int memory_example();

// main
int main() {
    allocate_memory();
    access_memory();
    reallocate_memory();
    deallocate_memory();
    memory_example();
    
    return 0;
}

// Function definitions
int allocate_memory() {
    /* Static Memory: 
       Static memory is memory that is reserved for variables before the program runs. 
       Allocation of static memory is also known as compile time memory allocation.
       C automatically allocates memory for every variable when the program is compiled.
    */
    int students[20];
    printf("%lu\n", sizeof(students)); // 80 bytes

    /* Dynamic Memory
       Dynamic memory is memory that is allocated after the program starts running.
       You can write code to determine how much memory you need and allocate it dynamically.
    */
    int *students_ptr;
    int numStudents = 12;
    students_ptr = calloc(numStudents, sizeof(*students_ptr));
    printf("%lu\n", numStudents * sizeof(*students_ptr)); // 48 bytes

    return 0;
}

int access_memory() {
    /* Access Dynamic Memory */
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    printf("%d\n", *ptr);
    printf("%d %d %d", ptr[1], ptr[2], ptr[3]);

    int *ptr1 = malloc(4);
    char *ptr2 = (char*) ptr1;
    ptr1[0] = 1684234849;
    printf("%d is %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);

    return 0;
}

int reallocate_memory() {
    /*
       Reallocate Memory:
       If the amount of memory you reserved is not enough, you can reallocate it to make it larger.
       Reallocating reserves a different (usually larger) amount of memory while keeping the data that was stored in it.
    */
    int *ptr1, *ptr2;
    size_t size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%lu bytes allocated at address %p \n", size, ptr1);

    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    if (ptr2 == NULL) {
        printf("Failed to reallocate memory");
    } else {
        printf("%lu bytes reallocated at address %p \n", size, ptr2);
        ptr1 = ptr2;  // Update ptr1 to point to the newly allocated memory
    }

    free(ptr1);

    return 0;
}

int deallocate_memory() {
    /* Deallocate (free) Memory:
       When you no longer need a block of memory, you should deallocate it. 
       Deallocation is also referred to as "freeing" the memory.
    */
    int *ptr;
    ptr = malloc(sizeof(*ptr));
    free(ptr);
    ptr = NULL;

    return 0;
}

// Define a structure to represent the list
struct list {
    int *data;      // Pointer to dynamic memory that holds the list's data
    int numItems;   // The current number of items in the list
    int size;       // The total number of items that can fit in the allocated memory
};

// Function to add an item to the list
void addToList(struct list *myList, int item) {
    // If the list is full, resize the memory to fit 10 more items
    if (myList->numItems == myList->size) {
        // Increase size by 10
        myList->size += 10; 

        // Reallocate memory
        myList->data = realloc(myList->data, myList->size * sizeof(int));
        if (myList->data == NULL) {
            printf("Memory reallocation failed!\n");
            exit(1); // Exit the program if memory reallocation fails
        }
    }
    
    // Add the new item to the list and increment numItems
    myList->data[myList->numItems] = item;
    myList->numItems++;
}

int memory_example() {
    struct list myList;
    int amount;
    
    // Initialize the list: start with space for 10 items
    myList.numItems = 0;
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));
    
    // Check if memory allocation was successful
    if (myList.data == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Add any number of items to the list (44 items in this case)
    amount = 44;
    for (int i = 0; i < amount; i++) {
        addToList(&myList, i + 1); // Add items 1 through 44
    }

    // Display the contents of the list
    printf("List contents: ");
    for (int j = 0; j < myList.numItems; j++) {
        printf("%d ", myList.data[j]);
    }
    printf("\n");
    
    // Free the dynamically allocated memory when it's no longer needed
    free(myList.data);
    myList.data = NULL;

    return 0;
}

