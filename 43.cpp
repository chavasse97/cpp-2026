#include <iostream>

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
}