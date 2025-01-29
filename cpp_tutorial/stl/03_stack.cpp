/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
03_stack.cpp
*******************************************************************************/

/*
A stack stores multiple elements in a specific order, called LIFO.

LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of
pancakes, where pancakes are both added and removed from the top.

So when removing a pancake, it will always be the last one you added.
This way of organizing elements is called LIFO in computer science and
programming.

Unlike vectors, elements in the stack are not accessed by index numbers.
Since elements are added and removed from the top, you can only access th
element at the top of the stack.
*/

#include <iostream>
#include <stack>
#include <string>

// Function to add elements to the stack
void add(std::stack<std::string>& cars) {
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    std::cout << "Added elements to the stack.\n";
}

// Function to access the top element
void access(const std::stack<std::string>& cars) {
    if (!cars.empty()) {
        std::cout << "Top element: " << cars.top() << std::endl;
    } else {
        std::cout << "The stack is empty.\n";
    }
}

// Function to modify the top element
void modify(std::stack<std::string>& cars) {
    if (!cars.empty()) {
        cars.top() = "Tesla";
        std::cout << "Modified the top element to: " << cars.top() << std::endl;
    } else {
        std::cout << "The stack is empty, cannot modify the top element.\n";
    }
}

// Function to remove the top element
void remove(std::stack<std::string>& cars) {
    if (!cars.empty()) {
        std::cout << "Removing the top element: " << cars.top() << std::endl;
        cars.pop();
    } else {
        std::cout << "The stack is empty, nothing to remove.\n";
    }
}

// Function to get the size of the stack
void get_size(const std::stack<std::string>& cars) {
    std::cout << "Stack size: " << cars.size() << std::endl;
}

// Function to check if the stack is empty
void get_empty(const std::stack<std::string>& cars) {
    std::cout << "Is the stack empty? " << (cars.empty() ? "Yes" : "No") << std::endl;
}

int main() {
    // Create a stack of strings called cars
    std::stack<std::string> cars;
    
    // Test the functionality of std::stack
    std::cout << "## Adding elements\n";
    add(cars);
    
    std::cout << "\n## Accessing the top element\n";
    access(cars);
    
    std::cout << "\n## Modifying the top element\n";
    modify(cars);
    
    std::cout << "\n## Removing the top element\n";
    remove(cars);
    
    std::cout << "\n## Checking the size of the stack\n";
    get_size(cars);
    
    std::cout << "\n## Checking if the stack is empty\n";
    get_empty(cars);
    
    return 0;
}

