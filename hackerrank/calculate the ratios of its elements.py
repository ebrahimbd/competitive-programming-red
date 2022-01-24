#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Jan 24 00:08:11 2022

@author: ebrahim
"""

#!/bin/python3

# Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal
#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#


def printline(a, b, c):
    print(a)
    print(b)
    print(c)


def plusMinus(arr, n):
    ng=0
    zero=0
    po=0
    for i in arr:
        if i<0:
            ng=ng+1
        elif i>0:
            po=po+1  
        else:
            zero=zero+1
             
    x=(po/n)
    y=(ng/n)
    z=(zero/n)

    return  printline( (round(x, n)) , (round(y, n)), (round(z, n)))

if __name__ == '__main__':
    #n = int(input().strip())

    #arr = list(map(int, input().rstrip().split()))
    arr= [1, 2 ,3 ,-1, -2, -3, 0 ,0]
    (plusMinus(arr, 8))