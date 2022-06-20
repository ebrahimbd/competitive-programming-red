#include<iostream>

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node * Newnode(int data){
    Node *root=new Node();
    root->data=data;
    root->left=root->right=NULL;
    return root;
}

Node * insert(Node *root, int data){
	   
    if(root==NULL){
		std::cout<<data;
        std::cout<<"-main \n";
       root= Newnode(data);
    }else if(data > root->data){
		std::cout<<data;
        std::cout<<"-right \n";
        root=root->right=Newnode(data);
    }else{
		std::cout<<data;
        std::cout<<"-left\n";
      root=root->left=Newnode(data);
    }
    return root;
}


Node *postorder(Node * root, int data){
	
		return 0;
	
	};


int main(){
    Node *ami=NULL;
    ami=insert(ami, 5);
    ami=insert(ami, 400);
    ami=insert(ami, 100);
}
