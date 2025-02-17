#!/usr/bin/env python3
# 12_array_split.py

import numpy as np
from tester import Tester

def ex01():
    '''
    Splitting NumPy Arrays:
    Splitting is reverse operation of Joining.
    Joining merges multiple arrays into one and Splitting breaks one array into multiple.
    We use array_split() for splitting arrays, we pass it the array we want to split and the number of splits.
    '''

    arr = np.array([1, 2, 3, 4, 5, 6])
    newarr = np.array_split(arr, 3)
    print(newarr)
    
    print("Note: The return value is a list containing three arrays.")

def ex02():
    '''
    If the array has less elements than required, it will adjust from the end accordingly.
    Example: Split the array in 4 parts:
    '''

    arr = np.array([1, 2, 3, 4, 5, 6])
    print("arr = ", arr)
    newarr = np.array_split(arr, 4)
    print("newarr = ", newarr) 

    print(
        f"Note: We also have the method split() available but it will not adjust"\
        f"the elements when elements are less in source array for splitting like in"\
        f"example above, array_split() worked properly but split() would fail"
    )

def ex03():
    '''
    Split Into Arrays:
    The return value of the array_split() method is an array containing each of the split as an array.
    If you split an array into 3 arrays, you can access them from the result just like any array element:
    
    Example: Access the splitted arrays:
    '''
    arr = np.array([1, 2, 3, 4, 5, 6])
    newarr = np.array_split(arr, 3)
    print(newarr[0])
    print(newarr[1])
    print(newarr[2]) 

def ex04():
    '''
    Splitting 2-D Arrays:
    Use the same syntax when splitting 2-D arrays.
    Use the array_split() method, pass in the array you want to split and the
    number of splits you want to do.

    Example: Split the 2-D array into three 2-D arrays.
    '''

    arr = np.array([[1, 2], [3, 4], [5, 6], [7, 8], [9, 10], [11, 12]])
    newarr = np.array_split(arr, 3)
    print(newarr) 
    print("Note: The example above returns three 2-D arrays.")

def ex05():
    '''
    # Let's look at another example, this time each element in the 2-D arrays contains 3 elements.
    # Example: Split the 2-D array into three 2-D arrays.
    '''

    arr = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 11, 12], [13, 14, 15], [16, 17, 18]])
    newarr = np.array_split(arr, 3)
    print(newarr) 
    
    print(
        f"The example above returns three 2-D arrays."\
        f"In addition, you can specify which axis you want to do the split around."\
        f"The example below also returns three 2-D arrays, but they are split along the row (axis=1)."
    )

def ex06():
    ''' Example: Split the 2-D array into three 2-D arrays along rows. '''
    arr = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 11, 12], [13, 14, 15], [16, 17, 18]])
    newarr = np.array_split(arr, 3, axis=1)
    print(newarr)

def ex07():
    '''
    An alternate solution is using hsplit() opposite of hstack()
    Example: Use the hsplit() method to split the 2-D array into three 2-D arrays along rows.
    '''
    arr = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 11, 12], [13, 14, 15], [16, 17, 18]])
    newarr = np.hsplit(arr, 3)
    print(newarr)
    print("Note: Similar alternates to vstack() and dstack() are available as vsplit() and dsplit().")


def main():
    '''Run examples'''
    examples = [ex01, ex02, ex03, ex04, ex05, ex06, ex07] 
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

