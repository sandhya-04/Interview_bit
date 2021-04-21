#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
int dp[1001][1001];
int LCS(int i,int j)
{
	if(s1[i]=='\0' || s2[j]=='\0')
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	
	if(s1[i]==s2[j])
	return dp[i][j]= 1+LCS(i+1,j+1);
	
	return dp[i][j]=max(LCS(i+1,j),LCS(i,j+1));
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>s1;cin>>s2;
		
		cout<<LCS(0,0)<<endl;
	}
}
