//convert BST to max_heap
//time complexity is O(n)
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* getNode(int data){
	Node* temp=new Node();
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void inorder(Node* root,vector<int>&v){   ///inorder traversal of tree(sorted order)
	if(root==NULL)
	return ;
	
	
	inorder(root->left,v);
	v.push_back(root->data);
	inorder(root->right,v);
	
	
}

void HEAP_POST(Node* root,int *i,vector<int>v)  // post order traversal of indices
{
	if(root==NULL)
	return ;
	
	HEAP_POST(root->left,i,v);
	HEAP_POST(root->right,i,v);
	
	root->data=v[++*i];g
}
void BST_TO_MAX_HEAP(Node* root){   //superimpose of inorder data with post order indices
	if(root==NULL) 
	return ;
	int i=-1;
	vector<int>v;
	inorder(root,v);
	
	HEAP_POST(root,&i,v);
}
void postorder(Node* root)   //post order traversal
{
   if(root==NULL)
   return ;
   
   postorder(root->left);
   postorder(root->right);
   
   cout<<root->data<<" ";
}
int main()
{
    Node* root = getNode(4);
    root->left = getNode(2);
    root->right = getNode(6);
    root->left->left = getNode(1);
    root->left->right = getNode(3);
    root->right->left = getNode(5);
    root->right->right = getNode(7);
  
    BST_TO_MAX_HEAP(root);
    cout << "Postorder Traversal of Tree:" << endl;
    postorder(root);
  
    return 0;
}
