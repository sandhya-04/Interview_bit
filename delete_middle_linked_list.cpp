#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* push(Node **head,int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next= *head;
	*head=temp;
	
	return temp;
}
void printList(Node *temp)
{
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* delete_middle(Node* head){
	Node* slow=head;
	Node* fast=head;
	Node* prev;
		while(slow!=NULL && fast!=NULL && fast->next!=NULL){
			fast=fast->next->next;
			prev=slow;
			slow=slow->next;
		}
	
	prev->next=slow->next;
	free(slow);
	
	return head;
}

int main(){
	Node*  temp=new Node();
	
	for(int i=8;i>0;i--)
	{
		push(&temp,i);
	}
	printList(temp);
	temp=delete_middle(temp);
	printList(temp);
}
