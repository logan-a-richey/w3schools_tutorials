// 09_booleans.c

/*
Booleans in C:
- Booleans are used to represent true or false values.
- The `bool` type is not built-in but was introduced in C99.
- You must include the <stdbool.h> header file to use it.

Key Notes:
- `true` is represented as 1.
- `false` is represented as 0.
- Use %d format specifier to print boolean values.

Memory:
1. Size of bool:
  - The bool type, defined in <stdbool.h>, is typically implemented as 1 byte
    (8 bits) in most modern C compilers.
  - This is sufficient to store the values true (1) and false (0).
2. Size of int:
  - The size of an int depends on the architecture and compiler but is generally
    4 bytes (32 bits) on most systems today (for example, on x86 and x86_64 systems).
  - On older or specific systems, it could be 2 bytes (16 bits).

Takeaway:
  - Since bool is smaller, it is more memory-efficient to use it when only 
    true/false values are required.
*/

#include <stdio.h>
#include <stdbool.h> // Include this for bool type

int main() {
    // Boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Print boolean variables
    printf("Boolean Variables:\n");
    printf("Is programming fun? %d\n", isProgrammingFun);   // Outputs: 1 (true)
    printf("Is fish tasty? %d\n", isFishTasty);             // Outputs: 0 (false)

    // Comparing numbers
    printf("\nComparing Numbers:\n");
    printf("Is 10 greater than 9? %d\n", 10 > 9);           // Outputs: 1 (true)
    printf("Is 10 equal to 15? %d\n", 10 == 15);            // Outputs: 0 (false)
    printf("Is 5 not equal to 55? %d\n", 5 != 55);          // Outputs: 1 (true)

    // Comparing variables
    int x = 20, y = 15;
    printf("\nComparing Variables:\n");
    printf("Is x greater than y? %d\n", x > y);             // Outputs: 1 (true)
    printf("Is x equal to y? %d\n", x == y);                // Outputs: 0 (false)

    // Comparing boolean variables
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("\nComparing Boolean Variables:\n");
    printf("Are both hamburger and pizza tasty? %d\n", isHamburgerTasty == isPizzaTasty); // Outputs: 1 (true)

    // Logical operators with booleans
    printf("\nLogical Operators:\n");
    printf("Is programming fun and pizza tasty? %d\n", isProgrammingFun && isPizzaTasty); // Outputs: 1 (true)
    printf("Is fish tasty or hamburger tasty? %d\n", isFishTasty || isHamburgerTasty);   // Outputs: 1 (true)
    printf("Is it not true that fish is tasty? %d\n", !isFishTasty);                     // Outputs: 1 (true)
    
    // bools are typically smaller than integers:
    printf("Size of bool: %zu byte(s)\n", sizeof(bool)); // Typically 1 byte
    printf("Size of int: %zu byte(s)\n", sizeof(int));   // Typically 4 bytes
    
    return 0;
}

