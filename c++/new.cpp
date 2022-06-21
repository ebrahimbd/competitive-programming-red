#include<iostream>
#include <vector>

std::vector <int> v;	

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node * Newnode(int data){
    Node *root = new Node();
    root->data = data;
    root->left = root->right=NULL;
    return root;
}

Node * insert(Node *root, int data){
	   
    if(root==NULL){
		//std::cout<<data;
        //std::cout<<"-main \n";
       root= Newnode(data);
    }else if(data==root->data){
		return root;
		}else if(data >root->data){
		//std::cout<<data;
        //std::cout<<"-right \n";
        root->right=insert(root->right, data);
    }else{
		//std::cout<<data;
        //std::cout<<"-left\n";
        root->left=insert(root->left, data);
    }
    return root;
};


bool search(Node * root, int data){
	   if(root==NULL){
		   std::cout<<"There is no node \n";
		    return false;
	   }
	   else if(root->data == data){
		   //std::cout<<data;
		   return true;
	   }else if(data >root->data){
		  return search(root->right, data);
	   }else{
		  return search(root->left, data);
	   }
	};
 

void postorder(Node * root){
	  if (root==NULL){
		  return ;
	  }
	  postorder(root->left);
	  v.push_back(root->data);
	  postorder(root->right);
	  
	};


int main(){
    Node *ami=NULL;
    ami=insert(ami, 5);
    ami=insert(ami, 400);
    ami=insert(ami, 100);
    ami=insert(ami, 100);
    ami=insert(ami, 600);

    postorder(ami);
    
    for(int i: v){
		std::cout<<i<<"\n";
	}
   
    if(search(ami, 400) == true) {
		std::cout<<"Found\n";
		}
	else{
		 std::cout<<"Not Found\n";
		 }
}
