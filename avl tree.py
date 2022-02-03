#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Feb  2 21:49:04 2022

@author: ebrahim
"""

class node:
    def __init__(self, num):
        self.value = num
        self.left = None
        self.right = None
        self.height = 1

class AVL:

    def height(self, Node):
        if Node is None:
            return 0
        else:
            return Node.height

    def balance(self, Node):
        if Node is None:
            return 0
        else:
            return self.height(Node.left) - self.height(Node.right)

    def MinimumValueNode(self, Node):
        if Node is None or Node.left is None:
            return Node
        else:
            return self.MinimumValueNode(Node.left)

    def rotateR(self, Node):
        a = Node.left
        b = a.right
        a.right = Node
        Node.left = b
        Node.height = 1 + max(self.height(Node.left), self.height(Node.right))
        a.height = 1 + max(self.height(a.left), self.height(a.right))
        return a

    def rotateL(self, Node):
        a = Node.right
        b = a.left
        a.left = Node
        Node.right = b
        Node.height = 1 + max(self.height(Node.left), self.height(Node.right))
        a.height = 1 + max(self.height(a.left), self.height(a.right))
        return a

    def insert(self, val, root):
        if root is None:
            return node(val)
        elif val <= root.value:
            root.left = self.insert(val, root.left)
        elif val > root.value:
            root.right = self.insert(val, root.right)
        root.height = 1 + max(self.height(root.left), self.height(root.right))
        balance = self.balance(root)
        if balance > 1 and root.left.value > val:
            return self.rotateR(root)
        if balance < -1 and val > root.right.value:
            return self.rotateL(root)
        if balance > 1 and val > root.left.value:
            root.left = self.rotateL(root.left)
            return self.rotateR(root)
        if balance < -1 and val < root.right.value:
            root.right = self.rotateR(root.right)
            return self.rotateL(root)
        return root

    def preorder(self, root):
        if root is None:
            return
        print(root.value)
        self.preorder(root.left)
        self.preorder(root.right)

    def delete(self, val, Node):
        if Node is None:
            return Node
        elif val < Node.value:
            Node.left = self.delete(val, Node.left)
        elif val > Node.value:
            Node.right = self.delete(val, Node.right)
        else:
            if Node.left is None:
                lt = Node.right
                Node = None
                return lt
            elif Node.right is None:
                lt = Node.left
                Node = None
                return lt
            rgt = self.MinimumValueNode(Node.right)
            Node.value = rgt.value
            Node.right = self.delete(rgt.value, Node.right)
        if Node is None:
            return Node
        Node.height = 1 + max(self.height(Node.left), self.height(Node.right))
        balance = self.balance(Node)
        if balance > 1 and self.balance(Node.left) >= 0:
            return self.rotateR(Node)
        if balance < -1 and self.balance(Node.right) <= 0:
            return self.rotateL(Node)
        if balance > 1 and self.balance(Node.left) < 0:
            Node.left = self.rotateL(Node.left)
            return self.rotateR(Node)
        if balance < -1 and self.balance(Node.right) > 0:
            Node.right = self.rotateR(Node.right)
            return self.rotateL(Node)
        return Node

Tree = AVL()
rt = None
rt = Tree.insert(3, rt)
rt = Tree.insert(5, rt)
rt = Tree.insert(7, rt)
print("PREORDER")
Tree.preorder(rt)
rt = Tree.insert(1, rt)
rt = Tree.insert(2, rt)
print("PREORDER")
Tree.preorder(rt)
rt = Tree.insert(4, rt)
rt = Tree.insert(6, rt)
rt = Tree.delete(7, rt)
rt = Tree.insert(8, rt)
rt = Tree.insert(9, rt)
print("PREORDER")
Tree.preorder(rt)
rt = Tree.delete(3, rt)
print("PREORDER")
Tree.preorder(rt)






# another way 


import sys
class treeroot(object):
def __init__(self, key):
self.key = key
self.left = None
self.right = None
self.height = 1
class avl(object):
definsrtnode(self, root, key):
if not root:
return treeroot(key)
elif key <root.key:
root.left = self.insrtnode(root.left, key)
else:
root.right = self.insrtnode(root.right, key)
root.height = 1 + max(self.getHeight(root.left),
self.getHeight(root.right))
balanceFactor = self.getBalance(root)
if balanceFactor> 1:
if key <root.left.key:
return self.RR(root)
else:
root.left = self.LR(root.left)
return self.RR(root)
if balanceFactor< -1:
if key >root.right.key:
return self.LR(root)
else:
root.right = self.RR(root.right)
return self.LR(root)
return root
defdelnode(self, root, key):
if not root:
return root
elif key <root.key:
root.left = self.delnode(root.left, key)
elif key >root.key:
root.right = self.delnode(root.right, key)
else:
if root.left is None:
temp = root.right
root = None
return temp
elifroot.right is None:
temp = root.left
root = None
return temp
temp = self.getMinValueNode(root.right)
root.key = temp.key
root.right = self.delnode(root.right,
temp.key)
if root is None:
return root
root.height = 1 + max(self.getHeight(root.left),
self.getHeight(root.right))
bf = self.getBalance(root)
if bf > 1:
if self.getBalance(root.left) >= 0:
return self.RR(root)
else:
root.left = self.LR(root.left)
return self.RR(root)
if bf < -1:
if self.getBalance(root.right) <= 0:
return self.LR(root)
else:
root.right = self.RR(root.right)
return self.LR(root)
return root
def LR(self, z):
y = z.right
T2 = y.left
y.left = z
z.right = T2
z.height = 1 + max(self.getHeight(z.left),
self.getHeight(z.right))
y.height = 1 + max(self.getHeight(y.left),
self.getHeight(y.right))
return y
def RR(self, z):
y = z.left
T3 = y.right
y.right = z
z.left = T3
z.height = 1 + max(self.getHeight(z.left),
self.getHeight(z.right))
y.height = 1 + max(self.getHeight(y.left),
self.getHeight(y.right))
return y
defgetHeight(self, root):
if not root:
return 0
return root.height
defgetBalance(self, root):
if not root:
return 0
return self.getHeight(root.left) - self.getHeight(root.right)
defgetMinValueNode(self, root):
if root is None or root.left is None:
return root
return self.getMinValueNode(root.left)
defpreOrder(self, root):
if not root:
return
print("{0} ".format(root.key), end="")
self.preOrder(root.left)
self.preOrder(root.right)
defprintHelper(self, currPtr, indent, last):
if currPtr != None:
sys.stdout.write(indent)
if last:
sys.stdout.write("R----")
indent += "     "
else:
sys.stdout.write("L----")
indent += "|    "
print(currPtr.key)
self.printHelper(currPtr.left, indent, False)
self.printHelper(currPtr.right, indent, True)
myTree = avl()
root = None
nums = [95, 45, 27, 19, 71, 10, 68, 34] for num in nums:
root = myTree.insrtnode(root, num)
print("After insertion: ")
myTree.printHelper(root, "", True)
key = 45
root = myTree.delnode(root, key)
print("After Deletion: ")
myTree.printHelper(root, "", True)