#!/usr/bin/python3
# 03_syntax.py

# simple function to get an integer input from the user, with minimal error checking
def get_input(prompt="") -> int:
    res = 0
    while True:
        try:
            res = int(input(prompt)) 
            break
        except:
            print("Invalid input. Expected a number. Try again.")
    return res

# main
def main() -> None:
    x = get_input("Enter a number for x: ")
    y = get_input("Enter a number for y: ")
    
    # indentation matters in python!
    if x > y:
        print("x is greater than y")
    elif x < y:
        print("x is less than y")
    else:
        print("x and y are equal.")

if __name__ == "__main__":
    main()

