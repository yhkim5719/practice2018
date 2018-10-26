#pragma once

class IntListNode {					// singly linked list node
public:
	IntListNode(int e, IntListNode *nextptr): 
		elem(e), next(nextptr) { }
	int &getElement() {return elem;}
	IntListNode *getNext() {return next;}
	IntListNode *next;				// next item in the list ///// From private: to public:, said YONG.
 private:
	int elem;					// linked list element value

};
