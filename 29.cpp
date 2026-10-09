#include <iostream>
#include <clocale>

std::string day(int x) {
  switch (x)
  {
  case 1:
    return "понедельник";
    break;
  case 2:
    return "вторник";
    break;
  case 3:
    return "среда";
    break;
  case 4:
    return "четверг";
    break;
  case 5:
    return "пятница";
    break;
  case 6:
    return "суббота";
    break;
  case 7:
    return "воскресенье";
    break;
  default:
    return "это не день недели";
    break;
  }
}

int main() {
  setlocale(LC_ALL, "Russian");
  int x = 0;
  std::cout << "Введите номер дня недели: ";
  std::cin >> x;
  std::cout << "Результат: " << day(x);
}