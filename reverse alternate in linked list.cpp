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
void reverse_alternate(Node* head1,Node* head2){
	if(head==NULL)
	return;
	
	Node* temp=head1;
	Node* curr=head2;
	Node* temp1;
	Node* curr_1;
	while(temp!=NULL && curr!=NULL){
		temp1=temp->next;
		curr1=curr->next;
		
		curr1->next=temp1;
		temp1->next=curr1;
		
		temp=temp1;
		curr=curr1;
	}
	head2=curr;
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
