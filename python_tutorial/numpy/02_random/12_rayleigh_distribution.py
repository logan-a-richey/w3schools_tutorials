#!/usr/bin/env python3

import numpy as np
from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

from tester import Tester

# *** Rayleigh Distribution ***
# Rayleigh distribution is used in signal processing.
#
# It has two parameters:
# `scale` - (standard deviation) decides how flat the distribution will be default 1.0).
# `size` - The shape of the returned array.

def ex01():
    '''
    Draw out a sample for rayleigh distribution with scale of 2 with size 2x3:
    '''
    x = random.rayleigh(scale=2, size=(2, 3))
    print(x)

def ex02():
    '''
    *** Visualization of Rayleigh Distribution ***

    *** Similarity Between Rayleigh and Chi Square Distribution ***
    At unit stddev and 2 degrees of freedom rayleigh and chi square represent 
    the same distributions.
    '''
    sns.distplot(random.rayleigh(size=1000), hist=False)
    plt.show()

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()


