// 28_read_files.c

#include <stdio.h>

int main() {
    FILE *fptr;
    char myString[100];

    // Open a file in read mode
    fptr = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Not able to open the file.\n");
        return 1;  // Exit if the file cannot be opened
    }

    // Read and print the content line by line
    printf("Reading content from the file:\n");
    while (fgets(myString, sizeof(myString), fptr)) {
        printf("%s", myString);
    }

    // Close the file after reading
    fclose(fptr);

    return 0;
}

