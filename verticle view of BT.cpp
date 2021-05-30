//top view of binary tree
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
void verticle_helper(Node* root,int hd,map<int,vector<int> > &m1)
{
	if(root==NULL)
	return;
	
	m1[hd].push_back(root->data);
	verticle_helper(root->left,hd-1,m1);
	verticle_helper(root->right,hd+1,m1);
}

void verticle_view(Node* root){
	map<int,vector<int> >m1;
	vector<int>v;
	int hd=0;
	verticle_helper(root,hd,m1);
	map<int,vector<int> >:: iterator it;
	for(it=m1.begin();it!=m1.end();it++){
		for(int i=0;i<it->second.size();i++)
		cout<<it->second[i]<<" ";
		
		cout<<endl;
	}
	
	}

int main()
{

Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);
    cout << "Following are nodes in verticle view of Binary ""Tree\n";
    verticle_view(root);
    return 0;
}
