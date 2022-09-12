class Node:
    def __init__(self,data):
        self.data=data
        self.ref=None

class Linkedlist:
    def __init__(self):
        self.head=None

    def addlinkedlist(self,data):
        newno=Node(data)
        newno.ref=self.head
        self.head=newno
        
    def addendnode(self, data):
        endnode=Node(data)
        n=self.head
        if self.head is None:
            endnode.ref=self.head
            self.head=endnode
        else:          
            while n.ref is not None:
                n=n.ref
            n.ref=endnode
        
    def printnode(self):
        if self.head is None:
            print("empty")
        else:
            val=self.head
            while val is not None:
                if val.data==10:
                    print("match value in node so we delete it =", val.data)
                    val.data=None
                else:
                    print(val.data)
                    
                val=val.ref #when it none than auto stop
    # def search(self, data):
    #     val=self.head
    #     if val.data==data:
    #         print("we got value ====", val.data)
    #     else:
    #         print("not value find")
    #         # newno=Node(data)
    #         # newno.ref=self.head 
    #         # self.head=newno
                

no=Linkedlist()

  

for i in range(2):
   no.addlinkedlist(i)

no.addendnode(333)    
no.printnode()  
 
# no.search(1)
#print("===========================")
#no.printnode()   

 


