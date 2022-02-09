#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb  7 22:23:49 2022

@author: ebrahim
"""

st1="abcyyj"

st2="xyznnj" 

s1=len(st1)
s2=len(st2)

a=[]

di=s2-s1

for i in range(s2+1):
    a.append([0 for i in range(s2+1)])
    a[0][i]=i
    a[i][0]=i
 
    
g=0
k=0 
for i in range(s1):
    for j in range(s2):
        if st1[i]==st2[j]:
            a[i+1][j+1]=1
             
        else:
            a[i+1][j+1]=min(a[i][j],a[i][j+1], a[i+1][j], )+1
            k=min(a[i-1][j-1], a[i-1][j], a[i][j-1])+k
   

        
      
 
    
print("==================================================================")
    
for i in range(len(a)):
    print(a[i])
  
    