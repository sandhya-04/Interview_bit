#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node*right;
};

node* addnode(int data){
	node* root=new node();
	root->data=data;
	root->left=NULL;
		root->right=NULL;
		
		return root;
}

void BTODLL(node* root,node*& head){
	if(root==NULL)
	return ;
	BTODLL(root->right,head);
	root->right=head;
	
	if(head!=NULL)
	head->left=root;
	
	head=root;
	
	BTODLL(root->left,head);
}

void print(node *head){
	cout<<"Conversion of binary tree to doubly linked list"<<endl;
	while(head){
		cout<<head->data<<" ";
		head=head->right;
	}
}
int main()
{
	node* root=new node();
	root->left = addnode(3);
    root->right = addnode(6);
    root->left->left = addnode(1);
    root->left->right = addnode(4);
    root->right->right = addnode(8);
    root->left->left->left = addnode(0);
    root->left->left->right = addnode(2);
    root->right->right->left = addnode(7);
    root->right->right->right = addnode(9);
 
    node* head = NULL;
    BTODLL(root, head);
 
    print(head);
}
