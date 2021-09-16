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

    def printnode(self):
        if self.head is None:
            print("empty")
        else:
            val=self.head
            while val is not None:
                print(val.data)
                val=val.ref #when it none than auto stop
    def search(self, data):
        val=self.head
        if val.data==data:
            print("we got value ====", val.data)
        else:
            print("not value find")
            # newno=Node(data)
            # newno.ref=self.head 
            # self.head=newno
                

no=Linkedlist()
for i in range(5):
   no.addlinkedlist(i)
no.search(45)
no.printnode()   