#include <bits/stdc++.h>


using  namespace std;

void  prime(int i){
    if (i<2)  cout<<"its NOT prime="<<i<<endl;
    if (i<=3) cout<<"its prime="<<i<<endl;
    if(i%2==0)  cout<<"its NOT prime"<<i<<endl;
    for(int n=2; n*n<=i; n=n+2){
        if(i%n==0)  cout<<"its NOT prime"<<i<<endl;
    }
    cout<< "its Prime"<<i<<endl;
}



int main(){
    for (int i=0; i<8800; i++){
        prime(i);
    }
    return 0;
}
