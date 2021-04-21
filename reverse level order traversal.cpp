//***********reverse level order traversal*********//
#include<bits/stdc++.h>
using namespace std;
struct tree{
	tree* left;
	tree* right;
	int data;
};
tree* createnode(int data)
{
	tree * root=new tree();
	root->left=NULL;
	root->right=NULL;
	root->data=data;
	return root;
}

vector<int> reverse_level(tree* root)
{
	queue<tree*>q;
	q.push(root);
	stack<int>s;
	while(!q.empty())
	{
		tree* temp=q.front();
		s.push(temp->data);
		q.pop();
		
		if(temp->right)
		q.push(temp->right);
		
		if(temp->left)
		q.push(temp->left);
	}
	vector<int>v;
	while(!s.empty())
	{
		int l=s.top();
		v.push_back(l);
		s.pop();
	}
	return v;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int key;
		tree *root=new tree();
		for(int i=0;i<n;i++)
		{
			cin>>key;
			root=createnode(key);
		}
		
		vector<int>v=reverse_level(root);
		for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
		
		cout<<endl;
	}
}
