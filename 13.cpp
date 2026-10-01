#include <iostream>

int charToNum (char x) {
  int xint = 0;
  xint = (int)x - 48;
  return xint;
}

void Out(int n) {
  if (n < 0 or n > 9) {
    std::cout << "Please input a number (0-9) next time.";
  } else {
    std::cout << "Result: " << n;
  }
}

int main() {
  char x;
  int xint = 0;
  std::cout << "Input a character: ";
  std::cin >> x;
  xint = charToNum(x);
  Out(xint);
}