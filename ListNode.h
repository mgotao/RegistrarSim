#include <iostream>
using namespace std;

template<class dType>
class ListNode
{
	private:
		dType data;
		ListNode<dType> *prev;
		ListNode<dType> *next;

		ListNode();
		ListNode(dType data);
		~ListNode();

		friend class DLinkedList; //Declared DLinkedList as a friend class to access private members
};

template<class dType>
ListNode<dType>::ListNode<dType>()
{

}

template<class dType>
ListNode<dType>::ListNode<dType>(dType d)
{
	data = d;
	next = NULL;
	prev = NULL;
}

template<class dType>
ListNode<dType>::~ListNode()
{

}
