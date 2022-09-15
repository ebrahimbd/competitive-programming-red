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

void printf(){
    Node * temp =head;
    cout<<"ggggg";
    while(temp!=NULL){
        cout<<"->";
        cout<<temp->key;
        temp=temp->link;
    }
}

Node *addnode(Node *node, int data){
    if(node==NULL){
        Node *newnode=new Node();
        newnode->key=data;
        newnode->link=NULL;
        return newnode;
    }else{
        node->link=addnode(node->link, data);
    }
    return node;
}

void print(Node *node){
    if(node==NULL){
        cout<<"NULL";
        return;
    }
    cout<<node->key<<"->";
    print(node->link);
}

int main(){
    Node *ami=NULL;
    ami=addnode(ami, 33);
    ami=addnode(ami, 3333);
    for(int i=99; i<=555; i++){
        ami=addnode(ami, i);
    }

    print(ami); 
}
