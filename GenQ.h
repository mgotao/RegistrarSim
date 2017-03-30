#include <iostream>
#include "DLinkedList.h"

using namespace std;

template<class dType>
class GenQ{
	public:
		GenQ();
		GenQ(int size);
		~GenQ();

		void insert(dType data);
		dType remove();
		dType peekQ();

		int getSize();
		int isFull();
		int isEmpty();

		int mySize;
		int numElements;
		DLinkedList<dType> myQ;
};

template<class dType>
GenQ<dType>::GenQ(){

}

template<class dType>
GenQ<dType>::GenQ(int size){
	DLinkedList<dType> myQ = DLinkedList<dType>();
	mySize = size;
	numElements = 0;
}

template<class dType>
GenQ<dType>::~GenQ(){
	
}

template<class dType>
void GenQ<dType>::insert(dType data){
	if(numElements == mySize) cout << "Queue is full, cannot execute insert.";
	else{
		myQ.insertBack(data);
		numElements++;
	}
}

template<class dType>
dType GenQ<dType>::remove(){
	if(numElements == 0) cout << "Queue is empty, cannot remove.";
	else{
		--numElements;		
		return 	myQ.removeFront();
	}
}

template<class dType>
dType GenQ<dType>::peekQ(){
	return myQ.peek();
}

template<class dType>
int GenQ<dType>::isFull(){
	return (numElements == mySize);
}

template<class dType>
int GenQ<dType>::isEmpty(){
	return (numElements == 0);
}

template<class dType>
int GenQ<dType>::getSize(){
	return numElements;
}
