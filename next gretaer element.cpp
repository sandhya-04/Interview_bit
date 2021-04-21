//Given an array of numbers, for each number print the first number to it’s left which is greater than the current number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int n;
    stack<int>s;
    cin >> n;
    int a[n];
    int NGE[n];
    for(int i = 0;i < n;++i)
    NGE[i] = -1;
    for(int i = 0;i < n;++i)
    cin >> a[i];
    for(int i = 0;i < n;++i)
    {
        while(!s.empty() && a[i] > a[s.top()])
        {
            int p = s.top();
            s.pop();
            NGE[p] = a[i];
        }
        s.push(i);
    }
        for(int i = 0;i < n;++i)
        cout <<NGE[i] <<" ";
        
        cout<<endl;

	}
	return 0;
}
