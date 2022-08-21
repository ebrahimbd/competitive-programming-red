#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
vector<int>v;

int l[10];
int p[10];

void  lis(int n){
    for(int i=0; i<n; ++i){
        if (i==0){
            l[i]=0;
            p[i]=-1;
        };
        for(int j=0; j<i; ++j){
            if(v[i]<v[j]){
                l[i]=max(l[i], l[i]+1);
                p[i]=j;
            }
        }
    }
}



int main(){
    fastread();
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
       int val;
           cin>>val;
           v.push_back(val);
    }
    lis(n);
    for(int i=0; i<n; ++i){
        cout<<l[i]<<"-";
    }cout<<endl;
    for(int j=0; j<n; ++j){
        cout<<p[j]<<"-";
    }
    return 0;
}
