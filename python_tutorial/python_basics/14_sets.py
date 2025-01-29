#!/usr/bin/python3
# 14_sets.py

from lesson_runner import LessonRunner

def set_creating() -> None:
    """
    Demonstrates how to create sets in Python.
    """
    # A set is a collection which is unordered, unchangeable, and unindexed.
    # Note: Set items are unchangeable, but you can remove items and add new items.
    set_a = {"apple", "banana", "cherry"} 
    print(f"Set A: {set_a}")
    
    # Duplicate values will be ignored
    set_b = {'a','b','c','a'}
    print(f"Set B (duplicates removed): {set_b}")

    # True and 1 are considered the same value
    set_c = {"apple", "banana", "cherry", True, 1, 2}
    print(f"Set C (True and 1 considered same): {set_c}")

    # False and 0 are considered the same value
    set_d = {"apple", "banana", "cherry", False, True, 0}
    print(f"Set D (False and 0 considered same): {set_d}")
    
    # Get length of a set
    set_e = {'w','x','y','z'}
    print(f"Length of set E: {len(set_e)}")

    # Sets can contain any data types
    set1 = {"apple", "banana", "cherry"}
    set2 = {1, 5, 7, 9, 3}
    set3 = {True, False, False}
    print(f"Set 1: {set1}, Set 2: {set2}, Set 3: {set3}")

    # A set can contain different data types:
    set4 = {"abc", 34, True, 40, "male"} 
    print(f"Set 4 with mixed data types: {set4}")

    # sets are defined as objects with the data type <class 'set'>
    print(f"Type of set_a: {type(set_a)}")

    # The set() constructor
    myset = set(("apple", "banana", "cherry", "date", "eggplant"))
    print(f"Set created with set() constructor: {myset}")

def set_accessing() -> None:
    """
    Demonstrates how to access set elements (iterating).
    """
    myset = {"apple", "banana", "cherry"}
    
    print(f"myset = {myset}")
    
    # Since sets are unordered, we cannot access by index directly
    # We can loop over the set elements:
    for x in myset:
        print(f"- {x}")
    
    print("Check if 'banana' is in myset:", "banana" in myset)
    print("Check if 'date' is not in myset:", "date" not in myset)

def set_adding() -> None:
    """
    Demonstrates adding and combining sets.
    """
    fruits = {"apple", "banana", "cherry"}
    fruits.add("orange")
    print(f"Fruits after adding orange: {fruits}")

    tropical = {"pineapple", "mango", "papaya"}
    fruits.update(tropical)
    print(f"Fruits after updating with tropical: {fruits}")
    
    # Add any iterable (not just sets)
    other = ["strawberry", "grape"]
    fruits.update(other)
    print(f"Fruits after updating with other iterable: {fruits}")

def set_removing() -> None:
    """
    Demonstrates set removal methods.
    """
    fruits = {"apple", "banana", "cherry"}
    
    fruits.remove("apple")
    print(f"Fruits after remove('apple'): {fruits}")

    # Remove an item (won't raise error)
    fruits.discard("apple")
    print(f"Fruits after discard('apple'): {fruits}")

    # pop() removes an item at random and returns it
    x = fruits.pop()
    print(f"Item removed by pop: {x}")
    print(f"Fruits after pop: {fruits}")

    # clear() empties the entire set
    fruits.clear()
    print(f"Fruits after clear: {fruits}")

    # del will delete the set completely
    del fruits
    try:
        print(f"Fruits after del: {fruits}")
    except NameError:
        print("Fruits is deleted and no longer exists.")

def set_looping() -> None:
    """
    Demonstrates how to loop through a set.
    """
    cars = {"Camry", "Honda", "Tesla", "Mazda"}
    print(f"Cars set: {cars}")
    for car in cars:
        print(f"- {car}")

def set_join() -> None:
    """
    Demonstrates joining/combining sets in different ways.
    """
    set1 = {'a', 'b', 'c'}
    set2 = {1, 2, 3}
    set3 = set1.union(set2)
    print(f"Set 1 | Set 2 (union): {set3}")
    
    # combining sets with |
    set3 = set1 | set2
    print(f"Set 1 | Set 2 (| operator): {set3}")

    # join multiple sets
    set3 = {"Dean", "Sam"}
    set4 = {"Jerry", "George"}
    myset = set1.union(set2, set3, set4)
    print(f"Union of multiple sets: {myset}")

    myset = set1 | set2 | set3 | set4
    print(f"Using | operator for multiple sets: {myset}")

    # join a Set and a Tuple
    x = {'a', 'b', 'c'}
    y = (1, 2, 3)
    z = x.union(y)
    print(f"Set and Tuple joined (union): {z}")

    # union() and | operator exclude duplicates automatically
    set1.update(set2)
    print(f"Set 1 after update with Set 2: {set1}")

    # Intersection
    set1 = {"apple", "banana", "cherry"}
    set2 = {"google", "microsoft", "apple"}
    set3 = set1.intersection(set2)
    print(f"Intersection of set1 and set2: {set3}") 
    
    set3 = set1 & set2
    print(f"Intersection using & operator: {set3}")

    # intersection_update() modifies the original set
    set1.intersection_update(set2)
    print(f"Set 1 after intersection_update: {set1}")

    # Difference
    set1 = {"apple", "banana", "cherry"}
    set2 = {"google", "microsoft", "apple"}
    set3 = set1.difference(set2)
    print(f"Difference (set1 - set2): {set3}") 

    set3 = set1 - set2
    print(f"Difference using - operator: {set3}")

    # difference_update() modifies the original set
    set1.difference_update(set2)
    print(f"Set 1 after difference_update: {set1}")

    # Symmetric Difference
    set1 = {"apple", "banana", "cherry"}
    set2 = {"google", "microsoft", "apple"}
    set3 = set1.symmetric_difference(set2)
    print(f"Symmetric difference: {set3}")

    set3 = set1 ^ set2
    print(f"Symmetric difference using ^ operator: {set3}")

    # symmetric_difference_update() modifies the original set
    set1.symmetric_difference_update(set2)
    print(f"Set 1 after symmetric_difference_update: {set1}")

