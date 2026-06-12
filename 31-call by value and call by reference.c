#include <stdio.h>

      // call by value
      void swap1fun(int a, int b){
            int t = a;
            a = b;
            b = t;
            printf("On swaping in swap function \n a=%d, b=%d\n", a, b);

      }
      // call by adderss
      void swap2fun(int *p, int *q){
            int t = *p;
            *p = *q;
            *q = t;
            printf("On swaping in swap function \n p=%d, q=%d\n", *p, *q);
      }
int main(){
      // for call by value
      int a, b;
      printf("Enter two integer numbers:\n");
      scanf("%d %d", &a, &b);
      printf("original number\n a= %d, b= %d\n", a, b);
      swap1fun(a, b);
      printf("On swaping in main function \n a=%d, b=%d\n", a, b);

      //for call by address
      int p, q;
      printf("Enter two integer numbers:\n");
      scanf("%d %d", &p, &q);
      printf("original number\n p= %d, q= %d\n", p, q);
      swap2fun(&p, &q);
      printf("On swaping in main function \n p=%d, q=%d\n", p, q);

      return 0;
}