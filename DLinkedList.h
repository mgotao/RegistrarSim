#include <iostream>
#include "ListNode.h"

using namespace std;

template<class dType>
class DLinkedList
{
	private:
		ListNode *front;
		ListNode *back;
		unsigned int size;
	public:
		DLinkedList();
		~DLinkedList();

		bool isEmpty();

		void insertFront(dType data);
		void insertBack(dType data);

		dType removeFront();
		dType removeBack();
		dType deletePos(int key);

		dType find(dType data);
		int getSize();
		void printList();
};

template<class dType>
DLinkedList<dType>::DLinkedList()
{
	size = 0;
	front = NULL;
	back = NULL;
}

template<class dType>
DLinkedList<dType>::~DLinkedList()
{

}

template<class dType>
bool DLinkedList<dType>::isEmpty()
{
	return(size == 0);
}

template<class dType>
void DLinkedList<dType>::insertFront(dType data)
{
	ListNode* node = new ListNode(data);

	if(isEmpty())
	{
		back = node;
	}
	else
	{
		front->prev = node;
		node->next = front;
	}

	front = node;
	size++;
}

template<class dType>
void DLinkedList<dType>::insertBack(dType data)
{
	ListNode* node = new ListNode(data);

	if(isEmpty())
	{
		front = node;
	}
	else
	{
		back->next = node;
		node->prev = back;
	}

	back = node;
	size++;
}

template<class dType>
dType DLinkedList<dType>::removeFront()
{
	if(!isEmpty())
	{
		ListNode *temp = front;

		if(front->next == NULL)
		{
			back == NULL;
		}
		else
		{
			front->next->prev == NULL;
		}

		front = front->next;
		dType data = temp->data;

		delete temp;
		size--;
		return data;
	}
}

template<class dType>
dType DLinkedList<dType>::removeBack()
{
	if(!isEmpty())
	{
		ListNode *temp = front;

		if(back->prev == NULL)
		{
			front == NULL;
		}
		else
		{
			back->prev->next == NULL;
		}

		back = back->prev;
		dType data = temp->data;

		delete temp;
		size--;
		return data;
	}
}

template<class dType>
dType DLinkedList<dType>::deletePos(dType key)
{
	ListNode *curr = front;

	while(curr->data != key)
	{
		curr = curr->next;

		if(curr == NULL)
		{
			return NULL;
		}
	}
	w
	//check if front
	if(curr == front)
	{
		front = curr->next;
	}
	else
	{
		curr->prev->next = curr->next;
	}

	//check if back
	if(curr == back)
	{
		back = curr->prev;
	}
	else
	{
		curr->next->prev = curr->prev;
	}

	curr->next = NULL; curr->prev = NULL;
	delete curr;
	--size;

	return key;
}

template<class dType>
int DLinkedList<dType>::find(dType d)
{
	if(!isEmpty())
	{
		int index = -1;

		ListNode *curr = front;

		while(curr->next != NULL)
		{
			++index;

			if(curr->data == d)
			{
				break;
			}
			else
			{
				curr = curr->next;
			}
		}
	}

	return index;
}

template<class dType>
int DLinkedList<dtype>::getSize()
{
	return size;
}

template<class dType>
void DLinkedList<dType>::printList()
{
	ListNode *curr = front;

	while(curr->next != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}