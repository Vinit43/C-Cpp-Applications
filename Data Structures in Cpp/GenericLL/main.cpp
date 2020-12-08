#include<iostream>

using namespace std;

template <class T>
struct Node
{
	T data;
	struct Node<T> *next;
};


template <class T>

class SinglyLinkedList
{
	public:
	struct Node<T>* Head;
	
	SinglyLinkedList()
	{
		Head = NULL;
	}
	
	void InsertFirst(int no)
	{
		struct Node<T>* newn = new struct Node<T>;
		
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
		struct Node* newn = new struct Node;
		
		newn -> data = no;
		newn -> next = NULL;
		
		if(Head==NULL)
		{
			Head = newn;
		}
		else
		{
			struct Node* temp=Head;
			
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}	
	}
	void Display()
	{
		struct Node<T>* temp = Head;
		
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
	struct Node<int>* First=NULL;
	
	SinglyLinkedList <int>sobj;
	
	sobj.InsertFirst(30);
	sobj.InsertFirst(20);
	sobj.InsertFirst(10);
	sobj.Display();
	
	
	SinglyLinkedList <char>sobj1;
	
	sobj1.InsertFirst('c');
	sobj1.InsertFirst('b');
	sobj1.InsertFirst('a');
	sobj1.Display();
	
	
	return 0 ;
}