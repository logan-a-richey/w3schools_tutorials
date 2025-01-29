#!/usr/bin/python3
# 09_strings.py

from lesson_runner import LessonRunner

def string_creation() -> None:
    """Demonstrates various string operations in Python."""
    
    # 1. Defining a simple string
    a: str = "Hello World"
    print(a)  # Output: Hello World

    # 2. Multi-line string using explicit line continuation (\)
    #    This helps keep long strings readable.
    a: str = """Lorem ipsum dolor sit amet,\n"""\
             """consectetur adipiscing elit,\n"""\
             """sed do eiusmod tempor incididunt\n"""\
             """ut labore et dolore magna aliqua."""
    
    print(a)  # Prints the multi-line string with line breaks.

    # 3. Strings are indexed like arrays (zero-based index)
    print(a[1])  # Output: 'o' (2nd character in "Lorem ipsum...")

    # 4. Iterating through a string using a for-loop
    for x in "banana":
        print(x, end=" ")  # Prints each character of "banana" with space in between.
    print()  # Moves to the next line after printing.

    # 5. Getting the length of a string using len()
    print(f"String: {a}\nLength: {len(a)}")  # Prints the string and its length.

    # 6. Checking for a substring within a string using `in`
    txt: str = "The best things in life are free!"
    sub: str = "free"
    
    print(sub in txt)  # Returns True because "free" is in txt.

    # 7. Using an `if` statement to check for substring presence
    if sub in txt:
        print(f'Yes, "{sub}" is present in the text.')

    # 8. Checking if a substring is NOT in a string using `not in`
    sub = "expensive"
    print(sub not in txt)  # Returns True because "expensive" is not in txt.

    # 9. Using an `if not` statement to check for substring absence
    if sub not in txt:
        print(f'No, "{sub}" is NOT present in the text.')
    return None

def string_slicing() -> None:
    """Demonstrates string slicing."""
    a: str = "Hello, World!"
    
    print(a[0:5])   # Output: Hello (characters from index 0 to 4)
    print(a[:5])    # Output: Hello (same as above, start defaults to 0)
    print(a[7:])    # Output: World! (from index 7 to end)
    print(a[-6:])   # Output: World! (negative indexing)
    print(a[::2])   # Output: Hlo ol! (every 2nd character)
    return None

def string_modifying() -> None:
    """Demonstrates modifying string cases and stripping spaces."""
    txt: str = "  Hello, World!  "

    print(txt.upper())    # Output: "  HELLO, WORLD!  "
    print(txt.lower())    # Output: "  hello, world!  "
    print(txt.strip())    # Output: "Hello, World!" (removes leading/trailing spaces)
    print(txt.replace("World", "Python"))  # Output: "  Hello, Python!  "
    return None

def string_concat() -> None:
    """Demonstrates string concatenation and repetition."""
    a: str = "Hello"
    b: str = "World"

    print(a + " " + b)   # Output: "Hello World"
    print(a * 3)         # Output: "HelloHelloHello" (repeating string)
    return None

def string_format() -> None:
    """Demonstrates string formatting with placeholders and f-strings."""
    age: int = 25
    name: str = "Alice"

    print("My name is {} and I am {} years old.".format(name, age))
    print(f"My name is {name} and I am {age} years old.")  # Using f-strings
    return None

def string_escape_chars() -> None:
    """Demonstrates escape characters in strings."""
    txt: str = "She said, \"Python is awesome!\""
    
    print(txt)  # Output: She said, "Python is awesome!"
    print("Line1\nLine2")  # New line
    print("Tab\tSeparated")  # Tab space
    print("Backslash: \\")  # Backslash escape
    return None

def string_methods() -> None:
    """Demonstrates various built-in string methods."""
    txt: str = "Python Programming"

    print(txt.startswith("Python"))  # Output: True
    print(txt.endswith("Java"))      # Output: False
    print(txt.find("gram"))          # Output: 10 (index where substring starts)
    print(txt.count("o"))            # Output: 2 (number of occurrences of 'o')
    return None

def main() -> None:
    """Runs all string lessons."""
    lessons: list = [
        string_creation,
        string_slicing,
        string_modifying,
        string_concat,
        string_format,
        string_escape_chars,
        string_methods,
    ]
    LessonRunner.run(lessons)
    return None

# This ensures the main function runs only when the script is executed directly.
if __name__ == "__main__":
    main()

