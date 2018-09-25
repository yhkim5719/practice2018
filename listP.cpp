#include <iostream>
#include <list>

using namespace std;

template <typename T>
class Node {
public:
  T item;
  Node<T> next;
};

template <typename T>
class LinkedList {
public:
  Node<T> *head;
  Node<T> *tail;
};

linkedList(){
  head = nullptr;
  tail = nullptr;
}
