#!/usr/bin/python3
# 11_operators.py

from lesson_runner import LessonRunner

def arithmetic_operators() -> None:
    """Demonstrates arithmetic operators: +, -, *, /, //, %, **"""
    a, b = 10, 3
    print(f"{a} + {b} = {a + b}")   # Addition
    print(f"{a} - {b} = {a - b}")   # Subtraction
    print(f"{a} * {b} = {a * b}")   # Multiplication
    print(f"{a} / {b} = {a / b}")   # Division (float)
    print(f"{a} // {b} = {a // b}") # Floor Division
    print(f"{a} % {b} = {a % b}")   # Modulus
    print(f"{a} ** {b} = {a ** b}") # Exponentiation

def assignment_operators() -> None:
    """Demonstrates assignment operators: =, +=, -=, *=, /=, //=, %=, **="""
    a = 5
    print(f"a = {a}")
    
    a += 3   # a = a + 3
    print(f"a += 3 == {a}")
    
    a -= 2   # a = a - 2
    print(f"a -= 2 == {a}")
    
    a *= 4   # a = a * 4
    print(f"a *= 4 == {a}")

    a /= 2   # a = a / 2
    print(f"a /= 2 == {a}")

    a //= 3  # a = a // 3
    print(f"a //= 3 == {a}")

    a %= 2   # a = a % 2
    print(f"a %= 2 == {a}")

    a **= 3  # a = a ** 3
    print(f"a **= 3 == {a}")

def comparison_operators() -> None:
    """Demonstrates comparison operators: ==, !=, >, <, >=, <="""
    a, b = 7, 10
    print(f"{a} == {b}: {a == b}")  # Equal to
    print(f"{a} != {b}: {a != b}")  # Not equal to
    print(f"{a} > {b}: {a > b}")    # Greater than
    print(f"{a} < {b}: {a < b}")    # Less than
    print(f"{a} >= {b}: {a >= b}")  # Greater than or equal to
    print(f"{a} <= {b}: {a <= b}")  # Less than or equal to

def logical_operators() -> None:
    """Demonstrates logical operators: and, or, not"""
    a, b = True, False
    print(f"{a} and {b} == {a and b}")  # False
    print(f"{a} or {b} == {a or b}")    # True
    print(f"not {a} == {not a}")        # False

def identity_operators() -> None:
    """Demonstrates identity operators: is, is not"""
    a, b = [1, 2, 3], [1, 2, 3]
    c = a
    
    print(f"a is b == {a is b}")    # False (Different objects in memory)
    print(f"a is c == {a is c}")    # True (Same object)
    print(f"a is not b == {a is not b}")  # True

def membership_operators() -> None:
    """Demonstrates membership operators: in, not in"""
    fruits = ["apple", "banana", "cherry"]
    print(f"'banana' in fruits == {'banana' in fruits}")      # True
    print(f"'grape' not in fruits == {'grape' not in fruits}") # True

def bitwise_operators() -> None:
    """Demonstrates bitwise operators: &, |, ^, ~, <<, >>"""
    a, b = 5, 3  # 5 = 0b101, 3 = 0b011
    print(f"{a} & {b} == {a & b}")   # Bitwise AND (1)
    print(f"{a} | {b} == {a | b}")   # Bitwise OR (7)
    print(f"{a} ^ {b} == {a ^ b}")   # Bitwise XOR (6)
    print(f"~{a} == {~a}")           # Bitwise NOT (-6)
    print(f"{a} << 1 == {a << 1}")   # Left shift (10)
    print(f"{a} >> 1 == {a >> 1}")   # Right shift (2)

def main() -> None:
    """Runs all operator lessons."""
    lessons: list = [
        arithmetic_operators,
        assignment_operators,
        comparison_operators,
        logical_operators,
        identity_operators,
        membership_operators,
        bitwise_operators
    ]
    LessonRunner.run(lessons)
    return None

if __name__ == "__main__":
    main()

