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

void middle(Node* head){
	Node* slow=head;
	Node* fast=head;
	if(head==NULL)
	return ;
	else{
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		
		}
	}
	
	cout<<slow->data<<endl;
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
int main(){
	Node*  temp=NULL;
	
	for(int i=8;i>0;i--)
	{
		push(&temp,i);
		printList(temp);
		middle(temp);
	}
}
