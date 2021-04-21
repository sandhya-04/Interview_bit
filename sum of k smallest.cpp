/*-------------------sum of kth smallest element--------*/
// time complexityn is O(k)
#include<bits/stdc++.h>
using namespace std;
struct tree{
	tree* left;
	tree* right;
	int data;
};

tree* create(int data)
{
	tree* temp=new tree();
	temp->left=NULL;
	temp->right=NULL;
	temp->data=data;
	return temp;
}

tree* insert(tree* root,int data)
{
	if(root==NULL)
	return create(data);
	
	if(root->data>data)
	root->left=insert(root->left,data);
	
	else if(root->data<data)
	root->right=insert(root->right,data);
	
	return root;
}

int ksmallestsum(tree* root,int k,int count)
{
	if(root==NULL)
	return 0;
	
	int sum=ksmallestsum(root->left,k,count);
	
	if(count>=k)
	return sum;
	
	sum+=root->data;
	
	count++;
	
	if(count>=k)
	return sum;
	
	return ksmallestsum(root->right,k,count);
	
	
}
int main()
{
	int  t;
	cin>>t;
	while(t--)
	{
		tree * root=new tree();
			
		int n;
		cin>>n;
		int key;
		for(int i=0;i<n;i++)
		{
			cin>>key;
			root=insert(root,key);
		}
		
		int k;
		cin>>k;
		cout<<ksmallestsum(root,k,0)<<endl;
	}
}
