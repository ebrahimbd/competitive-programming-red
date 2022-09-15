#include<bits/stdc++.h>  
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    int n, sum;
    cin>>n>>sum;
    vector<int>coin(n);
    for(int i=0; i<n; i++) cin>>coin[i];

    vector<vector<int>> dp(n+1, vector<int>(sum+1));

    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            if(i==0) dp[0][j]=0;
            else dp[i][0]=1;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            if(coin[i-1]<=j){
                dp[i][j]= dp[i-1][j] +  dp[i][j-coin[i-1]];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    cout<<dp[n][sum]<<endl;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            cout<<dp[i][j]<<" ";
        }cout<<endl;
    }

    vector<int>ind;
    vector<int>val;

    int i=n; int j=sum;
    while(i>=0 && j>=0){
        if(dp[i-1][j]==dp[i][j]){
            if(i==0) {
                ind.push_back(coin[0]);
            }
            else{
                ind.push_back(coin[i]);
            }
            i--;
            j--;
        }else{
            j--;
        }
    }

    //reverse(ind.begin(), ind.end());
    for(int t:ind) cout<<t<<endl;

    return 0;
}
