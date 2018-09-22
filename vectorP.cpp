#include <vector>
#include <iostream>
using namespace std;

class item{
private:
  string name;
  int quantity;
  float price;
public:
  item();
  item(string, int, float);

  string getName();
  void setName(string);
  int getQuantity();
  void setQuantity(int);
  float getPrice();
  void setPrice();
};

class inventory{
private:
  vector<item> _inven;
public:
  item& addEntry(const item&);
  item& getEntry(const item&);
  
  
