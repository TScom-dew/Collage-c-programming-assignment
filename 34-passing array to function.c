#include <stdio.h>
/*
note : if we change array in any of these two function 
it will refelect on original function 
*/
// type 1
void arrFunction(int arr[], int n)
{
      printf("\nPassing with square bracket: \n");
      for (int i = 0; i < n; i++)
      {
            printf("%d\t", arr[i]);
      }
      printf("\n");
}

// type 2

void arr2function(int *arr, int n)
{
      printf("\nPassing using reference: \n");
      for (int i = 0; i < n; i++)
      {
            printf("%d\t", arr[i]);
      }

      printf("\n");
      
}

int main()
{
      int arr[] = {1, 2, 3, 4, 5};
      size_t n = sizeof(arr) / sizeof(arr[0]);
      arrFunction(arr, n);
      arr2function(arr, n);

      return 0;
}
