#include <stdio.h>

      long long int factorial(long long int n){
            if(n==0){
                  return 1;
            }
            long long int nm1 = factorial(n - 1);
            long long int factn = n * nm1;
            return factn;
      }
long long int main(){
      long long int n;
      printf("Enter an integer number: ");
      scanf("%lld", &n);
     
      printf("\nFactorial of %lld= %lld\n\n", n, factorial(n));

      return 0;
}