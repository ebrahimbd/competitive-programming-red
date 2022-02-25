#include <iostream>
using namespace std;

int main() {
    int x, j;
    cin >> x; 
    int a[x]={};
    
     for(int i=0; i<=x; i++){
         cin>>j;
         a[i]=j;
     }
     for (int i=0; i<=a.size();i++){
        cout<<a[i]<<endl;
     }
     return 0;  
}

