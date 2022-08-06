#include <iostream>
#include <array>
using namespace std;

int main() {
    int x, j;
    cin >> x; 
    array <int,100>a{};
    
     for(int i=0; i<x; i++){
         cin>>j;
         a[i]=j; 
     }
     for (int i=0; i<x-1;i++){
       if(a[i] !=  a[i+1]){
           cout<<"*********"<<endl;
           cout<<a[i+1];
           return 0;
       }
     }


     return 0;  
}

