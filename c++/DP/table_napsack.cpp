#include<bits/stdc++.h>
#define ll   long long
#define ld long double
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    ll  N, W;
    cin>>N>>W;
    vector<ll>wi(N);
    vector<ll>val(N);
    for(int i=0; i<N; i++){
        cin>>wi[i]>>val[i];
    }

    vector<vector<ll>>k(N+1, vector<ll>(W+1)); 

    for(int i=0; i<=N; i++){
        for(int j=0; j<=W; j++){
            if(i==0||j==0){
                k[i][j]=0;
            }else if(wi[i-1]<=j){
                k[i][j]=max(val[i-1]+k[i-1][j-wi[i-1]], k[i-1][j]);
            }else{
                k[i][j]=k[i-1][j];
            }
        }
    }
    cout<<k[N][W]<<endl;


 /*
    cout<<endl;
   for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= W; j++)
        {
           cout << k[i][j] << " ";
        }
        cout << endl;
    }
     

   cout<<endl;

    int res = k[N][W];
    cout<< res << endl;
     
    int  w = W;
    for (int i = N; i > 0 && res > 0; i--) {
        if (res == k[i - 1][w])
            continue;   
        else {
            cout<<" "<<wi[i - 1] ;
            res = res - val[i - 1];
            w = w - wi[i - 1];
        }
    }



   vector <int >ans;
   pair<int, int> list[N];
int v=k[N][W];
   for(int i=N; i>0; i--){
       for(int j=W; j>0; j--){
           if(k[i-1][j]==v){
               ans.push_back(wi[i]);
               v=k[i-1][j-1];
           }else{
               v=k[i][j-1];
           }
       }
   }
  
   for(auto i: ans){
       cout<<i<<endl;
   }


*/
    return 0;
}
