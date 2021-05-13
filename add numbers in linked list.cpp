#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* newNode(int data){
	Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void pushnode(Node** head,int data)
{
	Node* temp=new Node();
	temp->data=data;
	temp->next= *head;
	*head=temp;
}

Node* addnumbers(Node* l1,Node* l2){
	int carry=0;
	int sum;
	Node* prev=NULL;
	Node* temp=NULL;
	Node* res=NULL;
	while(l1 || l2){
		sum=carry+(l1?l1->data:0) + (l2?l2->data:0);
		
		carry=(sum>=10)?1:0;
		sum=sum%10;
		
		temp=newNode(sum);
		
		if(res == NULL)
		res=temp;
		else
		prev->next=temp;
		
		prev=temp;
		
		if(l1)
		l1=l1->next;
		if(l2)
		l2=l2->next;
		
	}
	if(carry>0)
	temp->next=newNode(carry);
	return res;
}
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main(void)
{
    Node* res = NULL;
    Node* first = NULL;
    Node* second = NULL;
    pushnode(&first, 6);
    pushnode(&first, 4);
    pushnode(&first, 9);
    pushnode(&first, 5);
    pushnode(&first, 7);
    printf("First List is ");
    printList(first);
 
    
    pushnode(&second, 4);
    pushnode(&second, 8);
    cout << "Second List is ";
    printList(second);
 
    
    res = addnumbers(first, second);
    cout << "Resultant list is ";
    printList(res);
 
    return 0;
}
 
// This code is c
