// 14_break_continue.c
#include <stdio.h>

int for_break_example();
int while_break_example();

int main(){
    printf("=== Continue and Break with For Loop: ===\n");
    for_break_example();
    printf("\n");
    printf("=== Continue and Break with While Loop: ===\n");
    while_break_example();

    return 0;
}

int for_break_example(){
    // Using break and continue in a for loop
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking the loop when i = %d\n", i);
            break;  // Breaks the loop when i equals 5
        }
        
        if (i == 3) {
            printf("Skipping the iteration when i = %d\n", i);
            continue;  // Skips the current iteration when i equals 3
        }
        
        printf("i = %d\n", i);
    }

    return 0;
}

int while_break_example(){
    int i = 1;
    
    // Using break and continue in a while loop
    while (i <= 10) {
        if (i == 5) {
            printf("Breaking the loop when i = %d\n", i);
            break;  // Breaks the loop when i equals 5
        }
        
        if (i == 3) {
            printf("Skipping the iteration when i = %d\n", i);
            i++;  // Incrementation before continue to avoid infinite loop
            continue;  // Skips the current iteration when i equals 3
        }
        
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}

