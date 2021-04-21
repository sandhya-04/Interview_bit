#include<bits/stdc++.h>
using namespace std;
string countAnsSay(int n)
{
	
	if(n==1)
	 return "1";
	if(n==2)
	 return "11";
	string f="11";

	for(int i=3;i<=n;i++)
	{
		f+='$';
		int g=f.length();
		int count=1;
			string p="";
		for(int j=1;j<g;j++)
		{
			if(f[j]!=f[j-1])
			{
			p+=count+'0';
			p+=f[j-1];
			count=1;
		    }
		    
		    else
		    count++;
			
			
		}
		f=p;
	}
	return f;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<countAnsSay(n)<<endl;
		
	}
}
