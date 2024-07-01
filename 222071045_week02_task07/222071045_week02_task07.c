#include <stdio.h>

int main() {
  int arr[100];
  int i, j, size, isPalindrome = 1;

  printf("Enter size of array: ");
  scanf("%d", &size);

  printf("Enter %d numbers: ", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0, j = size-1; i < j; i++, j--) {
    if (arr[i] != arr[j]) {
      isPalindrome = 0;
      break;
    }
  }

  if (isPalindrome) {
    printf("The array is a palindrome.\n");
  } else {
    printf("The array is not a palindrome.\n");
  }

  return 0;
}
