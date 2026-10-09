#include <iostream>

void square(int x) {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      std::cout << '*';
    }
    std::cout << std::endl;
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
  square(x);
}