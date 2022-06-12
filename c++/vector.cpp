#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int>eb;
string a="lfdjkldfjdlf";

string *b=&a;

string *bb=b;

cout<<*bb;
    for(int i=0;i<100; i++){
        eb.push_back(i);
    }
    for (int i=0; i<5; i++){
        cout<<eb.at(i)<<endl;
    }
    cout<<eb.at(3)<<endl;
}
