#!/usr/bin/python3
# 05_variables.py

# *** Variable naming: ***
# A variable name must start with a letter or the underscore character.
# A variable name cannot start with a number.
# A variable name can only contain alpha-numeric characters and underscores (A-z, 0-9, and _).
# Variable names are case-sensitive (age, Age, and AGE are three different variables).
# A variable name cannot be any of the Python keywords.
#
# Camel Case: Every word, except the first, starts with an uppercase letter.
# myVariableName = "Logan"
#
# Pascal Case: Every word starts with an uppercase letter.
# MyVariableName = "Logan"
#
# Snake Case: Every word is separated by an underscore character.
# my_variable_name = "Logan"

def myFunc():
    # x inside of the function is local to myFunc
    global y  # Now refers to the global y value.
    x = y = "Fantastic"
    print(x, y)  # Both x and y inside this function are "Fantastic".


def main() -> None:
    global y # for global vs local example
    
    # Basic variable assignment and type flexibility in Python.
    x = 5       # x is now of type <class 'int'>
    y = "John"  # y is now of type <class 'str'>
    print(x, y)
    
    # Python is flexible: Variables can be redefined with different types on the fly.
    x = str(3)      # x is '3' (string)
    y = int(3)      # y is 3 (integer)
    z = float(3)    # z is 3.0 (float)
    print(x, y, z)

    # To get the type of a variable, use `type()`:
    print(x, type(x))
    print(y, type(y))
    print(z, type(z))

    # Strings can be defined using either single or double quotes.
    string1 = "John"
    string2 = 'John'
    print(string1 == string2)  # Outputs True, since the two strings are the same.

    # Variables are case-sensitive:
    a = 4
    A = "Sally"  # This does not overwrite variable 'a'.
    print(a, A)

    # *** Best practices: ***
    # - Variables: lowercase snake_case
    # - Global constants: UPPERCASE SNAKE_CASE
    # - Classes: CamelCase
    # - Private members: start with _ or __ (name mangling).
    # Note: Nothing in Python is truly private; everything is accessible.

    # Assign multiple values at once:
    # Note: Ensure the number of variables matches the number of values.
    x, y, z = "Orange", "Banana", "Cherry"
    print(x, y, z)

    # Assign one value to multiple variables:
    x = y = z = "Orange"
    print(x, y, z)

    # Unpack a collection:
    fruits = ["apple", "banana", "cherry"]
    x, y, z = fruits  # Automatically unpacks the list into variables.
    print(x, y, z)

    # Perform calculations directly in the print() function:
    x, y = 3, 5
    print("x + y = %d" % (x + y))  # Old-style formatting with `%`.
    print(f"x + y = {x + y}")      # f-string (preferred in modern Python).
    print("x + y = {}".format(x + y))  # .format() method (alternative).

    # Operations on incompatible types result in an error:
    x, y = "Logan", 24
    try:
        print(x + y)  # This will throw a TypeError.
    except Exception as e:
        print(f"Tried to add {x} and {y}. [Error]: {e}")

    # Global and Local variables:
    x = y = "Awesome"
    print(x, y)
    myFunc()  # This modifies 'y' because it is declared as global in myFunc.
    print(x, y)  # Note: x remains local to main(), but y is modified globally.


if __name__ == "__main__":
    main()

