#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    int l, p;
    cin>>l>>p;
    vector<int>len(l);
    vector<int>price={ 1, 5, 8, 9, 10, 17, 17, 20 };

    vector<vector<int>>tab(l+1, vector<int>(p+1));

    for(int i=0; i<=l; i++){
        for(int j=0; j<=l; j++){
            if(j==0) continue;
            else if(i==0){
                tab[i][j]=price[i]+tab[i][j-i-1];
            }else if(j-i-1 < 0){
            tab[i][j]=tab[i-1][j];
            }else{
                tab[i][j]=max(tab[i-1][j], price[i]+tab[i][j-i-1]);
            }
        }
    }
    cout<<tab[l][l]<<endl;

    for(int i=0; i<=l; i++){
        for(int j=0; j<=l; j++){
            cout<<tab[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}
