#include <iostream>
#include <cstdlib>
using namespace std;

long int power(int num, int exp) {
  if (exp == 0) {
    cout << "Hit Base" << endl;
    return 1;
  }
  else {
    cout << "Hit recursive case" << endl;
    return num * power(num, exp - 1);
  }
}

int main () {
  int num, exp;
  cout << "num? ";
  cin >> num;
  cout << "exp? ";
  cin >> exp;
  cout << power(num, exp) << endl;
  return 0;
}
