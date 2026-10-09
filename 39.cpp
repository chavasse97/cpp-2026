#include <iostream>

void rightTriangle(int x) {
  int row = x - 1;
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      if (j < row) {
        std::cout << ' ';
      } else {
        std::cout << '*';
      }
    }
    std::cout << std::endl;
    row -= 1;
  }
}

int main() {
  int x = 0;
  std::cout << "Input x: ";
  std::cin >> x;
  if (std::cin.fail()) {
    std::cout << "Error: Not a number";
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return 1;
  }
  if (x < 0) {
    std::cout << "Number can not be negative";
    return 1;
  }
  std::cout << "Result: \n";
  rightTriangle(x);
}