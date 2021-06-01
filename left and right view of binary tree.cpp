//left and right view of binary tree
//time complexity is O(n)
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* newnode(int data){
	Node* temp=new Node();
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}

void left_view(Node* root){
	queue<Node*>q;
	if(root==NULL)
	return ;
	
	q.push(root);
	while(!q.empty()){
		int n=q.size();
		
		for(int i=1;i<=n;i++)
		{
			Node* temp=q.front();
			q.pop();
			
			if(i==1)
			cout<<temp->data<<" ";
			
			if(temp->left)
			q.push(temp->left);
			
			if(temp->right)
			q.push(temp->right);
		}
	}
}
void right_view(Node* root){
	queue<Node*>q;
	if(root==NULL)
	return ;
	
	q.push(root);
	while(!q.empty()){
		int n=q.size();
		
		for(int i=1;i<=n;i++)
		{
			Node* temp=q.front();
			q.pop();
			
			if(i==n)
			cout<<temp->data<<" ";
			
			if(temp->left)
			q.push(temp->left);
			
			if(temp->right)
			q.push(temp->right);
		}
	}
}
int main()
{
	Node* root = newnode(10);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(7);
    root->left->right = newnode(8);
    root->right->right = newnode(15);
    root->right->left = newnode(12);
    root->right->right->left = newnode(14);
    cout<<"left view"<<endl;
    left_view(root);
    
    cout<<"right view"<<endl;
    right_view(root);
}
