// 27_write_to_files.c

#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *fptr;

    // Open a file in writing mode (it will overwrite the file if it exists)
    fptr = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write some text to the file
    fprintf(fptr, "Hello, this is the first line in the file.\n");
    fprintf(fptr, "Writing to the file using fprintf function.\n");

    // Close the file
    fclose(fptr);

    // Notify the user
    printf("Content written to the file successfully!\n");

    return 0;
}
