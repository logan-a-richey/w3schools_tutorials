/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
07_map.cpp
*******************************************************************************/

/*
A map stores elements in "key/value" pairs.

Elements in a map are:
- Accessible by keys (not index), and each key is unique.
- Automatically sorted in ascending order by their keys.

Maps are essentially dictionaries in Python.
C++ maps are statically typed unlike the dynamically typed dictionary in Python.
*/

#include <iostream>
#include <map>

// Creating a Map
void creating_map(std::map<std::string, int>& people) {
    /*
    Create a map called people that will store strings as keys and integers as values
    Create a map that will store the name and age of different people
    */
    people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    std::cout << "Map created.\n";
}

void accessing_map(std::map<std::string, int>& people) {
    // Accessing a Map
    // Get the value associated with the key "John"
    std::cout << "John is: " << people["John"] << "\n";

    // Get the value associated with the key "Adele"
    std::cout << "Adele is: " << people["Adele"] << "\n";

    // Note: The .at() function is often preferred over square brackets []
    // because it throws an error message if the element does not exist:

    // Get the value associated with the key "Adele"
    std::cout << "Adele is: " << people.at("Adele") << "\n";

    // Get the value associated with the key "Bo"
    std::cout << "Bo is: " << people.at("Bo") << "\n";
}

void modifying_values(std::map<std::string, int>& people) {
    // Change Values
    // Change John's value to 50 instead of 32
    people["John"] = 50;
    std::cout << "John is: " << people["John"] << "\n";  // Now outputs John is: 50
    
    // However, it is safer to use the .at() function:
    people.at("John") = 50;
    std::cout << "John is: " << people.at("John") << "\n";  // Now outputs John is: 50
}

void add_elements(std::map<std::string, int>& people) {
    // Add new elements
    people["Jenny"] = 22;
    people["Liam"] = 24;
    people["Kasper"] = 20;
    people["Anja"] = 30;

    // You can also use the .insert() method:
    // people.insert({"Jenny", 22});
    // people.insert({"Liam", 24});
    // people.insert({"Kasper", 20});
    // people.insert({"Anja", 30});

    // Elements with Equal Keys:
    people.insert({"Jenny", 22});
    people.insert({"Jenny", 30}); 
    // To sum up; values can be equal, but keys must be unique.
}

void remove_elements(std::map<std::string, int>& people) {
    // Remove Elements
    // Remove an element by key
    people.erase("John");

    // Remove all elements
    people.clear();
    std::cout << "All elements removed.\n";
}

void map_size(const std::map<std::string, int>& people) {
    // Find the Size of a Map
    std::cout << "Map size: " << people.size() << "\n";  // Outputs the number of elements in the map
}

void map_empty(const std::map<std::string, int>& people) {
    // Check if Map is Empty
    std::cout << "Map is empty: " << people.empty() << "\n"; // Outputs 1 (true) if the map is empty, otherwise 0 (false)
}

void map_looping(const std::map<std::string, int>& people) {
    // Loop Through a Map
    /*
    You can loop through a map with the for-each loop.
    However, there are a couple of things to be aware of:
    (1) You should use the `auto` keyword (introduced in C++11) inside the for loop.
    This allows the compiler to automatically determine the correct data type for each key-value pair.
    (2) Since map elements consist of both keys and values, you have to include 
    `.first` to access the keys, and .second to access values in the loop.
    (3) Elements in the map are sorted automatically in ascending order by their keys:
    */
    std::cout << "Looping through map (sorted by key):\n";
    for (auto person : people) {
        std::cout << person.first << " is: " << person.second << "\n";
    }

    // If you want to reverse the order, you can use the greater<type> functor
    // inside the angle brackets, like this:
    std::map<std::string, int, std::greater<std::string>> reverse_people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    std::cout << "\nLooping through map (sorted in reverse order):\n";
    for (auto person : reverse_people) {
        std::cout << person.first << " is: " << person.second << "\n";
    }
}

int main() {
    // Declare a map in main
    std::map<std::string, int> people;

    // Call functions to demonstrate map operations
    creating_map(people);
    accessing_map(people);
    modifying_values(people);
    add_elements(people);
    remove_elements(people);
    map_size(people);
    map_empty(people);
    map_looping(people);

    return 0;
}

