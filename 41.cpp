#include <iostream>

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

int main() {
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
}