#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int dp[9000];

int fib(int v){
    if (v==0) return 0;
    if( v==1 ) return 1;
    if(dp[v]!=-1) return dp[v];
    return dp[v]= fib(v-1)+fib(v-2);
}

int main(){
    fastread();
    int n;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<fib(n);
    cout<<INT_MAX;
    return 0;
}
