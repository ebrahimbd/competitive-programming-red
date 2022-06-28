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
        int n, k;
        cin>>n>>k;
        int cnt=0;
        int pairr[n];
 
     for(int i=0; i<n; i++ ){
		 cin>>pairr[i];
		 }
         
  
      for(int i=1; i<n-1; i++ ){
		  if(pairr[i]>pairr[i-1]+pairr[i+1]){
			   cnt++;
			  }
		    
		 }
		 if(k==1){
			 cnt=(n+1) / 2-1 ;
			 cout<<cnt<<endl;
			 
			 }else{
				 
				 cout<<cnt<<endl;
				 
				 }
         
    }
    return 0;
}

