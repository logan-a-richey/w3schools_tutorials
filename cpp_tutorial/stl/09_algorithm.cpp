/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
09_algorithm_expanded.cpp
*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulate
#include <iterator> // For ostream_iterator
#include <functional> // For greater

// Function to print a vector
template <typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

void example_sort() {
    std::vector<int> numbers = {5, 1, 4, 2, 8};

    // Sort in ascending order
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted in ascending order: ";
    printVector(numbers);

    // Sort in descending order
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    std::cout << "Sorted in descending order: ";
    printVector(numbers);
}

void example_search() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    // Search for an element
    int value = 5;
    auto it = std::find(numbers.begin(), numbers.end(), value);
    if (it != numbers.end()) {
        std::cout << "Found " << value << " at index " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << value << " not found in the vector." << std::endl;
    }

    // Binary search (requires sorted data)
    std::sort(numbers.begin(), numbers.end()); // Ensure sorted order
    bool found = std::binary_search(numbers.begin(), numbers.end(), value);
    std::cout << (found ? "Binary search found " : "Binary search did not find ") << value << std::endl;
}

void example_min_max() {
    std::vector<int> numbers = {10, 20, 5, 40, 30};

    // Find the minimum element
    auto min_it = std::min_element(numbers.begin(), numbers.end());
    std::cout << "Minimum element: " << *min_it << std::endl;

    // Find the maximum element
    auto max_it = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Maximum element: " << *max_it << std::endl;
}

void example_fill_and_copy() {
    std::vector<int> numbers(10);

    // Fill vector with a specific value
    std::fill(numbers.begin(), numbers.end(), 7);
    std::cout << "Filled vector: ";
    printVector(numbers);

    // Copy to another vector
    std::vector<int> copiedNumbers;
    std::copy(numbers.begin(), numbers.end(), std::back_inserter(copiedNumbers));
    std::cout << "Copied vector: ";
    printVector(copiedNumbers);
}

void example_accumulate() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Calculate the sum of all elements
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of elements: " << sum << std::endl;

    // Calculate the product of all elements
    int product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<int>());
    std::cout << "Product of elements: " << product << std::endl;
}

void example_reverse() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Reverse the order of elements
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Reversed vector: ";
    printVector(numbers);
}

int main() {
    std::cout << "--- Example: Sorting ---" << std::endl;
    example_sort();

    std::cout << "\n--- Example: Searching ---" << std::endl;
    example_search();

    std::cout << "\n--- Example: Min/Max Elements ---" << std::endl;
    example_min_max();

    std::cout << "\n--- Example: Fill and Copy ---" << std::endl;
    example_fill_and_copy();

    std::cout << "\n--- Example: Accumulate ---" << std::endl;
    example_accumulate();

    std::cout << "\n--- Example: Reverse ---" << std::endl;
    example_reverse();

    return 0;
}

