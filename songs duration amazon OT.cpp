//song duration
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
		int start=0;
		int end=n-1;
		
		while(start<end){
			if(songs[start]+songs[end]==(duration-30))
			{
				cout<<"["<<start<<","<<end<<"]"<<endl;
				
			}
			
			if(songs[start]+songs[end]<(duration-30))
			start++;
			else
			end--;
			
		}
		
	}
	return 0;
}
