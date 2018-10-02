#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

struct Node {
  Node *nextPtr_;
  int value_;
};

Node *headPtr;

void pushFront(int value) {
  Node *newNode = new Node();
  newNode->value_ = value;
  newNode->nextPtr_ = nullptr;
  if (headPtr == nullptr) {
    headPtr = newNode;
  } else {
    headPtr = newNode->nextPtr_;
    }
}

Node* Find(int value) {
  while (headPtr != nullptr) {
    if (headPtr->value_ == value) {
      return headPtr;
    }
  headPtr = headPtr->nextPtr_;
  }
  throw std::out_of_range ("End of List.");
}

int getVal(Node *myNode) {
  return myNode->value_;
}

int main() {
  for (int i = 0; i < 20; i++) {
    pushFront(i);
  }
  for (int i = 20; i > 0; i--) {
    pushFront(i);
  }
  Node *tmp;
  tmp = Find(10);
  catch {
    cout << "Exception!" << endl;
  };
  cout << getVal(tmp);
  return 0;
}
