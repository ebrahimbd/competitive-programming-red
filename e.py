class Head:

    def __init__(self, key):
          self.key=key 
          self.lfchild=None
          self.rhchild=None
    
    def insert(self, data):
        if self.key is None:
            self.key=data
            return
        if self.key==data:
              return
        if self.key > data:
            if self.lfchild:
                self.lfchild.insert(data)
                return
            else:
                self.lfchild = Head(data)
                return
        else:
            if self.rhchild:
                self.rhchild.insert(data)
                return
            else:
                self.rhchild = Head(data)
                return
            print("fdsfdsfdsf")
            
        
    def search(self, data):
        if self.key==data:
            print("we find the data = [%s] " % (self.key))
            return
        if self.key > data:
            if self.lfchild:
                self.lfchild.search(data)   
            else:
                print("invalid data")
        else:
            if self.rhchild:
                self.rhchild.search(data)  
            else:
                print("invalid data")
                
    
    def preorder(self):
        print("this is preorder root left right =[%s] "%self.key)
        if self.lfchild:
            self.lfchild.preorder()
        if self.rhchild:
            self.rhchild.preorder()
            
            
    def inorder(self):
        if self.lfchild:
            self.lfchild.inorder()
        print("this is inorder left root right  =[%s] "%self.key)
        if self.rhchild:
            self.rhchild.inorder()
      
    def postorder(self):
        if self.lfchild:
            self.lfchild.postorder()
        if self.rhchild:
            self.rhchild.postorder()
        print("this is postorder  left right root  =[%s] "%self.key)
      
            
    def order(self):
        if self.lfchild:
            self.lfchild.order()
        print(self.key)



    def delete(self, data):
        
        pass



                   
a=Head(49)
list=[1,2,5,3,6,4]
for i in list:
    a.search(49)
    a.insert(i)
    
print("=================")
a.preorder()
print("=================")
a.inorder()
print("=================")
a.postorder()
a.order()




 










