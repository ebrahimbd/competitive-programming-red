#include <iostream>
#include <stack>
using namespace std;
int main() {
 
    stack<int>s;
    for (int i=0; i<=100; i++){
        s.push(i);
    }
cout<<s.top();
s.pop();
}

