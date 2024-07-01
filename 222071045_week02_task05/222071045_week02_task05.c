#include <stdio.h>

int main() {
  int arr[10];
  int i, maxIdx, minIdx, temp;

  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  maxIdx = minIdx = 0;
  for (i = 1; i < 10; i++) {
    if (arr[i] > arr[maxIdx]) {
      maxIdx = i;
    }
    if (arr[i] < arr[minIdx]) {
      minIdx = i;
    }
  }

  temp = arr[maxIdx];
  arr[maxIdx] = arr[minIdx];
  arr[minIdx] = temp;

  printf("Final array: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
