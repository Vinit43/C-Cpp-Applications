#include<iostream>

using namespace std;

struct Node 
{
	int data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;

class Stack
{
	public:
	PNODE Head;
	
	Stack()
	{
		Head=NULL;
	}
	
	void Push(int iValue)
	{
		PNODE newn = NULL;
		newn = new NODE;
		
		newn->data=iValue;
		newn->next=NULL;
		
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			
			newn->next=Head;
			Head=newn;
			
		}
		
		
	}
	
	void Display()
	{
		PNODE temp=NULL;
		temp=Head;
		
		while(temp!=NULL)
		{
			cout<<"\t"<<temp->data;
			temp=temp->next;
		}
	}
	
	
	
};


int main()
{
	PNODE First=NULL;
	int iNo=0;
	
	Stack obj1;
	
    cout<<"Enter the data to pop\n";
    cin>>iNo;
	
	obj1.Push(iNo);
	
	cout<<"Enter the data to pop\n";
    cin>>iNo;
	
	obj1.Push(iNo);
	
	
	cout<<"Enter the data to pop\n";
    cin>>iNo;
	
	obj1.Push(iNo);
	
	obj1.Display();
	
	cout<<"\n";
}