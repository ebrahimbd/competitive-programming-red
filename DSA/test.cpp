 
#include<iostream>
using namespace std;
 
struct Node{
	int data;
	Node *left;
	Node *right;
	};


Node * Newnode(int data){
	Node * node=new Node();
	node->data=data;
	node->left=node->right=NULL;
	return node;
	}


Node * insert(Node *passroot, int data){
	if(passroot == NULL){
		cout<<"main"<<" -";
		passroot = Newnode(data);
	}
	else if (passroot->data < data){
		passroot->left= Newnode(data);
		cout<<"left"<<" -";
	}else{
		passroot->right=Newnode(data);
		cout<<"right"<<" -";
	}
	return passroot;
	}
	
	

int main(){
	Node *root=NULL;
	 
	root=insert(root, 44);
	root=insert(root, 4);
	root=insert(root, 89);
	
	}

