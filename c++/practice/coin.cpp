# include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1, 5, 7, 9};

    int x ,y;
    int coin = 4;
    int amount = 12;
    int  a[coin][amount];


    for (int i=0; i<=coin; i++){
        for (int j=0; j<=amount; j++){
            a[0][j]=j;

             if (arr[i]>j){
                 a[i][j]=a[i-1][j];
             }
             else{
                 a[i][j]=min(a[i-1][j], 1+a[i][j-arr[i]]);
             }
        }
    }

    for (int i=0; i<=coin; i++){
        for (int j=0; j<=amount; j++){
           cout<<"_"<< a[i][j]<<"|";
        }
        cout<<""<<endl;
    }
    return 0;
}
