 #include<bits/stdc++.h>
 using namespace std;
 int helper( int k,vector<int>&A,int B){
    int  res=0;
    for(int i=0;i<A.size();i++)
        res+=(A[i]/k);
    
    return (res>=B);
}

int solve(vector<int> &A, int B) {
  int sum=0;
     int ans;
     int mi=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        sum+=A[i];
        mi=min(A[i],mi);
    }
    
    if(sum<B)
    return 0;
    
    int l=1;
    int r=mi;
    
    while(l<=r){
        int mid=l+(r-l)/2;
        if(helper(mid,A,B))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    
    return ans;
    
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		int B;
		cin>>B;
		cout<<solve(a,B)<<endl;
	}
}
