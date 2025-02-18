#!/usr/bin/env python3

import numpy as np
from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

from tester import Tester

# *** Chi Square Distribution ***
# Chi Square distribution is used as a basis to verify the hypothesis.
#
# It has two parameters:
# `df` - (degree of freedom).
# `size` - The shape of the returned array.

def ex01():
    '''
    Example: Draw out a sample for chi squared distribution with degree of 
    freedom 2 with size 2x3:
    '''
    x = random.chisquare(df=2, size=(2, 3)) 
    print(x)

def ex02():
    '''
    Visualization of Chi Square Distribution
    '''
    sns.distplot(random.chisquare(df=1, size=1000), hist=False)
    plt.show()

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()


