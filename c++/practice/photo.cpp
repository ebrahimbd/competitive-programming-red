#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    int t;
     cin>>t; 
     while(t--){
         int n, x;
         cin>>n>>x;
         int front[1000];
         int b[1000];
         int f[1000];

         for (int i=0; i<2*n; i++){
             int j;
             cin>>j;
             front[i]=j;
         }
         for(int i=0; i<2*n; i++){
            cout<<max(front);

         }
         if(front[0]==1){
             cout<<"YES";
         }else if(front[0]==2){
             cout<<"NO";
         }else{
             cout<<"YES";
         }
         cout<<endl;
     }
     return 0;
}
