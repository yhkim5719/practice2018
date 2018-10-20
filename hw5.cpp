#include <iostream>
//#include <vector>

class DynamicVector {
public:
  int capacity;
  int size;
  char* array;
  void reserve(int);

  DynamicVector();
  void push_back(char);
  int getSize();
  int getCapacity();
};

void DynamicVector::reserve(int newCapacity) {
  if (size == capacity) {
    newCapacity = 2 * capacity;
  }
  char* tmp = new char[newCapacity];
  for (int i = 0; i < capacity; i++) {
    tmp[i] = array[i];
  }
  delete[] array;
  array = tmp;
  capacity = newCapacity;
  std::cout << "cap = " << capacity;
  }

DynamicVector::DynamicVector () {
  capacity = 1;
  char* array[capacity];
}

int DynamicVector::getSize() {
  return size;
}

int DynamicVector::getCapacity() {
  return capacity;
}

void DynamicVector::push_back (char val) {
  array[size] = val;
  size++;
  std::cout << "size of array = " << getSize() << std::endl;
  std::cout << "cap of array = " << getCapacity() << std::endl;
  for (int i = 0; i < getSize(); i++) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  DynamicVector myArray;
  myArray.push_back('A');
  myArray.push_back('B');
  myArray.push_back('C');
  myArray.push_back('B');
  return 0;
}
