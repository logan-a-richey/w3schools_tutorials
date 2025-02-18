#!/usr/bin/python3

import numpy as np
from tester import Tester

# *** What are ufuncs? ***
# ufuncs stands for "Universal Functions" and they are NumPy functions that 
# operate on the ndarray object.

# *** Why use ufuncs? ***
# ufuncs are used to implement vectorization in NumPy which is way faster than 
# iterating over elements.
# They also provide broadcasting and additional methods like reduce, accumulate 
# etc. that are very helpful for computation.
# ufuncs also take additional arguments, like:
# (1) where boolean array or condition defining where the operations should take 
#     place.
# (2) dtype defining the return type of elements.
# (3) out output array where the return value should be copied.

# *** What is Vectorization? ***
# Converting iterative statements into a vector based operation is called 
# vectorization. It is faster as modern CPUs are optimized for such operations.

# *** Add the Elements of Two Lists ***
# list 1: [1, 2, 3, 4]
# list 2: [4, 5, 6, 7]
# One way of doing it is to iterate over both of the lists and then sum each 
# elements.

def ex01():
    '''
    Without ufunc, we can use Python's built-in zip() method:
    '''
    x = [1, 2, 3, 4]
    y = [4, 5, 6, 7]
    z = []
    for i, j in zip(x, y):
        z.append(i + j)
    print(z)

def ex02():
    '''
    NumPy has a ufunc for this, called add(x, y) that will produce the same result.
    With ufunc, we can use the add() function:
    '''
    x = [1, 2, 3, 4]
    y = [4, 5, 6, 7]
    z = np.add(x, y)
    print(z)

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

