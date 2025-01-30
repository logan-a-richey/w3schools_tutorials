// 15_arrays.c
#include <stdio.h>

int example_01(); // creating an array and looping over values
int example_02(); // getting size of an array. looping with better method
int example_03(); // practical example
int example_04(); // practical example
int example_05(); // multi-dimensional arrays

int main(){
    printf("*** Example 01: ***\n");
    example_01();
    
    printf("\n*** Example 02: ***\n");
    example_02();
    
    printf("\n*** Example 03: ***\n");
    example_03();
    
    printf("\n*** Example 04: ***\n");
    example_04();
    
    printf("\n*** Example 05: ***\n");
    example_05();
    return 0;
}

int example_01(){
    // define an integer array:
    int nums[4]; // contains 4 elements, indexed 0 to 3.
    for (int i = 0; i < 4; ++i){
        nums[i] = 25*i;
    }
    printf("Looping over elements of an integer array:\n");
    for (int i = 0; i < 4; ++i){
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    return 0;
}

int example_02(){
    // getting array size or length
    int nums[] = {10, 20, 30, 40, 50};
    printf("sizeof(nums) = %lu\n", sizeof(nums)); // prints 20
    // why print 20 instead of 5? each integer takes up 4 bytes, thus 4*5 = 20.
    
    int len = sizeof(nums) / sizeof(nums[0]);
    printf("len = %d\n", len); // this will output the 5 that we were looking for.

    for(int i=0; i<len; i++){
        printf("%d\n", nums[i]);
    }

    return 0;
}

int example_03(){
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Loop through the elements of the array
    for (int i = 0; i < length; i++) {
        sum += ages[i];
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / length;

    // Print the average
    printf("The average age is: %.2f\n", avg);
    return 0;
}

int example_04(){
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    
    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);
    
    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];
    
    // Loop through the elements of the ages array to find the lowest age
    for (int i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }
    printf("Lowest age: %d\n", lowestAge);
    return 0;
}

int example_05(){
    int matrix[2][3] = { {1,2,3}, {4,5,6} };
    matrix[0][0] = 9; // now 9 outputs instead of 1.

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("matrix[%d][%d] = %d\n", i,j, matrix[i][j]);
        }
    }
    return 0;
}
