// 13_for_loop.c

// https://www.w3schools.com/c/c_for_loop.php

#include <stdio.h>

int for_loop_example();
int nested_loop_example();

int main(){
    printf("For Loop Example:\n");
    for_loop_example();

    printf("\nNested Loop Example:\n");
    nested_loop_example();
    
    return 0;
}

int for_loop_example(){
    int i;
    for (i=0;i<5;i++){
        printf("%d\n",i);
    }
    return 0;
}


int nested_loop_example(){
    int i, j;
    int rows, cols;
    rows = 2;
    cols = 3;
    // outer loop
    for (i = 0; i <= rows; ++i){
        printf("Outer: %d\n", i); // executes 2 times

        // inner loop
        for (j = 1; j<=cols; ++j){
             printf("  Inner: %d\n", j); // Executes 6 times
        }
    }
    return 0;
}

