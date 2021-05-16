#include<bits/stdc++.h>
using namespace std;
int solve(string s) {
    
    int i,j,k;
    j = k = -1;
    int minDist=INT_MAX;
    int len = s.length(); 
    int dist;
    for(i=0;i<len;i++)
    {
        if(s[i]!='.' && (s[i] =='o' || s[i]=='x'))
        {
            
            if(s[i]=='x')
            j=i;
            else
            k=i;
            
            if(j>=0 && k>=0)
            {
                dist = abs(j-k);
                
                if(dist < minDist)
                    minDist = dist;
            }
        }
    }
    return (minDist < INT_MAX ? minDist : -1);
   
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string A;
        cin>>A;
        int p=solve(A);
        if(solve(A))
        cout<<p<<endl;
        else
        cout<<-1<<endl;
    }
}
