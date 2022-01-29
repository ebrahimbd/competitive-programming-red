#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan 28 22:17:30 2022

@author: ebrahim
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'birthdayCakeCandles' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY candles as parameter.
#

def birthdayCakeCandles(candles):
    
    m=max(candles)
    return (candles.count(m))

if __name__ == '__main__':
 
    candles_count = 4

    candles = [3, 2, 1, 3]

    result = birthdayCakeCandles(candles)

   
