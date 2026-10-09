#include <iostream>

bool is35(int x) {
  if ((x % 3 == 0) or (x % 5 == 0)) {
    if ((x % 3 == 0) and (x % 5 == 0)) {
      return false;
    } else {
      return true;
    }
  }
  return false;
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
  std::cout << "Result: " << is35(x);
}