#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void solver(){
int n=0;
       cin>>n;
       vector<int>a(n);
       for(int i=0; i<n; i++){
           cin>>a[i];
        bool check=false;
        for(int i=0; i<n-1; i++){
            if(a[i]!=a[i+1]){
                check=true;
                break;
            }
        }
        if(!check){
            cout<<"NO\n";
            return;
        }else{
            cout<<"YES\n";
            int l=0;
            int h=n-1;
            while(l<h){
                cout<<a[l]<<" ";
                cout<<a[h]<<" ";
                l++;
                h--;
            }if(n%2 != 0){
                cout<<a[l]<<" ";
            }
            cout<<"\n";
        }
       }

}
int main(){
    fastread();
   ll t;
   cin>>t;
   for(int i=0; i<t; i++){
    solver();
   }
    return 0;
}
