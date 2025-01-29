/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
04_queue.cpp
*******************************************************************************/

/*
A queue stores multiple elements in a specific order, called FIFO.

FIFO stands for First in, First Out. To visualize FIFO, think of a queue as
people standing in line in a supermarket. The first person to stand in line is
also the first who can pay and leave the supermarket. This way of organizing
elements is called FIFO in computer science and programming.

Unlike vectors, elements in the queue are not accessed by index numbers.
Since queue elements are added at the end and removed from the front, you can
only access an element at the front or the back.
*/

#include <iostream>
#include <queue>
#include <string>

// Add elements to the queue
void add(std::queue<std::string>& cars) {
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    std::cout << "Added elements to the queue.\n";
}

// Access the front and back elements
void access(const std::queue<std::string>& cars) {
    if (!cars.empty()) {
        std::cout << "Front element: " << cars.front() << std::endl;
        std::cout << "Back element: " << cars.back() << std::endl;
    } else {
        std::cout << "The queue is empty.\n";
    }
}

// Modify the front and back elements
void modify(std::queue<std::string>& cars) {
    if (!cars.empty()) {
        // Modify front and back via references
        std::queue<std::string> tempQueue;
        tempQueue.push("Tesla");  // Replace the front
        cars.pop();

        while (!cars.empty()) {
            if (cars.size() == 1) {
                tempQueue.push("VW");  // Replace the back
                cars.pop();
            } else {
                tempQueue.push(cars.front());
                cars.pop();
            }
        }

        cars.swap(tempQueue);  // Replace original queue
        std::cout << "Modified the queue: Front = Tesla, Back = VW.\n";
    } else {
        std::cout << "The queue is empty. Cannot modify elements.\n";
    }
}

// Remove the front element
void remove(std::queue<std::string>& cars) {
    if (!cars.empty()) {
        std::cout << "Removing the front element: " << cars.front() << std::endl;
        cars.pop();
    } else {
        std::cout << "The queue is empty. Nothing to remove.\n";
    }
}

// Get the size of the queue
void get_size(const std::queue<std::string>& cars) {
    std::cout << "Queue size: " << cars.size() << std::endl;
}

// Check if the queue is empty
void get_empty(const std::queue<std::string>& cars) {
    std::cout << "Is the queue empty? " << (cars.empty() ? "Yes" : "No") << std::endl;
}

int main() {
    // Create a queue of strings
    std::queue<std::string> cars;

    std::cout << "## Adding elements\n";
    add(cars);

    std::cout << "\n## Accessing elements\n";
    access(cars);

    std::cout << "\n## Modifying elements\n";
    modify(cars);

    std::cout << "\n## Accessing elements after modification\n";
    access(cars);

    std::cout << "\n## Removing elements\n";
    remove(cars);

    std::cout << "\n## Checking the size of the queue\n";
    get_size(cars);

    std::cout << "\n## Checking if the queue is empty\n";
    get_empty(cars);

    return 0;
}

