#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<double> height(3);
  double averageHeight;

  for (double h : height) {
    cout << "Height?";
    cin >> h; // "h" is not a vector element, but a vector address.
    h = h - 2.0;
    cout << h << ", " << height[1] << endl; // height[1] = 0, still
    averageHeight += h;
  }

  averageHeight = averageHeight / height.size();
  cout << averageHeight << ", " << height[0] << ", " << height[1] << ", " << height[2] << endl;

    for (double &h : height) {
    cout << "Height?";
    cin >> h; // Now, "h" is a vector element, not a vector address.
    h = h - 2.0;
    cout << h << ", " << height[1] << endl; // height[1] == h, now.
    averageHeight += h;
  }

  averageHeight = averageHeight / height.size();
  cout << averageHeight << ", " << height[0] << ", " << height[1] << ", " << height[2] << endl;

  return 0;
}
