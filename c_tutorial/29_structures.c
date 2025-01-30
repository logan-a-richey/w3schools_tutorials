// 29_structures.c

#include <stdio.h>
#include <string.h>

// Define a structure to store Car information
struct Car {
    char brand[50];
    char model[50];
    int year;
};

int main() {
    // Create three car structure variables and initialize them
    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};

    // Print information about each car
    printf("Car 1: %s %s %d\n", car1.brand, car1.model, car1.year);
    printf("Car 2: %s %s %d\n", car2.brand, car2.model, car2.year);
    printf("Car 3: %s %s %d\n", car3.brand, car3.model, car3.year);

    // Modify car1 information
    strcpy(car1.brand, "Audi");
    strcpy(car1.model, "A4");
    car1.year = 2020;

    // Print the updated car1 information
    printf("\nUpdated Car 1: %s %s %d\n", car1.brand, car1.model, car1.year);

    // Copy car1's details to car2 using assignment
    car2 = car1;

    // Print car2's details after the copy
    printf("\nCar 2 after copy from Car 1: %s %s %d\n", car2.brand, car2.model, car2.year);

    // Example of copying a structure
    struct Car car4;
    car4 = car3;  // Copy car3's data to car4

    // Print car4's details
    printf("\nCar 4 (copied from Car 3): %s %s %d\n", car4.brand, car4.model, car4.year);

    return 0;
}

