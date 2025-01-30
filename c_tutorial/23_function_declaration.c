// 23_function_declaration.c

#include <stdio.h>

// function declaration
void my_function();
int my_adder(int x, int y);
void my_other_function();

// main
int main(){
    my_function();
    int res = my_adder(2,3); // 5
    printf("res = %d.\n",res);
    return 0;
}

// function implementation
void my_function(){
    printf("I just got executed\n");
    // functions can call other functions
    // since we declared all of our functions at top, we do not need to worry about where these functions are defined.
    my_other_function();
}

int my_adder(int x, int y){
    return x + y;
}

void my_other_function(){
    printf("Hey! Some text in my_other_function()!\n");
}

