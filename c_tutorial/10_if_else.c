// 10_if_else.c

/* Example using if, else if, and else. */

#include <stdio.h>

int main() {
    int grade; // Variable to store the input grade

    // Prompt the user to enter a grade
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    // Determine the letter grade using if-else if-else
    printf("Your grade: %d\n", grade);
    if (grade >= 90 && grade <= 100) {
        printf("Letter grade: A\n");
    } else if (grade >= 80 && grade < 90) {
        printf("Letter grade: B\n");
    } else if (grade >= 70 && grade < 80) {
        printf("Letter grade: C\n");
    } else if (grade >= 60 && grade < 70) {
        printf("Letter grade: D\n");
    } else if (grade >= 0 && grade < 60) {
        printf("Letter grade: F\n");
    } else {
        printf("Invalid grade! Please enter a number between 0 and 100.\n");
    }

    return 0;
}

