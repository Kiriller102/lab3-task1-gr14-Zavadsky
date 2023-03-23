//created by Kirill Zavadsky 20.03.2023

#include "../include/interface.h"
// #include <stdio.h>
// #include <stdlib.h>

int main () {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);


  int *arr = (int *) malloc(size * sizeof(int));

  generateRandomArray(arr, size);

  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("%c", '\n');
  for (int i = 0; i < size; i++) {
    int result = rearrangeDigits(arr[i]);
    printf("%d ", result);
  }
  printf("\n");

  free(arr);
  return 0;
}
