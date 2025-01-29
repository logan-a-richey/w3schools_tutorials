#!/usr/bin/python3
# 08_casting.py

# Specify a Variable Type
#     There may be times when you want to specify a type on to a variable. 
#     This can be done with casting. Python is an object-orientated language, and as such it uses classes to define data types, including its primitive types.
# 
# Casting in python is therefore done using constructor functions:
#     int() - constructs an integer number from an integer literal, a float literal (by removing all decimals), or a string literal (providing the string represents a whole number)
#     float() - constructs a float number from an integer literal, a float literal or a string literal (providing the string represents a float or an integer)
#     str() - constructs a string from a wide variety of data types, including strings, integer literals and float literals

def main() -> None:
    a = int(1)   # a will be 1
    b = int(2.8) # b will be 2
    c = int("3") # c will be 3
    print("Typecasting to int:")
    print(f"a = {a}, b = {b} c = {c}")
    print()

    a = float(1)     # a will be 1.0
    b = float(2.8)   # b will be 2.8
    c = float("3")   # c will be 3.0
    d = float("4.2") # d will be 4.2
    print("Type cast to float:")
    print(f"a = {a}, b = {b} c = {c}, d = {d}")
    print()

    x = str("s1") # x will be 's1'
    y = str(2)    # y will be '2'
    z = str(3.0)  # z will be '3.0'
    print("Type cast to string:")
    print(f"a = {a}, b = {b} c = {c}")
    print()

    return None

if __name__ == "__main__":
    main()
