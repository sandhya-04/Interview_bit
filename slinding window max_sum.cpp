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
		if(k>n)
		{
		cout<<"INVALID"<<endl;
	    }
		
		int m_s=0;
		for(int i=0;i<k;i++)
		m_s+=a[i];
		int w_s=m_s;
		for(int i=k;i<n;i++)
		{
			w_s+=a[i]-a[i-k];
			
			m_s=max(m_s,w_s);
		}
		cout<<m_s<<endl;
	}
}
