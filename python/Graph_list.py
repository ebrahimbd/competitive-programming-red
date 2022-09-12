#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan  7 17:15:23 2022

@author: ebrahim
"""

def add_node(v):
    if v in graph:
        print(v,"is already present in graph")     
    else:
        graph[v]=[]
        
  
def add_edge(v1, v2):
    if v1 and v2 not in graph:
        print("v1 and 2 is not present in graph")
    else:
        # for i in graph:
        #     print(graph[i])
        #     graph[i].append(v2)
      
        print(graph)
        graph[v1].append(v2)
        
graph={}

add_node("A")
add_node("V")
add_edge("A", "V")

print(graph)