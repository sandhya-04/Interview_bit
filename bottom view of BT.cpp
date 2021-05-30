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
void bottom_helper(Node* root)
{
	int hd=0;
    map<int,vector<int> > m;
    queue<pair<struct Node*,int> > q;
    q.push(make_pair(root,hd));
    while(!q.empty())
    {
       pair<struct Node*,int>p =q.front();
       q.pop();
       struct Node* temp =p.first;
       hd=p.second;
       m[hd].push_back(temp->data);
       if(temp->left)
       q.push(make_pair(temp->left,hd-1));
       if(temp->right)
       q.push(make_pair(temp->right,hd+1));
    }
    map<int,vector<int> >::iterator it;
       for(it=m.begin();it!=m.end();it++)
       {
       	for(int i=0;i<it->second.size();i++)
       {
       	if(i==it->second.size()-1)
       	cout<<it->second[i]<<" ";
	   }
       }
}



int main()
{

Node *root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(5);
    root->left->right = newNode(3);
    root->right->left = newNode(4);
    root->right->right = newNode(25);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    cout << "Following are nodes in top view of Binary ""Tree\n";
    bottom_helper(root);
    return 0;
}
