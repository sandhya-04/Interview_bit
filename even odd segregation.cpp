#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};

Node* addnode(Node** head,int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next=*head;
	*head=temp;
	
	return temp;
}

void EvenOdd(Node** head){
	if(*head==NULL)
	return;
	Node* evens=NULL;
	Node* evene=NULL;
	Node* odds=NULL;
	Node* odde=NULL;
	
	Node* curr=*head;
	while(curr!=NULL){
		int v=curr->data;
		if(v%2==0){
			if(evens==NULL){
				evens=curr;
				evene=evens;
			}
			else{
				evene->next=curr;
				evene=evene->next;
			}
		}
		else{
			if(odds==NULL){
				odds=curr;
				odde=odds;
			}
			else{
				odde->next=curr;
				odde=odde->next;
			}
		}
		curr=curr->next;
	}
	if(odds == NULL || evens == NULL){
        return ;
    }
    
    evene->next=odds;
    odde->next=NULL;
    
    *head=evens;
    
    
}
void printList(struct Node *node)
{
    while (node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main()
{
    
    struct Node* head = NULL;
 
 
    addnode(&head, 11);
    addnode(&head, 10);
    addnode(&head, 9);
    addnode(&head, 6);
    addnode(&head, 4);
    addnode(&head, 1);
    addnode(&head, 0);
 
    printf("\nOriginal Linked list \n");
    printList(head);
 
    EvenOdd(&head);
 
    printf("\nModified Linked list \n");
    printList(head);
 
    return 0;
}
