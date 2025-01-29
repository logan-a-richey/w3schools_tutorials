/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
01_vectors.cpp
*******************************************************************************/

/*
A vector in C++ is like a resizable array.

Both vectors and arrays are data structures used to store multiple elements of
the same data type.

The difference between an array and a vector, is that the size of an array
cannot be modified (you cannot add or remove elements from an array).

A vector however, can grow or shrink in size as needed.
*/

#include <vector>
#include <string>
#include <iostream>

void creating(std::vector<std::string>& cars) {
    cars = {"Volvo", "BMW", "Ford", "Mazda"};
    std::cout << "Vector created with initial values." << std::endl;
}

void accessing(const std::vector<std::string>& cars) {
    // Accessing elements using different methods
    std::cout << "First element using []: " << cars[0] << std::endl;
    std::cout << "Second element using []: " << cars[1] << std::endl;
    std::cout << "First element using front(): " << cars.front() << std::endl;
    std::cout << "Last element using back(): " << cars.back() << std::endl;
    std::cout << "Element at index 1 using at(): " << cars.at(1) << std::endl;
    std::cout << "Element at index 2 using at(): " << cars.at(2) << std::endl;
}

void modifying(std::vector<std::string>& cars) {
    // Modifying the first element
    cars[0] = "Opel";
    std::cout << "First element after modification: " << cars.at(0) << std::endl;
}

void adding(std::vector<std::string>& cars) {
    cars.push_back("Tesla");
    cars.push_back("Batmobile");
    std::cout << "Last element after push_back(): " << cars.back() << std::endl;
}

void removing(std::vector<std::string>& cars) {
    // Removing the last element
    cars.pop_back();
    std::cout << "Last element after pop_back(): " << cars.back() << std::endl;
}

void get_size(const std::vector<std::string>& cars) {
    std::cout << "Vector size: " << cars.size() << std::endl;
}

void get_empty(const std::vector<std::string>& cars) {
    std::cout << "Is the vector empty? " << (cars.empty() ? "Yes" : "No") << std::endl;
}

void looping(const std::vector<std::string>& cars) {
    // Looping through the vector using a traditional for loop
    std::cout << "Looping using a traditional for loop:" << std::endl;
    for (int i = 0; i < cars.size(); i++) {
        std::cout << cars[i] << std::endl;
    }
    std::cout << std::endl;

    // Looping through the vector using a range-based for loop (C++11 and later)
    std::cout << "Looping using a range-based for loop:" << std::endl;
    for (const std::string& car : cars) {
        std::cout << car << std::endl;
    }
    std::cout << std::endl;
    
    // Looping with an iterator
    std::cout << "Looping with an iterator:" << std::endl;
    
    // CASE 1: not using auto, declaring it outside of the for loop
    /*
    std::vector<std::string>::const_iterator it; // this works, but our iterator has scope outside of the for loop
    for(it = cars.begin(); it != cars.end(); ++it){
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
    */
    
    // CASE 2: not using auto, declaring it inside of the for loop
    /*
    for(std::vector<std::string>::const_iterator it = cars.begin(); it != cars.end(); ++it){
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
    */
    
    // CASE 3: using auto
    for(auto it = cars.begin(); it != cars.end(); ++it){
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    // Declare a vector to hold car names
    std::vector<std::string> cars;
    
    // Call the functions to demonstrate vector operations
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

/*
C++ std::vector Library:
assign()        Fills a std::vector with multiple values
at()            Returns an indexed element from a std::vector
back()          Returns the last element of a std::vector
begin()         Returns an iterator pointing to the beginning of a std::vector
capacity()      Returns the number of elements that a std::vector's reserved memory is able to store
clear()         Removes all of the contents of a std::vector
data()          Returns a pointer to the block of memory where a std::vector's elements are stored
empty()         Checks whether a std::vector is empty or not
end()           Returns an iterator pointing to the end of a std::vector
erase()         Removes a number of elements from a std::vector
front()         Returns the first element of a std::vector
insert()        Inserts a number of elements into a std::vector
max_size()      Returns the maximum number of elements that a std::vector can have
pop_back()      Removes the last element of a std::vector
push_back()     Adds an element to the end of a std::vector
rbegin()        Returns a reverse iterator pointing to the last element of a std::vector
rend()          Returns a reverse iterator pointing to a position right before the first element of a std::vector
reserve()       Reserves memory for a std::vector
resize()        Changes the size of a std::vector, adding or removing elements if necessary
shrink_to_fit() Reduces the reseved memory of a std::vector if necessary to exactly fit the number of elements
size()          Returns the number of elements in a std::vector
swap()          Swaps the contents of one std::vector with another
*/

