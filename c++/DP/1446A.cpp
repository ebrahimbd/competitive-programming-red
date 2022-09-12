#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        ll n, sum;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        // for(int i=0; i<n; i++){
        // if (arr[i]%2==0) cout<<arr[i]<<endl;
        // }

        for(int i=0; i<n; i++){
           if (arr[i]%2==0) {
             sum=arr[i];
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
                if(mat[n][sum]==1){
                    cout<<i+1;
                }else{
                    cout<<-1;
                }
           }else{
            cout<<-1;
           }
        }  
    }
    return 0;
}
