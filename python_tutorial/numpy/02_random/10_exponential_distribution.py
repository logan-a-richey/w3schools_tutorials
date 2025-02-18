#!/usr/bin/env python3

import numpy as np
from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

# Exponential Distribution
# Exponential distribution is used for describing time till next event 
# e.g. failure/success etc.
# 
# It has two parameters:
# `scale` - inverse of rate ( see lam in poisson distribution ) defaults to 1.0.
# `size` - The shape of the returned array.

def ex01():
    '''
    Example: Draw out a sample for exponential distribution with 2.0 scale with 2x3 size:
    '''
    x = random.exponential(scale=2, size=(2, 3))i
    print(x)

def ex02():
    '''
    *** Visualization of Exponential Distribution ***
    Poisson distribution deals with number of occurences of an event in a time 
    period whereas exponential distribution deals with the time between these 
    events. 
    '''
    sns.distplot(random.exponential(size=1000), hist=False)
    plt.show()

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()


