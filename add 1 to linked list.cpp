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
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
Node* reverse(Node* head){
	Node* prev=NULL;
	Node* next;
	Node* curr=head;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	
	return prev;
}

Node* add_1(Node* head){
	int carry=1;
	int sum;
	Node* temp=head;
	Node* curr;
	Node* prev=NULL;
	while(head!=NULL)
	{
		sum=carry+head->data;
		carry=(sum>=10)?1:0;
		sum=sum%10;
		
		head->data=sum;
		
		curr=head;
		head=head->next;
	}
	if(carry>0)
	curr->next=newNode(carry);
	
	return temp;
}
Node* result(Node* head){
	head=reverse(head);
	head=add_1(head);
	
	return reverse(head);
}
int main()
{
    Node *head = newNode(1);
    head->next = newNode(9);
    head->next->next = newNode(9);
    head->next->next->next = newNode(9);
 
    head = result(head);
    printList(head);
 
    return 0;
}
