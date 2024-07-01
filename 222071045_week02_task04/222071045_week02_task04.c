#include <stdio.h>

void sortArray(int arr[], int size) {
  int i, j, temp;
  for (i = 0; i < size-1; i++) {
    for (j = i+1; j < size; j++) {
      if (arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int arr[5];
  int i, even;

  printf("Enter 5 numbers: ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  sortArray(arr, 5);

  printf("Sorted array: ");
  for (i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  printf("\nEven numbers: ");
  for (i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
      printf("%d ", arr[i]);
    }
  }

  printf("\n");

  return 0;
}
