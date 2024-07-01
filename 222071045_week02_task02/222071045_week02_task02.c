#include <stdio.h>

int firstLast6(int arr[], int size) {
  if (arr[0] == 6 || arr[size-1] == 6) {
    return 1;
  }
  else {
    return 0;
  }
}

int main() {
  int test1[] = {1, 2, 6};
  int test2[] = {6, 1, 2, 3};
  int test3[] = {13, 6, 1, 2, 3};

  if (firstLast6(test1, 3)) {
    printf("test1: true\n");
  } else {
    printf("test1: false\n");
  }

  if (firstLast6(test2, 4)) {
    printf("test2: true\n");
  } else {
    printf("test2: false\n");
  }

  if (firstLast6(test3, 5)) {
    printf("test3: true\n");
  } else {
    printf("test3: false\n");
  }

  return 0;
}

