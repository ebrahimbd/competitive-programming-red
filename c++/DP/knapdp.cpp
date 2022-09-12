#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void knasack(vector<vector <ll>>&T, ll  n, ll w, vector<ll>weigt, vector<ll> price){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=w; j++){
            if(i==0 || j==0) T[i][j]=0;
            else if( weigt[i-1]<=j ){
                T[i][j]=max(price[i-1]+T[i-1][j-weigt[i-1]], T[i-1][j] );
            }else{
                T[i][j]=T[i-1][j];
            }
        }
    }
}


int main(){
    fastread();
    ll n, w;
    cin>>n>>w;
    vector <ll> price(n);
    vector <ll> weigt(n);
    vector <vector <ll>>  matrix(n+1, vector <ll> (w+1));
    for(int i=0; i<n; i++){
        cin>>weigt[i]>>price[i];
    }
    knasack(matrix, n, w, weigt, price);
    cout<<matrix[n][w]<<endl;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=w; j++) {
            cout<<matrix[i][j]<<"-";
        }cout<<endl;
    }
    return 0;
}
