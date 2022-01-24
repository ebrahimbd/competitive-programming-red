#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Jan 24 01:17:27 2022

@author: ebrahim
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumLoss' function below.
#
# The function is expected to return an INTEGER.
# The function accepts LONG_INTEGER_ARRAY price as parameter.
#

def minimumLoss(price, n):
    #print(price)
    if n==3:
        for i in range(n):
            print(price[i])
            for j in reversed(range(n)):
                print(price[j])
                return abs(price[i]-price[j])
            
    else:
        
        for i in range(n):
            print(price[i+1])
            for j in reversed(range(n)):
                print(price[j])
                return abs(price[i+1]-price[j])
        

  
if __name__ == '__main__':
   

    # n = int(input().strip())

    # price = list(map(int, input().rstrip().split()))

    result = minimumLoss([5, 10, 3], 3)
    #result = minimumLoss(price, n)
    
    print(result)

     
