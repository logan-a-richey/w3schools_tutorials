#!/usr/bin/env python3
# 04_array_indexing.py

import numpy as np
from tester import Tester

def ex01():
    '''
    Access Array Elements
    Array indexing is the same as accessing an array element.
    You can access an array element by referring to its index number.
    The indexes in NumPy arrays start with 0, meaning that the first element has index 0, and the second has index 1 etc.i
    '''
    arr = np.array([1, 2, 3, 4])
    print(arr[0]) # get first element
    print(arr[1]) # get second element
    print(arr[2] + arr[3]) # get 3rd and 4th element, sum them

def ex02():
    '''
    Access 2-D Arrays
    To access elements from 2-D arrays we can use comma separated integers representing the dimension and the index of the element.
    Think of 2-D arrays like a table with rows and columns, where the dimension represents the row and the index represents the column.
    '''
    arr = np.array([[1,2,3,4,5], [6,7,8,9,10]])
    print(arr)
    print('2nd element on 1st row: ', arr[0, 1]) 
    print('5th element on 2nd row: ', arr[1, 4])

def ex03():
    '''
    Access 3-D Arrays
    To access elements from 3-D arrays we can use comma separated integers representing the dimensions and the index of the element.
    '''
    print(arr)
    arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
    print(arr[0, 1, 2])

def ex04():
    '''Negative Indexing'''
    arr = np.array([[1,2,3,4,5], [6,7,8,9,10]])
    print(arr)
    print('Last element from 2nd dim: ', arr[1, -1]) 

def main():
    '''Run examples'''
    examples = [ex01, ex02, ex03, ex04]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

