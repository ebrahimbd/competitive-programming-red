class Head:

    def __init__(self, key):
        self.key=key
        self.leftnode=None
        self.rightnode=None

    def insert(self, data):
        if self.key is None:
            self.key=data
            print("if self.key is None:")
            print(self.key)
            return
        if self.key==data:
            print("self.key==data")
            print(self.key)
            return
        if self.key > data:
            if self.leftnode:
                print("self.leftnode")
                self.leftnode.insert(data)
                print((self.leftnode.insert(data)))
            else:
                print("self.leftnode=Head(data)")
                self.leftnode=Head(data)
                print((self.leftnode.key))
        else:
            if self.rightnode:
                print("self.rightnode:")
                self.rightnode.insert(data)
                print((self.rightnode.insert(data)))
            else:
                print("self.rightnode=Head(data)")
                self.rightnode=Head(data)
                print((self.rightnode.key))

         

root=Head(10)

list=[6,2,10,9,98]
for i in list:
    root.insert(i)



 



