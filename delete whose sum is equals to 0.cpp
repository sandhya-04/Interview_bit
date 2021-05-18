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


Node* sum_to_zero(Node* head){
	Node* temp=new Node();
	temp=head;
	stack<Node*>s;
	while(temp!=NULL){
		if(temp->data<0)
		{
			
			int sum=temp->data;
			while(!s.empty()){
			Node* p=s.top();
			
			 sum-=p->data;
			p=NULL;
			if(sum==0)
			{
				temp=s.peek();
				break;
			}
		}
		}
		else
		{
			s.push(temp);
		}
		temp=temp->next;
	}
	return head;
	
}

int main(){
	int n;
	cin>>n;
	Node*  temp=new Node();
	int data;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		push(&temp,data);
	}
	printList(temp);
	temp=sum_to_zero(temp);
	printList(temp);
}
