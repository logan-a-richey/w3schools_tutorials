/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
05_deque.cpp
*******************************************************************************/

/*
A deque (stands for double-ended queue) however, is more flexible, as elements
can be added and removed from both ends (at the front and the back).
You can also access elements by index numbers. 
*/

#include <iostream>
#include <deque>
#include <string>

// Access elements of the deque
void access(const std::deque<std::string>& cars) {
    if (!cars.empty()) {
        std::cout << "First element: " << cars.front() << "\n";
        std::cout << "Last element: " << cars.back() << "\n";
        std::cout << "Second element: " << cars.at(1) << "\n";
    } else {
        std::cout << "The deque is empty. Cannot access elements.\n";
    }
}

// Modify elements of the deque
void modify(std::deque<std::string>& cars) {
    if (!cars.empty()) {
        cars.front() = "Opel";  // Modify the first element
        cars.back() = "VW";     // Modify the last element
        if (cars.size() > 2) {
            cars.at(1) = "Toyota"; // Modify the second element
        }
        std::cout << "Modified the deque: ";
        for (const auto& car : cars) {
            std::cout << car << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "The deque is empty. Cannot modify elements.\n";
    }
}

// Add elements to the deque
void add(std::deque<std::string>& cars) {
    cars.push_front("Tesla"); // Add to the front
    cars.push_back("Ford");   // Add to the back
    std::cout << "Added elements to the deque: ";
    for (const auto& car : cars) {
        std::cout << car << " ";
    }
    std::cout << "\n";
}

// Remove elements from the deque
void remove(std::deque<std::string>& cars) {
    if (!cars.empty()) {
        std::cout << "Removing front element: " << cars.front() << "\n";
        cars.pop_front(); // Remove from the front
    }
    if (!cars.empty()) {
        std::cout << "Removing back element: " << cars.back() << "\n";
        cars.pop_back();  // Remove from the back
    }
    std::cout << "Deque after removal: ";
    for (const auto& car : cars) {
        std::cout << car << " ";
    }
    std::cout << "\n";
}

// Get the size of the deque
void get_size(const std::deque<std::string>& cars) {
    std::cout << "Deque size: " << cars.size() << "\n";
}

// Check if the deque is empty
void get_empty(const std::deque<std::string>& cars) {
    std::cout << "Is the deque empty? " << (cars.empty() ? "Yes" : "No") << "\n";
}

// Loop through the deque using various methods
void looping(const std::deque<std::string>& cars) {
    std::cout << "Looping through the deque:\n";

    // Method 1: For loop with index
    std::cout << "For loop:\n";
    for (size_t i = 0; i < cars.size(); ++i) {
        std::cout << cars[i] << " ";
    }
    std::cout << "\n";

    // Method 2: Range-based for loop
    std::cout << "For-each loop:\n";
    for (const auto& car : cars) {
        std::cout << car << " ";
    }
    std::cout << "\n";

    // Method 3: Using iterators
    std::cout << "Using iterators:\n";
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

int main() {
    // Create a deque of strings
    std::deque<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    std::cout << "## Initial deque:\n";
    for (const auto& car : cars) {
        std::cout << car << " ";
    }
    std::cout << "\n\n";

    std::cout << "## Accessing elements:\n";
    access(cars);
    std::cout << "\n";

    std::cout << "## Modifying elements:\n";
    modify(cars);
    std::cout << "\n";

    std::cout << "## Adding elements:\n";
    add(cars);
    std::cout << "\n";

    std::cout << "## Removing elements:\n";
    remove(cars);
    std::cout << "\n";

    std::cout << "## Checking size:\n";
    get_size(cars);
    std::cout << "\n";

    std::cout << "## Checking if empty:\n";
    get_empty(cars);
    std::cout << "\n";

    std::cout << "## Looping through deque:\n";
    looping(cars);
    std::cout << "\n";

    return 0;
}

