#!/usr/bin/env python3
# 13_array_search.py

import numpy as np
from tester import Tester

def ex01():
    '''
    Searching Arrays
    You can search an array for a certain value, and return the indexes that get a match.
    To search an array, use the where() method.
    
    Example: Find the indexes where the value is 4:
    '''

    arr = np.array([1, 2, 3, 4, 5, 4, 4])
    x = np.where(arr == 4)
    print(x)

    print(
        f"Note: The example above will return a tuple: (array([3, 5, 6],)"\
        f"Which means that the value 4 is present at index 3, 5, and 6."
    )

def ex02():
    ''' Example: Find the indexes where the values are even: '''
    arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
    x = np.where(arr%2 == 0)
    print(x)

def ex03():
    ''' Example: Find the indexes where the values are odd: '''
    arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
    x = np.where(arr%2 == 1)
    print(x)

def ex04():
    ''' 
    Search Sorted:
    There is a method called searchsorted() which performs a binary search in
    the array, and returns the index where the specified value would be
    inserted to maintain the search order.

    The searchsorted() method is assumed to be used on sorted arrays.
    Example: Find the indexes where the value 7 should be inserted:
    '''

    arr = np.array([6, 7, 8, 9])
    x = np.searchsorted(arr, 7)
    print(x)
    print(
        f"Example explained: The number 7 should be inserted on index 1 to remain the sort order."\
        f"The method starts the search from the left and returns the first index" 
        f"where the number 7 is no longer larger than the next value."
    )

def ex05():
    '''
    Search From the Right Side
    By default the left most index is returned, but we can give side='right'
    to return the right most index instead.
    
    Example: Find the indexes where the value 7 should be inserted, starting from the right:
    '''

    arr = np.array([6, 7, 8, 9])
    x = np.searchsorted(arr, 7, side='right')
    print(x)

    print(
        f"Example explained: The number 7 should be inserted on index 2 to remain the sort order."\
        f"The method starts the search from the right and returns the first index where the number 7 is no longer less than the next value."
    )

def ex06():
    '''
    Multiple Values
    To search for more than one value, use an array with the specified values.
    
    Example: Find the indexes where the values 2, 4, and 6 should be inserted:
    '''

    arr = np.array([1, 3, 5, 7])
    x = np.searchsorted(arr, [2, 4, 6])
    print(x)
    
    print(
        f"The return value is an array: [1 2 3] containing the three indexes where"\
        f"2, 4, 6 would be inserted in the original array to maintain the order."
    )

def main():
    '''Run examples'''
    examples = [ex01, ex02, ex03, ex04, ex05, ex06] 
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

