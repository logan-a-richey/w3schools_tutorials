#!/usr/bin/env python3

import numpy as np
from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

# *** Pareto Distribution ***
# A distribution following Pareto's law i.e. 80-20 distribution (20% factors cause 80% outcome).
#
# It has two parameters:
# `a` - shape parameter.
# `size` - The shape of the returned array.

def ex01():
    '''
    Draw out a sample for pareto distribution with shape of 2 with size 2x3:
    '''
    x = random.pareto(a=2, size=(2, 3))
    print(x)

def ex02():
    '''
    Visualization of Pareto Distribution
    '''
    sns.distplot(random.pareto(a=2, size=1000), kde=False)
    plt.show()

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()


