// 21_function_parameters.c

#include <stdio.h>

// Function prototypes
void my_func_1(char name[]);
void my_func_2(char name[], int age);
void print_sum(int x, int y);
void print_array(int nums[], int size);  // No size parameter needed
int add_five(int x);
int return_sum(int x, int y);
float to_celsius(float fahr);
int example_f_to_c();
void print_div(int num);

// Main function
int main(){
    print_div(1);
    my_func_1("Liam");
    my_func_1("Jenny");
    my_func_1("Anja");

    print_div(2);
    my_func_2("Liam", 18);
    my_func_2("Jenny", 19);
    my_func_2("Anja", 20);


    print_div(3);
    print_sum(3, 6);

    // Use -1 as the sentinel value to mark the end of the array
    print_div(4);
    int my_numbers[6] = {0, 2, 4, 6, 8, -1};  // End the array with -1
    print_array(my_numbers, 6);  // No size parameter

    print_div(5);
    int res = add_five(3);
    printf("The result is %d.\n", res);

    print_div(6);
    res = return_sum(11, 22);
    printf("The result is %d.\n", res);

    print_div(7);
    int myResults[5];
    myResults[0] = return_sum(5, 3);
    myResults[1] = return_sum(6, 4);
    myResults[2] = return_sum(7, 5);
    myResults[3] = return_sum(8, 6);
    myResults[4] = return_sum(9, 7);
    print_array(myResults, 5);  // Print results using the sentinel value

    print_div(8);
    example_f_to_c();
    return 0;
}

// Function definitions
void my_func_1(char name[]){
    printf("Hello, %s\n", name);
}

void my_func_2(char name[], int age){
    printf("Hello, %s! You are %d years old.\n", name, age);
}

void print_sum(int x, int y){
    int sum = x + y;
    printf("The sum of %d and %d is %d.\n", x, y, sum);
}

// Smart print_array function with sentinel value
void print_array(int nums[], int size){
    for (int i=0; i<size; i++){
        printf("%d\n", nums[i]);
    }
}

int add_five(int x){
    return x + 5;
}

int return_sum(int x, int y){
    return x + y;
}

float to_celsius(float fahr){
    return (5.0 / 9.0) * (fahr - 32.0);  // Correct formula
}

int example_f_to_c(){
    float f_value = 98.8;
    float res = to_celsius(f_value);
    printf("Fahrenheit: %.2f\n", f_value);
    printf("Convert to Celsius: %.2f\n", res);
    return 0;
}

void print_div(int num){
    if (num <= 1){
        printf("*** Example %d ***\n", num);
    }
    else {
        printf("\n*** Example %d ***\n", num);
    }
}

