#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan 28 22:29:19 2022

@author: ebrahim
"""

ins = "07:05:45PM"
 



is_pm = ins[-2:].lower() == 'pm'
time_list = list(map(int, ins[:-2].split(':')))

print(time_list)

if is_pm and time_list[0] < 12:
    time_list[0] += 12

if not is_pm and time_list[0] == 12:
    time_list[0] = 0

print(':'.join(map(lambda x: str(x).rjust(2, '0'), time_list)))





class ebra:
    def __innt__(self, a):
        self.a=a
    
    def age(self):
        print("its worke")
        
class saleh(ebra):
    def __int__(self, ha):
        self.ha=ha
        super().__init__()
        
    def call(self):
        self.age()
        
        

saleh().call()



a=[1,2,3,4]
b=[sum(a[0:x+1]) for x in range(0, len(a))]
print(b)

f=None
for i in range(5):
    with open("aaa.log", "w") as f:
        if i<2:
            break

print(f.closed)

f=[1,2]
f1=[12,3]
print(f==f1)
print(set(f)==set(f1))




data=[1, 2,3]
def incr(x):
    return x+1

print(list(map(incr, data)))

print(2**(3**2))



import re
d=re.findall('welcome', 'welcome', )
print(d)

 