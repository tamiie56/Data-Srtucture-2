#include <stdio.h>

int main() {
  int arr[10], i, index;

  for (i = 0; i < 10; i++) {
    printf("Enter input %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  printf("Enter an index between 0 and 9: ");
  scanf("%d", &index);

  if (index >= 0 && index <= 9) {
    for (i = 0; i < arr[index]; i++) {
      printf("*");
    }
    printf("\n");
  } else {
    printf("Invalid index\n");
  }

  return 0;
}
