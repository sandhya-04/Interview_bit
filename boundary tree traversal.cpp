//boundary tree traversal clock-wise directiom
//tc-O(n)
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* newNode(int data){
	Node* temp=new Node();
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void leaves(Node* root){
	if(root==NULL) return ;
	leaves(root->left);
	if(root->left==NULL && root->right==NULL)
	cout<<root->data<<" ";
	
	leaves(root->right);
	
}
void left_leaves(Node* root){
	if(root==NULL)
	return ;
	
	if(root->left){
		
	
		cout<<root->data<<" ";
		left_leaves(root->left);
	}
	else if(root->right)
	{
		
		cout<<root->data<<" ";
		left_leaves(root->right);
	}
}
void right_leaves(Node* root){
	if(root==NULL)
	return ;
    if(root->right)
	{
		right_leaves(root->right);
		cout<<root->data<<" ";
		
	}
    else	if(root->left){
    	right_leaves(root->left);
		cout<<root->data<<" ";
		
	}
	
}

void boundary_clock(Node* root){
	if(root==NULL) return ;
	cout<<root->data<<" ";
	right_leaves(root->right);
	
	leaves(root->right);
	leaves(root->left);
	
	left_leaves(root->left);
	
}

void boundary_anti_clock(Node* root){
	if(root==NULL) return ;
	cout<<root->data<<" ";
	left_leaves(root->right);
	
	
	leaves(root->left);
	leaves(root->right);
	right_leaves(root->left);
	
}
int main()
{
	Node* root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);
  
    cout<<"boundary traversal by clockwise"<<endl;
    boundary_clock(root);
    
    cout<<"boundary traversal by anti-clockwise"<<endl;
    boundary_anti_clock(root);
  
    return 0;
}
