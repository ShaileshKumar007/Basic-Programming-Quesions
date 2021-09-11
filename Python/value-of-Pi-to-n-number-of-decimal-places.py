#!/usr/bin/env python3

'''
Name: Pi.py
Purpose: Get the value of Pi to n number of decimal places
Author: Yusuf Adel (y8l)
Algorithm: Gaussian integral Algorithm
License: MIT


Module Dependencies:
mpmath used to evaluating the Gaussian integral
sys is needed to stop shell buffer.
'''

from sys import exit
from mpmath import mp


def Nth_PI():
    '''Computes Nth digits of pi
    by numerically evaluating the Gaussian integral with mpmath.'''

    # The number of digits in the output || e.g: mp.dps = 5 >> 3.14159
    mp.dps = int(input(">>Enter a number Digits of PI: ")) + 1
    Pi_Format = f"{mp.quad(lambda x: mp.exp(-(x ** 2)), [-mp.inf, mp.inf]) ** 2}..."
    if mp.dps >= 99:
        return Pi_Format
    else:
        return mp.quad(lambda x: mp.exp(-(x ** 2)), [-mp.inf, mp.inf]) ** 2


def shell():
    while True:
        print(Nth_PI())
        print('-----------------------------')
        buffer = input("Want to try another PI(Press Enter): ")
        if buffer == '':
            print(Nth_PI())
        else:
            exit()


if __name__ == '__main__':
    try:
        shell()

    except ValueError:
        print("\nEnter a valid number!")
        shell()
