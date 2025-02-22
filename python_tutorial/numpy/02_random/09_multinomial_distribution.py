#!/usr/bin/env python3

import numpy as np
from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

from tester import Tester

# *** Multinomial Distribution ***
# Multinomial distribution is a generalization of binomial distribution.
# It describes outcomes of multi-nomial scenarios unlike binomial where 
# scenarios must be only one of two. e.g. Blood type of a population, dice roll 
# outcome.
# 
# It has three parameters:
# `n` - number of possible outcomes (e.g. 6 for dice roll).
# `pvals` - list of probabilties of outcomes 
#  (e.g. [1/6, 1/6, 1/6, 1/6, 1/6, 1/6] for dice roll).
# `size` - The shape of the returned array.

def ex01():
    '''
    Example: Draw out a sample for dice roll:
    
    Note: Multinomial samples will NOT produce a single value! 
    They will produce one value for each pval.
    
    Note: As they are generalization of binomial distribution their visual 
    representation and similarity of normal distribution is same as that of 
    multiple binomial distributions.
    '''
    x = random.multinomial(n=6, pvals=[1/6, 1/6, 1/6, 1/6, 1/6, 1/6])
    print(x) 

def main():
    '''Run examples'''
    examples = [ex01]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()


