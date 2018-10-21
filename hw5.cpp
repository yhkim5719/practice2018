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

// reserve a new larger capacity (if it's actually larger)
// copy the previous values over to the new array
// delete the old array
// make sure that DynamicVector uses the new array
void DynamicVector::reserve(int newCapacity) {
  if (size == newCapacity / 2) {
    capacity = newCapacity;
    //    char* tmp[capacity];  //  assigning to 'char*' from incompatible type 'char'
    //    tmp = new char[capacity];  //  undeclared type 'tmp'
    char* tmp = new char[capacity];     // segmentation fault
    for (int i = 0; i < capacity / 2; i++) {  
      tmp[i] = array[i];
    }
    delete[] array;
    array = tmp;
    std::cout << "cap = " << capacity << std::endl;
  } else {
    std::cout << "enough capacity" << std::endl;
  }
}

DynamicVector::DynamicVector () {
  size = 0;                          // add size = 0;
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
  reserve(capacity * 2);                               //  add reserve(capacity * 2) 
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
