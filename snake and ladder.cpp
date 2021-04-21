//--------------------snake and ladder-----------------//
#include<bits/stdc++.h>
using namespace std;
struct ludo{
    int number;
	int dice;
};
int game(int moves[],int n)
{
	queue<ludo>pq;
	bool *vis=new bool[n];
	for(int i=0;i<n;i++)
	vis[i]=false;
	
	vis[0]=true;
	ludo l={0,0};
	pq.push(l);
	ludo o;
	while(!pq.empty())
	{
		o=pq.front();
		int v=o.number;
		if(v==n-1)
		break;
	    pq.pop();
	    for(int j=v+1;j<n && j<(v+6);j++)
	    {
	    	if(!vis[j])
	    	{
	    		ludo a;
	    		a.dice=o.dice+1;
	    		vis[j]=true;
	    		
	    		
	    		if(moves[j]!=-1)
	    		{
	    			a.number=moves[j];
				}
				else
				a.number=j;
				
			    pq.push(a);
			}
	    	
		}
		
	}
	return o.dice;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int moves[n];
		for(int i=0;i<n;i++)
		moves[i]=-1;
		// Ladders
    moves[2] = 21;
    moves[4] = 7;
    moves[10] = 25;
    moves[19] = 28;
  
    // Snakes
    moves[26] = 0;
    moves[20] = 8;
    moves[16] = 3;
    moves[18] = 6;
		cout<<game(moves,n)<<endl;
	}
}
