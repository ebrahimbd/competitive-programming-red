# include<bits/stdc++.h>
using namespace std;

int main(){
    int coin, amount;
    cin>>coin;
    cin>>amount;
    int  a[coin][amount]={};
    for (int i=0; i<=coin; i++){
        for (int j=0; j<=amount; j++){
            a[i][j]=5;
            a[0][j]=j;
            a[i][0]=amount;
           
        }
    }
    for (int i=0; i<=coin; i++){
        for (int j=0; j<=amount; j++){
           cout<<"_"<< a[i][j]<<"|";
        }
        cout<<""<<endl;
    }
}
