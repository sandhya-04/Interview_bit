#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
		
		priority_queue<int, vector<int>, greater<int> > p;
		for(int i=0;i<n;i++)
		p.push(a[i]);
		int sum=0,sum2=0;
		while(p.size()>1)
		{
			int s1=p.top();
			p.pop();
			int s2=p.top();
			p.pop();
			sum+=s1+s2;
			
			p.push(s1+s2);
			
		}
		cout<<sum<<endl;
	}
}
