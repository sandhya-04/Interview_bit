#include<bits/stdc++.h>
using namespace std;
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void greaters(char num[],int n){
    int i,j;
    for(int i=n-1;i>0;i--){
        if(num[i]>num[i-1])
        break;
    }
    
    if(i==0)
    cout<<"No number is possible"<<endl;
    
    int p=num[i-1];
    int small=i;
    for(int j=i+1;j<n;j++)
    {
        if(num[j]>p && num[j]<num[small])
        small=j;
    }
    
    swap(&num[small],&num[i-1]);
    
    sort(num+i,num+n);
    cout<<"next greater element"<<"="<<num;
    return;
}
int main(){
    
        char digit[]="534976";
        int n=strlen(digit);
        greaters(digit,n);
    
}
