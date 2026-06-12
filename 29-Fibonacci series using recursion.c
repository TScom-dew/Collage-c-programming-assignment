#include<stdio.h>


      void fabbonacci(int n, int f1, int f2, int f3){
            if(n<=0){
                  return;
            }
            printf("%d ", f3 = f1 + f2);
            fabbonacci(n-1, f2, f3,0);
            
      }

int main(){
      int n ;
      printf("Enter any natural number: ");
      scanf("%d", &n);

      printf("\nFibonacci series using recursion.\n");
      fabbonacci(n, -1,1,0);
      printf("\n\n");

            return 0;
}