#!/usr/bin/env python3

from numpy import random
import numpy as np
from tester import Tester

# *** Random Permutations of Elements ***
# A permutation refers to an arrangement of elements.
# e.g. [3, 2, 1] is a permutation of [1, 2, 3] and vice-versa.
# The NumPy Random module provides two methods for this: 
# `shuffle()` and `permutation()`.

def ex01():
    '''
    Shuffling Arrays
    Shuffle means changing arrangement of elements in-place. i.e. in the array itself.
    
    Example: Randomly shuffle elements of following array:
    Note: The shuffle() method makes changes to the original array.
    '''
    arr = np.array([1, 2, 3, 4, 5])
    random.shuffle(arr)
    print(arr)

def ex02():
    '''
    Generating Permutation of Arrays
    Example: Generate a random permutation of elements of following array:
    Note: The permutation() method returns a re-arranged array (and leaves the original array un-changed).
    '''
    arr = np.array([1, 2, 3, 4, 5])
    print(random.permutation(arr)) 

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

