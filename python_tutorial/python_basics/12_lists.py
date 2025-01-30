#!/usr/bin/python3
# 12_lists.py

from lesson_runner import LessonRunner

def list_creation() -> None:
    """Demonstrates different ways to create lists."""
    empty_list = []
    numbers = [1, 2, 3, 4, 5]
    mixed = ["apple", 42, True, 3.14]
    nested = [[1, 2], [3, 4]]

    print(f"Empty list: {empty_list}")
    print(f"Numbers list: {numbers}")
    print(f"Mixed list: {mixed}")
    print(f"Nested list: {nested}")

def list_access_items() -> None:
    """Demonstrates accessing list elements using indexing and slicing."""
    fruits = ["apple", "banana", "cherry", "date"]

    print(f"First item: {fruits[0]}")
    print(f"Last item: {fruits[-1]}")
    print(f"Slice [1:3]: {fruits[1:3]}")  # Items at index 1 and 2

def list_modify_items() -> None:
    """Demonstrates modifying list items."""
    numbers = [10, 20, 30, 40]
    numbers[1] = 25

    print(f"Modified list: {numbers}")  # Output: [10, 25, 30, 40]

def list_add_items() -> None:
    """Demonstrates adding items to a list."""
    fruits = ["apple", "banana"]
    fruits.append("cherry")  # Adds to end
    fruits.insert(1, "blueberry")  # Adds at index 1

    print(f"List after additions: {fruits}")

def list_remove_items() -> None:
    """Demonstrates removing items from a list."""
    fruits = ["apple", "banana", "cherry"]
    fruits.remove("banana")  # Removes by value
    last_fruit = fruits.pop()  # Removes last item

    print(f"List after removal: {fruits}, Removed: {last_fruit}")

def list_looping() -> None:
    """Demonstrates different ways to loop through a list."""
    numbers = [1, 2, 3, 4]

    print("For-loop:")

    for num in numbers:
        print(num, end=" ")
    print()
    
    print("List comprehension:")
    print("{}".format(
        " ".join([str(num*10) for num in numbers])
    ))

def list_comprehension() -> None:
    """Demonstrates list comprehension."""
    numbers = [1, 2, 3, 4, 5]
    squares = [x**2 for x in numbers]
    
    print(f"Squares: {squares}")

def list_sorting() -> None:
    """Demonstrates sorting lists."""
    nums = [5, 2, 9, 1]
    nums.sort()
    
    print(f"Sorted list: {nums}")
    
    words = ["banana", "apple", "cherry"]
    words.sort(reverse=True)
    
    print(f"Reverse sorted list: {words}")

def list_copying() -> None:
    """Demonstrates copying lists."""
    original = [1, 2, 3]
    copy1 = original.copy()
    copy2 = list(original)
    
    print(f"Original: {original}, Copy1: {copy1}, Copy2: {copy2}")

def list_extending() -> None:
    """Demonstrates joining and extending lists."""
    list1 = [1, 2, 3]
    list2 = [4, 5, 6]
    combined = list1 + list2
    list1.extend(list2)
    
    print(f"Combined (+): {combined}")
    print(f"Extended list1: {list1}")

def list_methods() -> None:
    """Demonstrates common list methods.
+------------------------+--------------------------------------------------------------+
| Method                 | Description                                                  |
+------------------------+--------------------------------------------------------------+
| append()               | Adds an element at the end of the list                       |
| clear()                | Removes all the elements from the list                       |
| copy()                 | Returns a copy of the list                                   |
| count()                | Returns the number of elements with the specified value      |
| extend()               | Adds the elements of a list (or any iterable) to the         |
|                        | end of the current list                                      |
| index()                | Returns the index of the first element with the specified    |
|                        | value                                                        |
| insert()               | Adds an element at the specified position                    |
| pop()                  | Removes the element at the specified position                |
| remove()               | Removes the item with the specified value                    |
| reverse()              | Reverses the order of the list                               |
| sort()                 | Sorts the list                                               |
+------------------------+--------------------------------------------------------------+
    """
    
    numbers = [1, 2, 3, 2, 5]

    # append() - Adds an item to the end of the list
    numbers.append(6)
    print(f"After append(6): {numbers}")

    # clear() - Removes all items from the list
    numbers.clear()
    print(f"After clear(): {numbers}")

    # copy() - Returns a shallow copy of the list
    numbers = [1, 2, 3, 2, 5]
    numbers_copy = numbers.copy()
    print(f"Original list: {numbers}")
    print(f"Shallow copy: {numbers_copy}")

    # count() - Returns the count of a specified item
    print(f"Count of 2: {numbers.count(2)}")

    # extend() - Adds all items of an iterable to the end of the list
    numbers.extend([6, 7])
    print(f"After extend([6, 7]): {numbers}")

    # index() - Returns the index of the first occurrence of a specified value
    print(f"Index of 2: {numbers.index(2)}")

    # insert() - Adds an item at a specified index
    numbers.insert(2, 10)  # Insert 10 at index 2
    print(f"After insert(2, 10): {numbers}")

    # pop() - Removes and returns an item at the given index (default: last item)
    popped_item = numbers.pop()
    print(f"After pop(): {numbers}, Popped item: {popped_item}")

    # remove() - Removes the first occurrence of a specified value
    numbers.remove(2)  # Removes the first 2
    print(f"After remove(2): {numbers}")

    # reverse() - Reverses the list in place
    numbers.reverse()
    print(f"Reversed list: {numbers}")

    # sort() - Sorts the list in ascending order (default)
    numbers.sort()
    print(f"Sorted list: {numbers}")

def main() -> None:
    """Runs all list lessons."""
    
    lessons: list = [
        list_creation,
        list_access_items,
        list_modify_items,
        list_add_items,
        list_remove_items,
        list_looping,
        list_comprehension,
        list_sorting,
        list_copying,
        list_extending,
        list_methods
    ]
    LessonRunner.run(lessons)
    return None

if __name__ == "__main__":
    main()

