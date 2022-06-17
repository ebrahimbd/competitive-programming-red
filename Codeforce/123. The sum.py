#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jun 16 03:31:26 2022

@author: ebrahim
"""
n=int(input())
#This code gives nth number in fibonacci series - {0,1,1,2,3,5,......}.
def fibonacci(n, f1, f2, after):
    sum=0
    while f1<=n:
        sum=f1+sum
        after= f1+f2
        f1=f2
        f2=after
    return sum
 
if __name__ == "__main__":
    print(fibonacci(n, 0, 1,after=0))
  
# This code is contributed by Manan Tyagi.