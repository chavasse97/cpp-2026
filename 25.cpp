#include <iostream>

int max3(int x, int y, int z) {
  int t = x;
  if (x < y) {
    t = y;
  }
  if (t < z) {
    t = z;
  }
  return t;
}

int main() {
  int x = 0;
  int y = 0;
  int z = 0;
  std::cout << "Input 3 numbers: ";
  std::cin >> x >> y >> z;
  if (std::cin.fail()) {
    std::cout << "Error: One or more inputs is not a number";
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return 1;
  }
  std::cout << "Result: " << max3(x, y, z);
}