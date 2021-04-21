#include<bits/stdc++.h>
using namespace std;
char match(string a,string b)
{
	unordered_map<char, int> m1;
	for(int i=0;i<a.length();i++)
	{
		m1[b[i]]++;
	}
	for(int i=0;i<a.length();i++)
	{
		m1[a[i]]--;
	}
	for(auto h=m1.begin();h!=m1.end();h++)
	{
		if(h->second==1)
		Return h->first;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		String a,b;
		cin>>a>>b;
		cout<<match(a,b)<<endl;
	}
}

