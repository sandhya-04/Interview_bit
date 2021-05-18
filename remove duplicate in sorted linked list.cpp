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
void remove(Node* head){
	if(head==NULL)
	return;
	
	Node* temp=new Node();
	temp=head;
	
	while(temp->next!=NULL)
	{
		if(temp->data==temp->next->data)
		{
			Node* curr=temp->next->next;
			free(temp->next);
			temp->next=curr;
		}
		else
		temp=temp->next;
	}
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
		
		remove(head);
		printList(head);
	}
}
