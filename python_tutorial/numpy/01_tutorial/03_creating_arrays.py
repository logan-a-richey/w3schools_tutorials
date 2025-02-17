#!/usr/bin/env python3
# 03_creating_arrays.py

import numpy as np
from tester import Tester

def ex01():
    '''Passing in array as list:'''
    arr = np.array([1,2,3,4,5])
    print(arr)
    print(type(arr))

def ex02():
    '''Passing in array as tuple:'''
    arr = np.array((1,2,3,3,4,5))
    print(arr)

def ex03():
    '''
    0-D Arrays:
    0-D arrays, or Scalars, are the elements in an array. 
    Each value in an array is a 0-D array.
    '''
    arr = np.array(42)
    print(arr)

def ex04():
    '''
    1-D Arrays:
    An array that has 0-D arrays as its elements is called uni-dimensional or 1-D array.
    These are the most common and basic arrays.
    '''
    arr = np.array([1,2,3,4,5])
    print(arr)

def ex05():
    '''
    2-D Arrays:
    An array that has 1-D arrays as its elements is called a 2-D array.
    These are often used to represent matrix or 2nd order tensors.
    '''
    arr = np.array( [ [1,2,3], [4,5,6] ])
    print(arr)

def ex06():
    '''
    3-D arrays:
    An array that has 2-D arrays (matrices) as its elements is called 3-D array.
    These are often used to represent a 3rd order tensor.
    '''
    arr = np.array([[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]])
    print(arr)

def ex07():
    '''
    Check Number of Dimensions?
    NumPy Arrays provides the ndim attribute that returns an integer that tells us how many dimensions the array have.
    '''
    a = np.array(42)
    b = np.array([1, 2, 3, 4, 5])
    c = np.array([[1, 2, 3], [4, 5, 6]])
    d = np.array([[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]])
    print(a.ndim)
    print(b.ndim)
    print(c.ndim)
    print(d.ndim)

def ex08():
    '''
    Higher Dimensional Arrays
    An array can have any number of dimensions.
    When the array is created, you can define the number of dimensions by using the ndmin argument.
    '''
    arr = np.array([1, 2, 3, 4], ndmin=5)
    print(arr)
    print('number of dimensions :', arr.ndim)

def main():
    '''Run examples'''
    examples = [ex01, ex02, ex03, ex04, ex05, ex06, ex07, ex08]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

