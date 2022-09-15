#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class ebra{
    public:
        int ebra=4;
        int a[300];
   int  ab(int a, int b){
       cout<<(a+b)<<endl;
    }

};




string a="dlfkjkldj";

int main(){
ebra e;
e.ab(99, 444);
cout<<e.ebra<<endl;

for (int i=0; i<10/2; i++){
   e.a[i]=i;
}
for (int i=0; i<10; i++){
    cout<<e.a[i]<<endl;
}
cout<<e.a<<endl;

string *b=&a;
int v=99000;
string  *val=b;


cout<<val<<endl;

    return 0;
}
