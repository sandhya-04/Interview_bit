#include<bits/stdc++.h>
using namespace std;
vector<int> LPS(string a)
{
	int n=a.length();
	vector<int>lps(n);
	
	int i=1;
	int j=0;
	lps[0]=0;
	while(i<n)
	{
		if(a[i]==a[j])
		{
			j++;
			lps[i]=j;
			i++;
			
		}
		else{
			if(j!=0){
			j=lps[j-1];
		     }
			
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
	return lps;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		vector<int>d=LPS(n);
		for(int i=0;i<d.size();i++)
		cout<<d[i]<<" ";
		
		cout<<endl;
	}
}
