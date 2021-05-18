#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};

void push(Node* head,int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next=head;
	head=temp;
}
void printList(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
bool ispalin(Node* head){
	if(head==NULL)
	return true;
	
	Node* temp=head;
	stack<int>s;
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}
	
	
	while(head!=NULL){
	        int d=s.top();
			s.pop();
			if(d==head->data)
			return true;
			
			head=head->next;
	}
	
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int data;
		Node* head=new Node();
		for(int i=1;i<=n;i++)
		{
			cin>>data;
			push(head,data);
		}
		
		if(ispalin(head))
		cout<<"yes,plaindrome"<<endl;
		else
		cout<<"no,palindrome"<<endl;
		printList(head);
	}
}
