#include <map>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Square {
public:
  Square() {width = 1; length = 1;}
  Square(int w, int l) {width = w; length = l;}
  double getArea() {return width * length;}
  //private:
  double width;
  double length;
};

class SquareInven {
public:
  //  double sumArea();
  map<int, Square> square_map;
};

int main(){
  Square mySquare1(5, 3);
  Square mySquare2(4, 2);
  cout << "Area of mySquare1: " << mySquare1.getArea() << endl;
  cout << "Area of mySquare2: " << mySquare2.getArea() << endl;

  SquareInven myInven;
  myInven.square_map[1] = mySquare1;

  cout << "Is this working? " <<   myInven.square_map[1].width << endl;

  return 0;
}
