#include <string.h>
#include <stdio.h>
#include <iostream>

int main() {
  std::string str;
  str = "test!!";
  std::cout << str << std::endl;
  std::cout << str[1] << std::endl;
  std::cout << "The length of the string is " << str.length() << std::endl;
  return 0;
}

