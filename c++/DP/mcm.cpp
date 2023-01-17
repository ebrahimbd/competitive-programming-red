#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main(){
    fastread();
    int n=4;
   // cin>>n;
    vector<vector<int>>  dp(n, vector<int>(n));
    vector<vector<int>>s(n, vector<int>(n));
    int p[5]={1,2,3,4};
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    } 
    int j, q;
    for(int i=1;i<n;i++){
      dp[i][i] = 0;
    }
    for(int d=1; d<n-1; d++){
        for(int i=1; i<n-d; i++){
            j=i+d;
            dp[i][j]=INT_MAX;
            for(int k=i; k<=j-1; k++){
            q=dp[i][k]+dp[k+1][j]+arr[k]*arr[i-1]*arr[j];
            if(q<dp[i][j]){
                dp[i][j]=q;
                s[i][j]=k;
            }
            }
        }
    }
    
cout<<endl<<dp[1][n-1]<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<dp[i][j]<<"-";
        }cout<<endl;
    }
    return 0;
}
