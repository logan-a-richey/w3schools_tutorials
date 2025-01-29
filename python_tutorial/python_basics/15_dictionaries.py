#!/usr/bin/python3
# 15_dictionaries.py

from lesson_runner import LessonRunner

def dict_creating() -> None:
    """Demonstrates how to create dictionaries"""
    # Creating a dictionary with key-value pairs
    my_dict = {"name": "John", "age": 30, "city": "New York"}
    print(f"Created Dictionary: {my_dict}")

    # Creating a dictionary using the dict() constructor
    my_dict2 = dict(name="Alice", age=25, city="Los Angeles")
    print(f"Created Dictionary using dict(): {my_dict2}")

def dict_accesing() -> None:
    """Demonstrates how to access dictionary elements"""
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # Accessing value using a key
    print(f"Name: {my_dict['name']}")

    # Using get() method for safe access
    print(f"Age: {my_dict.get('age')}")  # Returns None if key doesn't exist

    # Accessing a non-existent key using get() with default value
    print(f"Country: {my_dict.get('country', 'Not Available')}")  # Default value

def dict_changing() -> None:
    """Demonstrates how to change values in a dictionary"""
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # Changing the value of an existing key
    my_dict["age"] = 35
    print(f"Updated Dictionary: {my_dict}")

def dict_adding() -> None:
    """Demonstrates how to add new items to a dictionary"""
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # Adding a new key-value pair
    my_dict["country"] = "USA"
    print(f"Dictionary after adding country: {my_dict}")

    # Using update() method to add or change items
    my_dict.update({"age": 31, "profession": "Engineer"})
    print(f"Dictionary after update: {my_dict}")

def dict_removing() -> None:
    """Demonstrates how to remove items from a dictionary"""
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # Removing a specific key-value pair using pop()
    my_dict.pop("age")
    print(f"Dictionary after pop: {my_dict}")

    # Removing an arbitrary key-value pair using popitem()
    my_dict.popitem()
    print(f"Dictionary after popitem: {my_dict}")

    # Removing all key-value pairs using clear()
    my_dict.clear()
    print(f"Dictionary after clear: {my_dict}")

def dict_looping() -> None:
    """Demonstrates how to loop through a dictionary"""
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # Looping through keys
    print("Keys:")
    for key in my_dict:
        print(key)

    # Looping through values
    print("Values:")
    for value in my_dict.values():
        print(value)

    # Looping through key-value pairs
    print("Key-Value pairs:")
    for key, value in my_dict.items():
        print(f"{key}: {value}")

def dict_copying() -> None:
    """Demonstrates how to copy a dictionary"""
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # Copying the dictionary using copy()
    dict_copy = my_dict.copy()
    print(f"Original Dictionary: {my_dict}")
    print(f"Copied Dictionary: {dict_copy}")

def dict_nested() -> None:
    """Demonstrates how to create nested dictionaries"""
    my_dict = {
        "name": "John",
        "age": 30,
        "address": {"street": "5th Avenue", "city": "New York"}
    }

    # Accessing nested dictionary
    print(f"Name: {my_dict['name']}")
    print(f"Street: {my_dict['address']['street']}")

def dict_methods() -> None:
    """Demonstrates various dictionary methods:
+------------------------+------------------------------------------------------------+
| Method                 | Description                                                |
+------------------------+------------------------------------------------------------+
| clear()                | Removes all the elements from the dictionary               |
| copy()                 | Returns a copy of the dictionary                           |
| fromkeys()             | Returns a dictionary with the specified keys and value     |
| get()                  | Returns the value of the specified key                     |
| items()                | Returns a list containing a tuple for each key-value pair  |
| keys()                 | Returns a list containing the dictionary's keys            |
| pop()                  | Removes the element with the specified key                 |
| popitem()              | Removes the last inserted key-value pair                   |
| setdefault()           | Returns the value of the specified key. If the key does    |
|                        | not exist: insert the key, with the specified value        |
| update()               | Updates the dictionary with the specified key-value pairs  |
| values()               | Returns a list of all the values in the dictionary         |
+------------------------+------------------------------------------------------------+
    """
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # 1. clear() - Removes all the elements from the dictionary
    my_dict.clear()
    print(f"Dictionary after clear(): {my_dict}")

    # Re-creating the dictionary
    my_dict = {"name": "John", "age": 30, "city": "New York"}

    # 2. copy() - Returns a copy of the dictionary
    dict_copy = my_dict.copy()
    print(f"Dictionary copy: {dict_copy}")

    # 3. fromkeys() - Returns a dictionary with the specified keys and value
    new_dict = dict.fromkeys(["name", "age", "city"], "Unknown")
    print(f"New Dictionary fromkeys: {new_dict}")

    # 4. get() - Returns the value of the specified key
    age = my_dict.get("age")
    print(f"Age: {age}")

    # 5. items() - Returns a list containing a tuple for each key-value pair
    print(f"Dictionary items: {my_dict.items()}")

    # 6. keys() - Returns a list containing the dictionary's keys
    print(f"Dictionary keys: {my_dict.keys()}")

    # 7. pop() - Removes the element with the specified key
    my_dict.pop("city")
    print(f"Dictionary after pop: {my_dict}")

    # 8. popitem() - Removes the last inserted key-value pair
    my_dict.popitem()
    print(f"Dictionary after popitem: {my_dict}")

    # 9. setdefault() - Returns the value of the specified key, if not present, inserts it
    country = my_dict.setdefault("country", "USA")
    print(f"Dictionary after setdefault: {my_dict}")

    # 10. update() - Updates the dictionary with the specified key-value pairs
    my_dict.update({"age": 32, "city": "Los Angeles"})
    print(f"Dictionary after update: {my_dict}")

    # 11. values() - Returns a list of all the values in the dictionary
    print(f"Dictionary values: {my_dict.values()}")

def main() -> None:
    lessons = [
        dict_creating,
        dict_accesing,
        dict_changing,
        dict_adding,
        dict_removing,
        dict_looping,
        dict_copying,
        dict_nested,
        dict_methods
    ]
    LessonRunner.run(lessons)

if __name__ == "__main__":
    main()

