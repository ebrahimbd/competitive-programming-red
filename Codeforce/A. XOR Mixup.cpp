#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for (int i=0; i<n; i++)
        cin>>a[i];
        
        for (int i=0; i<n;  i++){
			
			int *x=&a[i];
			
			int ans=0;
			for(int j=0; j<n; j++){
				
				if(&a[j]!=x)
				ans^=a[j];
				}
			if(a[i]==ans){
				cout<<a[i]<<endl;
				break;
				
				}
						}
        
     
    }
    return 0;
}

