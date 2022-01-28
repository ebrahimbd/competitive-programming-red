class Head:

    def __init__(self, key):
          self.key=key 
          self.lchild=None
          self.rchild=None
    
    def insert(self, data):
        if self.key is None:
            self.key=data
            return
        if self.key==data:
              return
        if self.key > data:
            if self.lchild:
                self.lchild.insert(data)
                return
            else:
                self.lchild = Head(data)
                return
        else:
            if self.rchild:
                self.rchild.insert(data)
                return
            else:
                self.rchild = Head(data)
                return
            print("fdsfdsfdsf")
            
        
    def search(self, data):
        if self.key==data:
            print("we find the data = [%s] " % (self.key))
            return
        if self.key > data:
            if self.lchild:
                self.lchild.search(data)   
            else:
                print("invalid data")
        else:
            if self.rchild:
                self.rchild.search(data)  
            else:
                print("invalid data")
                
    
    def preorder(self):
        print("this is preorder root left right =[%s] "%self.key)
        if self.lchild:
            self.lchild.preorder()
        if self.rchild:
            self.rchild.preorder()
            
            
    def inorder(self):
        if self.lchild:
            self.lchild.inorder()
        print("this is inorder left root right  =[%s] "%self.key)
        if self.rchild:
            self.rchild.inorder()
      
    def postorder(self):
        if self.lchild:
            self.lchild.postorder()
        if self.rchild:
            self.rchild.postorder()
        print("this is postorder  left right root  =[%s] "%self.key)
      
 

    def delete(self, data):
        if self.key is None:
            print("tree is empty")
            return
        if data < self.key :
            if self.lchild:
                self.lchild=self.lchild.delete(data)
            else:
                print("tree is empty")
                
        elif data > self.key:
            if self.rchild:
                self.rchild=self.rchild.delete(data)
            else:
                print("tree is empty")
                
        else:
            if self.lchild is None:
                node=self.rchild
                self=None
                return node
            if self.rchild is None:
                node=self.lchild 
                self=None
                return node
                
            node = self.rchild 
            print(node)
            while node.lchild :
                print(self.key)
                node=node.lchild 
            self.key=node.key
            self.rchild=self.rchild.delete(node.key)
            
        return self
        
    
    def find_min(self):
        if self.lchild  is None:
            return self.key
        return self.lchild.find_min()


                   
a=Head(49)
list=[1,2,5,3,6,4]
for i in list:
    # a.search(i)
    a.insert(i)
a.delete(5)
    
print("=================")
a.preorder()
print("=================")
a.inorder()
print("=================")
a.postorder()

print(" the min = %s value "%a.find_min())

 
 










