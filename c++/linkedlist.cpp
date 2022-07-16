#include <bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *link;
};

struct Node * head;

void insert(int value){
    Node *temp=new Node();
    temp->key=value;
    temp->link=head;
    head=temp;
}

void print(){
    Node * temp =head;
    cout<<"ggggg";
    while(temp!=NULL){
        cout<<"->";
        cout<<temp->key;
        temp=temp->link;
    }
}

Node * call(Node *node, int data){
cout<<"==-------------==";
    node->key=data;
    node->link=node;
    return node;
}

void my(){
    Node * tree=new Node();

    while(tree!=NULL){
        cout<<tree->key;
        tree=tree->link;
    }
}

int main(){
    Node *ami=new Node();
    ami=call(ami, 44);
    ami=call(ami, 77);
    ami=call(ami, 99);
    my();
}
