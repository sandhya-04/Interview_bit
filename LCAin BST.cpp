#include<bits/stdc++.h>  // time complexity is O(n) // SC-O(1)
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* tree(int data){
	Node* temp=new Node();
	temp->data=data;
	temp->left=temp->right=NULL;
	
	return temp;
}
Node* LCA_BST(Node* root,int a,int b){
	if(root==NULL)
	return NULL;
	
	if(root->data>a && root->data>b)
	return LCA_BST(root->left,a,b);
	
	if(root->data<a && root->data<b)
	return LCA_BST(root->right,a,b);
	
	return root;
}
int main()
{
	struct Node* root=tree(20);

	root->left=tree(8);
	root->right=tree(22);
	root->left->left=tree(4);
	root->left->right=tree(12);
	root->left->right->left=tree(10);
	root->left->right->right=tree(14);
	
	
	
	
	int t;
	cin>>t;
	while(t--){
	int a,b;
	cin>>a>>b;
	
	Node* t=LCA_BST(root,a,b);
	
	 cout<<t->data<<endl;
 }


}
