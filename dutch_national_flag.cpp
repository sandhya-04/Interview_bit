#include<bits/stdc++.h>
using namespace std;  //time complexity is O(n) and sc- o(1)
void dutch_national_flag(int a[],int n){
	int l=0;
	int m=0;
	int h=n-1;
	while(m<=h){
		switch(a[m]){
			case 0:
				swap(a[l++],a[m++]);
				break;
			case 1:
				m++;
				break;
			case 2:
				swap(a[h--],a[m]);
				break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		dutch_national_flag(a,n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}
