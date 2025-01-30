// 11_switch.c

/* Example using a switch statement */

#include <stdio.h>

int main() {
    int grade; // Variable to store the input grade
    int gradeCategory; // Variable to store the grade category (mapped for switch)

    // Prompt the user to enter a grade
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    // Map the grade to a category
    if (grade >= 90 && grade <= 100) {
        gradeCategory = 1; // Category 1 for 'A'
    } else if (grade >= 80 && grade < 90) {
        gradeCategory = 2; // Category 2 for 'B'
    } else if (grade >= 70 && grade < 80) {
        gradeCategory = 3; // Category 3 for 'C'
    } else if (grade >= 60 && grade < 70) {
        gradeCategory = 4; // Category 4 for 'D'
    } else if (grade >= 0 && grade < 60) {
        gradeCategory = 5; // Category 5 for 'F'
    } else {
        printf("Invalid grade! Please enter a number between 0 and 100.\n");
        return 0;
    }

    // Now use the switch statement to print the letter grade
    switch (gradeCategory) {
        case 1:
            printf("Your grade: %d\n", grade);
            printf("Letter grade: A\n");
            break;
        case 2:
            printf("Your grade: %d\n", grade);
            printf("Letter grade: B\n");
            break;
        case 3:
            printf("Your grade: %d\n", grade);
            printf("Letter grade: C\n");
            break;
        case 4:
            printf("Your grade: %d\n", grade);
            printf("Letter grade: D\n");
            break;
        case 5:
            printf("Your grade: %d\n", grade);
            printf("Letter grade: F\n");
            break;
        default:
            printf("Invalid grade! Please enter a number between 0 and 100.\n");
            break;
    }

    return 0;
}
