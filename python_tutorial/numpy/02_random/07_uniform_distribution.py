#!/usr/bin/env python3

import numpy as np
from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

from tester import Tester

# *** Uniform Distribution ***
# Used to describe probability where every event has equal chances of occuring.
# E.g. Generation of random numbers.
#
# It has three parameters:
# `low` - lower bound - default 0 .0.
# `high` - upper bound - default 1.0.
# `size` - The shape of the returned array.

def ex01():
    ''' 
    Example: Create a 2x3 uniform distribution sample:
    '''
    x = random.uniform(size=(2, 3))
    print(x)

def ex02():
    '''
    *** Visualization of Uniform Distribution ***
    '''
    sns.distplot(random.uniform(size=1000), hist=False)
    plt.show()

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()


