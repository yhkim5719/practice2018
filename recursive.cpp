#include "SLinkedList.h"
#include <iostream>
using namespace std;

int main() {
  SLinkedList<int> myList;
  for (int i = 0; i < 5; i++) {
    myList.addFront(i);
  }

  int sum = recursiveSum(myList.head);
  cout << sum << endl;
}
