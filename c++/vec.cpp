#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
vector <int>v;
string  a="sdfkldsjf";
 
string *c=&a;

cout<<*c<<endl;


for (int i=0; i<=5; i++){
    v.push_back(i);
}
 
for (int i=0; i<=2; i++){
    cout<<v.at(i)<<endl;
}

}
