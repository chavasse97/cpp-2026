#include <iostream>

int abs(int x) {
  if (x < 0) {
    x *= -1;
  }
  return x;
}

int main() {
  int x = 0;
  std::cout << "Input a number: ";
  std::cin >> x;
  if (std::cin.fail()) {
    std::cout << "Error: Not a number";
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return 1;
  }
  x = abs(x);
  std::cout << "Result: " << x;
}