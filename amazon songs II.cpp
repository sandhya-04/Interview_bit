#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>songs(n);
		int duration;
		cin>>duration;
		for(int i=0;i<n;i++)
		cin>>songs[i];
		sort(songs.begin(),songs.end());
		unordered_map<int,int>m1;
		for(int i=0;i<n;i++)
		{
			
			if(m1.find(60-songs[i])!=m1.end())
			{
			     cout<<"["<<m1[60 - songs[i]]<<","<<m1[s]<<"]"<<endl;	
			}
		}
	}
}
