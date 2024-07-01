#include <stdio.h>

int main() {
  int numbers[10] = {0};
  int num, i;

  for (i = 0; i < 15; i++) {
    printf("Enter number %d: ", i+1);
    scanf("%d", &num);

    if (num >= 0 && num <= 9) {
      numbers[num]++;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("%d was found %d times\n", i, numbers[i]);
  }

  return 0;
}
