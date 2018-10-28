#include <iostream>
#include "IntegerList.h"

IntegerList::IntegerList()			// constructor
	: head(NULL), n(0) { }

int& IntegerList::front() 		// return front element
{
	if (n==0) throw length_error("empty list");
	return head->getElement();
}

IntegerList::~IntegerList()			// destructor
{
	while (n > 0) removeFront();
}

void IntegerList::addFront(int e) {	// add to front of list
	IntListNode* v = new IntListNode(e, head);		// create new node
	head = v;				// v is now the head
	n++;
}

void IntegerList::removeFront() {		// remove front item
	if (n == 0) throw length_error("empty list");
	IntListNode* old = head;		// save current head
	head = old->getNext();			// skip over old head
	delete old;				// delete the old head
	n--;
}

void IntegerList::print() {		// print all elements
	IntListNode* current = head;
	while (current != NULL) {
		std::cout << current->getElement() << endl;
		current = current->getNext();
	}
}

int IntegerList::size() const {				// list size
	return n;
}
  
void IntegerList::addAtPos(int e, int pos) {
  if (pos < 0 || pos > n) throw length_error("wrong position");
  if (pos == 0) {
    addFront(e);
  } else {
    IntListNode* ptr = head;
    cout << "ptr is now " << ptr->getElement() << endl;
  for (int i = 0; i < pos - 1; i++) {
    ptr = ptr->getNext();
    cout << "While for-loop, ptr is on " << ptr->getElement() << endl;
    }
  cout << "After for-loop, ptr is on " << ptr->getElement() << endl;
  IntListNode* newNode = new IntListNode(e, ptr->getNext());
  cout << "newNode is pointing " << (newNode->getNext())->getElement() << endl;
  setNext(ptr, newNode);
  //  delete ptr;
  cout << "ptr is " << ptr->getElement() << endl;
  cout << "ptr is pointing " << (ptr->getNext())->getElement() << endl;
  }
  n++;
}
