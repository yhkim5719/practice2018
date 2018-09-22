#include <iostream>

using namespace std;

class triangle{
private:
  int l1;
  int l2;
  int l3;
  int angle1;
  int angle2;
  int angle3;
public:
  triangle();
  triangle(int x, int y, int z, int xx, int yy, int zz);

  int getLine1();
  int getLine2();
  int getLine3();
  void setLines(int, int, int);

  int getAngle1();
  int getAngle2();
  int getAngle3();
  void setAngles(int x, int y, int z);

  triangle(const triangle& originClass);
};

triangle::triangle(){
  l1 = 3;
  l2 = 3;
  l3 = 3;
  angle1 = 60;
  angle2 = 60;
  angle3 = 60;
}

triangle::triangle(int a, int b, int c, int aa, int ab, int ac){
  l1 = a;
  l2 = b;
  l3 = c;
  angle1 = aa;
  angle2 = ab;
  angle3 = ac;
}

int triangle::getLine1(){
  return l1;
}

int triangle::getLine2(){
  return l2;
}

int triangle::getLine3(){
  return l3;
}

void triangle::setLines(int x, int y, int z){
  l1 = x;
  l2 = y;
  l3 = z;
}

int triangle::getAngle1(){
  return angle1;
}

int triangle::getAngle2(){
  return angle2;
}

int triangle::getAngle3(){
  return angle3;
}

void triangle::setAngles(int a1, int a2, int a3){
  angle1 = a1;
  angle2 = a2;
  angle3 = a3;
}

triangle::triangle(const triangle& originClass){
  cout << "Copy Constructor called." <<  endl;
  l1 = originClass.l1;
  //  l2 = originClass.l2;
  l3 = originClass.l3;
  angle1 = originClass.angle1;
  angle2 = originClass.angle2;
  angle3 = originClass.angle3;
}

void line1Print(triangle localClass){
  cout << "line2 from funct is " << localClass.getLine2() << endl;
}

int main(){
  triangle myTri1;
  triangle myTri2(2, 2, 2, 60, 60, 60);
  triangle myTri3;
  cout << "line1 of 3rd Tri is " << myTri3.getLine1() << endl;

  triangle tempTri(4,4,4,60,60,60);
  
  cout << "line1 of 1st Tri is " << myTri1.getLine1() << endl;
  cout << "line2 of 2nd Tri is " << myTri2.getLine2() << endl;
  //  cout << "line1 of temp Tri is " << tempTri.getLine1() << endl;
  line1Print(myTri2);
  cout << "line2 of 2nd Tri is " << myTri2.getLine2() << endl;
  line1Print(tempTri);
  cout << "line2 of is " << tempTri.getLine2() << endl;

  //  line1Print(tempTri);
  
  return 0;
}
