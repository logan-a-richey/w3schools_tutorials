/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
02_list.cpp
*******************************************************************************/

/*
A list is similar to a vector in that it can store multiple elements of the
same type and dynamically grow in size.

However, two major differences between lists and vectors are:
    1.) You can add and remove elements from both the beginning and at the end
    of a list, while vectors are generally optimized for adding and removing at
    the end.
    
    2.) Unlike vectors, a list does not support random access, meaning you
    cannot directly jump to a specific index, or access elements by index
    numbers.
*/

#include <list>
#include <iostream>
#include <string>

void print_list(const std::list<std::string>& cars) {
    for (const std::string& car : cars) {
        std::cout << car << " ";
    }
    std::cout << std::endl;
}

void creating(std::list<std::string>& cars) {
    cars = {"Volvo", "BMW", "Ford", "Mazda"};
    std::cout << "List created with initial values." << std::endl;
    print_list(cars);
}

void accessing(const std::list<std::string>& cars) {
    std::cout << "First element: " << cars.front() << std::endl;
    std::cout << "Last element: " << cars.back() << std::endl;
}

void modifying(std::list<std::string>& cars) {
    cars.front() = "Opel";
    cars.back() = "Toyota";
    std::cout << "Modified list: ";
    print_list(cars);
}

void adding(std::list<std::string>& cars) {
    cars.push_front("Tesla");
    cars.push_back("VW");
    std::cout << "After adding elements: ";
    print_list(cars);
}

void removing(std::list<std::string>& cars) {
    cars.pop_front();
    cars.pop_back();
    std::cout << "After removing elements: ";
    print_list(cars);
}

void get_size(const std::list<std::string>& cars) {
    std::cout << "List size: " << cars.size() << std::endl;
}

void get_empty(const std::list<std::string>& cars) {
    std::cout << "Is the list empty? " << (cars.empty() ? "Yes" : "No") << std::endl;
}

void looping(const std::list<std::string>& cars) {
    // Method 1: for loop
    std::cout << "Loop Method 1: For Loop\n";
    for (int i = 0; i < cars.size(); i++) {
        std::cout << *std::next(cars.begin(), i) << std::endl; // Access elements using 'next'
    }

    // Method 2: for-each loop
    std::cout << "\nLoop Method 2: For-Each Loop:\n";
    for (const std::string& car : cars) { // Use reference to avoid unnecessary copying
        std::cout << car << std::endl;
    }

    // Method 3: iterator
    std::cout << "\nLoop Method 3: Iterator\n";
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

int main() {
    std::list<std::string> cars;

    std::cout << "## creating " << std::endl;
    creating(cars);
    std::cout << std::endl;

    std::cout << "## accessing " << std::endl;
    accessing(cars);
    std::cout << std::endl;

    std::cout << "## modifying " << std::endl;
    modifying(cars);
    std::cout << std::endl;

    std::cout << "## adding " << std::endl;
    adding(cars);
    std::cout << std::endl;

    std::cout << "## removing " << std::endl;
    removing(cars);
    std::cout << std::endl;

    std::cout << "## get_size " << std::endl;
    get_size(cars);
    std::cout << std::endl;

    std::cout << "## get_empty " << std::endl;
    get_empty(cars);
    std::cout << std::endl;

    std::cout << "## looping " << std::endl;
    looping(cars);
    std::cout << std::endl;

    return 0;
}

