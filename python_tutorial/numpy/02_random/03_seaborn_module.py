#!/usr/bin/env python3

import matplotlib.pyplot as plt
import seaborn as sns

from tester import Tester

# *** Visualize Distributions With Seaborn ***
# Seaborn is a library that uses Matplotlib underneath to plot graphs.
# It will be used to visualize random distributions.

# install seaborn with `pip install seaborn``` in your venv.

# *** Distplots ***
# Distplot stands for distribution plot, it takes as input an array and plots a curve corresponding to the distribution of points in the array.

# *** Import Matplotlib ***
# Import the pyplot object of the Matplotlib module in your code using the following statement:
# `import matplotlib.pyplot as plt`

# ** Import Seaborn ***
#  Import the Seaborn module in your code using the following statement: 
# `import seaborn as sns`

def ex01():
    '''Plotting a Distplot: '''
    sns.distplot([0, 1, 2, 3, 4, 5])
    plt.show() 

def ex02():
    '''
    Plotting a Distplot Without the Histogram
    Note: We will be using: sns.distplot(arr, hist=False) to visualize random distributions in this tutorial.
    '''
    sns.distplot([0, 1, 2, 3, 4, 5], hist=False)
    plt.show() 

def main():
    '''Run examples'''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

