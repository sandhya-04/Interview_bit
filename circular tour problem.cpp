#include<bits/stdc++.h>
using namespace std;
struct tour{
	int petrol;
	int distance;
};

int tour_problem(tour a[],int n){
	int st;
	
	for(int i=0;i<n;i++)
	{
		if(a[i].petrol>a[i].distance){
			st=i;
			break;
		}
	}
	
	int curr=0;
	int i;
	for(i=st;i<n;i++)
	{
		curr+=(a[i].petrol-a[i].distance);
		
		if(curr<0){
			i++;
			for(;i<n;i++)
			{
				if(a[i].petrol>a[i].distance)
				{
					st=i;
					curr=0;
					break;
				}
			}
		}
		else
		i++;
	}
	
	if(curr<0)
	return -1;
	
	for(int j=0;j<st;j++)
	{
		curr+=(a[j].petrol-a[j].distance);
		if(curr<0)
		{
			return -1;
		}
	}
	
	return st;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		tour t[n];
		for(int i=0;i<n;i++)
		{
			cin>>t[i].petrol;
			cin>>t[i].distance;
			
		
		}
		int s=tour_problem(t,n);
		if(s!=-1)
			cout<<s<<endl;
			else
			cout<<"No tour"<<endl;
		
	}
}
