#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    ll n, sum;
    cin>>n>>sum;
    vector<ll>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    vector< vector <bool>>  mat(n+1, vector<bool> (sum+1));

    for (int i = 0; i <= n; i++)
             mat[i][0] = true;
    for (int i=1; i<=sum ; i++){
        mat[0][i]=false;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
             if(arr[i-1]<=j){
                mat[i][j]=mat[i-1][j-arr[i-1]] || mat[i-1][j];
            }else{
                mat[i][j]=mat[i-1][j];
            }
        }
    }

   cout<<mat[n][sum]<<endl;


 
    return 0;
}
