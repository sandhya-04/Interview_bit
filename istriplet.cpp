#include<bits/stdc++.h>
using namespace std;
bool issum(int a[],int n)
{
	sort(a,a+n);
	int i=0;
	int j=1;
	int k=n-1;
	while(i<k)
	{
		if(a[i]^2+a[j]^2==a[k]^2)
		{
			return true;
		}
	    else if(a[i]^2+a[j]^2<a[k]^2)
		{
			j++;
			
			}
			else
			i++;	
	}
	return false;
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
	    
	    if(issum(a,n))
	    cout<<"TRUE"<<endl;
	    else
	    cout<<"FALSE"<<endl;
	}
}
