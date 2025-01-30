// 12_while_loop.c

/* Example using a while loop */

#include <stdio.h>

int while_loop_example();
int do_while_loop_example();

int main(){
    printf("While Loop Example:\n");
    while_loop_example();
    
    printf("\nDo While Loop Example:\n");
    do_while_loop_example();
    
    return 0;
}

int while_loop_example(){
    int i = 0;
    
    // will check the loop for the condition every time.
    // will loop as long as the condition is met.
    
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}

int do_while_loop_example(){
    int i = 0;
    
    // will run the loop at least once
    // will loop as long as the condition is met.
    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5 && i != 0);
    
    return 0;
}
