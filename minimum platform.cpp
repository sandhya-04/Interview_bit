#include<bits/stdc++.h>
using namespace std;
int arrdep(int a[],int d[],int n)
{
	int result=INT_MIN;
	int plat=1;
	int i=1;
	int j=0;
	sort(a,a+n);
	sort(d,d+n);
	while(i<n && j<n){
		if(a[i]<=d[j]){
			plat++;
			i++;
		}
		else if(a[i]>d[j])
		{
			plat--;
			j++;
		}
		if(plat>result)
		result=plat;
	}
	
	return result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],d[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=0;j<n;j++)
		cin>>d[j];
		
		cout<<arrdep(a,d,n)<<endl;
	}
}
