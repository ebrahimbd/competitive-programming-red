class head:

    def __init__(self, key):
        self.key=key
        self.leftnode=None
        self.rightnode=None

    def inset(self, data):
        if self.key is None:
            self.key=data
            return
        if self.key==data:
            return
        if self.key > data:
            if self.leftnode:
                self.leftnode.insert(data)
            else:
                self.leftnode=head(data)
        else:
            if self.rightnode:
                self.rightnode.insert(data)
            else:
                self.rightnode=head(data)

        print(self.key)

n1=head(10)
n1.inset(55)

print("dfdsfdsfdsf")