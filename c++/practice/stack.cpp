#include<bits/stdc++.h>


using namespace std;
int main() {
    queue<string>q;

    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(88);
    q.push("sdlkfjdls");
    q.push("dfdfdfd");
    q.push("iiiiisdlkfjdls");
    q.push("jjjfjdls");
    q.push("kkkkfjdls");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

