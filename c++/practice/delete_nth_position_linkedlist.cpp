#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


struct Node{
    int data;
    Node *next;
};

struct Node *head;

void insert(int data){
   Node *newnode=new Node();
   newnode->data=data;
   newnode->next=head;
   head=newnode;
};

void print(){
     Node *node=head;
    while(node!=NULL){
        cout<<node->data<<"->";
        node=node->next;
    }
    cout<<endl;
};

void delete_node(int n){
    struct Node * temp1=head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    for (int i=0; i<n-2; i++){
        temp1=temp1->next;
    }
    struct Node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
};

void node_insert_n_position(int n, int data){

    if(n==1){
        temp->data=data;
        for (int i=0; i<n-2; i++){
        temp->next=head;
        head=temp;
        Node *temp=head;
        return;
    }

        temp=temp->next;
    }
    newnode->data=data;
    newnode->next=temp->next;
    temp->next=newnode;
    Node *newnode=new Node();
}


int main(){
     head=NULL;
    for(int i=0; i<10; i++){
        insert(i);
    }
    print();
   delete_node(4);
   print();
   node_insert_n_position(4, 444);
   print();
   return 0;
}
