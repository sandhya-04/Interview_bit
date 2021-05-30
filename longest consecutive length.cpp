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
void Longest_consecutive(Node* root,int curr,int d,int &res){
	if(root==NULL)
	return ;
	
	if(root->data==d)
	curr++;
	
	else
	curr=1;
	
	res=max(res,curr);
	
	Longest_consecutive(root->left,curr,root->data+1,res);
	Longest_consecutive(root->right,curr,root->data+1,res);
	
}
//Time complexity is O(n)
int ans(Node* root){
	if(root==NULL) return 0;
	
	int res=0;
	Longest_consecutive(root,0,root->data,res);
	
	return res;
	
}
int main()
{
	Node* root = newnode(6);
    root->right = newnode(9);
    root->right->left = newnode(7);
    root->right->right = newnode(10);
    root->right->right->right = newnode(11);
  
    cout<<"longest Consecutive path = "<< ans(root)<<endl;
    return 0;
}

