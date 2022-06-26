#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    int t;
    cin>>t;
    while(t--){
        int n, z;
        cin>>n>>z;
        int arr[n];
        int arr2[n];
        int m=0;
        for (int i=0; i<n; i++){
			cin>>arr[i];
			if (arr[i]>m){
				m=arr[i];
				}
				
			int p=arr[i] | z;
			arr2[i]=p;
			}
		
       int max=m;
       for(int i=0; i<n; i++){
		   if(arr2[i]>max){
			   max=arr2[i];
			   }
		   
		   }
		 cout<<max<<endl;
       
    }
    return 0;
}
