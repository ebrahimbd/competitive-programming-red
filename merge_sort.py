#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Feb  6 21:54:09 2022

@author: ebrahim
"""

def marge_short(arr):
    if len(arr) <= 1:
        return
    mid=len(arr)//2
    left=arr[:mid]
    right=arr[mid:]
    
    marge_short(left)
    marge_short(right)
    
    return marge(left, right, arr)


def marge(left, right, arr):
    i=j=k=0
    while i<len(left) and j<len(right):
        if left[i]<=right[j]:
            arr[k]=left[i]
            i+=1
             
        else:
            arr[k]=right[j]
            j+=1
        k+=1
        
        
    while i < len(left):
        print("==========")
        print(left[i])
        arr[k] = left[i]
        i+=1
        k+=1

    while j < len(right):
        arr[k] = right[j]
        j+=1
        k+=1
        

     


arr=[10, 3, 15, 7, 8, 23, 98, 29]
print(marge_short(arr))
print(arr)
 
# test_cases = [[4, 1, 5, 7, 2, 6,6,6],
#      [10, 3, 15, 7, 8, 23, 98, 29],
#      [],
#      [3],
#      [9,8,7,2],
#      [1,2,3,4,5]
#  ]

# for arr1 in test_cases:
#      marge_short(arr1)
#      print(arr1)
     
# print(test_cases)