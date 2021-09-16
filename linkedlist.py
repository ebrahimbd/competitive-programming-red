class Node:
    def __init__(self,data):
        self.data = data
        self.ref = None

    # def tree(self):
    #     print(self.data)
    #     print(self)


class LinkedList:
    def __init__(self):
        self.head = None

    def addelement(self, data):
        newnode=Node(data)
        newnode.ref=self.head
        self.head=newnode

    
    def print_LL(self):
        if self.head is None:
            print("Linked list is empty!")
        else:
            n = self.head
            while n is not None:
                print(n.data)
                n = n.ref

 

ll=LinkedList()    
ll.addelement(3333)
ll.addelement(44)
ll.addelement(55)
ll.print_LL()
# node2=node1.tree()

# print("====================")
# jj=node1.ref=ll.head 
# print(jj)