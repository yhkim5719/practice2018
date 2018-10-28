#include <iostream>
//#include <vector>

class DynamicVector {
  //private:
public:
  int capacity;
  int size;
  char* array;
  void reserve(int);
  //public:
  DynamicVector();
  void push_back(char);
  int getSize();
  int getCapacity();
};

void DynamicVector::reserve(int newCapacity) {
  if (size < newCapacity ) {
    capacity = newCapacity;
    char* tmp = new char[capacity];     // segmentation fault
    for (int i = 0; i < capacity; i++) {  
      tmp[i] = array[i];
    }
    delete[] array;
    array = tmp;
    std::cout << "cap = " << capacity << std::endl;
  } else {
    return;
  }
}

DynamicVector::DynamicVector () {
  size = 0;                          // add size = 0;
  capacity = 1;
  array = new char[capacity];
}

int DynamicVector::getSize() {
  return size;
}

int DynamicVector::getCapacity() {
  return capacity;
}

void DynamicVector::push_back (char val) {
  reserve(5);                               //  add reserve(capacity * 2) 
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
  myArray.push_back('d');
    myArray.push_back('c');
myArray.push_back('c');
 myArray.push_back('c');
 myArray.push_back('c');
 myArray.push_back('c');
 myArray.push_back('c');
    return 0;
}
