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
int height(Node* root,int &ans){
	if(root==NULL)
	return 0;
	
	int l=height(root->left,ans);
	int r=height(root->right,ans);
	
	ans=max(ans,l+r+1);
	
	return 1+max(l,r);
}
int diameter(Node* root){
	if(root==NULL)
	return 0;
	
	int ans=INT_MIN;
	height(root,ans);
	return ans;
}
int main()
{
    Node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
 
    cout << "Diameter of the given binary tree is " << diameter(root);
 
    return 0;
}
