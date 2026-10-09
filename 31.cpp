#include <iostream>

std::string listNums(int x) {
  std::string s = "";
  for (int i = 0; i <= x; ++i) {
    s += std::to_string(i);
    s += ' ';
  }
  return s;
}

int main() {
  int x = 0;
  std::cout << "Input x: ";
  std::cin >> x;
  if (x < 0) {
    std::cout << "Number can not be negative";
    return 1;
  }
  std::cout << "Result: " << listNums(x);
}