#!/usr/bin/env python3
# 07_copy_vs_view.py

import numpy as np

def main():
    # The Difference Between Copy and View
    # The main difference between a copy and a view of an array is that the copy is a new array, and the view is just a view of the original array.
    # The copy owns the data and any changes made to the copy will not affect original array, and any changes made to the original array will not affect the copy.
    # The view does not own the data and any changes made to the view will affect the original array, and any changes made to the original array will affect the view.

    # COPY:
    arr = np.array([1, 2, 3, 4, 5])
    x = arr.copy()
    arr[0] = 42
    print(arr)
    print(x)
    # Note: The copy SHOULD NOT be affected by the changes made to the original array.

    # VIEW:
    arr = np.array([1, 2, 3, 4, 5])
    x = arr.view()
    arr[0] = 42
    print(arr)
    print(x)
    # Note: The view SHOULD be affected by the changes made to the original array.

    # Make Changes in the VIEW:
    arr = np.array([1, 2, 3, 4, 5])
    x = arr.view()
    x[0] = 31
    print(arr)
    print(x)
    # Note: The original array SHOULD be affected by the changes made to the view.
    
    # Check if Array Owns its Data
    # As mentioned above, copies owns the data, and views does not own the data, but how can we check this?
    # Every NumPy array has the attribute base that returns None if the array owns the data.
    # Otherwise, the base  attribute refers to the original object.
    # Print the value of the base attribute to check if an array owns it's data or not:
    arr = np.array([1, 2, 3, 4, 5])
    x = arr.copy()
    y = arr.view()
    print(x.base)
    print(y.base)
    # Note: The copy returns None.
    # Note: The view returns the original array.i
    
    return None

if __name__ == "__main__":
    main()

