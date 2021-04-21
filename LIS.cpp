#include<bits/stdc++.h>
using namespace std;
int dp[1001];
int n;
int a[1001];
int find(int i)
{
	if(i==n)
	return -1;
	
	if(dp[i]!=-1)
	return dp[i];
	
	else
	{
		int ma=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>=a[i])
			return max(ma,1+find(j));
		}
		return dp[i]=ma;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<find(0)<<endl;
	}
}
