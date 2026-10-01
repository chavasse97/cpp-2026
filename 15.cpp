#include <iostream>

bool is2Digits (int x) {
  x /= 10;
  if (x != 0) {
    x /= 10;
    if (x == 0) {
      return true;
    }
  }
  return false;
}

int main() {
  int x = 0;
  std::cout << "Input an integer: ";
  std::cin >> x;
  std::cout << "Result: " << is2Digits(x) << '\n';
}