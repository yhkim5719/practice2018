#include <iostream>
using namespace std;

class Rectangle{
  int width, length;
public:
  void set_value(int, int);
  int area(){
    return width * length;
  }
};

void Rectangle::set_value(int x, int y){
  width = x;
  length = y;
}

int main(){
  Rectangle rect;
  rect.set_value(3,4);
  cout << "area: " << rect.area();
  return 0;
}
