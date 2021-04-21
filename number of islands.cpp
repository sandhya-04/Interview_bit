#include<bits/stdc++.h>
using namespace std;
int dfs(vector<int>v[],int i,int j,int n,int m)
{
	if(i<0 || i>=n || j<0 || j>=m || v[i][j]==0)
	return 0;
	
	v[i][j]=0;
	dfs(v,i+1,j,n,m);
	dfs(v,i-1,j,n,m);
	dfs(v,i,j+1,n,m);
	dfs(v,i,j-1,n,m);
	dfs(v,i+1,j+1,n,m);
	dfs(v,i-1,j-1,n,m);
	dfs(v,i+1,j-1,n,m);
	dfs(v,i-1,j+1,n,m);
	return 1 ;
}
int dfsutil(vector<int> v[],int n,int m)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==1)
			count+=dfs(v,i,j,n,m);
		}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int>a[n];
		for(int i=0;i<n;i++)
		{
			vector<int>b(m);
			a[i]=b;
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				
			}
		}
		cout<<dfsutil(a,n,m)<<endl;
	}
}
