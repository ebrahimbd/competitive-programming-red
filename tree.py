class Head:

    def __init__(self, key):
        self.key=key
        self.left=None
        self.right=None

    def insert(self, data):
        if self.key is None:
            self.key=data
            return
        if self.key==data:
            return
        if self.key > data:
            if self.left:
                self.left.insert(data)
            else:
                self.left=Head(data)
        else:
            if self.right:
                self.right.insert(data)
            else:
                self.right=Head(data)
                
    def diameterOfBinaryTree(self, root):
        tree=root
        longestDiameter = [0]
        longestDiameter[0]=self.binaryTreeHelper(tree.left, longestDiameter )
        return longestDiameter[0]
    	
    def binaryTreeHelper(self, tree, longestDiameter):
            dia=0
            if tree.left is not None:
                while tree.left:
                    dia+=1
                    if tree.right is None:
                        return binaryTreeHelper(self, tree, longestDiameter)  
                        
            elif tree.right is not None:
                while tree.right:
                    dia+=1
                    if tree.right is None:
                       return  binaryTreeHelper(self, tree, longestDiameter)  
                        
         
            return dia
            
            
        # if tree.right is None:
        #     return 0
        # maxLeftPath =self.binaryTreeHelper(tree.left, longestDiameter)
        # if maxLeftPath is None:
        #     maxLeftPath=0
        #     return maxLeftPath
        # maxRightPath =self.binaryTreeHelper(tree.right, longestDiameter)
        # if maxRightPath is None:
        #     maxRightPath=0
        #     return maxRightPath
        # maxCurrentPathLength = maxLeftPath + maxRightPath
        # longestDiameter[0] = max(longestDiameter[0], maxCurrentPathLength)
        # return max(1 + maxLeftPath, 1 + maxRightPath)
      
            
        
root=Head(99)
list1=[1,2,3,4,5]
for i in list1:
    root.insert(i)

print(root.diameterOfBinaryTree(root))
    
 

 
 

