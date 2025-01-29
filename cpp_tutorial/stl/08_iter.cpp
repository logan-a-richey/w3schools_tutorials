/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
08_iterators.cpp
*******************************************************************************/

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

void example_01(){
    // Create a vector called cars that will store strings
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Create a vector iterator called it
    std::vector<std::string>::iterator it;

    // Loop through the vector with the iterator
    for (it = cars.begin(); it != cars.end(); ++it) {
        std::cout << *it << "\n";
    }
    /*
    Example explained
    (1) First we create a vector of strings to store the names of different car
    manufactures.
    (2) Then we create a "vector iterator" called it, that we will use to loop
    through the vector.
    (3) Next, we use a for loop to loop through the vector with the iterator.
    The iterator (it) points to the first element in the vector (cars.begin())
    and the loop continues as along as it is not equal to cars.end().
    (4) The increment operator (++it) moves the iterator to the next element in
    the vector.
    (5) The dereference operator (*it) accesses the element the iterator points
    to.
    Note: The type of the iterator must match the type of the data structure it 
    should iterate through (string in our example)
    */
}

void example_02(){
    // iterator "pointing"
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    std::vector<std::string>::iterator it;
    
    // Point to the first element in the vector
    it = cars.begin();
    // Point to the second element
    it = cars.begin() + 1;
    // Point to the third element
    it = cars.begin() + 2;
    // Print the element that it is pointing to, "Ford"
    std::cout << *it << std::endl;
    
    // We can also modify elements with the iterator
    // Point to the first element in the vector
    it = cars.begin();
    // Modify the value of the first element
    *it = "Tesla"; // Volvo is now Tesla
    std::cout << cars.at(0) << std::endl;
}

void example_03(){
    // using auto keyword
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

void example_04(){
    // Create a vector called cars that will store strings
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    
    // Method we have been using
    //for (std::string car : cars) {
    //  std::cout << car << "\n";
    //}
    
    // Loop through vector elements
    for (auto it = cars.begin(); it != cars.end(); ) {
      if (*it == "BMW") {
        it = cars.erase(it); // Remove the BMW element
      } else {
        ++it;
      }
    }

    // Print vector elements
    for (const std::string& car : cars) {
      std::cout << car << "\n";
    }

}

void example_05(){
    // Iterate in Reverse
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    
    // Iterate in reverse order
    for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
        std::cout << *it << "\n";
    }

    // Great for other data structures:
    // List
    std::list<std::string> cars_list = {"Volvo", "BMW", "Ford", "Mazda"};
    for (auto it = cars_list.begin(); it != cars_list.end(); ++it) {
        std::cout << *it << "\n";
    }
    
    // Deque Example:
    std::deque<std::string> cars_deque = {"Volvo", "BMW", "Ford", "Mazda"};
    for (auto it = cars_deque.begin(); it != cars_deque.end(); ++it) {
        std::cout << *it << "\n";
    }
    
    // Set Example:
    std::set<std::string> cars_set = {"Volvo", "BMW", "Ford", "Mazda"};
    for (auto it = cars_set.begin(); it != cars_set.end(); ++it) {
        std::cout << *it << "\n";
    }
    
    // Map Example:
    std::map<std::string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    for (auto it = people.begin(); it != people.end(); ++it) {
        std::cout << it->first << " is: " << it->second << "\n";
    }
}

int main(){
    std::cout << "=== Example 01 ===\n";
    example_01();
    
    std::cout << "\n=== Example 02 ===\n";
    example_02();
    
    std::cout << "\n=== Example 03 ===\n";
    example_03();
    
    std::cout << "\n=== Example 04 ===\n";
    example_04();
    
    std::cout << "\n=== Example 05 ===\n";
    example_05();
    
    return 0;
}

