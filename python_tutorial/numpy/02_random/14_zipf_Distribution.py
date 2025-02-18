#!/usr/bin/env python3

import numpy as np
from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

from tester import Tester

# *** Zipf Distrubition ***
# Zipf distributions are used to sample data based on zipf's law.
# "In a collection, the nth common term is 1/n times of the most common term"
# (ie) the 5th most common word in English occurs nearly 1/5 times as often as 
# the most common word.
# 
# It has two parameters:
# `a` - distribution parameter.
# `size` - The shape of the returned array.

def ex01():
    '''
    Draw out a sample for zipf distribution with distribution parameter 2 with 
    size 2x3:
    '''
    x = random.zipf(a=2, size=(2, 3))
    print(x)

def ex02():
    '''
    *** Visualization of Zipf Distribution ***
    Sample 1000 points but plotting only ones with value < 10 for more 
    meaningful chart.
    '''
    x = random.zipf(a=2, size=1000)
    sns.distplot(x[x<10], kde=False)
    plt.show() 

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()


