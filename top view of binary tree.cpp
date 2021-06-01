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
void top_helper(Node* root)
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
           cout<<it->second[0]<<" ";
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
    cout << "Following are nodes in top view of Binary ""Tree\n";
    top_helper(root);
    return 0;
}
