#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
const int N=1e7+10;


void bin(int num){
    for (int i=10; i>=0; i--){
    cout<<((num>>i)& 1);
    }cout<<endl;
}

int main(){
    fastread();
    int num, indx;
    cin>>num>>indx;
    // cout<<(num&(num<<indx))<<endl;
    bin(9);
     cout<<(1<<indx)<<endl;
      bin(num);
      bin(indx);
      cout<<"-----------"<<endl;
      int b=(num&(num<<indx));
     bin(b);

      cout<<"========"<<endl;
      int s=(num|(1<<indx));
      int u=(num & (~(1<<indx)));

      cout<<s<<endl;
      cout<<u<<endl;
      bin(s);
      bin(u);

      cout<<"========"<<endl;
      bin((num ^(1<<indx)));
 
    int ct=0;
   //count set bit
      for (int i=31; i>=0; i--){
          if (num & (1<<i)){
              ct++;
          }
      }
    cout<<ct;
    cout<<endl<<endl<<endl;
    return 0;
}
