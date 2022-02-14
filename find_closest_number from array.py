#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb 14 10:55:28 2022

@author: ebrahim
"""

import time

# starting tim

A = [4, 5, 6, 7, 8, 8, 9]

def find(arr, val):
    start = time.time()
    s=[]
    fi=[]
    mid=len(A)//2
    
    if val<=A[mid]:
        for i in range(len(A[:mid])):              
            dif=abs(A[i]-val)
            s.append(dif)
    elif val>=A[mid]:
        for i in range(len(A[mid:])):              
            dif=abs(A[i]-val)
            s.append(dif)
    else:
        s.append(A[0])
        return
    m=min(s)   
    for i in range(len(s)):
        if s[len(s)-1-i]==m:
              fi.append(A[len(s)-1-i])
              
    print(s)
    print(fi[0])
    end = time.time()
    print(f"Runtime of the program is {end - start}")




find(A, 4)



# program body ends

# end time


# total time taken








