#include<iostream>

using namespace std;

typedef struct Node
{
	int data;
	struct Node *next;
}NODE , *PNODE;


class SinglyLinkedList
{
	public:
	PNODE Head;
	
	SinglyLinkedList()
	{
		Head = NULL;
	}
	
	void InsertFirst(int no)
	{
		PNODE newn = new NODE;
		
		newn -> data = no;
		newn -> next = NULL;
		
		if(Head==NULL)
		{
			Head = newn;
		}
		else
		{
			newn->next = Head;
			Head=newn;
		}
		
		
	}
	void InsertLast(int no)
	{
		PNODE newn = new NODE;
		
		newn -> data = no;
		newn -> next = NULL;
		
		if(Head==NULL)
		{
			Head = newn;
		}
		else
		{
			PNODE temp=Head;
			
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}	
	}
	
	void Display()
	{
		PNODE temp = Head;
		
		cout<<"Elements are:\n";
		
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
	}
	
	
};



int main()
{
	PNODE First=NULL;
	
	SinglyLinkedList sobj;
	
	sobj.InsertFirst(30);
	sobj.InsertFirst(20);
	sobj.InsertFirst(10);
	sobj.InsertLast(40);
	sobj.InsertLast(50);
	
	sobj.Display();
	
	return 0 ;
}