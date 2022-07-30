#include <iostream>
using namespace std;
class Node
{
	Node *next;
	int data;
	public:
		Node()
		{
			data=-1;
			next=NULL;
		}
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
		Node(Node*next)
		{
			this->next=next;
			this->data=-1;
		}
		Node(int data,Node *next)
		{
			this->data=data;
			this->next=next;
		}
		
		int getData()
		{
			return data;
		}
		Node *getNext()
		{
			return this->next;
		}
		
		void setData(int data)
		{
			this->data=data;
		}
		void setNext (Node *next)
		{
			this->next=next;
		}
};
