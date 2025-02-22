#!/usr/bin/env python3
# 14_array_sort.py

import numpy as np
from tester import Tester

def ex01():
    '''
    Sorting Arrays
    Sorting means putting elements in an ordered sequence.
    Ordered sequence is any sequence that has an order corresponding to elements, like numeric or alphabetical, ascending or descending.
    The NumPy ndarray object has a function called sort(), that will sort a specified array.

    Example: Sort the array:
    '''
    arr = np.array([3, 2, 0, 1])
    print(np.sort(arr))
    print("Note: This method returns a copy of the array, leaving the original array unchanged.")

def ex02():
    '''
    You can also sort arrays of strings, or any other data type:
    Example: Sort the array alphabetically:
    '''
    arr = np.array(['banana', 'cherry', 'apple'])
    print(np.sort(arr))

def ex03():
    '''Example Sort a boolean array: '''

    arr = np.array([True, False, True])
    print(np.sort(arr))

def ex04():
    '''
    Sorting a 2-D Array
    If you use the sort() method on a 2-D array, both arrays will be sorted:

    Example Sort a 2-D array:
    '''
    arr = np.array([[3, 2, 4], [5, 0, 1]])
    print(np.sort(arr)) 

def main():
    '''Run examples'''
    examples = [ex01, ex02, ex03, ex04] 
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

