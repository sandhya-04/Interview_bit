#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int row_with_1s(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=low+(high-low)/2;
		
		if(a[mid]==1 && a[mid-1]==0)
		return mid;
		
		else if(a[mid]==0)
		return row_with_1s(a,mid+1,high);
		
		return row_with_1s(a,low,mid-1);
	}
	return -1;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		vector<vector<int>> v( n , vector<int> (m, 0));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>v[i][j];
		}
		int max_S=-1;
		int max=0;
		for(int i=0;i<n;i++)
		{
			int d=row_with_1s(v[i],0,m-1);
			if(m-d>max_S && d!=-1)
			{
				max_S=m-d;
				max=i;
			}
		}
		cout<<max<<endl;
	}
}
