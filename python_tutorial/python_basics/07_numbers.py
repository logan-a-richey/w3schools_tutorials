#!/usr/bin/python3
# 07_numbers.py

import random

def main() -> None:
    x = 1    # int
    y = 2.8  # float
    z = 1j   # complex

    #convert from int to float:
    a = float(x)

    #convert from float to int:
    b = int(y)

    #convert from int to complex:
    c = complex(x)

    print(a)
    print(b)
    print(c)

    print(type(a))
    print(type(b))
    print(type(c)) 

    # random integer:
    res = random.randint(0, 10)
    print(res)

if __name__ == "__main__":
    main()
