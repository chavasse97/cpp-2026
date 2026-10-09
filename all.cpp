#include <iostream>

double fraction (double x) {
  int z = x;
  x -= z;
  return x;
}

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

bool is2Digits (int x) {
  x /= 10;
  if (x != 0) {
    x /= 10;
    if (x == 0) {
      return true;
    }
  }
  return false;
}

bool isInRange (int a, int b, int num) {
  if (a > b) {
    int t = a;
    a = b;
    b = t;
  }
  if ((a < num) && (num < b)) {
    return true;
  }
  return false;
}

bool isEqual(int a, int b, int c) {
  if (a == b) {
    if (a == c) {
      return true;
    }
  }
  return false;
}

int abs(int x) {
  if (x < 0) {
    x *= -1;
  }
  return x;
}

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

int sum2(int x, int y) {
  int s = x + y;
  if ((s >= 10) and (s <= 19)) {
    s = 20;
  }
  return s;
}

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

std::string listNums(int x) {
  std::string s = "";
  for (int i = 0; i <= x; ++i) {
    s += std::to_string(i);
    s += ' ';
  }
  return s;
}

std::string chet(int x) {
  std::string s = "";
  for (int i = 0; i <= x; i += 2) {
    s += std::to_string(i);
    s += ' ';
  }
  return s;
}

int numLen(long x) {
  int i = 0;
  while (x != 0) {
    x /= 10;
    i += 1;
  }
  return i;
}

void square(int x) {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
}

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

int findFirst(int arr[], int x) {
  int i = 0;
  while (arr[i] != -1) {
    if (arr[i] == x) {
      return i;
    }
    i++;
  }
  return -1;
}

int maxAbs(int arr[]) {
  int i = 0;
  int max = 0;
  int t = 0;
  while (arr[i] != -1) {
    if (arr[i] < 0) {
      t = arr[i] * (-1);
    } else {
      t = arr[i];
    }
    if (t > max) {
      max = t;
    }
    i++;
  }
  return max;
}

int main() {
  setlocale(LC_ALL, "Russian");
  int task = 0;
  std::cout << "Task #";
  std::cin >> task;
  switch (task)
  {
  case 11: {
    double x = 0;
    std::cout << "Input x: ";
    std::cin >> x;
    x = fraction(x);
    std::cout << "\nResult: " << x;
    break;
    }
  case 13: {
    char x;
    int xint = 0;
    std::cout << "Input a character: ";
    std::cin >> x;
    xint = charToNum(x);
    Out(xint);
    break;
  }
  case 15: {
    int x = 0;
    std::cout << "Input an integer: ";
    std::cin >> x;
    std::cout << "Result: " << is2Digits(x) << '\n';
    break;
  }
  case 17: {
    int a = 0;
    int b = 0;
    int num = 0;
    std::cout << "Input a and b: ";
    std::cin >> a >> b;
    std::cout << "Input num: ";
    std::cin >> num;
    std::cout << isInRange(a, b, num);
    break;
  }
  case 19: {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "Input 3 numbers: ";
    std::cin >> a >> b >> c;
    std::cout << "Result: " << isEqual(a, b, c);
    break;
  }
  case 21: {  
    int x = 0;
    std::cout << "Input a number: ";
    std::cin >> x;
    if (std::cin.fail()) {
      std::cout << "Error: Not a number";
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      return 1;
    }
    x = abs(x);
    std::cout << "Result: " << x;
    break;
  }
  case 23: {
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
    break;
  }
  case 25:{
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
    break;
  }
  case 27: {
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
    break;
  }
  case 29: {
    int x = 0;
    std::cout << "Введите номер дня недели: ";
    std::cin >> x;
    std::cout << "Результат: " << day(x);
    break;
  }
  case 31: {
    int x = 0;
    std::cout << "Input x: ";
    std::cin >> x;
    if (x < 0) {
      std::cout << "Number can not be negative";
      return 1;
    }
    std::cout << "Result: " << listNums(x);
    break;
  }
  case 33: {
    int x = 0;
    std::cout << "Input x: ";
    std::cin >> x;
    if (x < 0) {
      std::cout << "Number can not be negative";
      return 1;
    }
    std::cout << "Result: " << chet(x);
    break;
  }
  case 35: {  
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
    break;
  }
  case 37: {
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
    break;
  }
  case 39: {
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
    break;
  }
  case 41: {
    int x = 0;
    int size = 10;
    int arr[size]; // dynamic array is better for this type of task
    std::cout << "Input array (-1 to end input): ";
    int i = 0;
    do {
      std::cin >> arr[i];
      i++;
    } while ((arr[i-1] != -1) && (i < size));
    if (i == size) {
      arr[i] = -1;
    }
    std::cout << "Input x: ";
    std::cin >> x;
    std::cout << "Result: " << findFirst(arr, x);
    break;
  }
  case 43: {
    int size = 10;
    int arr[size]; // dynamic array is better for this type of task
    std::cout << "Input array (-1 to end input): ";
    int i = 0;
    do {
      std::cin >> arr[i];
      i++;
    } while ((arr[i-1] != -1) && (i < size));
    if (i == size) {
      arr[i] = -1;
    }
    std::cout << "Result: " << maxAbs(arr);
    break;
  }
  default:
    return 0;
    break;
  }
}