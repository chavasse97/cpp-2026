#include <iostream>

bool isInRange (int a, int b, int num) {
  if (a > b) {
    int t = a;
    a = b;
    b = t;
  }
  if ((a < num) && (num < b)) {
    return true;
  }
  return false;
}

int main() {
  int a = 0;
  int b = 0;
  int num = 0;
  std::cout << "Input a and b: ";
  std::cin >> a >> b;
  std::cout << "Input num: ";
  std::cin >> num;
  std::cout << isInRange(a, b, num);
}