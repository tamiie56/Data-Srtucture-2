#include <stdio.h>

#define SIZE 10

int main() {
  int arr[SIZE];
  int i, j, num, found;

  printf("Enter %d unique numbers: ", SIZE);

  for (i = 0; i < SIZE; i++) {
    do {
      found = 0;
      scanf("%d", &num);
      for (j = 0; j < i; j++) {
        if (arr[j] == num) {
          printf("%d is already entered. Enter a new number: ", num);
          found = 1;
          break;
        }
      }
    } while (found);
    arr[i] = num;
  }

  printf("Entered unique numbers: ");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

