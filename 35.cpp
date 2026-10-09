#include <iostream>

int numLen(long x) {
  int i = 0;
  while (x != 0) {
    x /= 10;
    i += 1;
  }
  return i;
}

int main() {
  long x = 0;
  std::cout << "Input a number: ";
  std::cin >> x;
  if (std::cin.fail()) {
    std::cout << "Error: Not a number";
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return 1;
  }
  std::cout << "Result: " << numLen(x);
}