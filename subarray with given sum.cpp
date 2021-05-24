#include<bits/stdc++.h>
using namespace std;    // TC-O(n) SC-O(1)
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum;
		cin>>sum;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int sum_s=a[0];
		int j=0;
		int i;
		for(i=1;i<=n;i++)
		{
			while(sum_s>sum && j<i-1)
			{
				sum_s-=a[j];
				j++;
						}
			if(sum_s==sum)
			{
				cout<<"("<<j<<","<<i-1<<")"<<endl;
						}
			if(i<n)			
			sum_s+=a[i];
		}
		
	}
}
