#include <iostream>

using namespace std;

template<class dType>
class GenQ{
	public:
		GenQ();
		GenQ(int size);
		~GenQ();

		void insert(dType data);
		dType remove();
		dType peek();

		int getSize();
		int isFull();
		int isEmpty();

		int head;
		int tail;
		int mySize;
		int numElements;
		dType *myQ;
};

template<class dType>
GenQ<dType>::GenQ(){

}

template<class dType>
GenQ<dType>::GenQ(int size){
	myQ = new dType[size];
	mySize = size;
	head = 0;
	tail = 0;
	numElements = 0;
}

template<class dType>
GenQ<dType>::~GenQ(){
	delete [] myQ;
	cout << "ded" << endl;
}

template<class dType>
void GenQ<dType>::insert(dType data){
	if(numElements == mySize) cout << "Queue is full, cannot execute insert.";
	else{
	myQ[tail] = data;
	tail = (tail+1)%mySize;
	++numElements;
	}
}

template<class dType>
dType GenQ<dType>::remove(){
	if(numElements == 0) cout << "Queue is empty, cannot remove.";
	else{
	dType c = '\0';
	c = myQ[head];
	head = (head+1)%mySize;
	--numElements;
	return c;
	}
}

template<class dType>
dType GenQ<dType>::peek(){
	return myQ[head];
}

template<class dType>
int GenQ<dType>::isFull(){
	return (numElements == mySize);
}

template<class dType>
int GenQ<dType>::isEmpty(){
	return (numElements == 0);
}
