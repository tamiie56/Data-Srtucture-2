#include <stdio.h>

int main() {
  int size, i;
  int A[10], B[10], C[10];

  printf("Enter the size of matrices: ");
  scanf("%d", &size);

  printf("Enter values for matrix A:\n");
  for (i = 0; i < size; i++) {
    printf("A[%d]: ", i);
    scanf("%d", &A[i]);
    C[i] = 5 * A[i];
  }

  printf("Enter values for matrix B:\n");
  for (i = 0; i < size; i++) {
    printf("B[%d]: ", i);
    scanf("%d", &B[i]);
    C[i] -= B[i];
  }

  printf("C: ");
  for (i = 0; i < size; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  return 0;
}
