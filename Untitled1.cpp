#include<bits/stdc++.h>
using namespace std;
bool istriplet(int a[],int n){
    for(int i=0;i<n;i++)
    a[i]=a[i]*a[i];
    
    for(int i=n-1;i>=2;i--){
        int l=0;
        int r=i-1;
        
        while(l<=r){
            if(a[l]+a[r]==a[i])
            return true;
            
            else if(a[l]+a[r]<a[i])
            l++;
            
            else
            r--;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(istriplet(a,n))
        cout<<"yes,there is triplet"<<endl;
        else
        cout<<"No triplet"<<endl;
    }
}
