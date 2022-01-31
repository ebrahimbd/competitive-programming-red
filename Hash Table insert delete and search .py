#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Jan 30 21:29:33 2022

@author: ebrahim
"""

class Hash:
    def __init__(self):
        self.range=50
        self.arr=[ [] for i in range(self.range)]
        
    def getkey(self, data):
        k=0
        for i in data:
           k=ord(i)+k 
        return (k % self.range)
    
    def add(self, key, value):
        if key and value:
            k=self.getkey(key)
            self.arr[k].append([key, value, ("key_ %s"%k)])
        else:
            print("Please insert the data")
            q=0
            while q<1:
                k=input("insert a key=")
                v=input("insert a value=")
                if k and v is not None:
                    q=1
                    self.add(k, v)
                    break
            


    def get_data(self, key, value=None):
        k=self.getkey(key)
        if self.arr[k]: 
            print(self.arr[k])                   
            # for i in self.arr[k]:
            #     if i[0]==key:
            #         print(i[0] +" %s"%i[1])
            #         return
        else:
            self.add(key, None)
            
    def delete(self, key, value=None):
        k=self.getkey(key)
        del(self.arr[k])
            
        
        
        
a=Hash()
a.add("march 6", 310)
a.add("march 8", 654)
a.add("march 8", 788)
a.add("march 8", 7885)
a.add("march 9", 3464)
a.add("march 9", 3464)
a.get_data("march 9", 3464)


#a.delete("march 9")

print("===================")
print(a.arr)
