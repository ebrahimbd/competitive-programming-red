#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

const int N=2e5+10;
int wt[105], val[105];

ll  dp[105][N];

set <ll > bag;


ll  func(int ind, int wt_left){
    if(wt_left == 0) return 0;
    if(ind<0) return 0; 
   if(dp[ind][wt_left]!=-1) return dp[ind][wt_left];
    ll  ans=  func(ind-1, wt_left);
    if(wt_left-wt[ind]>=0){
        ans=max(ans, func(ind-1, wt_left-wt[ind])+val[ind]);
    }
   return dp[ind][wt_left]= ans;
}

int main(){
    fastread();
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin>>n>>w;
    for(int i=0; i<n; ++i){
        cin>>wt[i]>>val[i];
    }

    cout<<func(n-1, w);
    cout<<endl;

    for(auto i: bag){
        cout<<i<<endl;
    }
    return 0;
}