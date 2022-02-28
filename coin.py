amount=12

arr = [1,5,7,9]

a=[[0 for i in range(amount+1)] for i in range(len(arr))]
for i in range(len(arr)):
     for j in range(amount+1):
          a[0][j]=j
          if(arr[i]>j):
               a[i][j]=a[i-1][j]
          else:
               a[i][j]=min(a[i-1][j], 1+a[i][j-arr[i]]) 

print("--------------------------")
print("Final answear is =",a[i][j])
print("--------------------------")

for i in a:
     print(i)


 

 

class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:

        arr = coins

        a=[[0 for i in range(amount+1)] for i in range(len(arr))]
        for i in range(len(arr)):
             for j in range(amount+1):
                    a[0][j]=j
                    if j==0:
                         a[i][j]=0
                    elif(i==0):
                         a[i][j]=1e5
                    if(arr[i]>j):
                         a[i][j]=a[i-1][j]
                    else:
                         a[i][j]=min(a[i-1][j], 1+a[i][j-arr[i]]) 


        return(-1 if a[i][j]>1e4 else a[i][j] )








        