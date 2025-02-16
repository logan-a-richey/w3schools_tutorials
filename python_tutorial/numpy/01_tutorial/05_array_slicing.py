#!/usr/bin/env python3
# 05_array_slicing.py

import numpy as np

def main():
    # == Slicing arrays ==
    # Slicing in python means taking elements from one given index to another given index.
    # We pass slice instead of index like this: [start:end].
    # We can also define the step, like this: [start:end:step].
    # If we don't pass start its considered 0
    # If we don't pass end its considered length of array in that dimension
    # If we don't pass step its considered 1

    arr = np.array([1, 2, 3, 4, 5, 6, 7])
    print(arr[1:5]) # Slice elements from index 1 to index 5 from the following array:
    print(arr[4:]) # Slice elements from index 4 to the end of the array:
    print(arr[:4]) # Slice elements from the beginning to index 4 (not included):
    print(arr[-3:-1]) # Slice from the index 3 from the end to index 1 from the end:
    print(arr[1:5:2]) # Return every other element from index 1 to index 5:
    print(arr[::2]) # Return every other element from the entire array:

    # == Slicing 2-D Arrays ==
    arr = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])
    print(arr[1, 1:4])  # From the second element, slice elements from index 1 to index 4 (not included):
    print(arr[0:2, 2]) # From both elements, return index 2:
    print(arr[0:2, 1:4]) # From both elements, slice index 1 to index 4 (not included), this will return a 2-D array:

    return None

if __name__ == "__main__":
    main()

