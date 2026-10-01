#include <iostream>

bool isEqual(int a, int b, int c) {
  if (a == b) {
    if (a == c) {
      return true;
    }
  }
  return false;
}

int main() {
  int a = 0;
  int b = 0;
  int c = 0;
  std::cout << "Input 3 numbers: ";
  std::cin >> a >> b >> c;
  std::cout << "Result: " << isEqual(a, b, c);
}