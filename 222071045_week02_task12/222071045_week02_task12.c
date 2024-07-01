#include <stdio.h>

void removeOdd(int arr[], int size) {
  int i, j;

  for (i = 0, j = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      arr[j] = arr[i];
      j++;
    }
  }

  size = j;
}

int main() {
  int arr[] = {21, 33, 44, 66, 11, 1, 88, 45, 10, 9};
  int size = sizeof(arr) / sizeof(int);

  printf("Input array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  removeOdd(arr, size);

  printf("Compact array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
