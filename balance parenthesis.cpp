#include<bits/stdc++.h>
using namespace std;
bool balance(string a){
	stack<char>s;
	char p;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='{' || a[i]=='[' || a[i]=='(')
		{
			s.push(a[i]);
			continue;
		}
		
		if(s.empty())
		return false;
		
		switch(a[i]){
			case '}':
				p=s.top();
				s.pop();
				if(p==')' || p==']')
				return false;
				
				break;
			case ']':
				p=s.top();
				s.pop();
				if(p==')' || p=='}')
				return false;
				break;
				
			case ')':
				
				p=s.top();
				s.pop();
				if(p==']' || p=='}')
				return false;
				break;
				
		}
		
		
	}
return (s.empty());
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		if(balance(s))
		cout<<"paranthesis is balanced"<<endl;
		
		else
		cout<<"not balanced"<<endl;
	}
}
