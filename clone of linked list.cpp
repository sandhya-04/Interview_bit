#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	
	Node* next,*random;
	Node(int data) //parametarised constructor
	{
		this->data=data;
		this->next=NULL;
		this->random=NULL;
	}
	
	
};
class Node1{
	public:
		Node* head;
	Node1(Node* head){
		this->head=head;
	}
	
	void push(int data){
		Node* temp=new Node(data);
		temp->data=data;
		temp->next=head;
		head=temp;
	}
	void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *random = temp->random;
            int randomData = (random != NULL)?
                         random->data: -1;
            cout << "Data = " << temp->data 
                 << ", ";
            cout << "Random Data = " << 
                 randomData << endl;
            temp = temp->next;
        }
        cout << endl;
    }
  Node1* clone()
    {
        Node *origCurr = head;
        Node *clone = NULL;
        unordered_map<Node*, Node*> mymap;
        while (origCurr != NULL)
        {
            cloneCurr = new Node(origCurr->data);
            mymap[origCurr] = cloneCurr;
            origCurr = origCurr->next;
        }
        origCurr = head;
        while (origCurr != NULL)
        {
            cloneCurr = mymap[origCurr];
            cloneCurr->next = mymap[origCurr->next];
            cloneCurr->random = mymap[origCurr->random];
            origCurr = origCurr->next;
        }
        return new LinkedList(mymap[head]);
    }
	
	
};
int main()
{
    Node1 *mylist = new LinkedList(new Node(5));
    mylist->push(4);
    mylist->push(3);
    mylist->push(2);
    mylist->push(1);
    mylist->head->random = mylist->head->next->next;
  
    mylist->head->next->random =mylist->head->next->next->next;
  
    mylist->head->next->next->random =mylist->head->next->next->next->next;
  
    mylist->head->next->next->next->random = mylist->head->next->next->next->next->next;
  
    mylist->head->next->next->next->next->random =mylist->head->next;
  
    Node1 *clone = mylist->clone();
  
    cout << "Original linked list\n";
    mylist->print();
    cout << "\nCloned linked list\n";
    clone->print();
}
