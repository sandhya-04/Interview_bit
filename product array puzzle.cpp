//product array puzzle
//time complexity is O(n) SC-O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int prod=1;
		for(int i=0;i<n;i++)
		prod*=a[i];
		
		for(int i=0;i<n;i++)
		{
			cout<<(prod*(pow(a[i],-1)))<<" ";
		}
		cout<<endl;
	}
}
