/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
06_set.cpp
*******************************************************************************/

/*
A set stores unique elements where they:
(1) Are sorted automatically in ascending order.
(2)Are unique, meaning equal or duplicate values are ignored.
(3) Can be added or removed, but the value of an existing element cannot be
changed.
(4) Cannot be accessed by index numbers, because the order is based on sorting
and not indexing.
*/

#include <iostream>
#include <set>
#include <string>

void print_set(const std::set<std::string>& s) {
    for (const auto& item : s) {
        std::cout << item << " ";
    }
    std::cout << "\n";
}

int main() {
    // Creating a Set
    std::set<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    std::cout << "## Initial Set:\n";
    print_set(cars);

    // Adding Elements
    cars.insert("Tesla");
    cars.insert("VW");
    std::cout << "\n## After Adding Elements (Tesla, VW):\n";
    print_set(cars);

    // Trying to Add Duplicate Elements
    cars.insert("BMW");
    cars.insert("Mazda");
    std::cout << "\n## After Attempting to Add Duplicates (BMW, Mazda):\n";
    print_set(cars);

    // Removing Elements
    cars.erase("Ford");
    std::cout << "\n## After Removing 'Ford':\n";
    print_set(cars);

    // Checking Set Properties
    std::cout << "\n## Set Properties:\n";
    std::cout << "Size of the set: " << cars.size() << "\n";
    std::cout << "Is the set empty? " << (cars.empty() ? "Yes" : "No") << "\n";

    // Sorting a Set in Descending Order
    std::set<int, std::greater<int>> numbers = {1, 7, 3, 2, 5, 9};
    std::cout << "\n## Numbers in Descending Order:\n";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Clearing the Set
    cars.clear();
    std::cout << "\n## After Clearing the Set:\n";
    std::cout << "Size of the set: " << cars.size() << "\n";
    std::cout << "Is the set empty? " << (cars.empty() ? "Yes" : "No") << "\n";

    return 0;
}

