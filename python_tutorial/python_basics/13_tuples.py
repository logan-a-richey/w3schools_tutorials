#!/usr/bin/python3
# 13_tuples.py

from lesson_runner import LessonRunner

# 1. Tuple Creation
def tuple_creating() -> None:
    """Demonstrates creating tuples in Python."""
    # Creating a tuple
    my_tuple = (1, 2, 3)
    print(f"Created tuple: {my_tuple}")
    
    # Empty tuple
    empty_tuple = ()
    print(f"Empty tuple: {empty_tuple}")
    
    # Tuple with one element (comma is necessary)
    single_element_tuple = (1,)
    print(f"Single element tuple: {single_element_tuple}")
    
    # Creating a tuple without parentheses
    another_tuple = 4, 5, 6
    print(f"Another tuple: {another_tuple}")

# 2. Tuple Accessing (Indexing & Slicing)
def tuple_accessing() -> None:
    '''Demonstrates accessing tuple items using indexing and slicing.'''
    my_tuple = (10, 20, 30, 40, 50)
    
    # Accessing individual elements using indexing (zero-based index)
    print(f"First element: {my_tuple[0]}")
    print(f"Last element: {my_tuple[-1]}")
    
    # Slicing the tuple
    print(f"First three elements: {my_tuple[:3]}")
    print(f"Last two elements: {my_tuple[-2:]}")
    print(f"Elements from index 1 to 3: {my_tuple[1:4]}")

# 3. Tuple Updating (Tuples are immutable)
def tuple_updating() -> None:
    '''Demonstrates that tuples are immutable (cannot be updated directly).'''
    my_tuple = (1, 2, 3)
    print(f"Original tuple: {my_tuple}")
    
    # You can't modify an element directly in a tuple
    # my_tuple[0] = 10  # This will raise a TypeError
    
    # However, we can create a new tuple
    new_tuple = (10,) + my_tuple[1:]
    print(f"Updated tuple: {new_tuple}")

# 4. Tuple Unpacking
def tuple_unpacking() -> None:
    '''Demonstrates tuple unpacking.'''
    my_tuple = (1, 2, 3)
    
    # Unpacking the tuple into variables
    a, b, c = my_tuple
    print(f"Unpacked values: a={a}, b={b}, c={c}")
    
    # Unpacking with a * operator (to capture extra elements)
    a, *rest = my_tuple
    print(f"First element: {a}, Rest of the elements: {rest}")

# 5. Tuple Looping (Iterating over a tuple)
def tuple_looping() -> None:
    '''Demonstrates iterating over a tuple using a for loop.'''
    my_tuple = ('apple', 'banana', 'cherry')
    
    # Using a for loop to iterate through the tuple
    for item in my_tuple:
        print(f"Item: {item}")
    
    # Using tuple unpacking inside the loop
    my_tuple_with_numbers = [('a', 1), ('b', 2), ('c', 3)]
    for letter, number in my_tuple_with_numbers:
        print(f"Letter: {letter}, Number: {number}")

# 6. Tuple Joining (Concatenating tuples)
def tuple_joining() -> None:
    '''Demonstrates joining (concatenating) tuples.'''
    tuple1 = (1, 2, 3)
    tuple2 = (4, 5, 6)
    
    # Concatenating two tuples
    combined_tuple = tuple1 + tuple2
    print(f"Combined tuple: {combined_tuple}")
    
    # Repeating a tuple
    repeated_tuple = tuple1 * 2
    print(f"Repeated tuple: {repeated_tuple}")

# 7. Tuple Methods
def tuple_methods() -> None:
    '''Demonstrates some useful tuple methods:
+---------+------------------------------------------------------------------------------------------+
| Method  | Description                                                                              |
+---------+------------------------------------------------------------------------------------------+
| count() | Returns the number of times a specified value occurs in a tuple                          |
| index() | Searches the tuple for a specified value and returns the position of where it was found. |
+---------+------------------------------------------------------------------------------------------+
    '''
    my_tuple = (1, 2, 3, 1, 4, 5, 1)
    
    # Counting occurrences of an element
    print(f"Number of 1's in the tuple: {my_tuple.count(1)}")
    
    # Finding the index of an element
    print(f"Index of the first occurrence of 4: {my_tuple.index(4)}")
    
    # Find the index of an element that does not exist (will raise ValueError)
    try:
        print(f"Index of 10 in the tuple: {my_tuple.index(10)}")
    except ValueError:
        print("10 not found in the tuple")

def main():
    '''Runs all lessons'''
    lessons = [
        tuple_creating,
        tuple_accessing,
        tuple_updating,
        tuple_unpacking,
        tuple_looping,
        tuple_joining,
        tuple_methods
    ]
    LessonRunner.run(lessons)
    
if __name__ == "__main__":
    main()

