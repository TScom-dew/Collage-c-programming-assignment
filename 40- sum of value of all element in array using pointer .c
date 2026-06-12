#include <stdio.h>

int main() {
     int n = 0;

     printf("Enter number of elements in array: ");
     scanf("%d", &n);

     int arr[n];
     printf("Enter %d integer numbers:\n", n);
     for (int i  = 0; i <n; i++)
     {
          scanf("%d", &arr[i]);
     }
     int *ptr=arr;//first element of arr
     int sum = 0;
  
     // sum of array elements using pointer
     for (int i = 0; i < n; i++) {
          // sum += *(ptr + i);
         sum += *(ptr++);
         // both are same
     }

     printf("Sum of array elements: %d\n", sum);

     return 0;
}