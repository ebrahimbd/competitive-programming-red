#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 18 23:16:20 2022

@author: ebrahim
"""

def graphlist(node):
    if node  not in graph:
        graph[node]=[]
        return True 
    else:
        return False     
def add_graph(node_name):
    if graphlist(node_name):
        graph[node_name]=[]
    else:
        print("node is already  present")
def add_edge(node_name, edge):
    if node_name in graph:
        graph[node_name].append(edge)
    else:
        print("node is not present in graph")
  
graph={}
print(graph)
add_graph("A")
add_graph("V")
add_edge("A", "sdf")
add_edge("V", "sdf")
add_edge("V", "sdf")
print(graph)