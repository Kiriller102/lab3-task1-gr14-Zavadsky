//created by Kirill Zavadsky 20.03.2023

#include "../include/interface.h"

int rearrangeDigits(int num) {
  int digits[10] = {0};
  while (num > 0) {
    digits[num % 10]++;
    num /= 10;
  }
  int ans = 0;
  for (int i = 0, pow = 1; i < 10; ++i) {
    for (int j = 0; j < digits[i]; j++, pow *= 10) {
      ans += i * pow;
    }
  }
  return ans;
}

void generateRandomArray(int *arr, int size) {
  if(size < 0) {
    printf("ERROR: incorrect array size.\n");
    return;
  }
  srand(time(NULL)); // инициализация генератора случайных чисел
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000000; 
    }
}