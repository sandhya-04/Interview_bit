#include<bits/stdc++.h>
using namespace std;
#define max 100
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		char r[max];
		
		int i=0;
	while(n>0){
		int rem=n%26;
		if(rem==0){
			r[i++]='Z';
			n=(n/26)-1;
		}
		else
		{
			r[i++]=(rem-1)+'A';
			n=(n/26);
		}
	}
	r[i]='\0';
	
	reverse(r,r+strlen(r));
	
	cout<<r<<"\n";
	}
}
