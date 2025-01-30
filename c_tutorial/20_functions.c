// 20_functions.c

#include <stdio.h>

void my_function(){
    printf("I just got executed!\n");
}

int main(){
    // A function is a block of code we can call multiple times.
    my_function();
    my_function();
    my_function();
    
    return 0;
}
