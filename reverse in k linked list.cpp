#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};

void pushnode(node** l,int data){
	node* temp=new node();
	
	temp->data=data;
	temp->next=*l;
	
	*l=temp;
}

node* reverseLlist(node* l,int k){
	int count=0;
	node* curr=l;
	node* next=NULL;
		node* prev=NULL;
		if(l==NULL)
		return NULL;
		while(curr!=NULL && count<k){
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
			count++;
		}
		if(next!=NULL)
		l->next=reverseLlist(next,k);
		
		return prev;
}
void printList(node* node1)
{
    while (node1 != NULL) {
        cout << node1->data << " ";
        node1 = node1->next;
    }
}

int main()
{
    
    node* head = NULL;
    pushnode(&head, 9);
    pushnode(&head, 8);
    pushnode(&head, 7);
    pushnode(&head, 6);
    pushnode(&head, 5);
    pushnode(&head, 4);
    pushnode(&head, 3);
    pushnode(&head, 2);
    pushnode(&head, 1);
 
    cout << "Given linked list \n";
    printList(head);
    head = reverseLlist(head, 3);
 
    cout << "\nReversed Linked list \n";
    printList(head);
 
    return (0);
}
