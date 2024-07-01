#include <stdio.h>
#include <stdbool.h>

bool allDigitsOdd(int n) {
  while (n > 0) {
    int digit = n % 10;
    if (digit % 2 == 0) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  int num;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (allDigitsOdd(num)) {
    printf("Every digit of the number is odd.\n");
  } else {
    printf("The number has at least one even digit.\n");
  }

  return 0;
}
