#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		unordered_map<int,vector<int>>m1;
		vector<pair<int,int>>v;
		int sum=0;
		
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(sum==0)
			v.push_back(make_pair(0,i));
			if(m1.find(sum)!=m1.end())
			{
				vector<int>v1=m[sum];
				for(auto it=v1.begin();it!=v1.end();it++)
				{
					v.push_back(make_pair(*it+1,i));
				}
			}
			m[sum].push_back(i);
		}
		
		for(auto it=v.begin();it!=v.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
