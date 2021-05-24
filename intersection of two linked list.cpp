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

int intersection(Node* head1,Node* head2){
	unordered_map<Node*,Node*>m1;
	Node* curr1=head1;
	while(curr1!=NULL){
		m1[curr1]++;
		curr1=curr1->next;
	}
	int count=0;
	Node* curr2=head2;
	while(curr2!=NULL){
		count++;
		if(m1.find(curr2)!=m1.end())
		{
			return count;
		}
		curr2=curr2->next;
	}
	return -1;
}
int main()
{
 Node* newNode;
    Node* head1 = new Node();
    head1->data = 10;
    Node* head2 = new Node();
    head2->data = 3;
    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;
    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
    head1->next->next->next = NULL;
    Node* intersect_node = NULL;
    
    cout<<intersection(head1,head2)<<endl;
}
