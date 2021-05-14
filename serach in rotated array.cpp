#include<bits/stdc++.h>
using namespace std;
int searchrotated(int a[],int low,int high,int key)
{
	if(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==key)
		return mid;
		
		if(a[low]<=a[mid]) //check left half array is sorted or not
		{
			if(key>=a[low] && key<=a[mid])
			return searchrotated(a,low,mid-1,key);
			
			return searchrotated(a,mid+1,high,key);
		}
		
		if(key>=a[mid] && key<=a[high])
		return searchrotated(a,mid+1,high,key);
		
		return searchrotated(a,low,mid-1,key);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int k;
		cin>>k;
		cout<<searchrotated(a,0,n-1,k)<<endl;
	}
}
