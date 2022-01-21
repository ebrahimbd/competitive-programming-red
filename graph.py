#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec  7 11:44:06 2021
\\\@author: ebrahim
"""
nodes = []
graph = []

node_cont=0

def add_node(node_name):
    global node_cont
    if node_name in nodes :
        print("node is presrnt in graph", node_name)
    else:
        node_cont=node_cont + 1
        nodes.append(node_name)
        for col in graph:
            col.append(0)
        row = []
        for i in range(node_cont):
            row.append(0)
            graph.append(row)
  
def add_edge(v1, v2, cost):
    if v1 not in nodes:
        print("v1 or v2 ")
    else:
        index1=nodes.index(v1)
        index2=nodes.index(v2)
        graph[index1][index2] = cost
        graph[index2][index1] = cost
        
        
def printgraph(graph):
    for row in range(node_cont):
        for col in range(node_cont):
            print(graph[row][col], end=" ")
        print()
      
list =['A', 'B', 'C', 'G']
for i in  list:
    add_node(i)            

add_edge("A", "C", 55)

print(graph)
# printgraph(graph)