#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Jan 23 17:10:29 2022
@author: ebrahim
"""
 

arr=[]

def diagonaldiff(arr, n):
    dileft=[]
    diright=[]
    for row in range(n):
        dileft.append(arr[row][row])
        #print(arr[row][row])
    for i in reversed(range(n)):
        # n-1-i becuase of 1, 2, 3,
        diright.append(arr[n-1-i][i])
    diff=abs(sum(dileft)-sum(diright))   
    print(arr)
    return (diff)
    

if __name__=="__main__":
    n=int(input().strip())
    for i in range(n):
        arr.append([])
        for j in range(n):  
            b=int(input().strip())
            arr[i].append(b)
    diagonaldiff(arr, n)

 
