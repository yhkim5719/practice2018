#include <stdexcept>
#include <iostream>
#include "IntegerList.h"

using namespace std;

int main() {

	IntegerList mylist;

	for (int i = 0; i < 5; i++) {
		mylist.addFront(i);
	}
	mylist.print();
	mylist.addFront(11);
       	mylist.addAtPos(12, 0);
	mylist.addAtPos(13, 4);
	mylist.print();
}
