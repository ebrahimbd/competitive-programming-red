#include<bits/stdc++.h>
#include <vector>

int main(){
 int n, s, let=0,  ans=0; 
std:: vector <int > v;

 std::cin>>n;

 while (n--){
int su=0;
     for (int i=0; i<3; i++){
        std::cin>>s;
        su=su+s;
        if(su>=2){
            ans++;
        }
 }}
std::cout<<ans;
}
