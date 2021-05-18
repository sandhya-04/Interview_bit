#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<string> &A, string B) {
    
    
    vector<int>v;
    int first,second;
    int n=A.size();
    for(int i=0;i<n;++i){
    if (A[i].compare(0, B.size(), B) == 0)
    {
        
        v.push_back(i);
        break;
    }
    }
    for(int i=n-1;i>=0;i--)
    {
        if (A[i].compare(0, B.size(), B) == 0){
            
            v.push_back(i);
            break;
        }
    }
    if(v.size()==0)
    {
        for(int i=0;i<2;i++)
        v.push_back(-1);
    }
    
    return v;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string>v(n);
		for(int i=0;i<n;i++)
		cin>>v[i];
		string b;
		cin>>b;
		vector<int>s=solve(v,b);
		for(int i=0;i<s.size();i++)
		cout<<s[i]<<" ";
		cout<<endl;
		
	}
}
