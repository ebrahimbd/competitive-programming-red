#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec  7 11:04:13 2021

@author: ebrahim
"""

# how array srorage bye
import sys

n=5
data=[]
for i in range(n):
    a=len(data)
    b=sys.getsizeof(data)
    print('length:{0:3d}; size in bytes: {1:4d}'.format(a,b))
    data.append(n)
    
    

# is anagrams?

def ana(a, b):
    a=a.replace(' ', '').lower()
    b=b.replace(' ', '').lower()
    
    return sorted(a) == sorted(b)
ana("aa", "aa")
    
