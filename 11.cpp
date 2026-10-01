#include <iostream>

double fraction (double x) {
    int z = x;
    x -= z;
  return x;
}

int main() {
  double x = 0;
  std::cout << "Input x: ";
  std::cin >> x;
  x = fraction(x);
  std::cout << "\nResult: " << x;
}