def set_methods() -> None:
    """Demonstrating different set methods:
+------------------------------+-----------+------------------------------------------------------------+
| Method                       | Shortcut  | Description                                                |
+------------------------------+-----------+------------------------------------------------------------+
| add()                        |           | Adds an element to the set                                 |
| clear()                      |           | Removes all the elements from the set                      |
| copy()                       |           | Returns a copy of the set                                  |
| difference()                 | -         | Returns a set containing the difference between sets       |
| difference_update()          | -=        | Removes the items in this set that are also included in    |
|                              |           | another, specified set                                     |
| discard()                    |           | Removes the specified item                                 |
| intersection()               | &         | Returns a set, that is the intersection of two other sets  |
| intersection_update()        | &=        | Removes the items in this set that are not in other sets   |
| isdisjoint()                 |           | Returns whether two sets have an intersection or not       |
| issubset()                   | <=        | Returns whether another set contains this set or not       |
|                              |           | Returns whether all items in this set are in another set   |
| issuperset()                 | >=        | Returns whether this set contains another set or not       |
|                              |           | Returns whether all items in other sets are in this set    |
| pop()                        |           | Removes an element from the set                            |
| remove()                     |           | Removes the specified element                              |
| symmetric_difference()       | ^         | Returns a set with the symmetric differences of two sets   |
| symmetric_difference_update()| ^=        | Inserts the symmetric differences from this set and another|
| union()                      | |         | Returns a set containing the union of sets                 |
| update()                     | |=        | Updates the set with the union of this set and others      |
+------------------------------+-----------+------------------------------------------------------------+
    """
    # Creating two sets for demonstration
    set1 = {'a', 'b', 'c'}
    set2 = {'b', 'c', 'd'}

    # 1. add() - Adds an element to the set
    set1.add('e')
    print(f"Set1 after add('e'): {set1}")

    # 2. clear() - Removes all the elements from the set
    set1.clear()
    print(f"Set1 after clear(): {set1}")

    # Re-create set1 for the following examples
    set1 = {'a', 'b', 'c'}
    
    # 3. copy() - Returns a copy of the set
    set_copy = set1.copy()
    print(f"Set1 copy: {set_copy}")
    
    # 4. difference() - Returns the difference between two sets
    difference_set = set1.difference(set2)
    print(f"Set1 - Set2 (difference): {difference_set}")
    
    # 5. difference_update() - Removes items from the set that are present in another set
    set1.difference_update(set2)
    print(f"Set1 after difference_update(Set2): {set1}")
    
    # Re-create set1 for the next example
    set1 = {'a', 'b', 'c'}
    
    # 6. discard() - Removes the specified item if it exists
    set1.discard('b')
    print(f"Set1 after discard('b'): {set1}")
    
    # 7. intersection() - Returns the intersection of two sets
    intersection_set = set1.intersection(set2)
    print(f"Set1 & Set2 (intersection): {intersection_set}")
    
    # 8. intersection_update() - Keeps only items that are present in both sets
    set1.intersection_update(set2)
    print(f"Set1 after intersection_update(Set2): {set1}")
    
    # Re-create set1 for the next example
    set1 = {'a', 'b', 'c'}
    
    # 9. isdisjoint() - Returns whether two sets have no intersection
    is_disjoint = set1.isdisjoint(set2)
    print(f"Set1 is disjoint with Set2: {is_disjoint}")
    
    # 10. issubset() - Returns whether all items in set1 are present in set2
    is_subset = set1.issubset(set2)
    print(f"Set1 is a subset of Set2: {is_subset}")
    
    # 11. issuperset() - Returns whether all items in set2 are present in set1
    is_superset = set1.issuperset(set2)
    print(f"Set1 is a superset of Set2: {is_superset}")
    
    # 12. pop() - Removes an element at random from the set
    popped_item = set1.pop()
    print(f"Item removed by pop(): {popped_item}")
    print(f"Set1 after pop(): {set1}")
    
    # 13. remove() - Removes the specified element, raises error if element is not present
    set1.remove('b')  # Assuming 'b' exists in set1
    print(f"Set1 after remove('b'): {set1}")
    
    # 14. symmetric_difference() - Returns the symmetric difference between two sets
    symmetric_difference_set = set1.symmetric_difference(set2)
    print(f"Symmetric difference between Set1 and Set2: {symmetric_difference_set}")
    
    # 15. symmetric_difference_update() - Updates the set with the symmetric difference
    set1.symmetric_difference_update(set2)
    print(f"Set1 after symmetric_difference_update(Set2): {set1}")
    
    # 16. union() - Returns the union of two sets (all unique elements from both sets)
    union_set = set1.union(set2)
    print(f"Set1 | Set2 (union): {union_set}")
    
    # 17. update() - Updates set1 with the union of itself and set2 (modifies the set)
    set1.update(set2)
    print(f"Set1 after update(Set2): {set1}")
    
def main() -> None:
    """Runs all lessons."""
    lessons = [
        set_creating,
        set_accessing,
        set_adding,
        set_removing,
        set_looping,
        set_join,
        set_methods
    ]
    LessonRunner.run(lessons)

if __name__ == "__main__":
    main()

