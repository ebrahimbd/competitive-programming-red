// https://mnt/Importent file/full stack development/algoridhm/c++/two number sum.cpp /www.delftstack.com/howto/cpp/sort-function-in-cpp-stl/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
int want=10;
vector<int> v{3, 5, -4, 8 ,11, 1,-1,6 };
sort(v.begin(),v.end());

 int first=0;
 int secound=v.size();
 int itt=0;
 while(itt<=secound) {
    if ((v.at(first)+v.at(secound-1))==want){
    cout<<v.at(secound-1)<<v.at(first)<<endl;
    return 0;
    }else if ((v.at(first)+v.at(secound-1))< want)
    {
        first+=1;
    }
    else{
        secound-=1;
    }
 
     itt+=1;
 } 

}
