#!/usr/bin/env python3
# 02_getting_started.py

import numpy as np # import using shorter alias

def main():
    '''
    @brief  simple Numpy test.
    '''

    arr = np.array([1,2,3,4,5])
    
    print("Numpy array test:")
    print(arr)
    
    print()
    
    print("Numpy Version:")
    print(np.__version___)

if __name__ == "__main__":
    main()


