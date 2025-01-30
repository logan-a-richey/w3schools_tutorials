/*******************************************************************************
w3schools c++ tutorial
intro to standard template library
00_data_structures_and_stl.cpp
*******************************************************************************/

/*
In C++, many data types come with the Standard Template Library (STL):

Vector
    Stores elements like an array but can dynamically change in size.
    Adding and removing of elements are usually done at the end.
    Elements can be accessed by index.
List
    Stores elements sequentially, where each element is connected to the next.
    Adding and removing of elements can be done at both ends.
    Not accessible by index.
Stack
    Stores elements in a specific order, called LIFO (Last In, First Out),
    where elements can only be added and removed from the top.
    Not accessible by index.
Queue
    Stores elements in a specific order, called FIFO (First In, First Out),
    where elements are added at the end and removed from the front.
    Not accessible by index.
Deque
    Stores elements in a double-ended queue,
    where elements can be added and removed from both ends.
    Elements can be accessed by index.
Set
    Stores unique elements.
    Not accessible by index.
Map
    Stores elements in "key/value" pairs.
    Accessible by keys (not by index).
*/

/*
Below is an example using the vector data structure.
*/

/*
The key components of the STL consist of containers, iterators, and algorithms, and the 
relationship betweem them:

Containers are data structures that provides a way to store data, like vectors, lists, etc.
Iterators are objects used to access elements of a data structure.
Algorithms include functions, like sort() and find(), that perform operations on data structures 
through iterators.

In Computer Science, data structures and algorithms go hand in hand. A data structure is not worth 
much if you cannot search through it or manipulate it efficiently using algorithms, and algorithms 
are not worth much without a data structure to work on.
*/

#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>
/*
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <algorithm>
*/

int main(){
    // Create a vector called cars that will store strings
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    
    // Print vector elements: loop using for-each loop:
    std::cout << "Example loop:" << std::endl;
    for (int i=0; i<cars.size(); i++){
        std::cout << "Car #: " << i + 1 << " " << cars.at(i) << std::endl;
    }
    return 0;
}

