#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    string  X, Y;
    cin>>X>>Y;
    int x=X.length(), y=Y.length();

    vector<string>s1(x);
    vector<string>s2(y);
    for(int i=0; i<x; i++) s1[i]=X[i];
    for(int j=0; j<y; j++) s2[j]=Y[j];
    vector<vector <int>> dp(x+1, vector<int>(y+1, 0));

   for(int i=0; i<=x; i++){
        for(int j=0; j<=y; j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    for(int i=0; i<=x; i++){
        for(int j=0; j<=y; j++){
            cout<<dp[i][j]<<" ";
        }cout<<endl;
    }

    vector<string> print;

   while(x>0 && y>0){
        if(s1[x-1]==s2[y-1]) {
            print.push_back(s1[x-1]);
        x--;
        y--;
        }
        else if(dp[x-1][y]>dp[x][y-1]) {
        //    print.push_back(s2[y-1]);
            x--;
        }else{
          //  print.push_back(s1[x-1]);
            y--;
        }
    }
    
    reverse (print.begin(), print.end());
   
    string ans="";
    string lcs="";
    int i=X.length(), j=Y.length();

    for (auto i: print) lcs+=i;
    cout<<"\nLCS of "<<X<<" and "<<Y<<" is "<< lcs<<endl;

   while(i>=0 && j>=0){
       if(s1[i-1]==s2[j-1]){
           ans+=s1[i-1];
           i--;
           j--;
       }else if(dp[i-1][j]>dp[i][j-1]){
           ans+=s1[i-1];
           i--;
       }else{
           ans+=s2[j-1];
           j--;
       } 
   }
/*   cout<<j<<endl;
   while(i>0){
       ans+=s1[i-1];
       i--;
   }
   while(j>0){
       cout<<j-1<<"-";
       ans+=s2[j-1];
       j--;
   }

   */
    reverse (ans.begin(), ans.end());
   cout<<"Shortest common supersequence "<<" is "<<ans<<" len is "<< ans.length()<<endl;

    return 0;
}
