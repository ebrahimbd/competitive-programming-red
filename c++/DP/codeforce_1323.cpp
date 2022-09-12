#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void ans(vector<vector<bool>>&mat, ll  n, ll sum, vector<ll> &arr){

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

}



int main(){
    fastread();
    int t;
    while(--t){
        ll n, sum;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int  i=0; i<n; i++){
            ll  j=arr[j];
            vector< vector <bool>>  mat(n+1, vector<bool> (j+1));
            ans(mat, n, j, arr);
            cout<<mat[n][j]<<endl;
        }
    }
  
    return 0;
}
