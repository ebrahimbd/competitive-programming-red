#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

const int N=25e2+10;
vector <int>a(N);
set <int>ind;
set<int> s;

int dp[N];

int func(int i){
    if(dp[i] != -1) return dp[i];
    int ans=1;
    for(int j=0; j<i; ++j){
        if (a[i]>a[j]){
            ind.insert(i);
            s.insert(a[i]);
            ans=max(ans, func(j)+1);
        }
    }
    return dp[i] =  ans;
}

int main(){
    fastread();
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0; i<n; ++i){
        ans =max(ans, func(i));
    }
    cout<<ans<<endl;
    cout<<"===========Index==========="<<endl;

    for(auto i:ind){
        cout<<"["<<i<<"]"<<"-";    
    }cout<<endl;
  
    cout<<"==========Value=========="<<endl;
    for(auto i=s.begin(); i!=s.end(); ++i){
        cout<<"["<<(*i)<<"]"<<"-";    
    }cout<<endl;

    return 0;
}
