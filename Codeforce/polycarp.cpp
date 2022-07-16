#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int ans=1;
        string  s;
        set <string>set;
        cin>>s;

        for(int i=0; i<s.length(); i++){
            string d;
            d=s[i];
            set.insert(d);
            if(set.size()==4){
                set.clear();
                ans=ans+1;
                set.insert(d);
            }
        }
cout<<ans<<endl;

    }
}
