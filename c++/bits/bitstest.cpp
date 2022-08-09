#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void  binary(int v){
    for(int i=10; i>=0; i--){
        cout<<((v>>i)&1); 
    }cout<<endl;
};

int main(){
    fastread();
    int v, t;
    v=59;

    cout<<endl;
  
    int i=4+1;
    cout<<endl;
    cout<<"1<<5       "<<endl;
   binary((1<<i));
   cout<<"          -1"<<endl;
   cout<<"----------- "<<endl;
    binary((1<<i)-1);

    cout<<"          ~"<<endl;
    cout<<"-----------"<<endl;
    binary(~((1<<i)-1));

    cout<<"          &"<<endl;
    cout<<v<<endl;
    binary(v);
    cout<<"-----------"<<endl;
    binary(v&(~((1<<i)-1)));
    
      cout<<endl;
    cout<<"1<<5       "<<endl;
   binary((1<<i));
   cout<<"          -1"<<endl;
   cout<<"----------- "<<endl;
    binary((1<<i)-1);


    cout<<"          &"<<endl;
    cout<<v<<endl;
    binary(v);
    cout<<"-----------"<<endl;
    binary(v&(((1<<i)-1)));
    



    
    return 0;
}
