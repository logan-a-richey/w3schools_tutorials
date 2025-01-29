// 26_create_files.c

#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *fptr;

    // Create or open a file for writing
    fptr = fopen("example.txt", "w");

    // Check if the file was created successfully
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write data to the file
    fprintf(fptr, "Hello, this is a simple file handling example in C.\n");
    fprintf(fptr, "File handling allows us to create, read, and write to files.\n");

    // Close the file
    fclose(fptr);

    // Notify the user that the file was created and written to
    printf("File created and data written successfully!\n");

    return 0;
}

