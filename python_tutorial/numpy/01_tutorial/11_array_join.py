#!/usr/bin/env python3
# 11_array_join.py

import numpy as np
from tester import Tester

def ex01():
    '''
    Joining NumPy Arrays:
    Joining means putting contents of two or more arrays in a single array.
    In SQL we join tables based on a key, whereas in NumPy we join arrays by axes.
    We pass a sequence of arrays that we want to join to the concatenate() function, 
    along with the axis. If axis is not explicitly passed, it is taken as 0.

    Example: Join two arrays
    '''
    arr1 = np.array([1, 2, 3])
    arr2 = np.array([4, 5, 6])
    arr = np.concatenate((arr1, arr2))
    print(arr) 

def ex02():
    '''Example: Join two 2-D arrays along rows (axis=1):'''
    arr1 = np.array([[1, 2], [3, 4]])
    arr2 = np.array([[5, 6], [7, 8]])
    arr = np.concatenate((arr1, arr2), axis=1)
    print(arr)

def ex03():
    '''
    Joining Arrays Using Stack Functions:
    Stacking is same as concatenation, the only difference is that stacking is done along a new axis.
    We can concatenate two 1-D arrays along the second axis which would result in putting them one over the other, ie. stacking.
    We pass a sequence of arrays that we want to join to the stack() method along with the axis. If axis is not explicitly passed it is taken as 0.
    '''
    arr1 = np.array([1, 2, 3])
    arr2 = np.array([4, 5, 6])
    arr = np.stack((arr1, arr2), axis=1)
    print(arr)

def ex04():
    '''
    Stacking Along Rows
    NumPy provides a helper function: hstack() to stack along rows.
    '''

    arr1 = np.array([1, 2, 3])
    arr2 = np.array([4, 5, 6])
    arr = np.hstack((arr1, arr2))
    print(arr)

def ex05():
    '''
    Stacking Along Columns ***
    NumPy provides a helper function: vstack() to stack along columns.
    '''

    arr1 = np.array([1, 2, 3])
    arr2 = np.array([4, 5, 6])
    arr = np.vstack((arr1, arr2))
    print(arr)

def ex06():
    '''
    Stacking Along Height (depth) ***
    NumPy provides a helper function: dstack() to stack along height, which is the same as depth.
    '''

    arr1 = np.array([1, 2, 3])
    arr2 = np.array([4, 5, 6])
    arr = np.dstack((arr1, arr2))
    print(arr)

def main():
    '''Run examples'''
    examples = [ex01, ex02, ex03, ex04, ex05, ex06] 
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

