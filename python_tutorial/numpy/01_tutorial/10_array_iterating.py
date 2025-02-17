#!/usr/bin/env python3
# 10_array_iterating.py

import numpy as np
from tester import Tester

def ex01():
    '''
    Iterating Arrays:
    Iterating means going through elements one by one.
    As we deal with multi-dimensional arrays in numpy, we can do this using basic for loop of python.
    If we iterate on a 1-D array it will go through each element one by one.
    
    Example: Iterate on the elements of the following 1-D array:
    '''
    arr = np.array([1, 2, 3])
    for x in arr:
        print(x) 

def ex02():
    '''
    Iterating 2-D Arrays:
    In a 2-D array it will go through all the rows.
    
    Example: Iterate on the elements of the following 2-D array:
    '''
    arr = np.array([[1, 2, 3], [4, 5, 6]])
    for x in arr:
        print(x)
    print("Note: If we iterate on a n-D array it will go through n-1th dimension one by one.")

def ex03():
    '''
    To return the actual values, the scalars, we have to iterate the arrays in each dimension.
    Iterate on each scalar element of the 2-D array:
    '''
    arr = np.array([[1, 2, 3], [4, 5, 6]])
    for x in arr:
        for y in x:
            print(y)

def ex04():
    '''Iterating 3-D Arrays:
    In a 3-D array it will go through all the 2-D arrays.
    Example: Iterate on the elements of the following 3-D array:
    '''
    arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
    for x in arr:
        print(x) 
    print("Note: To return the actual values, the scalars, we have to iterate the arrays in each dimension.")

def ex05():
    """ Iterate 3D array down to the scalars."""
    arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
    for x in arr:
        for y in x:
            for z in y:
                print(z)

def ex06():
    '''
    Iterating Arrays Using nditer() ***
    The function nditer() is a helping function that can be used from very basic to very advanced iterations.
    It solves some basic issues which we face in iteration, lets go through it with examples. 

    Iterating on Each Scalar Element
    In basic for loops, iterating through each scalar of an array we need to use n for loops 
    which can be difficult to write for arrays with very high dimensionality.
    
    Example: Iterate through the following 3-D array:
    '''

    arr = np.array([[[1, 2], [3, 4]], [[5, 6], [7, 8]]])
    for x in np.nditer(arr):
        print(x)

def ex07():
    '''
    Iterating Array With Different Data Types ***
    We can use op_dtypes argument and pass it the expected datatype to change the datatype of elements while iterating.
    NumPy does not change the data type of the element in-place (where the element is in array)
    so it needs some other space to perform this action, that extra space is called buffer, 
    and in order to enable it in nditer() we pass flags=['buffered'].
    '''

    arr = np.array([1, 2, 3])
    for x in np.nditer(arr, flags=['buffered'], op_dtypes=['S']):
        print(x)
    
def ex08():
    '''
    Iterating With Different Step Size
    We can use filtering and followed by iteration.
    Iterate through every scalar element of the 2D array skipping 1 element:
    '''

    arr = np.array([[1, 2, 3, 4], [5, 6, 7, 8]])
    for x in np.nditer(arr[:, ::2]):
        print(x) 

def ex09():
    '''
    Enumerated Iteration Using ndenumerate():
    Enumeration means mentioning sequence number of somethings one by one.
    Sometimes we require corresponding index of the element while iterating,
    
    Example: the ndenumerate() method can be used for those usecases.
    '''

    arr = np.array([1, 2, 3])
    for idx, x in np.ndenumerate(arr):
        print(idx, x) 

def ex10():
    ''' Example: Enumerate on following 2D array's elements: '''
    arr = np.array([[1, 2, 3, 4], [5, 6, 7, 8]])
    for idx, x in np.ndenumerate(arr):
        print(idx, x)
    
def main():
    '''Run examples'''
    examples = [ex01, ex02, ex03, ex04, ex05, ex06, ex07, ex08, ex09, ex10]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

