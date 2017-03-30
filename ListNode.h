#include <iostream>
using namespace std;

template<class dType>
class ListNode
{
	public:
		dType data;
		ListNode<dType> *prev;
		ListNode<dType> *next;

		ListNode();
		ListNode(dType data);
		~ListNode();
};

template<class dType>
ListNode<dType>::ListNode(dType d)
{
	data = d;
	next = NULL;
	prev = NULL;
}

template<class dType>
ListNode<dType>::~ListNode()
{

}
