#include <iostream>

int sum2(int x, int y) {
  int s = x + y;
  if ((s >= 10) and (s <= 19)) {
    s = 20;
  }
  return s;
}

int main() {
  int x = 0;
  int y = 0;
  std::cout << "Input 2 numbers: ";
  std::cin >> x >> y;
  if (std::cin.fail()) {
    std::cout << "Error: One or more inputs is not a number";
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return 1;
  }
  std::cout << "Result: " << sum2(x, y);
}