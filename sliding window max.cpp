#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		if(k==1)
		{
			for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		}
		
		int i=0;
		int j=k-1;
		int d=i;
		int max=a[j];
		
		while(j<=n-1)
		{
		    if(max<a[i])
			max=a[i];
			
			i++;
			
			if(i==j && i!=n)
			{
				cout<<max<<" ";
				j++;
				i=d++;
				
				if(j<n)
				max=a[j];
				
			}	
		}
		cout<<endl;
		
	}
}
