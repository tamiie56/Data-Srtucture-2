#include <stdio.h>

int main() {
   int arr[10];

   printf("Enter 10 integers: ");
   for(int i = 0; i < 10; i++) {
       scanf("%d", &arr[i]);
   }

   printf("Original Values: ");
   for(int i = 0; i < 10; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");

   for(int i = 0; i < 10; i++) {
       arr[i] *= arr[i];
   }

   printf("Squared Values: ");
   for(int i = 0; i < 10; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");

   return 0;
}
