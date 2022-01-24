#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Jan 24 14:48:16 2022

@author: ebrahim
"""

def staircase(n):
    for i in range(n):
        for j in range(n-i):
            print(" ", end="")
        for s in range(i):
            print("#", end="")
        print("#")
        
staircase(6)
 



def staircase(n):
    m=" "
    t=1
    while n>n-n:
        print((n-1)*m+t*("*"))
        n=n-1
        t=t+1
        
staircase(6)

